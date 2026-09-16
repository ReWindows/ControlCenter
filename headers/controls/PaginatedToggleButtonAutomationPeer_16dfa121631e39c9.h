#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 10 member(s).
namespace winrt::ControlCenter::implementation {
class PaginatedToggleButtonAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual int GetAutomationControlTypeCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AU?$IVector@UAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    virtual WindissectOpaque GetChildrenCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AUIInspectable@Foundation@Windows@4@W4PatternInterface@Peers@Automation@Xaml@UI@74@@Z
    virtual WindissectOpaque GetPatternCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void Invoke();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@QEAA@UPaginatedToggleButton@23@@Z
    PaginatedToggleButtonAutomationPeer(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStateChanged@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@QEAAXW4ToggleState@Automation@Xaml@UI@Windows@4@@Z
    void RaiseToggleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void Toggle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PaginatedToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~PaginatedToggleButtonAutomationPeer();
};
} // namespace winrt::ControlCenter::implementation
