#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 17 member(s).
namespace winrt::ControlCenter::implementation {
class FullScreenPage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FullScreenPage@implementation@ControlCenter@winrt@@QEAA@XZ
    FullScreenPage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@FullScreenPage@implementation@ControlCenter@winrt@@SA?AU?$IVector@UQuickActionGroup@ControlCenter@winrt@@@Collections@Foundation@Windows@4@U56784@Uhstring@4@@Z
    static WindissectOpaque GetGroup(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonClick@FullScreenPage@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnBackButtonClick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@FullScreenPage@implementation@ControlCenter@winrt@@QEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedFrom@FullScreenPage@implementation@ControlCenter@winrt@@QEAAXUNavigationEventArgs@Navigation@Xaml@UI@Windows@4@@Z
    void OnNavigatedFrom(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigatedTo@FullScreenPage@implementation@ControlCenter@winrt@@QEAAXUNavigationEventArgs@Navigation@Xaml@UI@Windows@4@@Z
    void OnNavigatedTo(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@FullScreenPage@implementation@ControlCenter@winrt@@QEAAXUPointerRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnPointerPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageTitleProperty@FullScreenPage@implementation@ControlCenter@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque PageTitleProperty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FullScreenPage@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~FullScreenPage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@FullScreenPage@implementation@ControlCenter@winrt@@AEAAXXZ
    void EnsureDependencyProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@FullScreenPage@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@FullScreenPage@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnUnloaded(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusAsync@FullScreenPage@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque SetFocusAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpCorePageElements@FullScreenPage@implementation@ControlCenter@winrt@@AEAAXUAdvancedPageInfo@34@@Z
    void SetUpCorePageElements(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserRequestedTryNavigateBack@FullScreenPage@implementation@ControlCenter@winrt@@AEAA_NW4DismissAdvancedPageAction@QuickActionsTelemetry@@@Z
    bool UserRequestedTryNavigateBack(int);
};
} // namespace winrt::ControlCenter::implementation
