#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace QuickActionsTelemetry {
class RearrangeQuickAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RearrangeQuickAction@QuickActionsTelemetry@@QEAAXPEB_WHH@Z
    void StartActivity(wchar_t const *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RearrangeQuickAction@QuickActionsTelemetry@@QEAA@XZ
    ~RearrangeQuickAction();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RearrangeQuickAction@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RearrangeQuickAction@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
