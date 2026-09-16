#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 9 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyUserLayout@QuickActionLayout@implementation@ControlCenter@winrt@@QEAAXUJsonArray@Json@Data@Windows@4@@Z
    void ApplyUserLayout(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromUri@QuickActionLayout@implementation@ControlCenter@winrt@@SA?AU134@Uhstring@4@0@Z
    static WindissectOpaque LoadFromUri(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFromUri@QuickActionLayout@implementation@ControlCenter@winrt@@SA?AU134@Uhstring@4@@Z
    static WindissectOpaque LoadFromUri(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionLayout@implementation@ControlCenter@winrt@@QEAA@XZ
    QuickActionLayout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionLayout@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QuickActionLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGroup@QuickActionLayout@implementation@ControlCenter@winrt@@AEAA?AUQuickActionGroup@34@Uhstring@4@@Z
    WindissectOpaque FindGroup(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupsCollectionChanged@QuickActionLayout@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionGroup@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnGroupsCollectionChanged(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
