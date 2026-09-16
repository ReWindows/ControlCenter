#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class EditQuickActionsCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@EditQuickActionsCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@EditQuickActionsCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EditQuickActionsCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~EditQuickActionsCommand();
};
} // namespace winrt::ControlCenter::implementation
