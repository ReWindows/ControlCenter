#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class QA_Edit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@QA_Edit@implementation@ControlCenter@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Markers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@QA_Edit@implementation@ControlCenter@winrt@@QEAAXAEBUhstring@4@UColor@UI@Windows@4@@Z
    void SetColorProperty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@QA_Edit@implementation@ControlCenter@winrt@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@4@AEBUCompositor@Composition@8Windows@4@AEAUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QA_Edit@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QA_Edit();
};
} // namespace winrt::ControlCenter::implementation
