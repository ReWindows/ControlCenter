#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 10 member(s).
namespace winrt::ControlCenter::implementation {
class XamlUserType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxedType@XamlUserType@implementation@ControlCenter@winrt@@QEBA?AUIXamlType@Markup@Xaml@UI@Windows@4@XZ
    WindissectOpaque BoxedType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEnumUIntFromString@XamlUserType@implementation@ControlCenter@winrt@@QEBAIAEBUhstring@4@@Z
    unsigned int CreateEnumUIntFromString(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromString@XamlUserType@implementation@ControlCenter@winrt@@QEBA?AUIInspectable@Foundation@Windows@4@AEBUhstring@4@@Z
    WindissectOpaque CreateFromString(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlUserType@implementation@ControlCenter@winrt@@UEBA?AUhstring@4@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLocalType@XamlUserType@implementation@ControlCenter@winrt@@UEBA_NXZ
    virtual bool IsLocalType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReturnTypeStub@XamlUserType@implementation@ControlCenter@winrt@@UEBA_NXZ
    virtual bool IsReturnTypeStub() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlUserType@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~XamlUserType();
};
} // namespace winrt::ControlCenter::implementation
