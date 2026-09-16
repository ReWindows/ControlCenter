#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 3 member(s).
namespace winrt::Windows::Foundation {
class PropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInt32@PropertyValue@Foundation@Windows@winrt@@SA@H@Z
    static CreateInt32(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@PropertyValue@Foundation@Windows@winrt@@SA@AEBUhstring@param@4@@Z
    static CreateString(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32@PropertyValue@Foundation@Windows@winrt@@SA@I@Z
    static CreateUInt32(unsigned int);
};
} // namespace winrt::Windows::Foundation
