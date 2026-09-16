#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class LaunchAdvancedPageCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@LaunchAdvancedPageCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@LaunchAdvancedPageCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LaunchAdvancedPageCommand@implementation@ControlCenter@winrt@@QEAA@UControlCenterView@23@@Z
    LaunchAdvancedPageCommand(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchAdvancedPageCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~LaunchAdvancedPageCommand();
};
} // namespace winrt::ControlCenter::implementation
