#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 2 member(s).
namespace winrt::Windows::UI::Xaml::Hosting {
class ElementCompositionPreview {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@@Z
    static GetElementVisual(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementChildVisual@ElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@3456@AEBUVisual@Composition@456@@Z
    static SetElementChildVisual(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::UI::Xaml::Hosting
