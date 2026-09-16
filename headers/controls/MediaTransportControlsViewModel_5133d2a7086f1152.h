#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 18 member(s).
namespace winrt::ControlCenter::implementation {
class MediaTransportControlsViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentSession@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAAXUMediaTransportControlsSessionViewModel@34@@Z
    void CurrentSession(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentSourceAppId@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAAXUhstring@4@@Z
    void CurrentSourceAppId(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaTransportControlsSessionAvailable@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAAX_N@Z
    void IsMediaTransportControlsSessionAvailable(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAA@XZ
    MediaTransportControlsViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAA?AUfire_and_forget@4@XZ
    WindissectOpaque Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Startup@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@QEAAXXZ
    void Startup();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~MediaTransportControlsViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanSwitchCurrentSessionToNext@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanSwitchCurrentSessionToNext(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForCurrentSessionChangeAsync@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque CheckForCurrentSessionChangeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMtcModel@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA?AUMtcModel@Shell@Internal@Windows@4@XZ
    WindissectOpaque GetMtcModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeComponentsAsync@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque InitializeComponentsAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentSessionChanged@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnCurrentSessionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionListChanged@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnSessionListChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceAppIdChanged@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnSourceAppIdChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchCurrentSessionToNext@MediaTransportControlsViewModel@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@@Z
    void SwitchCurrentSessionToNext(WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
