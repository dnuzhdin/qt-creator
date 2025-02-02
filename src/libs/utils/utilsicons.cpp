/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
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

#include "utilsicons.h"

namespace Utils {
namespace Icons {

const Icon HOME({
        {QLatin1String(":/utils/images/home.png"), Theme::PanelTextColorDark}}, Icon::Tint);
const Icon HOME_TOOLBAR({
        {QLatin1String(":/utils/images/home.png"), Theme::IconsBaseColor}});
const Icon EDIT_CLEAR({
        {QLatin1String(":/utils/images/editclear.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon EDIT_CLEAR_TOOLBAR({
        {QLatin1String(":/utils/images/editclear.png"), Theme::IconsBaseColor}});
const Icon LOCKED_TOOLBAR({
        {QLatin1String(":/utils/images/locked.png"), Theme::IconsBaseColor}});
const Icon LOCKED({
        {QLatin1String(":/utils/images/locked.png"), Theme::PanelTextColorDark}}, Icon::Tint);
const Icon UNLOCKED_TOOLBAR({
        {QLatin1String(":/utils/images/unlocked.png"), Theme::IconsBaseColor}});
const Icon PINNED({
        {QLatin1String(":/utils/images/pinned.png"), Theme::PanelTextColorDark}}, Icon::Tint);
const Icon NEXT({
        {QLatin1String(":/utils/images/next.png"), Theme::IconsWarningColor}}, Icon::MenuTintedStyle);
const Icon NEXT_TOOLBAR({
        {QLatin1String(":/utils/images/next.png"), Theme::IconsNavigationArrowsColor}});
const Icon PREV({
        {QLatin1String(":/utils/images/prev.png"), Theme::IconsWarningColor}}, Icon::MenuTintedStyle);
const Icon PREV_TOOLBAR({
        {QLatin1String(":/utils/images/prev.png"), Theme::IconsNavigationArrowsColor}});
const Icon PROJECT({
        {QLatin1String(":/utils/images/project.png"), Theme::PanelTextColorDark}}, Icon::Tint);
const Icon ZOOM({
        {QLatin1String(":/utils/images/zoom.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon ZOOM_TOOLBAR({
        {QLatin1String(":/utils/images/zoom.png"), Theme::IconsBaseColor}});
const Icon ZOOMIN_TOOLBAR({
        {QLatin1String(":/utils/images/zoom.png"), Theme::IconsBaseColor},
        {QLatin1String(":/utils/images/zoomin_overlay.png"), Theme::IconsBaseColor}});
const Icon ZOOMOUT_TOOLBAR({
        {QLatin1String(":/utils/images/zoom.png"), Theme::IconsBaseColor},
        {QLatin1String(":/utils/images/zoomout_overlay.png"), Theme::IconsBaseColor}});
const Icon FITTOVIEW_TOOLBAR({
        {QLatin1String(":/utils/images/fittoview.png"), Theme::IconsBaseColor}});
const Icon OK({
        {QLatin1String(":/utils/images/ok.png"), Theme::IconsRunToolBarColor}}, Icon::Tint);
const Icon NOTLOADED({
        {QLatin1String(":/utils/images/notloaded.png"), Theme::IconsErrorColor}}, Icon::Tint);
const Icon BROKEN({
        {QLatin1String(":/utils/images/broken.png"), Theme::IconsErrorColor}}, Icon::Tint);
const Icon CRITICAL({
        {QLatin1String(":/utils/images/warningfill.png"), Theme::BackgroundColorNormal},
        {QLatin1String(":/utils/images/error.png"), Theme::IconsErrorColor}}, Icon::Tint);
const Icon BOOKMARK({
        {QLatin1String(":/utils/images/bookmark.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon BOOKMARK_TOOLBAR({
        {QLatin1String(":/utils/images/bookmark.png"), Theme::IconsBaseColor}});
const Icon BOOKMARK_TEXTEDITOR({
        {QLatin1String(":/utils/images/bookmark.png"), Theme::Bookmarks_TextMarkColor}}, Icon::Tint);
const Icon SNAPSHOT_TOOLBAR({
        {QLatin1String(":/utils/images/snapshot.png"), Theme::IconsBaseColor}});
const Icon NEWSEARCH_TOOLBAR({
        {QLatin1String(":/utils/images/zoom.png"), Theme::IconsBaseColor},
        {QLatin1String(":/utils/images/iconoverlay_add_small.png"), Theme::IconsRunColor}});
const Icon SETTINGS_TOOLBAR({
    {QLatin1String(":/utils/images/settings.png"), Theme::IconsBaseColor}});

const Icon NEWFILE({
        {QLatin1String(":/utils/images/filenew.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon OPENFILE({
        {QLatin1String(":/utils/images/fileopen.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon OPENFILE_TOOLBAR({
        {QLatin1String(":/utils/images/fileopen.png"), Theme::IconsBaseColor}});
const Icon SAVEFILE({
        {QLatin1String(":/utils/images/filesave.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon SAVEFILE_TOOLBAR({
        {QLatin1String(":/utils/images/filesave.png"), Theme::IconsBaseColor}});

const Icon EXPORTFILE_TOOLBAR({
        {QLatin1String(":/utils/images/fileexport.png"), Theme::IconsBaseColor}});
const Icon MULTIEXPORTFILE_TOOLBAR({
        {QLatin1String(":/utils/images/filemultiexport.png"), Theme::IconsBaseColor}});

const Icon UNKNOWN_FILE({
        {QLatin1String(":/utils/images/unknownfile.png"), Theme::IconsBaseColor}});
const Icon DIR({
        {QLatin1String(":/utils/images/dir.png"), Theme::IconsBaseColor}});

const Icon UNDO({
        {QLatin1String(":/utils/images/undo.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon UNDO_TOOLBAR({
        {QLatin1String(":/utils/images/undo.png"), Theme::IconsBaseColor}});
const Icon REDO({
        {QLatin1String(":/utils/images/redo.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon REDO_TOOLBAR({
        {QLatin1String(":/utils/images/redo.png"), Theme::IconsBaseColor}});
const Icon COPY({
        {QLatin1String(":/utils/images/editcopy.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon COPY_TOOLBAR({
        {QLatin1String(":/utils/images/editcopy.png"), Theme::IconsBaseColor}});
const Icon PASTE({
        {QLatin1String(":/utils/images/editpaste.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon PASTE_TOOLBAR({
        {QLatin1String(":/utils/images/editpaste.png"), Theme::IconsBaseColor}});
const Icon CUT({
        {QLatin1String(":/utils/images/editcut.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon CUT_TOOLBAR({
        {QLatin1String(":/utils/images/editcut.png"), Theme::IconsBaseColor}});
const Icon RESET({
        {QLatin1String(":/utils/images/reset.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon RESET_TOOLBAR({
        {QLatin1String(":/utils/images/reset.png"), Theme::IconsBaseColor}});

const Icon ARROW_UP({
        {QLatin1String(":/utils/images/arrowup.png"), Theme::IconsBaseColor}});
const Icon ARROW_DOWN({
        {QLatin1String(":/utils/images/arrowdown.png"), Theme::IconsBaseColor}});
const Icon MINUS({
        {QLatin1String(":/utils/images/minus.png"), Theme::IconsBaseColor}});
const Icon PLUS_TOOLBAR({
        {QLatin1String(":/utils/images/plus.png"), Theme::IconsBaseColor}});
const Icon PLUS({
        {QLatin1String(":/utils/images/plus.png"), Theme::PaletteText}}, Icon::Tint);
const Icon MAGNIFIER({
        {QLatin1String(":/utils/images/magnifier.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon CLEAN({
        {QLatin1String(":/utils/images/clean_pane_small.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon CLEAN_TOOLBAR({
        {QLatin1String(":/utils/images/clean_pane_small.png"), Theme::IconsBaseColor}});
const Icon RELOAD({
        {QLatin1String(":/utils/images/reload_gray.png"), Theme::IconsBaseColor}});
const Icon TOGGLE_LEFT_SIDEBAR({
        {QLatin1String(":/utils/images/leftsidebaricon.png"), Theme::PanelTextColorMid}}, Icon::MenuTintedStyle);
const Icon TOGGLE_LEFT_SIDEBAR_TOOLBAR({
        {QLatin1String(":/utils/images/leftsidebaricon.png"), Theme::IconsBaseColor}});
const Icon TOGGLE_RIGHT_SIDEBAR({
        {QLatin1String(":/utils/images/rightsidebaricon.png"), Theme::PanelTextColorMid}}, Icon::MenuTintedStyle);
const Icon TOGGLE_RIGHT_SIDEBAR_TOOLBAR({
        {QLatin1String(":/utils/images/rightsidebaricon.png"), Theme::IconsBaseColor}});
const Icon CLOSE_TOOLBAR({
        {QLatin1String(":/utils/images/close.png"), Theme::IconsBaseColor}});
const Icon CLOSE_FOREGROUND({
        {QLatin1String(":/utils/images/close.png"), Theme::PanelTextColorDark}}, Icon::Tint);
const Icon CLOSE_BACKGROUND({
        {QLatin1String(":/utils/images/close.png"), Theme::PanelTextColorLight}}, Icon::Tint);
const Icon SPLIT_HORIZONTAL({
        {QLatin1String(":/utils/images/splitbutton_horizontal.png"), Theme::PanelTextColorMid}}, Icon::MenuTintedStyle);
const Icon SPLIT_HORIZONTAL_TOOLBAR({
        {QLatin1String(":/utils/images/splitbutton_horizontal.png"), Theme::IconsBaseColor}});
const Icon SPLIT_VERTICAL({
        {QLatin1String(":/utils/images/splitbutton_vertical.png"), Theme::PanelTextColorMid}}, Icon::MenuTintedStyle);
const Icon SPLIT_VERTICAL_TOOLBAR({
        {QLatin1String(":/utils/images/splitbutton_vertical.png"), Theme::IconsBaseColor}});
const Icon CLOSE_SPLIT_TOP({
        {QLatin1String(":/utils/images/splitbutton_closetop.png"), Theme::IconsBaseColor}});
const Icon CLOSE_SPLIT_BOTTOM({
        {QLatin1String(":/utils/images/splitbutton_closebottom.png"), Theme::IconsBaseColor}});
const Icon CLOSE_SPLIT_LEFT({
        {QLatin1String(":/utils/images/splitbutton_closeleft.png"), Theme::IconsBaseColor}});
const Icon CLOSE_SPLIT_RIGHT({
        {QLatin1String(":/utils/images/splitbutton_closeright.png"), Theme::IconsBaseColor}});
const Icon FILTER({
        {QLatin1String(":/utils/images/filtericon.png"), Theme::IconsBaseColor},
        {QLatin1String(":/utils/images/toolbuttonexpandarrow.png"), Theme::IconsBaseColor}});
const Icon LINK({
        {QLatin1String(":/utils/images/linkicon.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon LINK_TOOLBAR({
        {QLatin1String(":/utils/images/linkicon.png"), Theme::IconsBaseColor}});
const Icon SORT_ALPHABETICALLY_TOOLBAR({
        {QLatin1String(":/utils/images/sort_alphabetically.png"), Theme::IconsBaseColor}});
const Icon TOGGLE_PROGRESSDETAILS_TOOLBAR({
    {QLatin1String(":/utils/images/toggleprogressdetails.png"), Theme::IconsBaseColor}});
const Icon ONLINE_TOOLBAR({
        {QLatin1String(":/utils/images/online.png"), Theme::IconsBaseColor}});

const Icon WARNING({
        {QLatin1String(":/utils/images/warningfill.png"), Theme::BackgroundColorNormal},
        {QLatin1String(":/utils/images/warning.png"), Theme::IconsWarningColor}}, Icon::Tint);
const Icon WARNING_TOOLBAR({
        {QLatin1String(":/utils/images/warning.png"), Theme::IconsWarningToolBarColor}});
const Icon CRITICAL_TOOLBAR({
        {QLatin1String(":/utils/images/error.png"), Theme::IconsErrorToolBarColor}});
const Icon ERROR_TASKBAR({
        {QLatin1String(":/utils/images/compile_error_taskbar.png"), Theme::IconsErrorColor}}, Icon::Tint);
const Icon INFO({
        {QLatin1String(":/utils/images/warningfill.png"), Theme::BackgroundColorNormal},
        {QLatin1String(":/utils/images/info.png"), Theme::IconsInfoColor}}, Icon::Tint);
const Icon INFO_TOOLBAR({
        {QLatin1String(":/utils/images/info.png"), Theme::IconsInfoToolBarColor}});
const Icon EXPAND_ALL_TOOLBAR({
        {QLatin1String(":/find/images/expand.png"), Theme::IconsBaseColor}});
const Icon TOOLBAR_EXTENSION({
        {QLatin1String(":/utils/images/extension.png"), Theme::IconsBaseColor}});
const Icon RUN_SMALL({
        {QLatin1String(":/utils/images/run_small.png"), Theme::IconsRunColor}}, Icon::MenuTintedStyle);
const Icon RUN_SMALL_TOOLBAR({
        {QLatin1String(":/utils/images/run_small.png"), Theme::IconsRunToolBarColor}});
const Icon STOP_SMALL({
        {QLatin1String(":/utils/images/stop_small.png"), Theme::IconsStopColor}}, Icon::MenuTintedStyle);
const Icon STOP_SMALL_TOOLBAR({
        {QLatin1String(":/utils/images/stop_small.png"), Theme::IconsStopToolBarColor}});
const Icon INTERRUPT_SMALL({
        {QLatin1String(":/utils/images/interrupt_small.png"), Theme::IconsInterruptColor}}, Icon::MenuTintedStyle);
const Icon INTERRUPT_SMALL_TOOLBAR({
        {QLatin1String(":/utils/images/interrupt_small.png"), Theme::IconsInterruptToolBarColor}});
const Icon BOUNDING_RECT({
        {QLatin1String(":/utils/images/boundingrect.png"), Theme::IconsBaseColor}});
const Icon EYE_OPEN_TOOLBAR({
        {QLatin1String(":/utils/images/eye_open.png"), Theme::IconsBaseColor}});
const Icon EYE_CLOSED_TOOLBAR({
        {QLatin1String(":/utils/images/eye_closed.png"), Theme::IconsBaseColor}});
const Icon REPLACE({
        {QLatin1String(":/utils/images/replace_a.png"), Theme::PanelTextColorMid},
        {QLatin1String(":/utils/images/replace_b.png"), Theme::IconsInfoColor}}, Icon::Tint);
const Icon EXPAND({
        {QLatin1String(":/utils/images/expand.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon EXPAND_TOOLBAR({
        {QLatin1String(":/utils/images/expand.png"), Theme::IconsBaseColor}});
const Icon COLLAPSE({
        {QLatin1String(":/utils/images/collapse.png"), Theme::PanelTextColorMid}}, Icon::Tint);
const Icon COLLAPSE_TOOLBAR({
        {QLatin1String(":/utils/images/collapse.png"), Theme::IconsBaseColor}});
const Icon PAN_TOOLBAR({
        {QLatin1String(":/utils/images/pan.png"), Theme::IconsBaseColor}});
const Icon EMPTY14(":/utils/images/empty14.png");
const Icon EMPTY16(":/utils/images/empty16.png");
const Icon OVERLAY_ADD({
        {":/utils/images/iconoverlay_add_background.png", Theme::BackgroundColorNormal},
        {":/utils/images/iconoverlay_add.png", Theme::IconsRunColor}}, Icon::Tint);
const Icon OVERLAY_WARNING({
        {":/utils/images/iconoverlay_warning_background.png", Theme::BackgroundColorNormal},
        {":/utils/images/iconoverlay_warning.png", Theme::IconsWarningColor}}, Icon::Tint);
const Icon OVERLAY_ERROR({
        {":/utils/images/iconoverlay_error_background.png", Theme::BackgroundColorNormal},
        {":/utils/images/iconoverlay_error.png", Theme::IconsErrorColor}}, Icon::Tint);

const Icon CODEMODEL_ERROR({
        {":/utils/images/codemodelerror.png", Theme::IconsErrorColor}}, Icon::Tint);
const Icon CODEMODEL_WARNING({
        {":/utils/images/codemodelwarning.png", Theme::IconsWarningColor}}, Icon::Tint);
const Icon CODEMODEL_DISABLED_ERROR({
        {":/utils/images/codemodelerror.png", Theme::IconsDisabledColor}}, Icon::Tint);
const Icon CODEMODEL_DISABLED_WARNING({
        {":/utils/images/codemodelwarning.png", Theme::IconsDisabledColor}}, Icon::Tint);
const Icon CODEMODEL_FIXIT({
        {":/utils/images/lightbulbcap.png", Theme::PanelTextColorMid},
        {":/utils/images/lightbulb.png", Theme::IconsWarningColor}}, Icon::Tint);

const Icon MACOS_TOUCHBAR_BOOKMARK(
        ":/utils/images/macos_touchbar_bookmark.png");
const Icon MACOS_TOUCHBAR_CLEAR(
        ":/utils/images/macos_touchbar_clear.png");
} // namespace Icons

QIcon CodeModelIcon::iconForType(CodeModelIcon::Type type)
{
    static const IconMaskAndColor classRelationIcon {
        QLatin1String(":/codemodel/images/classrelation.png"), Theme::IconsCodeModelOverlayForegroundColor};
    static const IconMaskAndColor classRelationBackgroundIcon {
        QLatin1String(":/codemodel/images/classrelationbackground.png"), Theme::IconsCodeModelOverlayBackgroundColor};
    static const IconMaskAndColor classMemberFunctionIcon {
        QLatin1String(":/codemodel/images/classmemberfunction.png"), Theme::IconsCodeModelFunctionColor};
    static const IconMaskAndColor classMemberVariableIcon {
        QLatin1String(":/codemodel/images/classmembervariable.png"), Theme::IconsCodeModelVariableColor};
    static const IconMaskAndColor functionIcon {
        QLatin1String(":/codemodel/images/member.png"), Theme::IconsCodeModelFunctionColor};
    static const IconMaskAndColor variableIcon {
        QLatin1String(":/codemodel/images/member.png"), Theme::IconsCodeModelVariableColor};
    static const IconMaskAndColor signalIcon {
        QLatin1String(":/codemodel/images/signal.png"), Theme::IconsCodeModelFunctionColor};
    static const IconMaskAndColor slotIcon {
        QLatin1String(":/codemodel/images/slot.png"), Theme::IconsCodeModelFunctionColor};
    static const IconMaskAndColor propertyIcon {
        QLatin1String(":/codemodel/images/property.png"), Theme::IconsCodeModelOverlayForegroundColor};
    static const IconMaskAndColor propertyBackgroundIcon {
        QLatin1String(":/codemodel/images/propertybackground.png"), Theme::IconsCodeModelOverlayBackgroundColor};
    static const IconMaskAndColor protectedIcon {
        QLatin1String(":/codemodel/images/protected.png"), Theme::IconsCodeModelOverlayForegroundColor};
    static const IconMaskAndColor protectedBackgroundIcon {
        QLatin1String(":/codemodel/images/protectedbackground.png"), Theme::IconsCodeModelOverlayBackgroundColor};
    static const IconMaskAndColor privateIcon {
        QLatin1String(":/codemodel/images/private.png"), Theme::IconsCodeModelOverlayForegroundColor};
    static const IconMaskAndColor privateBackgroundIcon {
        QLatin1String(":/codemodel/images/privatebackground.png"), Theme::IconsCodeModelOverlayBackgroundColor};
    static const IconMaskAndColor staticIcon {
        QLatin1String(":/codemodel/images/static.png"), Theme::IconsCodeModelOverlayForegroundColor};
    static const IconMaskAndColor staticBackgroundIcon {
        QLatin1String(":/codemodel/images/staticbackground.png"), Theme::IconsCodeModelOverlayBackgroundColor};

    switch (type) {
    case Class: {
        const static QIcon icon(Icon({
            classRelationBackgroundIcon, classRelationIcon,
            {QLatin1String(":/codemodel/images/classparent.png"), Theme::IconsCodeModelClassColor},
            classMemberFunctionIcon, classMemberVariableIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Struct: {
        const static QIcon icon(Icon({
            classRelationBackgroundIcon, classRelationIcon,
            {QLatin1String(":/codemodel/images/classparent.png"), Theme::IconsCodeModelStructColor},
            classMemberFunctionIcon, classMemberVariableIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Enum: {
        const static QIcon icon(Icon({
            {QLatin1String(":/codemodel/images/enum.png"), Theme::IconsCodeModelEnumColor}
        }, Icon::Tint).icon());
        return icon;
    }
    case Enumerator: {
        const static QIcon icon(Icon({
            {QLatin1String(":/codemodel/images/enumerator.png"), Theme::IconsCodeModelEnumColor}
        }, Icon::Tint).icon());
        return icon;
    }
    case FuncPublic: {
        const static QIcon icon(Icon({
                functionIcon}, Icon::Tint).icon());
        return icon;
    }
    case FuncProtected: {
        const static QIcon icon(Icon({
                functionIcon, protectedBackgroundIcon, protectedIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case FuncPrivate: {
        const static QIcon icon(Icon({
            functionIcon, privateBackgroundIcon, privateIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case FuncPublicStatic: {
        const static QIcon icon(Icon({
            functionIcon, staticBackgroundIcon, staticIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case FuncProtectedStatic: {
        const static QIcon icon(Icon({
            functionIcon, staticBackgroundIcon, staticIcon, protectedBackgroundIcon, protectedIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case FuncPrivateStatic: {
        const static QIcon icon(Icon({
            functionIcon, staticBackgroundIcon, staticIcon, privateBackgroundIcon, privateIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Namespace: {
        const static QIcon icon(Icon({
            {QLatin1String(":/utils/images/namespace.png"), Theme::IconsCodeModelKeywordColor}
        }, Icon::Tint).icon());
        return icon;
    }
    case VarPublic: {
        const static QIcon icon(Icon({
            variableIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case VarProtected: {
        const static QIcon icon(Icon({
            variableIcon, protectedBackgroundIcon, protectedIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case VarPrivate: {
        const static QIcon icon(Icon({
            variableIcon, privateBackgroundIcon, privateIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case VarPublicStatic: {
        const static QIcon icon(Icon({
            variableIcon, staticBackgroundIcon, staticIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case VarProtectedStatic: {
        const static QIcon icon(Icon({
            variableIcon, staticBackgroundIcon, staticIcon, protectedBackgroundIcon, protectedIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case VarPrivateStatic: {
        const static QIcon icon(Icon({
            variableIcon, staticBackgroundIcon, staticIcon, privateBackgroundIcon, privateIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Signal: {
        const static QIcon icon(Icon({
            signalIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case SlotPublic: {
        const static QIcon icon(Icon({
            slotIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case SlotProtected: {
        const static QIcon icon(Icon({
            slotIcon, protectedBackgroundIcon, protectedIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case SlotPrivate: {
        const static QIcon icon(Icon({
            slotIcon, privateBackgroundIcon, privateIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Keyword: {
        const static QIcon icon(Icon({
            {QLatin1String(":/codemodel/images/keyword.png"), Theme::IconsCodeModelKeywordColor}
        }, Icon::Tint).icon());
        return icon;
    }
    case Macro: {
        const static QIcon icon(Icon({
            {QLatin1String(":/codemodel/images/macro.png"), Theme::IconsCodeModelMacroColor}
        }, Icon::Tint).icon());
        return icon;
    }
    case Property: {
        const static QIcon icon(Icon({
            variableIcon, propertyBackgroundIcon, propertyIcon
        }, Icon::Tint).icon());
        return icon;
    }
    case Unknown: {
        const static QIcon icon(Icons::EMPTY16.icon());
        return icon;
    }
    default:
        break;
    }
    return QIcon();
}

} // namespace Utils
