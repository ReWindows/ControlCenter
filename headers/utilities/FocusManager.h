#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::Windows::UI::Xaml::Input {
class FocusManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z
    static FindFirstFocusableElement(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNextFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBW4FocusNavigationDirection@23456@@Z
    static FindNextFocusableElement(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUXamlRoot@3456@@Z
    static GetFocusedElement(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFocusAsync@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@AEBW4FocusState@3456@@Z
    static TryFocusAsync(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBW4FocusNavigationDirection@23456@AEBUFindNextElementOptions@23456@@Z
    static TryMoveFocus(int const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::UI::Xaml::Input
