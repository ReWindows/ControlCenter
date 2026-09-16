#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 9 member(s).
namespace winrt::ControlCenter::implementation {
class SoftwareKeyboardPositionListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@QEAA@XZ
    SoftwareKeyboardPositionListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeComponent@SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool TryInitializeComponent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~SoftwareKeyboardPositionListener();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSoftwareKeyboardPositionAndDisplayMode@SoftwareKeyboardPositionListener@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateSoftwareKeyboardPositionAndDisplayMode();
};
} // namespace winrt::ControlCenter::implementation
