#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class SecondaryInvokeQuickActionCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@SecondaryInvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@SecondaryInvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryInvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~SecondaryInvokeQuickActionCommand();
};
} // namespace winrt::ControlCenter::implementation
