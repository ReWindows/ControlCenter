#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 11 member(s).
namespace winrt::ControlCenter::implementation {
class XamlBindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataContextChanged@XamlBindings@implementation@ControlCenter@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUDataContextChangedEventArgs@6784@@Z
    void DataContextChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@XamlBindings@implementation@ControlCenter@winrt@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Loading@XamlBindings@implementation@ControlCenter@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@AEBUIInspectable@Foundation@84@@Z
    void Loading(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBinding@XamlBindings@implementation@ControlCenter@winrt@@QEAA_NI@Z
    bool ProcessBinding(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindings@XamlBindings@implementation@ControlCenter@winrt@@QEAAHAEBUContainerContentChangingEventArgs@Controls@Xaml@UI@Windows@4@@Z
    int ProcessBindings(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindings@XamlBindings@implementation@ControlCenter@winrt@@UEAAXAEBUIInspectable@Foundation@Windows@4@HHAEAH@Z
    virtual void ProcessBindings(WindissectOpaque const &, int, int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@XamlBindings@implementation@ControlCenter@winrt@@UEAAXXZ
    virtual void Recycle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeForDataContextChanged@XamlBindings@implementation@ControlCenter@winrt@@QEAAXAEBUFrameworkElement@Xaml@UI@Windows@4@@Z
    void SubscribeForDataContextChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBindings@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~XamlBindings();
};
} // namespace winrt::ControlCenter::implementation
