#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 33 member(s).
namespace winrt::ControlCenter::implementation {
class MediaTransportControlsSessionViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInteractionWithSessionAsync@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@4@XZ
    WindissectOpaque BeginInteractionWithSessionAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXXZ
    void Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPlaying@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAX_N@Z
    void IsPlaying(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAA@UMtcSession@Shell@Internal@Windows@3@@Z
    MediaTransportControlsSessionViewModel(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceAppId@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXUhstring@4@@Z
    void SourceAppId(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtitle@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXUhstring@4@@Z
    void Subtitle(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailImage@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXUImageSource@Media@Xaml@UI@Windows@4@@Z
    void ThumbnailImage(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThumbnailImageBackgroundColor@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXUColor@UI@Windows@4@@Z
    void ThumbnailImageBackgroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Title@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@QEAAXUhstring@4@@Z
    void Title(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~MediaTransportControlsSessionViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSessionSource@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque ActivateSessionSource(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginFastForward@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque BeginFastForward(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRewind@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque BeginRewind(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanActivateSessionSource@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanActivateSessionSource(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeginFastForward@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanBeginFastForward(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeginRewind@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanBeginRewind(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanEndFastForward@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanEndFastForward(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanEndRewind@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanEndRewind(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGoToNext@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanGoToNext(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanGoToPrevious@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanGoToPrevious(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPlayPause@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA_NUIInspectable@Foundation@Windows@4@@Z
    bool CanPlayPause(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndFastForward@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque EndFastForward(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRewind@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque EndRewind(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToNext@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque GoToNext(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToPrevious@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque GoToPrevious(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandStatusChanged@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnCommandStatusChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaInformationChanged@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnMediaInformationChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailChanged@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@0@Z
    WindissectOpaque OnThumbnailChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayPause@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque PlayPause(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredThumbnailSizeAsync@MediaTransportControlsSessionViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUSize@Foundation@Windows@4@@Z
    WindissectOpaque SetDesiredThumbnailSizeAsync(WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
