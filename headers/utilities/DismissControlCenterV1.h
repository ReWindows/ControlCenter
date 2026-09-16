#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace ControlCenterUITelemetry::ControlCenterTelemetry {
class DismissControlCenterV1 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@_N@Z
    void StartActivity(int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ
    ~DismissControlCenterV1();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ControlCenterUITelemetry::ControlCenterTelemetry
