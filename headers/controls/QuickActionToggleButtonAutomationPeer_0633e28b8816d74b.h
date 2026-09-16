#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionToggleButtonAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@QuickActionToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AU?$IVector@UAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    virtual WindissectOpaque GetChildrenCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@QuickActionToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AUIInspectable@Foundation@Windows@4@W4PatternInterface@Peers@Automation@Xaml@UI@74@@Z
    virtual WindissectOpaque GetPatternCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@QuickActionToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void Invoke();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@QEAA@UQuickActionToggleButton@23@@Z
    QuickActionToggleButtonAutomationPeer(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QuickActionToggleButtonAutomationPeer();
};
} // namespace winrt::ControlCenter::implementation
