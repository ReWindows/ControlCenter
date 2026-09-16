#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 17 member(s).
namespace winrt::ControlCenter::implementation {
class A9SnapshotPreview {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAA@XZ
    A9SnapshotPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActiveCaptureImageButtonClicked@A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnActiveCaptureImageButtonClicked(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterButtonClicked@A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@84@@Z
    WindissectOpaque OnFilterButtonClicked(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterItemThumbnailImageFailed@A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAA?AUfire_and_forget@4@AEBUIInspectable@Foundation@Windows@4@AEBUExceptionRoutedEventArgs@Xaml@UI@84@@Z
    WindissectOpaque OnFilterItemThumbnailImageFailed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@A9SnapshotPreview@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnUnloaded(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1A9SnapshotPreview@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~A9SnapshotPreview();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageUriForCurrentTheme@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUUri@Foundation@Windows@4@Uhstring@4@@Z
    WindissectOpaque GetImageUriForCurrentTheme(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDpiChanged@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UXamlRoot@Xaml@UI@Windows@4@UXamlRootChangedEventArgs@7894@@Z
    WindissectOpaque OnDpiChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFilterButtonNameChanged@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDependencyObject@Xaml@UI@Windows@4@UDependencyProperty@7894@@Z
    WindissectOpaque OnFilterButtonNameChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoadedAsync@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnLoadedAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPauseResumeButtonTextChanged@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDependencyObject@Xaml@UI@Windows@4@UDependencyProperty@7894@@Z
    WindissectOpaque OnPauseResumeButtonTextChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatusChanged@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBURecallPrivacyIndicatorExtension@A9Settings@System@WindowsUdk@4@AEBUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque OnStatusChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppIconAsync@A9SnapshotPreview@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@Uhstring@4@0@Z
    WindissectOpaque UpdateAppIconAsync(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
