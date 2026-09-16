#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 3 member(s).
namespace winrt::ControlCenter::implementation {
class SettingsServices {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@SettingsServices@implementation@ControlCenter@winrt@@SAAEAV1234@XZ
    static WindissectOpaque & GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@SettingsServices@implementation@ControlCenter@winrt@@QEAA?AUIQuickActionsProvider@QuickActions@Internal@Windows@4@XZ
    WindissectOpaque Provider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@SettingsServices@implementation@ControlCenter@winrt@@AEAAXXZ
    void EnsureInitialized();
};
} // namespace winrt::ControlCenter::implementation
