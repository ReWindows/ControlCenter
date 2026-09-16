#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 4 member(s).
namespace QuickActionsTelemetry {
class InvokingQuickAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InvokingQuickAction@QuickActionsTelemetry@@QEAAXPEB_W_N001@Z
    void StartActivity(wchar_t const *, bool, wchar_t const *, wchar_t const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokingQuickAction@QuickActionsTelemetry@@QEAA@XZ
    ~InvokingQuickAction();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InvokingQuickAction@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InvokingQuickAction@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
