#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 9 member(s).
namespace winrt::ControlCenter::implementation {
class XamlApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@XamlApplication@implementation@ControlCenter@winrt@@SA?AU134@XZ
    static WindissectOpaque Current();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXmlnsDefinitions@XamlApplication@implementation@ControlCenter@winrt@@QEAA?AU?$com_array@UXmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@@4@XZ
    WindissectOpaque GetXmlnsDefinitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlApplication@implementation@ControlCenter@winrt@@QEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLaunched@XamlApplication@implementation@ControlCenter@winrt@@QEAAXULaunchActivatedEventArgs@Activation@ApplicationModel@Windows@4@@Z
    void OnLaunched(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlApplication@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~XamlApplication();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMetadata@XamlApplication@implementation@ControlCenter@winrt@@AEAAXXZ
    void LoadMetadata();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWinUIFrameworkPackage@XamlApplication@implementation@ControlCenter@winrt@@AEAAXXZ
    void LoadWinUIFrameworkPackage();
};
} // namespace winrt::ControlCenter::implementation
