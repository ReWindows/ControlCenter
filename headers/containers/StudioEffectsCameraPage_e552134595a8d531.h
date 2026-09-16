#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectsCameraPage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@StudioEffectsCameraPage@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedTo@StudioEffectsCameraPage@implementation@ControlCenter@winrt@@QEAAXUNavigationEventArgs@Navigation@Xaml@UI@Windows@4@@Z
    void OnNavigatedTo(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectsCameraPage@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectsCameraPage();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectsCameraPage@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectsCameraPage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCameraInUseTextChanged@StudioEffectsCameraPage@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDependencyObject@Xaml@UI@Windows@4@UDependencyProperty@7894@@Z
    WindissectOpaque OnCameraInUseTextChanged(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
