#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 2 member(s).
namespace winrt::Windows::UI::Xaml {
class VisualStateManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroups@VisualStateManager@Xaml@UI@Windows@winrt@@SA@AEBUFrameworkElement@2345@@Z
    static GetVisualStateGroups(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@VisualStateManager@Xaml@UI@Windows@winrt@@SA@AEBUControl@Controls@2345@AEBUhstring@param@5@_N@Z
    static GoToState(WindissectOpaque const &, WindissectOpaque const &, bool);
};
} // namespace winrt::Windows::UI::Xaml
