#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class ListViewHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@ListViewHelper@implementation@ControlCenter@winrt@@SAXXZ
    static void EnsureDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemTemplate@ListViewHelper@implementation@ControlCenter@winrt@@SA?AUDataTemplate@Xaml@UI@Windows@4@AEBUDependencyObject@6784@@Z
    static WindissectOpaque GetSelectedItemTemplate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItemTemplateProperty@ListViewHelper@implementation@ControlCenter@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque SelectedItemTemplateProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedItemTemplate@ListViewHelper@implementation@ControlCenter@winrt@@SAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDataTemplate@6784@@Z
    static void SetSelectedItemTemplate(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemTemplateChanged@ListViewHelper@implementation@ControlCenter@winrt@@CAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyPropertyChangedEventArgs@6784@@Z
    static void OnSelectedItemTemplateChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
