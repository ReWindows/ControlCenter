#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 4 member(s).
namespace QuickActionsTelemetry {
class InitializingQuickActions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializingQuickActions@QuickActionsTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializingQuickActions@QuickActionsTelemetry@@QEAA@XZ
    ~InitializingQuickActions();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializingQuickActions@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializingQuickActions@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
