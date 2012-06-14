/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIStatusBarAdornmentWindow.h"

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIClassicCornersWindow : UIStatusBarAdornmentWindow {
@private
	int _visibleCorners;	// 144 = 0x90
	UIView *_contentView;	// 148 = 0x94
	unsigned _hiddenStatusBarStyles;	// 152 = 0x98
	NSArray *_cornerViews;	// 156 = 0x9c
	BOOL _hidesWithStatusBar;	// 160 = 0xa0
	CGRect _cornerFrame;	// 164 = 0xa4
}
@property(assign, nonatomic) CGRect cornerFrame;	// G=0x303710d9; S=0x303708ad; @synthesize=_cornerFrame
@property(assign, nonatomic) BOOL hidesWithStatusBar;	// G=0x303710b9; S=0x303710c9; @synthesize=_hidesWithStatusBar
@property(readonly, assign, nonatomic) int visibleCorners;	// G=0x303710a9; @synthesize=_visibleCorners
- (id)initWithFrame:(CGRect)frame andVisibleCorners:(int)corners;	// 0x3037076d
- (id)_cornerViewWithImage:(id)image forCorner:(int)corner;	// 0x303709a1
- (BOOL)_hidesWithStatusBarStyle:(int)statusBarStyle;	// 0x30370985
- (void)_setCorners:(unsigned)corners visible:(BOOL)visible;	// 0x30370d29
- (void)_updateForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x30370dd9
// declared property getter: - (CGRect)cornerFrame;	// 0x303710d9
- (void)dealloc;	// 0x30370849
// declared property getter: - (BOOL)hidesWithStatusBar;	// 0x303710b9
- (void)layoutSubviews;	// 0x30370b0d
// declared property setter: - (void)setCornerFrame:(CGRect)frame;	// 0x303708ad
// declared property setter: - (void)setHidesWithStatusBar:(BOOL)statusBar;	// 0x303710c9
- (void)setHidesWithStatusBarStyle:(int)statusBarStyle;	// 0x30370969
// declared property getter: - (int)visibleCorners;	// 0x303710a9
@end
