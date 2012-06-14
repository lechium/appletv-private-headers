/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIStatusBarViewController, UIZoomViewController, UIImageView, UIWindow;

@interface UIClassicController : NSObject {
@private
	UIWindow *_window;	// 4 = 0x4
	UIImageView *_imageView;	// 8 = 0x8
	UIStatusBarViewController *_statusBarViewController;	// 12 = 0xc
	UIZoomViewController *_zoomViewController;	// 16 = 0x10
	BOOL _masksToWindowBounds;	// 20 = 0x14
	BOOL _hidesClassicChrome;	// 21 = 0x15
	BOOL _hidesStatusBarFiller;	// 22 = 0x16
}
@property(assign, nonatomic) BOOL drawsClassicChrome;	// G=0x30317edd; S=0x30317f21; 
@property(assign, nonatomic) BOOL drawsStatusBarFiller;	// G=0x30318801; S=0x30318819; 
@property(assign, nonatomic) BOOL masksToWindowBounds;	// G=0x303187e1; S=0x30317ff9; 
@property(assign, nonatomic, getter=isZoomed) BOOL zoomed;	// G=0x3031796d; S=0x30317991; 
+ (id)sharedClassicController;	// 0x30031ae9
- (id)_chromeImageWithOrientation:(int)orientation;	// 0x30317749
- (void)_classicChangeStatusBarOrientation:(id)orientation;	// 0x30317b89
- (void)_classicChangeStatusBarOrientationFinished:(id)finished finished:(BOOL)finished2 context:(void *)context;	// 0x30317ec9
- (void)_finishZoom:(BOOL)zoom;	// 0x3031793d
- (void)_initializeStatusBarOrientation;	// 0x303179a5
- (void)_setupWindow;	// 0x3031746d
- (BOOL)_shouldHideStatusBar;	// 0x30317ef5
- (void)_updateImageView:(id)view orientation:(int)orientation;	// 0x30317771
- (id)_window;	// 0x30317739
- (void)dealloc;	// 0x30317319
// declared property getter: - (BOOL)drawsClassicChrome;	// 0x30317edd
// declared property getter: - (BOOL)drawsStatusBarFiller;	// 0x30318801
- (BOOL)isClassicControlWindow:(id)window;	// 0x30317401
// declared property getter: - (BOOL)isZoomed;	// 0x3031796d
// declared property getter: - (BOOL)masksToWindowBounds;	// 0x303187e1
// declared property setter: - (void)setDrawsClassicChrome:(BOOL)chrome;	// 0x30317f21
// declared property setter: - (void)setDrawsStatusBarFiller:(BOOL)filler;	// 0x30318819
// declared property setter: - (void)setMasksToWindowBounds:(BOOL)windowBounds;	// 0x30317ff9
- (void)setMasksToWindowBounds:(BOOL)windowBounds;	// 0x303187f1
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x303173a1
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x303173e1
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x303173c1
// declared property setter: - (void)setZoomed:(BOOL)zoomed;	// 0x30317991
- (void)setZoomed:(BOOL)zoomed animated:(BOOL)animated;	// 0x303180b5
@end
