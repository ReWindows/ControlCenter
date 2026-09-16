#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 15 member(s).
namespace winrt::ControlCenter::implementation {
class QuickActionDataProperty {
public:
    class PropertyWrapInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRead@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA_NXZ
    virtual bool CanRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanWrite@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA_NXZ
    virtual bool CanWrite();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedValue@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA?AUIInspectable@Foundation@Windows@4@U5674@0@Z
    virtual WindissectOpaque GetIndexedValue(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA?AUIInspectable@Foundation@Windows@4@U5674@@Z
    virtual WindissectOpaque GetValue(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA?AUhstring@4@XZ
    virtual WindissectOpaque Name();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionDataProperty@implementation@ControlCenter@winrt@@QEAA@Uhstring@3@@Z
    QuickActionDataProperty(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexedValue@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@00@Z
    virtual void SetIndexedValue(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAAXUIInspectable@Foundation@Windows@4@0@Z
    virtual void SetValue(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA?AUTypeName@Interop@Xaml@UI@Windows@4@XZ
    virtual WindissectOpaque Type();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionDataProperty@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~QuickActionDataProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWrapQuickAction@QuickActionDataProperty@implementation@ControlCenter@winrt@@CA_NAEAUPropertyWrapInfo@1234@@Z
    static bool TryWrapQuickAction(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWrapQuickActionsList@QuickActionDataProperty@implementation@ControlCenter@winrt@@CA_NAEAUPropertyWrapInfo@1234@@Z
    static bool TryWrapQuickActionsList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapPropertyValue@QuickActionDataProperty@implementation@ControlCenter@winrt@@CA?AUIInspectable@Foundation@Windows@4@UQuickActionViewModel@34@U5674@@Z
    static WindissectOpaque WrapPropertyValue(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
