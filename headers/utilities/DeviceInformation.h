#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 2 member(s).
namespace winrt::Windows::Devices::Enumeration {
class DeviceInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromIdAsync@DeviceInformation@Enumeration@Devices@Windows@winrt@@SA@AEBUhstring@param@5@@Z
    static CreateFromIdAsync(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceInformation@Enumeration@Devices@Windows@winrt@@QEAA@XZ
    ~DeviceInformation();
};
} // namespace winrt::Windows::Devices::Enumeration
