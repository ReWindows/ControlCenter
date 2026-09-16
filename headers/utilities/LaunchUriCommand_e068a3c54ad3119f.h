#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class LaunchUriCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@LaunchUriCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LaunchUriCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchUriCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~LaunchUriCommand();
};
} // namespace winrt::ControlCenter::implementation
