#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 17 member(s).
namespace winrt::ControlCenter::implementation {
class FilteredQuickActionsVector {
public:
    class FilterInfo;
    class VectorChangedEventArgs;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@@Z
    void Append(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXXZ
    void Clear();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAA@U?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@3@Uhstring@3@@Z
    FilteredQuickActionsVector(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAA_NAEBUIInspectable@Foundation@Windows@4@AEAI@Z
    bool IndexOf(WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXIAEBUIInspectable@Foundation@Windows@4@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXI@Z
    void RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXXZ
    void RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@QEAAXIAEBUIInspectable@Foundation@Windows@4@@Z
    void SetAt(unsigned int, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FilteredQuickActionsVector@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~FilteredQuickActionsVector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilteredIndexFromUnfilteredIndex@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEBAII@Z
    unsigned int FilteredIndexFromUnfilteredIndex(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFilteredListFromUnfiltered@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEAAXXZ
    void InitializeFilteredListFromUnfiltered();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIncludedByFilter@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEAA_NAEBUQuickActionViewModel@34@@Z
    bool IsIncludedByFilter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPropertyChangedEventArgs@Data@Xaml@UI@74@@Z
    void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVectorChanged@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEAAXAEBU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@AEBUIVectorChangedEventArgs@6784@@Z
    void OnVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@FilteredQuickActionsVector@implementation@ControlCenter@winrt@@AEAAXW4CollectionChange@Collections@Foundation@Windows@4@I@Z
    void RaiseVectorChanged(int, unsigned int);
};
} // namespace winrt::ControlCenter::implementation
