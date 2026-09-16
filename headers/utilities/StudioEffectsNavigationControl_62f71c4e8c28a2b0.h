#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 17 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectsNavigationControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCameraDropDownVisible@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsCameraDropDownVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCameraTabVisible@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsCameraTabVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSeparatorVisible@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsSeparatorVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCameraDropDownSelectionChanged@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@USelectionChangedEventArgs@Controls@Xaml@UI@74@@Z
    void OnCameraDropDownSelectionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewLoaded@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnNavigationViewLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewSelectionChanged@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAAXUNavigationView@Controls@Xaml@UI@Microsoft@4@UNavigationViewSelectionChangedEventArgs@67894@@Z
    void OnNavigationViewSelectionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemLoaded@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@84@@Z
    WindissectOpaque OnSelectedItemLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectsNavigationControl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectsNavigationControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCameraTabVisibilityPropertyChanged@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAAXXZ
    void FireCameraTabVisibilityPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeControlIfAllPropertiesAvailable@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAAXXZ
    void InitializeControlIfAllPropertiesAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQuickActionPropertyChanged@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@Uhstring@4@@Z
    WindissectOpaque OnQuickActionPropertyChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSeparatorLineVisibility@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateSeparatorLineVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibilityProperties@StudioEffectsNavigationControl@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void UpdateVisibilityProperties(WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
