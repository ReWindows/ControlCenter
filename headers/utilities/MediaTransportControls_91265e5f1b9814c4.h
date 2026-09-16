#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 22 member(s).
namespace winrt::ControlCenter::implementation {
class MediaTransportControls {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaTransportControls@implementation@ControlCenter@winrt@@QEAA@XZ
    MediaTransportControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaButtonsListViewKeyDown@MediaTransportControls@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnMediaButtonsListViewKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlayPauseButtonClick@MediaTransportControls@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnPlayPauseButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeatButtonClick@MediaTransportControls@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnRepeatButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@MediaTransportControls@implementation@ControlCenter@winrt@@QEAA?AUMediaTransportControlsViewModel@34@XZ
    WindissectOpaque ViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@MediaTransportControls@implementation@ControlCenter@winrt@@QEAAXUMediaTransportControlsViewModel@34@@Z
    void ViewModel(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControls@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~MediaTransportControls();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateButtonPress@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXUUIElement@Xaml@UI@Windows@4@MM@Z
    void AnimateButtonPress(WindissectOpaque, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInteractionWithSessionAsync@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque BeginInteractionWithSessionAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoOptions@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@4@UTile@6784@@Z
    WindissectOpaque GetLogoOptions(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactor@MediaTransportControls@implementation@ControlCenter@winrt@@AEAANXZ
    double GetScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTileCollectionAsync@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque InitializeTileCollectionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentSessionChanged@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnCurrentSessionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsMediaTransportControlsSessionAvailableChanged@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnIsMediaTransportControlsSessionAvailableChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeatButtonIsPressedChanged@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void OnRepeatButtonIsPressedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowingAsync@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnShowingAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRepeatButtonInteraction@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXAEBURepeatButton@Primitives@Controls@Xaml@UI@Windows@4@@Z
    void ProcessRepeatButtonInteraction(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadNarratorTextOnSessionSwitch@MediaTransportControls@implementation@ControlCenter@winrt@@AEAAXXZ
    void ReadNarratorTextOnSessionSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppNameAndIconAsync@MediaTransportControls@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@_N@Z
    WindissectOpaque UpdateAppNameAndIconAsync(bool);
};
} // namespace winrt::ControlCenter::implementation
