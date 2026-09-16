#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 4 member(s).
namespace winrt::ControlCenter {
class EditModeController {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@EditModeController@ControlCenter@winrt@@SAAEAV123@XZ
    static WindissectOpaque & GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InEditMode@EditModeController@ControlCenter@winrt@@QEAAX_N@Z
    void InEditMode(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EditModeController@ControlCenter@winrt@@QEAA@XZ
    ~EditModeController();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EditModeController@ControlCenter@winrt@@AEAA@XZ
    EditModeController();
};
} // namespace winrt::ControlCenter
