/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAutoRotatingWindow.h"
#import "UIKit-Structs.h"


@interface UITextEffectsWindow : UIAutoRotatingWindow {
	unsigned long _activeEffectsCount;	// 136 = 0x88
	BOOL _inDealloc;	// 140 = 0x8c
}
+ (void)_releaseSharedInstances;	// 0x3533c729
+ (id)sharedTextEffectsWindow;	// 0x351367d5
+ (id)sharedTextEffectsWindowAboveStatusBar;	// 0x3533c639
- (id)initWithFrame:(CGRect)frame;	// 0x351368d9
- (void)_didRemoveSubview:(id)subview;	// 0x351955a9
- (BOOL)_disableViewScaling;	// 0x3533c5f1
- (void)bringSubviewToFront:(id)front;	// 0x3533c621
- (void)dealloc;	// 0x3533c5b1
- (void)delayHideWindow;	// 0x3533c5f5
- (void)didAddSubview:(id)subview;	// 0x3513a625
- (BOOL)isInternalWindow;	// 0x35144d9d
- (void)matchDeviceOrientation;	// 0x351369f1
- (void)sendSubviewToBack:(id)back;	// 0x3533c625
- (void)sortSubviews;	// 0x3513a6b9
- (void)updateForOrientation:(int)orientation;	// 0x35136a2d
- (void)updateSubviewOrdering;	// 0x3533c629
@end
