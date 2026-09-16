#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class DelegateCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanExecute@DelegateCommand@implementation@ControlCenter@winrt@@UEAA_NUIInspectable@Foundation@Windows@4@@Z
    virtual bool CanExecute(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DelegateCommand@implementation@ControlCenter@winrt@@QEAA@UExecuteDelegate@23@UCanExecuteDelegate@23@@Z
    DelegateCommand(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@DelegateCommand@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@@Z
    virtual void Execute(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DelegateCommand@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~DelegateCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyDisconnectedException@DelegateCommand@implementation@ControlCenter@winrt@@AEAAXAEBUhresult_error@4@@Z
    void VerifyDisconnectedException(WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
