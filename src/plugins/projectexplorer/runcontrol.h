/****************************************************************************
**
** Copyright (C) 2019 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#pragma once

#include "applicationlauncher.h"
#include "devicesupport/idevice.h"
#include "projectexplorerconstants.h"
#include "runconfiguration.h"

#include <utils/environment.h>
#include <utils/processhandle.h>
#include <utils/qtcassert.h>
#include <utils/qtcprocess.h>
#include <utils/icon.h>

#include <QHash>
#include <QVariant>

#include <functional>
#include <memory>

namespace Utils {
class MacroExpander;
class OutputFormatter;
} // Utils

namespace ProjectExplorer {
class GlobalOrProjectAspect;
class Node;
class RunConfiguration;
class RunControl;
class Target;

namespace Internal {
class RunControlPrivate;
class RunWorkerPrivate;
} // Internal


class PROJECTEXPLORER_EXPORT Runnable
{
public:
    Runnable() = default;

    Utils::CommandLine commandLine() const;
    void setCommandLine(const Utils::CommandLine &cmdLine);

    Utils::FilePath executable;
    QString commandLineArguments;
    QString workingDirectory;
    Utils::Environment environment;
    IDevice::ConstPtr device; // Override the kit's device. Keep unset by default.
    QHash<Core::Id, QVariant> extraData;

    // FIXME: Not necessarily a display name
    QString displayName() const { return executable.toString(); }
};

class PROJECTEXPLORER_EXPORT RunWorker : public QObject
{
    Q_OBJECT

public:
    explicit RunWorker(RunControl *runControl);
    ~RunWorker() override;

    RunControl *runControl() const;

    void addStartDependency(RunWorker *dependency);
    void addStopDependency(RunWorker *dependency);

    void setId(const QString &id);

    void setStartTimeout(int ms, const std::function<void()> &callback = {});
    void setStopTimeout(int ms, const std::function<void()> &callback = {});

    void recordData(const QString &channel, const QVariant &data);
    QVariant recordedData(const QString &channel) const;

    // Part of read-only interface of RunControl for convenience.
    void appendMessage(const QString &msg, Utils::OutputFormat format, bool appendNewLine = true);
    IDevice::ConstPtr device() const;
    const Runnable &runnable() const;

    // States
    void initiateStart();
    void reportStarted();

    void initiateStop();
    void reportStopped();

    void reportDone();

    void reportFailure(const QString &msg = QString());
    void setSupportsReRunning(bool reRunningSupported);
    bool supportsReRunning() const;

    static QString userMessageForProcessError(QProcess::ProcessError,
                                              const Utils::FilePath &programName);

    bool isEssential() const;
    void setEssential(bool essential);

signals:
    void started();
    void stopped();

protected:
    void virtual start();
    void virtual stop();
    void virtual onFinished() {}

private:
    friend class Internal::RunControlPrivate;
    friend class Internal::RunWorkerPrivate;
    const std::unique_ptr<Internal::RunWorkerPrivate> d;
};

class PROJECTEXPLORER_EXPORT RunWorkerFactory final
{
public:
    using WorkerCreator = std::function<RunWorker *(RunControl *)>;

    RunWorkerFactory(const WorkerCreator &producer,
                     const QList<Core::Id> &runModes,
                     const QList<Core::Id> &runConfigs = {},
                     const QList<Core::Id> &deviceTypes = {});

    ~RunWorkerFactory();

    bool canRun(Core::Id runMode, Core::Id deviceType, const QString &runConfigId) const;
    WorkerCreator producer() const { return m_producer; }

    template <typename Worker>
    static WorkerCreator make()
    {
        return [](RunControl *runControl) { return new Worker(runControl); };
    }

    // For debugging only.
    static void dumpAll();

private:
    WorkerCreator m_producer;
    QList<Core::Id> m_supportedRunModes;
    QList<Core::Id> m_supportedRunConfigurations;
    QList<Core::Id> m_supportedDeviceTypes;
};

/**
 * A RunControl controls the running of an application or tool
 * on a target device. It controls start and stop, and handles
 * application output.
 *
 * RunControls are created by RunControlFactories.
 */

class PROJECTEXPLORER_EXPORT RunControl : public QObject
{
    Q_OBJECT

public:
    explicit RunControl(Core::Id mode);
    ~RunControl() override;

    void setRunConfiguration(RunConfiguration *runConfig);
    void setTarget(Target *target);
    void setKit(Kit *kit);

    void initiateStart();
    void initiateReStart();
    void initiateStop();
    void forceStop();
    void initiateFinish();

    bool promptToStop(bool *optionalPrompt = nullptr) const;
    void setPromptToStop(const std::function<bool(bool *)> &promptToStop);

    bool supportsReRunning() const;

    virtual QString displayName() const;
    void setDisplayName(const QString &displayName);

    bool isRunning() const;
    bool isStarting() const;
    bool isStopping() const;
    bool isStopped() const;

    void setIcon(const Utils::Icon &icon);
    Utils::Icon icon() const;

    Utils::ProcessHandle applicationProcessHandle() const;
    void setApplicationProcessHandle(const Utils::ProcessHandle &handle);
    IDevice::ConstPtr device() const;

    RunConfiguration *runConfiguration() const; // FIXME: Remove.
    // FIXME: Try to cut down to amount of functions.
    Target *target() const;
    Project *project() const;
    Kit *kit() const;
    Utils::MacroExpander *macroExpander() const;
    ProjectConfigurationAspect *aspect(Core::Id id) const;
    template <typename T> T *aspect() const {
        return runConfiguration() ? runConfiguration()->aspect<T>() : nullptr;
    }

    template <typename T>
    auto aspectData() -> decltype(T::runData(nullptr, this)) {
        if (T *asp = aspect<T>())
            return T::runData(asp, this);
        return {};
    }

    ISettingsAspect *settings(Core::Id id) const;
    QString buildKey() const;

    Utils::FilePath targetFilePath() const;
    Utils::FilePath projectFilePath() const;

    Utils::OutputFormatter *outputFormatter() const;
    Core::Id runMode() const;

    const Runnable &runnable() const;
    void setRunnable(const Runnable &runnable);

    static bool showPromptToStopDialog(const QString &title, const QString &text,
                                       const QString &stopButtonText = QString(),
                                       const QString &cancelButtonText = QString(),
                                       bool *prompt = nullptr);

    RunWorker *createWorker(Core::Id id);

    using WorkerCreator = RunWorkerFactory::WorkerCreator;
    using Constraint = std::function<bool(RunConfiguration *)>;

    static void registerWorkerCreator(Core::Id id, const WorkerCreator &workerCreator);

    bool createMainWorker();
    static bool canRun(Core::Id runMode, Core::Id deviceType, Core::Id runConfigId);

signals:
    void appendMessage(const QString &msg, Utils::OutputFormat format);
    void aboutToStart();
    void started();
    void stopped();
    void finished();
    void applicationProcessHandleChanged(QPrivateSignal); // Use setApplicationProcessHandle

private:
    void setDevice(const IDevice::ConstPtr &device);

    friend class RunWorker;
    friend class Internal::RunWorkerPrivate;

    const std::unique_ptr<Internal::RunControlPrivate> d;
};


/**
 * A simple TargetRunner for cases where a plain ApplicationLauncher is
 * sufficient for running purposes.
 */

class PROJECTEXPLORER_EXPORT SimpleTargetRunner : public RunWorker
{
    Q_OBJECT

public:
    explicit SimpleTargetRunner(RunControl *runControl);

    void setRunnable(const Runnable &runnable);

    void setDevice(const IDevice::ConstPtr &device);
    IDevice::ConstPtr device() const;

protected:
    void start() override;
    void stop() override;

private:
    void onProcessStarted();
    void onProcessFinished(int exitCode, QProcess::ExitStatus status);
    void onProcessError(QProcess::ProcessError error);

    ApplicationLauncher m_launcher;
    Runnable m_runnable;
    IDevice::ConstPtr m_device;
    bool m_stopReported = false;
    bool m_useTerminal = false;
};

class PROJECTEXPLORER_EXPORT OutputFormatterFactory
{
protected:
    OutputFormatterFactory();

public:
    virtual ~OutputFormatterFactory();

    static Utils::OutputFormatter *createFormatter(Target *target);

protected:
    void setFormatterCreator(const std::function<Utils::OutputFormatter *(Target *)> &creator);

private:
    std::function<Utils::OutputFormatter *(Target *)> m_creator;
};

} // namespace ProjectExplorer
