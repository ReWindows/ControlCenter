#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 12 member(s).
namespace winrt::ControlCenter::implementation {
class LiveDuplicateVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateVisualSurfaceBrush@LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAA?AUCompositionSurfaceBrush@Composition@UI@Windows@4@XZ
    virtual WindissectOpaque DuplicateVisualSurfaceBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@LiveDuplicateVisual@implementation@ControlCenter@winrt@@QEAAXXZ
    void Freeze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Kind@LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAA?AW4DuplicateVisualKind@ComposableShell@Internal@Windows@4@XZ
    virtual int Kind();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KindChanged@LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAA?AUevent_token@4@AEBU?$TypedEventHandler@UIDuplicateVisual@ComposableShell@Internal@Windows@winrt@@UIDuplicateVisualKindChangedEventArgs@2345@@Foundation@Windows@4@@Z
    virtual WindissectOpaque KindChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LiveDuplicateVisual@implementation@ControlCenter@winrt@@QEAA@AEBUUIElement@Xaml@UI@Windows@3@AEBURect@Foundation@73@@Z
    LiveDuplicateVisual(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRealizationRect@LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAAXAEBURect@Foundation@Windows@4@@Z
    virtual void UpdateRealizationRect(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visual@LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAA?AU0Composition@UI@Windows@4@XZ
    virtual WindissectOpaque Visual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LiveDuplicateVisual@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~LiveDuplicateVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRealizationRect@LiveDuplicateVisual@implementation@ControlCenter@winrt@@AEAA?BURect@Foundation@Windows@4@AEBU5674@@Z
    WindissectOpaque ValidateRealizationRect(WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
