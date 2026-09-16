#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class QA_ColorProfile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@QA_ColorProfile@implementation@ControlCenter@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@4@XZ
    WindissectOpaque Markers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@QA_ColorProfile@implementation@ControlCenter@winrt@@QEAAXAEBUhstring@4@UColor@UI@Windows@4@@Z
    void SetColorProperty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@QA_ColorProfile@implementation@ControlCenter@winrt@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@4@AEBUCompositor@Composition@8Windows@4@AEAUIInspectable@Foundation@Windows@4@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QA_ColorProfile@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QA_ColorProfile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeProperties@QA_ColorProfile@implementation@ControlCenter@winrt@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@4@UCompositor@6784@@Z
    WindissectOpaque EnsureThemeProperties(WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
