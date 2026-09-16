#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 21 member(s).
namespace winrt::ControlCenter::implementation {
class ControlCenterPage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterPage@implementation@ControlCenter@winrt@@QEAA@XZ
    ControlCenterPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHiding@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXXZ
    void OnHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentBorderSizeChanged@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUSizeChangedEventArgs@Xaml@UI@74@@Z
    void OnParentBorderSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDown@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPreviewKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridSizeChanged@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUSizeChangedEventArgs@Xaml@UI@74@@Z
    void OnRootGridSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowing@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXUControlCenterLaunchArgs@34@@Z
    void OnShowing(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRegularHideAnimation@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXXZ
    void StartRegularHideAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRegularShowAnimation@ControlCenterPage@implementation@ControlCenter@winrt@@QEAAXXZ
    void StartRegularShowAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControlCenterPage@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~ControlCenterPage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateControlCenterViewMaxHeight@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void CalculateControlCenterViewMaxHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteHide@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void CompleteHide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInputDrivenAnimations@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void EnsureInputDrivenAnimations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimplifyQuickSettingsPolicyEnabled@ControlCenterPage@implementation@ControlCenter@winrt@@AEAA_NXZ
    bool IsSimplifyQuickSettingsPolicyEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorValuesChanged@ControlCenterPage@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUUISettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@94@@Z
    WindissectOpaque OnColorValuesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstRender@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void OnFirstRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastChanged@ControlCenterPage@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@AEBUAccessibilitySettings@ViewManagement@UI@Windows@4@AEBUIInspectable@Foundation@94@@Z
    WindissectOpaque OnHighContrastChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnL1GridVisiblityChanged@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnL1GridVisiblityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@ControlCenterPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateTheme();
};
} // namespace winrt::ControlCenter::implementation
