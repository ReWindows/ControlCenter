#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 5 member(s).
namespace QuickActionsTelemetry {
class EditCommandInvoked {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EditCommandInvoked@QuickActionsTelemetry@@QEAAXW4EditCommand@2@@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EditCommandInvoked@QuickActionsTelemetry@@QEAA@XZ
    ~EditCommandInvoked();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EditCommandInvoked@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EditCommandInvoked@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
