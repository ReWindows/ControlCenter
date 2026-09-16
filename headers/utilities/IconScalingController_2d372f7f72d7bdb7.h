#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class IconScalingController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconScalingController@implementation@ControlCenter@winrt@@QEAA@XZ
    IconScalingController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VolumeDeviceIconMargin@IconScalingController@implementation@ControlCenter@winrt@@QEAA?AUThickness@Xaml@UI@Windows@4@XZ
    WindissectOpaque VolumeDeviceIconMargin();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IconScalingController@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~IconScalingController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@IconScalingController@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextScaleFactorChangedAsync@IconScalingController@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UUISettings@ViewManagement@UI@Windows@4@UIInspectable@Foundation@94@@Z
    WindissectOpaque OnTextScaleFactorChangedAsync(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
