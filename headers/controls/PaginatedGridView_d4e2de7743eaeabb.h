#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 25 member(s).
namespace winrt::ControlCenter::implementation {
class PaginatedGridView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRowsPerPageFromMaxHeight@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXN@Z
    void CalculateRowsPerPageFromMaxHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Group@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUQuickActionGroup@34@@Z
    void Group(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfPages@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAHXZ
    int NumberOfPages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragItemsCompleted@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UDragItemsCompletedEventArgs@Controls@Xaml@UI@74@@Z
    void OnDragItemsCompleted(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragItemsStarting@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UDragItemsStartingEventArgs@Controls@Xaml@UI@74@@Z
    void OnDragItemsStarting(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBURoutedEventArgs@Xaml@UI@74@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridViewGettingFocus@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUUIElement@Xaml@UI@Windows@4@UGettingFocusEventArgs@Input@6784@@Z
    void OnRootGridViewGettingFocus(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridViewKeyDown@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UKeyRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnRootGridViewKeyDown(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridViewManipulationDelta@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UManipulationDeltaRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnRootGridViewManipulationDelta(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridViewManipulationStarted@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UManipulationStartedRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnRootGridViewManipulationStarted(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UScrollViewerViewChangedEventArgs@Controls@Xaml@UI@74@@Z
    void OnScrollViewerViewChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSensorDragOver@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UDragEventArgs@Xaml@UI@74@@Z
    void OnSensorDragOver(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWheelChanged@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void OnWheelChanged(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PaginatedGridView@implementation@ControlCenter@winrt@@QEAA@XZ
    PaginatedGridView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuickActionsPagerVisibility@PaginatedGridView@implementation@ControlCenter@winrt@@QEAA?AW4Visibility@Xaml@UI@Windows@4@XZ
    int QuickActionsPagerVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowsPerPage@PaginatedGridView@implementation@ControlCenter@winrt@@QEAAXH@Z
    void RowsPerPage(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PaginatedGridView@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~PaginatedGridView();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextEnabledQuickAction@PaginatedGridView@implementation@ControlCenter@winrt@@AEAA?AUGridViewItem@Controls@Xaml@UI@Windows@4@II_N@Z
    WindissectOpaque GetNextEnabledQuickAction(unsigned int, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementWithinGridView@PaginatedGridView@implementation@ControlCenter@winrt@@AEAA_NAEBUDependencyObject@Xaml@UI@Windows@4@@Z
    bool IsElementWithinGridView(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayedQuickActionsVectorChanged@PaginatedGridView@implementation@ControlCenter@winrt@@AEAAXU?$IObservableVector@UQuickActionViewModel@ControlCenter@winrt@@@Collections@Foundation@Windows@4@UIVectorChangedEventArgs@6784@@Z
    void OnDisplayedQuickActionsVectorChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PaginatedGridView@implementation@ControlCenter@winrt@@AEAAXUhstring@4@@Z
    void OnPropertyChanged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPageImpl@PaginatedGridView@implementation@ControlCenter@winrt@@AEAAXH_N@Z
    void SetCurrentPageImpl(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollHeight@PaginatedGridView@implementation@ControlCenter@winrt@@AEAAXXZ
    void UpdateScrollHeight();
};
} // namespace winrt::ControlCenter::implementation
