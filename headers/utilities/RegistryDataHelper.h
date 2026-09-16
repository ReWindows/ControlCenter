#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
class RegistryDataHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBool@RegistryDataHelper@@QEBAJPEB_WHPEAH@Z
    long ReadBool(wchar_t const *, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDynamicString@RegistryDataHelper@@QEBAJPEB_W0PEAPEA_W@Z
    long ReadDynamicString(wchar_t const *, wchar_t const *, wchar_t * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteString@RegistryDataHelper@@QEAAJPEB_W00@Z
    long WriteString(wchar_t const *, wchar_t const *, wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryDataHelper@@QEAA@XZ
    ~RegistryDataHelper();
};
