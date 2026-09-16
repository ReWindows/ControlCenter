#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 13 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectsCameraPageViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEffects@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@QEAAXUQuickActionViewModel@34@@Z
    void InitializeEffects(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetEffects@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@QEAAXXZ
    void ResetEffects();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectsCameraPageViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectsCameraPageViewModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEyeGazeEnhancedPerfMitigationApplicable@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAA_NUStudioEffectViewModel@34@@Z
    bool IsEyeGazeEnhancedPerfMitigationApplicable(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQuickActionPropertyChanged@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@Uhstring@4@@Z
    WindissectOpaque OnQuickActionPropertyChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStudioEffectViewModelMessageReceived@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@UStudioEffectViewModelMessageEventArgs@34@@Z
    WindissectOpaque OnStudioEffectViewModelMessageReceived(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStudioEffectViewModelPropertyChanged@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@UPropertyChangedEventArgs@Data@Xaml@UI@84@@Z
    WindissectOpaque OnStudioEffectViewModelPropertyChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncApplicableEffects@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAAXXZ
    void SyncApplicableEffects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncAppliedEffects@StudioEffectsCameraPageViewModel@implementation@ControlCenter@winrt@@AEAAXXZ
    void SyncAppliedEffects();
};
} // namespace winrt::ControlCenter::implementation
