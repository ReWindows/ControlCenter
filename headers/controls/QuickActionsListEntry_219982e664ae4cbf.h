#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionsListEntry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionsListEntry@implementation@ControlCenter@winrt@@QEAA@U?$IObservableVector@UIQuickAction@QuickActions@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@UQuickActionViewModel@23@@Z
    QuickActionsListEntry(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?View@QuickActionsListEntry@implementation@ControlCenter@winrt@@UEAA?AU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@XZ
    virtual WindissectOpaque View();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionsListEntry@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QuickActionsListEntry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVectorChanged@QuickActionsListEntry@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UIQuickAction@QuickActions@Internal@Windows@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnVectorChanged(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
