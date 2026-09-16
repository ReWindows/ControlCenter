#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class InvokeQuickActionCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@InvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@InvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InvokeQuickActionCommand@implementation@ControlCenter@winrt@@QEAA@UQuickActionViewModel@23@@Z
    InvokeQuickActionCommand(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokeQuickActionCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~InvokeQuickActionCommand();
};
} // namespace winrt::ControlCenter::implementation
