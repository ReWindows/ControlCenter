#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class CanvasGeometry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Geometry@CanvasGeometry@implementation@ControlCenter@winrt@@QEAA?AU?$com_ptr@UID2D1Geometry@@@4@XZ
    WindissectOpaque Geometry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@CanvasGeometry@implementation@ControlCenter@winrt@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@CanvasGeometry@implementation@ControlCenter@winrt@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
};
} // namespace winrt::ControlCenter::implementation
