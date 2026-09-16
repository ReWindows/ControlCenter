#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 10 member(s).
namespace winrt::ControlCenter::implementation {
class CompositeEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSource@CompositeEffect@implementation@ControlCenter@winrt@@QEAAXUIGraphicsEffectSource@Effects@Graphics@Windows@4@@Z
    void AddSource(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@Effects@Graphics@Windows@ABI@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@ABI@@@Z
    virtual long GetProperty(unsigned int, ::ABI::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJIPEAPEAUIGraphicsEffectSource@Effects@Graphics@Windows@ABI@@@Z
    virtual long GetSource(unsigned int, ::ABI::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@CompositeEffect@implementation@ControlCenter@winrt@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
};
} // namespace winrt::ControlCenter::implementation
