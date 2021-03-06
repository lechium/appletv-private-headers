/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIImageView, UIWindow, UIView;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController {
@private
	UIWindow *_window;	// 132 = 0x84
	UIView *_statusBar;	// 136 = 0x88
	UIImageView *_statusBarBackgroundImage;	// 140 = 0x8c
	UIWindow *_leftBottomCorner;	// 144 = 0x90
	UIWindow *_rightBottomCorner;	// 148 = 0x94
}
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x321f0dfd; @synthesize=_window
+ (double)statusBarOrientationAnimationDurationFrom:(int)from to:(int)to;	// 0x321f1701
- (id)init;	// 0x321f2819
- (void)_changeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x321f1469
- (void)_changeStatusBarOrientationFrom:(int)from toOrientation:(int)orientation;	// 0x321f14fd
- (void)_prepareForZoom:(BOOL)zoom;	// 0x321f1a49
- (void)_setStatusBarBackgroundImageForOrientation:(int)orientation;	// 0x321f28dd
- (void)_statusBarHideAnimationFinished:(id)finished finished:(BOOL)finished2 hidden:(id)hidden;	// 0x321f1785
- (CGSize)_statusBarSizeForOrientation:(int)orientation;	// 0x321f3661
- (void)_updateCornersWithOrientation:(int)orientation;	// 0x321f334d
- (void)_updateStatusBarGeometryWithOrientation:(int)orientation slideUp:(BOOL)up expandWindowForRotationAnimations:(BOOL)rotationAnimations;	// 0x321f4429
- (void)_updateStatusBarWithOrientation:(int)orientation style:(int)style hidden:(BOOL)hidden slideUp:(BOOL)up expandWindowForRotationAnimations:(BOOL)rotationAnimations;	// 0x321f17d1
- (void)_zoom:(BOOL)zoom animated:(BOOL)animated;	// 0x321f18e9
- (void)dealloc;	// 0x321f274d
- (BOOL)isClassicControlWindow:(id)window;	// 0x321f0dc1
- (id)loadCorner:(BOOL)corner cornerImage:(id)image cornersFrame:(CGRect)frame;	// 0x321f41f5
- (void)loadView;	// 0x321f295d
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x321f1ca1
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x321f1a9d
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x321f1ba9
// declared property getter: - (id)window;	// 0x321f0dfd
@end

