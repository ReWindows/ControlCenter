#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class AutoTooltipHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoTooltipProperty@AutoTooltipHelper@implementation@ControlCenter@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque AutoTooltipProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@AutoTooltipHelper@implementation@ControlCenter@winrt@@SAXXZ
    static void EnsureDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoTooltip@AutoTooltipHelper@implementation@ControlCenter@winrt@@SA_NAEBUDependencyObject@Xaml@UI@Windows@4@@Z
    static bool GetAutoTooltip(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoTooltip@AutoTooltipHelper@implementation@ControlCenter@winrt@@SAXAEBUDependencyObject@Xaml@UI@Windows@4@_N@Z
    static void SetAutoTooltip(WindissectOpaque const &, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoTooltipChanged@AutoTooltipHelper@implementation@ControlCenter@winrt@@CAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyPropertyChangedEventArgs@6784@@Z
    static void OnAutoTooltipChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
