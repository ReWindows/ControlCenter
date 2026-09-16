#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 15 member(s).
namespace winrt::ControlCenter::implementation {
class AsyncSlider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncSlider@implementation@ControlCenter@winrt@@QEAA@XZ
    AsyncSlider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncValue@AsyncSlider@implementation@ControlCenter@winrt@@QEAAXN@Z
    void AsyncValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncValue@AsyncSlider@implementation@ControlCenter@winrt@@QEAANXZ
    double AsyncValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncValueProperty@AsyncSlider@implementation@ControlCenter@winrt@@SA?AUDependencyProperty@Xaml@UI@Windows@4@XZ
    static WindissectOpaque AsyncValueProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AsyncSlider@implementation@ControlCenter@winrt@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AsyncSlider@implementation@ControlCenter@winrt@@QEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@4@@Z
    void OnKeyDown(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncSlider@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~AsyncSlider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@AsyncSlider@implementation@ControlCenter@winrt@@AEAAXXZ
    void EnsureDependencyProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerWheelChanged@AsyncSlider@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@UPointerRoutedEventArgs@Input@Xaml@UI@74@@Z
    void HandlePointerWheelChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleValueChanged@AsyncSlider@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@URangeBaseValueChangedEventArgs@Primitives@Controls@Xaml@UI@74@@Z
    void HandleValueChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSliderContainerContextRequested@AsyncSlider@implementation@ControlCenter@winrt@@AEAAXUUIElement@Xaml@UI@Windows@4@UContextRequestedEventArgs@Input@6784@@Z
    void OnSliderContainerContextRequested(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTick@AsyncSlider@implementation@ControlCenter@winrt@@AEAAXUIInspectable@Foundation@Windows@4@0@Z
    void OnTick(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnPropertyChanged@AsyncSlider@implementation@ControlCenter@winrt@@CAXUDependencyObject@Xaml@UI@Windows@4@UDependencyPropertyChangedEventArgs@6784@@Z
    static void s_OnPropertyChanged(WindissectOpaque, WindissectOpaque);
};
} // namespace winrt::ControlCenter::implementation
