#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 25 member(s).
namespace winrt::ControlCenter {
class ControlCenterApplication {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@ControlCenterApplication@ControlCenter@winrt@@SAAEAV123@XZ
    static WindissectOpaque & GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@ControlCenterApplication@ControlCenter@winrt@@QEAAXUControlCenterDismissArgs@23@@Z
    void Hide(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@ControlCenterApplication@ControlCenter@winrt@@QEAAXUControlCenterLaunchArgs@23@@Z
    void Show(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMessageLoop@ControlCenterApplication@ControlCenter@winrt@@QEAAXXZ
    void StartMessageLoop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControlCenterApplication@ControlCenter@winrt@@QEAA@XZ
    ~ControlCenterApplication();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWindowRect@ControlCenterApplication@ControlCenter@winrt@@AEAA?AUtagRECT@@XZ
    tagRECT CalculateWindowRect();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterApplication@ControlCenter@winrt@@AEAA@XZ
    ControlCenterApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureXamlInitialized@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void EnsureXamlInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindow@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void HideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDisplayMonitorInfoCollection@ControlCenterApplication@ControlCenter@winrt@@AEAA?AUfire_and_forget@3@XZ
    WindissectOpaque InitializeDisplayMonitorInfoCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSoftwareKeyboardPositionListener@ControlCenterApplication@ControlCenter@winrt@@AEAA?AUfire_and_forget@3@XZ
    WindissectOpaque InitializeSoftwareKeyboardPositionListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDeviceKindToInputTypeConverter@ControlCenterApplication@ControlCenter@winrt@@AEAA?AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@@Z
    int InputDeviceKindToInputTypeConverter(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlCenterDisabledByPolicy@ControlCenterApplication@ControlCenter@winrt@@CA_NXZ
    static bool IsControlCenterDisabledByPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlCenterPrelaunchDisabledByRegistry@ControlCenterApplication@ControlCenter@winrt@@AEAA_NXZ
    bool IsControlCenterPrelaunchDisabledByRegistry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceDiscoveryAllowedByPolicy@ControlCenterApplication@ControlCenter@winrt@@CA_NXZ
    static bool IsDeviceDiscoveryAllowedByPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@ControlCenterApplication@ControlCenter@winrt@@AEAA_NXZ
    bool IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void OnActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeactivated@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void OnDeactivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMessage@ControlCenterApplication@ControlCenter@winrt@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t OnWindowMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHotkey@ControlCenterApplication@ControlCenter@winrt@@AEAAXUhstring@3@AEAGII@Z
    void RegisterHotkey(WindissectOpaque, unsigned short &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionWindowIfNeeded@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void RepositionWindowIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuspendAnimationsState@ControlCenterApplication@ControlCenter@winrt@@AEAAX_N@Z
    void SetSuspendAnimationsState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAndPositionWindow@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void ShowAndPositionWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClipRegion@ControlCenterApplication@ControlCenter@winrt@@AEAAXXZ
    void UpdateClipRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@ControlCenterApplication@ControlCenter@winrt@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace winrt::ControlCenter
