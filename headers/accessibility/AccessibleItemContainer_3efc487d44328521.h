#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 9 member(s).
namespace winrt::ControlCenter::implementation {
class AccessibleItemContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessibleItemContainerLoaded@AccessibleItemContainer@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnAccessibleItemContainerLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@AccessibleItemContainer@implementation@ControlCenter@winrt@@QEAAXUQuickActionViewModel@34@@Z
    void ViewModel(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@AccessibleItemContainer@implementation@ControlCenter@winrt@@QEAA?AUQuickActionViewModel@34@XZ
    WindissectOpaque ViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccessibleItemContainer@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~AccessibleItemContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentVectorChanged@AccessibleItemContainer@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnParentVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AccessibleItemContainer@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperties@AccessibleItemContainer@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@@Z
    void SetAutomationProperties(WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
