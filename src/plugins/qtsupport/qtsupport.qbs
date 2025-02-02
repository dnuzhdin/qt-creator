import qbs 1.0

Project {
    name: "QtSupport"

    QtcDevHeaders { }

    QtcPlugin {
        Depends { name: "Qt"; submodules: ["widgets", "xml"]; }
        Depends { name: "Utils" }

        Depends { name: "Core" }
        Depends { name: "ProParser" }
        Depends { name: "ProjectExplorer" }
        Depends { name: "ResourceEditor" }
        Depends { name: "CppTools" }

        cpp.defines: base.concat([
            "QMAKE_LIBRARY",
            "QMAKE_BUILTIN_PRFS",
        ])
        Properties {
            condition: qbs.targetOS.contains("windows")
            cpp.dynamicLibraries: "advapi32"
        }

        Export {
            Depends { name: "ProParser" }
        }

        Group {
            name: "Pro Parser"
            prefix: project.sharedSourcesDir + "/proparser/"
            files: [
                "ioutils.cpp",
                "ioutils.h",
                "profileevaluator.cpp",
                "profileevaluator.h",
                "proitems.cpp",
                "proitems.h",
                "proparser.qrc",
                "prowriter.cpp",
                "prowriter.h",
                "qmake_global.h",
                "qmakebuiltins.cpp",
                "qmakeevaluator.cpp",
                "qmakeevaluator.h",
                "qmakeevaluator_p.h",
                "qmakeglobals.cpp",
                "qmakeglobals.h",
                "qmakeparser.cpp",
                "qmakeparser.h",
                "qmakevfs.cpp",
                "qmakevfs.h",
                "registry.cpp",
                "registry_p.h",
            ]
        }

        files: [
            "baseqtversion.cpp",
            "baseqtversion.h",
            "codegenerator.cpp",
            "codegenerator.h",
            "codegensettings.cpp",
            "codegensettings.h",
            "codegensettingspage.cpp",
            "codegensettingspage.h",
            "codegensettingspagewidget.ui",
            "qtconfigwidget.cpp",
            "qtconfigwidget.h",
            "qtcppkitinfo.cpp",
            "qtcppkitinfo.h",
            "qtprojectimporter.cpp",
            "qtprojectimporter.h",
            "qtsupport.qrc",
            "exampleslistmodel.cpp",
            "exampleslistmodel.h",
            "profilereader.cpp",
            "profilereader.h",
            "qmldumptool.cpp",
            "qmldumptool.h",
            "qscxmlcgenerator.cpp",
            "qscxmlcgenerator.h",
            "qtkitinformation.cpp",
            "qtkitinformation.h",
            "qtoptionspage.cpp",
            "qtoptionspage.h",
            "qtoutputformatter.cpp",
            "qtoutputformatter.h",
            "qtparser.cpp",
            "qtparser.h",
            "qtsupport_global.h",
            "qtsupportconstants.h",
            "qtsupportplugin.cpp",
            "qtsupportplugin.h",
            "qttestparser.cpp",
            "qttestparser.h",
            "qtversionfactory.cpp",
            "qtversionfactory.h",
            "qtversioninfo.ui",
            "qtversionmanager.cpp",
            "qtversionmanager.h",
            "qtversionmanager.ui",
            "screenshotcropper.cpp",
            "screenshotcropper.h",
            "showbuildlog.ui",
            "translationwizardpage.cpp",
            "translationwizardpage.h",
            "uicgenerator.cpp",
            "uicgenerator.h",
        ]

        Group {
            name: "QtVersion"
            files: [
                "qtversions.cpp",
                "qtversions.h",
            ]
        }

        Group {
            name: "Getting Started Welcome Page"
            files: [
                "gettingstartedwelcomepage.cpp",
                "gettingstartedwelcomepage.h"
            ]
        }
    }
}
