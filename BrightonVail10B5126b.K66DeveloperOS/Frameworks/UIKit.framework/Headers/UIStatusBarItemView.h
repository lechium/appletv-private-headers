/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIStatusBarItem, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView {
	UIStatusBarItem *_item;	// 84 = 0x54
	int _foregroundStyle;	// 88 = 0x58
	BOOL _visible;	// 92 = 0x5c
	BOOL _allowsUpdates;	// 93 = 0x5d
	UIStatusBarLayoutManager *_layoutManager;	// 96 = 0x60
	float _currentOverlap;	// 100 = 0x64
	CGContextRef _imageContext;	// 104 = 0x68
	float _imageContextScale;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL allowsUpdates;	// G=0x32aefccd; S=0x32aef84d; @synthesize=_allowsUpdates
@property(assign) float currentOverlap;	// G=0x32af0ce1; S=0x32b2c769; converted property
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x32af0d25; @synthesize=_foregroundStyle
@property(readonly, assign, nonatomic) UIStatusBarItem *item;	// G=0x32af09e5; @synthesize=_item
@property(assign, nonatomic) UIStatusBarLayoutManager *layoutManager;	// G=0x32e07e25; S=0x32b403fd; @synthesize=_layoutManager
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x32af0a2d; S=0x32b2cd85; @synthesize=_visible
+ (id)createViewForItem:(id)item withData:(id)data actions:(int)actions foregroundStyle:(int)style;	// 0x32b40071
+ (id)imageNamed:(id)named forForegroundStyle:(int)foregroundStyle;	// 0x32b35e19
- (id)initWithItem:(id)item data:(id)data actions:(int)actions style:(int)style;	// 0x32b4011d
- (void)_drawText:(id)text inRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing textAlignment:(int)alignment;	// 0x32af9fe9
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x32c6da85
// declared property getter: - (BOOL)allowsUpdates;	// 0x32aefccd
- (BOOL)animatesDataChange;	// 0x32e07db1
- (BOOL)animatesFrameChange;	// 0x32b4025d
- (void)beginImageContextWithMinimumWidth:(float)minimumWidth;	// 0x32af9ab1
- (id)contentsImageForStyle:(int)style;	// 0x32e07db9
- (float)currentLeftOverlap;	// 0x32b2cc49
// converted property getter: - (float)currentOverlap;	// 0x32af0ce1
- (float)currentRightOverlap;	// 0x32b2b1ad
- (void)dealloc;	// 0x32b35991
- (id)description;	// 0x32e07dbd
- (void)drawText:(id)text forStyle:(int)style;	// 0x32af9bb9
- (void)drawText:(id)text forStyle:(int)style forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x32af9bf1
- (void)endImageContext;	// 0x32afa2bd
- (float)extraLeftPadding;	// 0x32af0ca9
- (float)extraRightPadding;	// 0x32af0e55
// declared property getter: - (int)foregroundStyle;	// 0x32af0d25
- (id)imageFromImageContextClippedToWidth:(float)width;	// 0x32afa115
// declared property getter: - (BOOL)isVisible;	// 0x32af0a2d
// declared property getter: - (id)item;	// 0x32af09e5
// declared property getter: - (id)layoutManager;	// 0x32e07e25
- (float)maximumOverlap;	// 0x32e07da9
- (void)performPendedActions;	// 0x32af0f95
// declared property setter: - (void)setAllowsUpdates:(BOOL)updates;	// 0x32aef84d
// converted property setter: - (void)setCurrentOverlap:(float)overlap;	// 0x32b2c769
// declared property setter: - (void)setLayoutManager:(id)manager;	// 0x32b403fd
- (float)setStatusBarData:(id)data actions:(int)actions;	// 0x32aefc71
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x32b2cd85
- (void)setVisible:(BOOL)visible frame:(CGRect)frame duration:(double)duration;	// 0x32b2cc71
- (float)shadowPadding;	// 0x32af0cf1
- (float)shadowPaddingForStyle:(int)style;	// 0x32af0d39
- (float)standardPadding;	// 0x32af0c65
- (int)textAlignment;	// 0x32af9f71
- (id)textColorForStyle:(int)style;	// 0x32afa0ed
- (id)textFont;	// 0x32af9a49
- (float)updateContentsAndWidth;	// 0x32af9761
- (BOOL)updateForNewData:(id)newData actions:(int)actions;	// 0x32c5e625
- (BOOL)usesSmallerTextFont;	// 0x32af9a95
@end

