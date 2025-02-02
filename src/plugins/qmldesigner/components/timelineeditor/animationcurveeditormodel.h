/****************************************************************************
**
** Copyright (C) 2019 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Design Tooling
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

#include "curveeditor/curveeditormodel.h"
#include "curveeditor/treeitem.h"

#include <qmltimelinekeyframegroup.h>

namespace QmlDesigner {

class AnimationCurveEditorModel : public DesignTools::CurveEditorModel
{
    Q_OBJECT

public:
    AnimationCurveEditorModel(double minTime, double maxTime);

    ~AnimationCurveEditorModel() override;

    double minimumTime() const override;

    double maximumTime() const override;

    DesignTools::CurveEditorStyle style() const override;

    void setTimeline(const QmlTimeline &timeline);

    void setMinimumTime(double time);

    void setMaximumTime(double time);

private:
    DesignTools::TreeItem *createTopLevelItem(const QmlTimeline &timeline, const ModelNode &node);

    DesignTools::AnimationCurve createAnimationCurve(const QmlTimelineKeyframeGroup &group);

    DesignTools::AnimationCurve createDoubleCurve(const QmlTimelineKeyframeGroup &group);

    double valueFromVariant(const QVariant &variant);

    void reset(const std::vector<DesignTools::TreeItem *> &items);

    double m_minTime;

    double m_maxTime;
};

} // namespace QmlDesigner
