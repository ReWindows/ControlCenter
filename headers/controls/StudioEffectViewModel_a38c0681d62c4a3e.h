#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 12 member(s).
namespace winrt::ControlCenter::implementation {
class StudioEffectViewModel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicable@StudioEffectViewModel@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsApplicable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@StudioEffectViewModel@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsSelected();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectViewModel@implementation@ControlCenter@winrt@@QEAA@UQuickActionViewModel@23@Uhstring@3@11@Z
    StudioEffectViewModel(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectViewModel@implementation@ControlCenter@winrt@@QEAA@UQuickActionViewModel@23@Uhstring@3@@Z
    StudioEffectViewModel(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StudioEffectViewModel@implementation@ControlCenter@winrt@@QEAA@XZ
    StudioEffectViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StudioEffectViewModel@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~StudioEffectViewModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedInternal@StudioEffectViewModel@implementation@ControlCenter@winrt@@AEAAX_N0@Z
    void IsSelectedInternal(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StudioEffectViewModel@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQuickActionPropertyChanged@StudioEffectViewModel@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@Uhstring@4@@Z
    WindissectOpaque OnQuickActionPropertyChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStudioEffectViewModelMessage@StudioEffectViewModel@implementation@ControlCenter@winrt@@AEAAX_NUhstring@4@@Z
    void SendStudioEffectViewModelMessage(bool, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
