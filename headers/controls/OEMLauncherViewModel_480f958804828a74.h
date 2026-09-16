#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 7 member(s).
namespace winrt::ControlCenter::implementation {
class OEMLauncherViewModel {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OEMLauncherViewModel@implementation@ControlCenter@winrt@@QEAA@Uhstring@3@0USoftwareBitmapSource@Imaging@Media@Xaml@UI@Windows@3@UTileCollection@StartScreen@9WindowsUdk@3@UTile@StartScreen@9WindowsUdk@3@@Z
    OEMLauncherViewModel(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAsync@OEMLauncherViewModel@implementation@ControlCenter@winrt@@SA?AU?$IAsyncOperation@UOEMLauncherViewModel@ControlCenter@winrt@@@Foundation@Windows@4@XZ
    static WindissectOpaque TryCreateAsync();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OEMLauncherViewModel@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~OEMLauncherViewModel();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoOptions@OEMLauncherViewModel@implementation@ControlCenter@winrt@@CA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@4@UTile@6784@@Z
    static WindissectOpaque GetLogoOptions(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOEMAppId@OEMLauncherViewModel@implementation@ControlCenter@winrt@@CA?AU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@4@AEAV?$tip_test@V?$merged_data@U_tip_OEMLauncherViewModelInitializationTest@@U1@@details@tip2@@@tip2@@@Z
    static WindissectOpaque TryGetOEMAppId(WindissectOpaque &);
};
} // namespace winrt::ControlCenter::implementation
