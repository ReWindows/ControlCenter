#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 17 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectsCameraPreviewControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCameraPreviewOn@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@QEAAX_N@Z
    void IsCameraPreviewOn(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectsCameraPreviewControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoDeviceId@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque VideoDeviceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VideoDeviceIdProperty@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque VideoDeviceIdProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupPreview@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAAXXZ
    void CleanupPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizePreview@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque FinalizePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePreview@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque InitializePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayInformationOrientationChanged@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UDisplayInformation@Display@Graphics@Windows@4@UIInspectable@Foundation@94@@Z
    WindissectOpaque OnDisplayInformationOrientationChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaCaptureFailed@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UMediaCapture@Capture@Media@Windows@4@UMediaCaptureFailedEventArgs@7894@@Z
    WindissectOpaque OnMediaCaptureFailed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMediaPlayerFailed@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UMediaPlayer@Playback@Media@Windows@4@UMediaPlayerFailedEventArgs@7894@@Z
    WindissectOpaque OnMediaPlayerFailed(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVideoDeviceIdChanged@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@Uhstring@4@@Z
    WindissectOpaque OnVideoDeviceIdChanged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewRotationAndMirroring@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque SetPreviewRotationAndMirroring();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnPropertyChanged@StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@CAXUDependencyObject@Xaml@UI@Windows@4@UDependencyPropertyChangedEventArgs@6784@@Z
    static void s_OnPropertyChanged(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectsCameraPreviewControl@implementation@ControlCenter@winrt@@EEAA@XZ
    virtual ~StudioEffectsCameraPreviewControl();
};
} // namespace winrt::ControlCenter::implementation
