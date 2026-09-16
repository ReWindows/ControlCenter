#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 22 member(s).
namespace winrt::ControlCenter::implementation {
class PaginatedToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Command@PaginatedToggleButton@implementation@ControlCenter@winrt@@QEAA?AUICommand@Input@Xaml@UI@Windows@4@XZ
    WindissectOpaque Command();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@PaginatedToggleButton@implementation@ControlCenter@winrt@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@PaginatedToggleButton@implementation@ControlCenter@winrt@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@PaginatedToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyDown(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@PaginatedToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyUp(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PaginatedToggleButton@implementation@ControlCenter@winrt@@QEAA@XZ
    PaginatedToggleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@PaginatedToggleButton@implementation@ControlCenter@winrt@@QEAA?AUQuickActionViewModel@34@XZ
    WindissectOpaque ViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PaginatedToggleButton@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~PaginatedToggleButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleIsEnabledChanged@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UDependencyPropertyChangedEventArgs@Xaml@UI@74@@Z
    void HandleIsEnabledChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLoaded@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void HandleLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLostFocus@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void HandleLostFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerCaptureLost@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerCaptureLost(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerEntered@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerEntered(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerExited@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerExited(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerPressed@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerPressed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTapped@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UTappedRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandleTapped(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentVectorChanged@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnParentVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UVisualStateChangedEventArgs@Xaml@UI@74@@Z
    void OnVisualStateChanged(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperties@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@@Z
    void SetAutomationProperties(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@PaginatedToggleButton@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateVisualState();
};
} // namespace winrt::ControlCenter::implementation
