#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace QuickActionsTelemetry {
class QuickActionsInEditMode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QuickActionsInEditMode@QuickActionsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionsInEditMode@QuickActionsTelemetry@@QEAA@XZ
    ~QuickActionsInEditMode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QuickActionsInEditMode@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QuickActionsInEditMode@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
