#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 14 member(s).
namespace winrt::ControlCenter::implementation {
class EditModeContainer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EditModeContainer@implementation@ControlCenter@winrt@@QEAA@XZ
    EditModeContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuOpening@EditModeContainer@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnContextMenuOpening(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEditModeContainerLoaded@EditModeContainer@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnEditModeContainerLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@EditModeContainer@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UGettingFocusEventArgs@Input@Xaml@UI@74@@Z
    void OnGettingFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnpinButtonClick@EditModeContainer@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnUnpinButtonClick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@EditModeContainer@implementation@ControlCenter@winrt@@QEAAXUQuickActionViewModel@34@@Z
    void ViewModel(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@EditModeContainer@implementation@ControlCenter@winrt@@QEAA?AUQuickActionViewModel@34@XZ
    WindissectOpaque ViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInEditModeChanged@EditModeContainer@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@_N@Z
    WindissectOpaque OnInEditModeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentVectorChanged@EditModeContainer@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnParentVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@EditModeContainer@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationProperties@EditModeContainer@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@@Z
    void SetAutomationProperties(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EditModeContainer@implementation@ControlCenter@winrt@@EEAA@XZ
    virtual ~EditModeContainer();
};
} // namespace winrt::ControlCenter::implementation
