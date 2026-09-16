#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 23 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectsCameraPage_V2 {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppliedEffectsTooltip@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAA?AUIInspectable@Foundation@Windows@4@U?$IObservableVector@Uhstring@winrt@@@Collections@674@@Z
    WindissectOpaque GetAppliedEffectsTooltip(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfPages@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAHXZ
    int NumberOfPages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEffectsGridViewGettingFocus@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@UGettingFocusEventArgs@Input@6784@@Z
    void OnEffectsGridViewGettingFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEffectsGridViewManipulationDelta@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UManipulationDeltaRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnEffectsGridViewManipulationDelta(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEffectsGridViewManipulationStarted@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UManipulationStartedRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnEffectsGridViewManipulationStarted(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEffectsGridViewWheelChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnEffectsGridViewWheelChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedTo@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUNavigationEventArgs@Navigation@Xaml@UI@Windows@4@@Z
    void OnNavigatedTo(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetButtonClicked@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnResetButtonClicked(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UScrollViewerViewChangedEventArgs@Controls@Xaml@UI@74@@Z
    void OnScrollViewerViewChanged(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectsCameraPage_V2();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectsCameraPage_V2();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCameraInUseTextChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDependencyObject@Xaml@UI@Windows@4@UDependencyProperty@7894@@Z
    WindissectOpaque OnCameraInUseTextChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCameraPreviewInfoMessageTimer@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UThreadPoolTimer@Threading@System@Windows@4@@Z
    WindissectOpaque OnCameraPreviewInfoMessageTimer(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayedEffectsVectorChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnDisplayedEffectsVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberEffectsSelectedTextChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDependencyObject@Xaml@UI@Windows@4@UDependencyProperty@7894@@Z
    WindissectOpaque OnNumberEffectsSelectedTextChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStudioEffectViewModelMessageReceived@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@UStudioEffectViewModelMessageEventArgs@34@@Z
    WindissectOpaque OnStudioEffectViewModelMessageReceived(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPageImpl@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAAXH_N@Z
    void SetCurrentPageImpl(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCameraPreviewInfoMessage@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAAXUhstring@4@0_N@Z
    void ShowCameraPreviewInfoMessage(WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollHeight@StudioEffectsCameraPage_V2@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateScrollHeight();
};
} // namespace winrt::ControlCenter::implementation
