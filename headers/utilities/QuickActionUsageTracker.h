#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 2 member(s).
namespace winrt::ControlCenter {
class QuickActionUsageTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogQuickActionUsage@QuickActionUsageTracker@ControlCenter@winrt@@QEAAXUQuickActionViewModel@23@@Z
    void LogQuickActionUsage(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldLogQuickAction@QuickActionUsageTracker@ControlCenter@winrt@@AEAA_NUhstring@3@@Z
    bool ShouldLogQuickAction(WindissectOpaque);
};
} // namespace winrt::ControlCenter
