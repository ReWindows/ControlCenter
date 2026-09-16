#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 10 member(s).
class ControlCenterUtilities {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertUIThread@ControlCenterUtilities@@YAXXZ
    void AssertUIThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatString@ControlCenterUtilities@@YA?AUhstring@winrt@@QEB_WZZ
    WindissectOpaque FormatString(wchar_t const * const, ...);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMirroredPrimaryMonitorTaskbarLocation@ControlCenterUtilities@@YA?AW4TaskbarLocation@Shell@UI@WindowsUdk@winrt@@XZ
    int GetMirroredPrimaryMonitorTaskbarLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentListViewBase@ControlCenterUtilities@@YA?AUListViewBase@Controls@Xaml@UI@Windows@winrt@@AEBUFrameworkElement@4567@@Z
    WindissectOpaque GetParentListViewBase(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryMonitorDPI@ControlCenterUtilities@@YAIXZ
    unsigned int GetPrimaryMonitorDPI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryMonitorRect@ControlCenterUtilities@@YA?AUtagRECT@@XZ
    tagRECT GetPrimaryMonitorRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryMonitorWorkArea@ControlCenterUtilities@@YA?AUtagRECT@@XZ
    tagRECT GetPrimaryMonitorWorkArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateSharedResources@ControlCenterUtilities@@YAXXZ
    void PopulateSharedResources();
};
