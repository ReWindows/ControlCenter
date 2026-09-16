#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class ControlCenterLaunchArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterLaunchArgs@implementation@ControlCenter@winrt@@QEAA@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z
    ControlCenterLaunchArgs(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterLaunchArgs@implementation@ControlCenter@winrt@@QEAA@XZ
    ControlCenterLaunchArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryParseFromUri@ControlCenterLaunchArgs@implementation@ControlCenter@winrt@@SA?AU134@Uhstring@4@@Z
    static WindissectOpaque TryParseFromUri(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControlCenterLaunchArgs@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~ControlCenterLaunchArgs();
};
} // namespace winrt::ControlCenter::implementation
