#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 22 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectToggleButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@StudioEffectToggleButton@implementation@ControlCenter@winrt@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@StudioEffectToggleButton@implementation@ControlCenter@winrt@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@StudioEffectToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyDown(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@StudioEffectToggleButton@implementation@ControlCenter@winrt@@UEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    virtual void OnKeyUp(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectToggleButton@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectToggleButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@StudioEffectToggleButton@implementation@ControlCenter@winrt@@QEAA?AUStudioEffectViewModel@34@XZ
    WindissectOpaque ViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@StudioEffectToggleButton@implementation@ControlCenter@winrt@@QEAAXUStudioEffectViewModel@34@@Z
    void ViewModel(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectToggleButton@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectToggleButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLoaded@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void HandleLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerEntered@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerEntered(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerExited@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerExited(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerPressed@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerPressed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerReleased@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerReleased(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTapped@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UTappedRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandleTapped(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentVectorChanged@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UStudioEffectViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnParentVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualStateChanged@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UVisualStateChangedEventArgs@Xaml@UI@74@@Z
    void OnVisualStateChanged(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperties@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UStudioEffectViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@@Z
    void SetAutomationProperties(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisuallyPress@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXXZ
    void VisuallyPress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisuallyRelease@StudioEffectToggleButton@implementation@ControlCenter@winrt@@AEAAXXZ
    void VisuallyRelease();
};
} // namespace winrt::ControlCenter::implementation
