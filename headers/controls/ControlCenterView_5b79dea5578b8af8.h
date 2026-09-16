#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 43 member(s).
namespace winrt::ControlCenter::implementation {
class ControlCenterView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePaginatedGridViewMaxHeight@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXN@Z
    void CalculatePaginatedGridViewMaxHeight(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterView@implementation@ControlCenter@winrt@@QEAA@XZ
    ControlCenterView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FadeOutDelayLoadedContent@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXXZ
    void FadeOutDelayLoadedContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@ControlCenterView@implementation@ControlCenter@winrt@@QEAA?AU?$IVector@UQuickActionGroup@ControlCenter@winrt@@@Collections@Foundation@Windows@4@U56784@Uhstring@4@@Z
    WindissectOpaque GetGroup(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndNavigateToL2Page@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUhstring@4@0@Z
    void InitializeAndNavigateToL2Page(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndNavigateToL2Page@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUhstring@4@@Z
    void InitializeAndNavigateToL2Page(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAddButtonEnabled@ControlCenterView@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsAddButtonEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsL2PageOpen@ControlCenterView@implementation@ControlCenter@winrt@@QEAA_NXZ
    bool IsL2PageOpen();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPendingShowDeepLinkOnLaunch@ControlCenterView@implementation@ControlCenter@winrt@@QEAAX_N@Z
    void IsPendingShowDeepLinkOnLaunch(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateToAdvancedPage@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUTypeName@Interop@Xaml@UI@Windows@4@UAdvancedPageInfo@34@@Z
    void NavigateToAdvancedPage(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddButtonClick@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnAddButtonClick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddQuickActionClick@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnAddQuickActionClick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoneButtonClick@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@URoutedEventArgs@Xaml@UI@74@@Z
    void OnDoneButtonClick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnL2FrameContentChanged@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnL2FrameContentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSlidersGroupGettingFocus@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UGettingFocusEventArgs@Input@Xaml@UI@74@@Z
    void OnSlidersGroupGettingFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveControlCenterHeightIfNeeded@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXXZ
    void SaveControlCenterHeightIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFadeInContentAnimation@ControlCenterView@implementation@ControlCenter@winrt@@QEAAXXZ
    void StartFadeInContentAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewModel@ControlCenterView@implementation@ControlCenter@winrt@@QEAA?AUControlCenterViewModel@34@XZ
    WindissectOpaque ViewModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLayout@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXUJsonArray@Json@Data@Windows@4@@Z
    void ApplyLayout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSnapshotForAnimation@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXUUIElement@Xaml@UI@Windows@4@@Z
    void CreateSnapshotForAnimation(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetL2Frame@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUFrameWithContentChanged@34@XZ
    WindissectOpaque GetL2Frame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaginatedGridView@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUPaginatedGridView@34@XZ
    WindissectOpaque GetPaginatedGridView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLoaded@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXXZ
    void HandleLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAndNavigateToL1PageAsync@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@W4FocusSourceOptions@34@W4FocusState@Xaml@UI@Windows@4@@Z
    WindissectOpaque InitializeAndNavigateToL1PageAsync(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOEMLauncherViewModelsAsync@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque InitializeOEMLauncherViewModelsAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeQuickActionsAsync@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@Windows@4@XZ
    WindissectOpaque InitializeQuickActionsAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadLayout@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUJsonArray@Json@Data@Windows@4@XZ
    WindissectOpaque LoadLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdvancedPageNavigateBackRequested@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@0@Z
    void OnAdvancedPageNavigateBackRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayedQuickActionsRearranged@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnDisplayedQuickActionsRearranged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInEditModeChanged@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@_N@Z
    WindissectOpaque OnInEditModeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPinQuickActionCompleted@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnPinQuickActionCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnpinQuickActionCompleted@ControlCenterView@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@XZ
    WindissectOpaque OnUnpinQuickActionCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayIntroAnimation@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXUUIElement@Xaml@UI@Windows@4@0_N@Z
    void PlayIntroAnimation(WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAdvancedPageFrame@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXXZ
    void ResetAdvancedPageFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFocusFromL2Page@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXXZ
    void ReturnFocusFromL2Page();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveLayout@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXXZ
    void SaveLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusByFocusSourceOptions@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXW4FocusSourceOptions@34@W4FocusState@Xaml@UI@Windows@4@@Z
    void SetFocusByFocusSourceOptions(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusOnFirstEnabledQuickAction@ControlCenterView@implementation@ControlCenter@winrt@@AEAAXW4FocusState@Xaml@UI@Windows@4@@Z
    void SetFocusOnFirstEnabledQuickAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetFocusOnSpecificQuickAction@ControlCenterView@implementation@ControlCenter@winrt@@AEAA_NUContentControl@Controls@Xaml@UI@Windows@4@Uhstring@4@W4FocusState@7894@@Z
    bool TrySetFocusOnSpecificQuickAction(WindissectOpaque, WindissectOpaque, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControlCenterView@implementation@ControlCenter@winrt@@EEAA@XZ
    virtual ~ControlCenterView();
};
} // namespace winrt::ControlCenter::implementation
