#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace ControlCenterUITelemetry::ControlCenterTelemetry {
class LaunchControlCenterV1 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@_N@Z
    void StartActivity(int, int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ
    ~LaunchControlCenterV1();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ControlCenterUITelemetry::ControlCenterTelemetry
