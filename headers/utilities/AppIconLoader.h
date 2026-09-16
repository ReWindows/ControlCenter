#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 8 member(s).
namespace winrt::ControlCenter::implementation {
class AppIconLoader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppIconLoader@implementation@ControlCenter@winrt@@QEAA@XZ
    AppIconLoader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAppIcon@AppIconLoader@implementation@ControlCenter@winrt@@QEAA?AUSoftwareBitmap@Imaging@Graphics@Windows@4@AEBUhstring@4@0H@Z
    WindissectOpaque LoadAppIcon(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppIconLoader@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~AppIconLoader();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoOptions@AppIconLoader@implementation@ControlCenter@winrt@@AEAA?AULogoLoadOptions@StartScreen@UI@WindowsUdk@4@UTile@6784@H@Z
    WindissectOpaque GetLogoOptions(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTileFromAppId@AppIconLoader@implementation@ControlCenter@winrt@@AEAA?AUTile@StartScreen@UI@WindowsUdk@4@AEBUhstring@4@@Z
    WindissectOpaque TryGetTileFromAppId(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetTileFromPath@AppIconLoader@implementation@ControlCenter@winrt@@AEAA?AUTile@StartScreen@UI@WindowsUdk@4@AEBUhstring@4@@Z
    WindissectOpaque TryGetTileFromPath(WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
