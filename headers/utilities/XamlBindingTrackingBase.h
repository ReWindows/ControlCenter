#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 6 member(s).
namespace winrt::ControlCenter::implementation {
class XamlBindingTrackingBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@XamlBindingTrackingBase@implementation@ControlCenter@winrt@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@@Z
    void DependencyPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@XamlBindingTrackingBase@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUPropertyChangedEventArgs@Data@Xaml@UI@74@@Z
    void PropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDependencyPropertyChangedListener@XamlBindingTrackingBase@implementation@ControlCenter@winrt@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@4@AEBUDependencyProperty@6784@AEAU?$weak_ref@UDependencyObject@Xaml@UI@Windows@winrt@@@4@AEA_J@Z
    void UpdateDependencyPropertyChangedListener(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePropertyChangedListener@XamlBindingTrackingBase@implementation@ControlCenter@winrt@@QEAAXAEBUINotifyPropertyChanged@Data@Xaml@UI@Windows@4@AEAU?$weak_ref@UINotifyPropertyChanged@Data@Xaml@UI@Windows@winrt@@@4@AEAUevent_token@4@@Z
    void UpdatePropertyChangedListener(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@XamlBindingTrackingBase@implementation@ControlCenter@winrt@@QEAAXAEBUIInspectable@Foundation@Windows@4@AEBUIVectorChangedEventArgs@Collections@674@@Z
    void VectorChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::ControlCenter::implementation
