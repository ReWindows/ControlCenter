#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class VolumeMixerList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVolumeMixerListLoaded@VolumeMixerList@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnVolumeMixerListLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VolumeMixerList@implementation@ControlCenter@winrt@@QEAA@XZ
    VolumeMixerList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconButtonClickedAsync@VolumeMixerList@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@84@@Z
    WindissectOpaque OnIconButtonClickedAsync(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
