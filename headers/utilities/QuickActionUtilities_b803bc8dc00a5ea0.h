#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFriendlyName@QuickActionUtilities@implementation@ControlCenter@winrt@@SA?AUQuickActionViewModel@34@U?$IVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@Uhstring@4@@Z
    static WindissectOpaque FindFriendlyName(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWithSourceCollectionByFriendlyName@QuickActionUtilities@implementation@ControlCenter@winrt@@SAXU?$IVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@0@Z
    static void SyncWithSourceCollectionByFriendlyName(WindissectOpaque, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf_ByFriendlyName@QuickActionUtilities@implementation@ControlCenter@winrt@@CA_NU?$IVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@IUQuickActionViewModel@34@PEAI@Z
    static bool IndexOf_ByFriendlyName(WindissectOpaque, unsigned int, WindissectOpaque, unsigned int *);
};
} // namespace winrt::ControlCenter::implementation
