#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class InvokeQuickActionSetValueCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@InvokeQuickActionSetValueCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@InvokeQuickActionSetValueCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InvokeQuickActionSetValueCommand@implementation@ControlCenter@winrt@@QEAA@UQuickActionViewModel@23@@Z
    InvokeQuickActionSetValueCommand(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokeQuickActionSetValueCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~InvokeQuickActionSetValueCommand();
};
} // namespace winrt::ControlCenter::implementation
