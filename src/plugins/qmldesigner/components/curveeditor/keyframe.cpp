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

#include "keyframe.h"

namespace DesignTools {

Keyframe::Keyframe()
    : m_interpolation(Interpolation::Undefined)
    , m_position()
    , m_leftHandle()
    , m_rightHandle()
    , m_data()
{}

Keyframe::Keyframe(const QPointF &position)
    : m_interpolation(Interpolation::Linear)
    , m_position(position)
    , m_leftHandle()
    , m_rightHandle()
    , m_data()
{}

Keyframe::Keyframe(const QPointF &position, const QVariant &data)
    : m_interpolation(Interpolation::Undefined)
    , m_position(position)
    , m_leftHandle()
    , m_rightHandle()
    , m_data()
{
    setData(data);
}

Keyframe::Keyframe(const QPointF &position, const QPointF &leftHandle, const QPointF &rightHandle)
    : m_interpolation(Interpolation::Bezier)
    , m_position(position)
    , m_leftHandle(leftHandle)
    , m_rightHandle(rightHandle)
    , m_data()
{}

bool Keyframe::isValid() const
{
    return m_interpolation != Interpolation::Undefined;
}

bool Keyframe::hasData() const
{
    return m_data.isValid();
}

bool Keyframe::hasLeftHandle() const
{
    return !m_leftHandle.isNull();
}

bool Keyframe::hasRightHandle() const
{
    return !m_rightHandle.isNull();
}

QPointF Keyframe::position() const
{
    return m_position;
}

QPointF Keyframe::leftHandle() const
{
    return m_leftHandle;
}

QPointF Keyframe::rightHandle() const
{
    return m_rightHandle;
}

QVariant Keyframe::data() const
{
    return m_data;
}

Keyframe::Interpolation Keyframe::interpolation() const
{
    return m_interpolation;
}

void Keyframe::setInterpolation(Interpolation interpol)
{
    m_interpolation = interpol;
}

void Keyframe::setPosition(const QPointF &pos)
{
    m_position = pos;
}

void Keyframe::setLeftHandle(const QPointF &pos)
{
    m_leftHandle = pos;
}

void Keyframe::setRightHandle(const QPointF &pos)
{
    m_rightHandle = pos;
}

void Keyframe::setData(const QVariant &data)
{
    if (data.type() == static_cast<int>(QMetaType::QEasingCurve))
        m_interpolation = Interpolation::Easing;

    m_data = data;
}

std::string toString(Keyframe::Interpolation interpol)
{
    switch (interpol) {
    case Keyframe::Interpolation::Undefined:
        return "Interpolation::Undefined";
    case Keyframe::Interpolation::Step:
        return "Interpolation::Step";
    case Keyframe::Interpolation::Linear:
        return "Interpolation::Linear";
    case Keyframe::Interpolation::Bezier:
        return "Interpolation::Bezier";
    case Keyframe::Interpolation::Easing:
        return "Interpolation::Easing";
    default:
        return "Interpolation::Undefined";
    }
}

} // End namespace DesignTools.
