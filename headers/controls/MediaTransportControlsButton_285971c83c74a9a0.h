#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class MediaTransportControlsButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MediaTransportControlsButton@implementation@ControlCenter@winrt@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@4@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@MediaTransportControlsButton@implementation@ControlCenter@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyUp(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@MediaTransportControlsButton@implementation@ControlCenter@winrt@@QEAAXAEBUTappedRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnTapped(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControlsButton@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~MediaTransportControlsButton();
};
} // namespace winrt::ControlCenter::implementation
