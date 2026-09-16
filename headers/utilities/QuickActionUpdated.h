#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace QuickActionsTelemetry {
class QuickActionUpdated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QuickActionUpdated@QuickActionsTelemetry@@QEAAXPEB_WK_N@Z
    void StartActivity(wchar_t const *, unsigned long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionUpdated@QuickActionsTelemetry@@QEAA@XZ
    ~QuickActionUpdated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QuickActionUpdated@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QuickActionUpdated@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
