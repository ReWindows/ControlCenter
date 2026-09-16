#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 9 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectToggleButtonAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual int GetAutomationControlTypeCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AU?$IVector@UAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@4@XZ
    virtual WindissectOpaque GetChildrenCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA?AUIInspectable@Foundation@Windows@4@W4PatternInterface@Peers@Automation@Xaml@UI@74@@Z
    virtual WindissectOpaque GetPatternCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseToggleStateChanged@StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@QEAAXW4ToggleState@Automation@Xaml@UI@Windows@4@@Z
    void RaiseToggleStateChanged(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@QEAA@UStudioEffectToggleButton@23@@Z
    StudioEffectToggleButtonAutomationPeer(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void Toggle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectToggleButtonAutomationPeer@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectToggleButtonAutomationPeer();
};
} // namespace winrt::ControlCenter::implementation
