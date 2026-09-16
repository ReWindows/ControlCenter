#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 11 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLostFocus@QuickActionToggleButton@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void HandleLostFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@QuickActionToggleButton@implementation@ControlCenter@winrt@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@QuickActionToggleButton@implementation@ControlCenter@winrt@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@QuickActionToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyDown(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@QuickActionToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyUp(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggle@QuickActionToggleButton@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void OnToggle();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionToggleButton@implementation@ControlCenter@winrt@@QEAA@XZ
    QuickActionToggleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@QuickActionToggleButton@implementation@ControlCenter@winrt@@QEAA?AUQuickActionViewModel@34@XZ
    WindissectOpaque ViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionToggleButton@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QuickActionToggleButton();
};
} // namespace winrt::ControlCenter::implementation
