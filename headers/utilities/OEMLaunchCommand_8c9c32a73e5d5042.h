#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class OEMLaunchCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@OEMLaunchCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@OEMLaunchCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OEMLaunchCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~OEMLaunchCommand();
};
} // namespace winrt::ControlCenter::implementation
