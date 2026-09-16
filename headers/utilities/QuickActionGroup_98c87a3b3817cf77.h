#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 20 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUserLayout@QuickActionGroup@implementation@ControlCenter@winrt@@UEAAXUJsonObject@Json@Data@Windows@4@@Z
    virtual void ApplyUserLayout(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnpinnedQuickActions@QuickActionGroup@implementation@ControlCenter@winrt@@QEAA?AU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque GetUnpinnedQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@QuickActionGroup@implementation@ControlCenter@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@QuickActionGroup@implementation@ControlCenter@winrt@@QEAA?AUhstring@4@XZ
    WindissectOpaque Name();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionGroup@implementation@ControlCenter@winrt@@QEAA@XZ
    QuickActionGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@QuickActionGroup@implementation@ControlCenter@winrt@@QEAA?AUJsonObject@Json@Data@Windows@4@XZ
    WindissectOpaque Save();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAdvancedPageInfoForUri@QuickActionGroup@implementation@ControlCenter@winrt@@QEAA?AUAdvancedPageInfo@34@Uhstring@4@@Z
    WindissectOpaque TryGetAdvancedPageInfoForUri(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserQuickActions@QuickActionGroup@implementation@ControlCenter@winrt@@QEAA?AU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@XZ
    WindissectOpaque UserQuickActions();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultQuickActionsCollectionChanged@QuickActionGroup@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnDefaultQuickActionsCollectionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayedQuickActionsCollectionChanged@QuickActionGroup@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnDisplayedQuickActionsCollectionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInEditModeChanged@QuickActionGroup@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@_N@Z
    WindissectOpaque OnInEditModeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@QuickActionGroup@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQuickActionsChanged@QuickActionGroup@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@UIInspectable@Foundation@Windows@4@Uhstring@4@@Z
    WindissectOpaque OnQuickActionsChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinAllQuickActions@QuickActionGroup@implementation@ControlCenter@winrt@@AEAAXXZ
    void PinAllQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinQuickAction@QuickActionGroup@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@Uhstring@4@@Z
    WindissectOpaque PinQuickAction(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncApplicableQuickActions@QuickActionGroup@implementation@ControlCenter@winrt@@AEAAXXZ
    void SyncApplicableQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinQuickAction@QuickActionGroup@implementation@ControlCenter@winrt@@AEAA?AUfire_and_forget@4@Uhstring@4@@Z
    WindissectOpaque UnpinQuickAction(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionGroup@implementation@ControlCenter@winrt@@EEAA@XZ
    virtual ~QuickActionGroup();
};
} // namespace winrt::ControlCenter::implementation
