#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ControlCenter.dll by Windissect. 13 member(s).
namespace winrt::ControlCenter::implementation {
class InputDrivenAnimations {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDrivenAnimations@implementation@ControlCenter@winrt@@QEAA@UVisual@Composition@UI@Windows@3@@Z
    InputDrivenAnimations(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDragToDismiss@InputDrivenAnimations@implementation@ControlCenter@winrt@@QEAAXI@Z
    void StartDragToDismiss(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFollowFingerInvoke@InputDrivenAnimations@implementation@ControlCenter@winrt@@QEAAXUShellViewAnimationProperties@Shell@UI@WindowsUdk@4@@Z
    void StartFollowFingerInvoke(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOverdrag@InputDrivenAnimations@implementation@ControlCenter@winrt@@QEAAXUShellViewAnimationProperties@Shell@UI@WindowsUdk@4@@Z
    void StartOverdrag(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDrivenAnimations@implementation@ControlCenter@winrt@@UEAA@XZ
    virtual ~InputDrivenAnimations();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlickAnimationCompleted@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAXW4AnimationType@1234@@Z
    void FlickAnimationCompleted(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactor@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAMXZ
    float GetScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputDraggingOperationStarted@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAXUInputGestureOperation@Input@UI@WindowsUdk@4@UInputGestureOperationEventArgs@6784@@Z
    void InputDraggingOperationStarted(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnimation@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAXXZ
    void ResetAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInputDrivenAnimation@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAXMAEBUGestureAnimationData@Input@UI@WindowsUdk@4@W4AnimationType@1234@@Z
    void StartInputDrivenAnimation(float, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInputDrivenAnimation2@InputDrivenAnimations@implementation@ControlCenter@winrt@@AEAAXMAEBUGestureAnimationData@Input@UI@WindowsUdk@4@W4AnimationType@1234@@Z
    void StartInputDrivenAnimation2(float, WindissectOpaque const &, int);
};
} // namespace winrt::ControlCenter::implementation
