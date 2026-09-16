#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class QS_24_EnergySaver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@QS_24_EnergySaver@implementation@ControlCenter@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Markers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@QS_24_EnergySaver@implementation@ControlCenter@winrt@@QEAAXAEBUhstring@4@UColor@UI@Windows@4@@Z
    void SetColorProperty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@QS_24_EnergySaver@implementation@ControlCenter@winrt@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@4@AEBUCompositor@Composition@8Windows@4@AEAUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QS_24_EnergySaver@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QS_24_EnergySaver();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeProperties@QS_24_EnergySaver@implementation@ControlCenter@winrt@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@4@UCompositor@6784@@Z
    WindissectOpaque EnsureThemeProperties(WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
