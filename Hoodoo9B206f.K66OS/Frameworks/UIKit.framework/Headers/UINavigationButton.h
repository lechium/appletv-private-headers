/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIColor, UIImage, NSString, NSSet;

@interface UINavigationButton : UIButton {
@private
	NSSet *_possibleTitles;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	int _barStyle;	// 148 = 0x94
	UIColor *_navigationBarTintColor;	// 152 = 0x98
	CGSize _boundsAdjustment;	// 156 = 0x9c
	id _appearanceStorage;	// 164 = 0xa4
	unsigned _size : 2;	// 168 = 0xa8
	unsigned _pad : 30;	// 168 = 0xa8
	float _minimumWidth;	// 172 = 0xac
	float _maximumWidth;	// 176 = 0xb0
}
@property(assign, nonatomic) int barStyle;	// G=0x354d61f5; S=0x3535dfc5; @synthesize=_barStyle
@property(assign, nonatomic) int controlSize;	// G=0x354d5dc9; S=0x3535df8d; 
@property(retain, nonatomic) UIImage *image;	// G=0x3535b565; S=0x35433fcd; 
@property(assign, nonatomic) float maximumWidth;	// G=0x354d6215; S=0x3535d979; @synthesize=_maximumWidth
@property(assign, nonatomic) float minimumWidth;	// G=0x354d6205; S=0x3535d935; @synthesize=_minimumWidth
@property(assign, nonatomic) int style;	// G=0x3535cd8d; S=0x35434015; @synthesize=_style
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3535ec1d; S=0x3535e025; 
@property(retain, nonatomic) NSString *title;	// G=0x3535d541; S=0x35433fb9; 
+ (id)defaultFont;	// 0x3535b579
- (id)initWithImage:(id)image;	// 0x354d5cfd
- (id)initWithImage:(id)image style:(int)style;	// 0x3546efa9
- (id)initWithImage:(id)image width:(float)width style:(int)style;	// 0x354d5ccd
- (id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;	// 0x3535ebe5
- (id)initWithTitle:(id)title;	// 0x354d5ca5
- (id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;	// 0x3535afb9
- (id)initWithTitle:(id)title style:(int)style;	// 0x35448a39
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;	// 0x3535afed
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;	// 0x3535b029
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x354d5e81
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x354d61ed
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x354d61e5
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x353d7f35
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x354d5e89
- (void)_UIAppearance_setTintColor:(id)color;	// 0x353d826d
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x354d5ff9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x353d80dd
- (void)_adjustBounds;	// 0x3535d67d
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x3535da21
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x354d5de1
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3535e08d
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x354d5ddd
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x3535ce59
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x354d5c69
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x354d5c95
- (id)_scriptingInfo;	// 0x3544fba5
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x354d5e85
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x354d61f1
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x354d61e9
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x353d7f25
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x354d5fe9
- (void)_setBoundsAdjustment:(CGSize)adjustment;	// 0x3535d9bd
- (void)_setTintColor:(id)color;	// 0x353d825d
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x354d6171
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x353d80cd
- (id)_tintColor;	// 0x3535c5b9
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x354d6181
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x354d5e35
- (void)_updateContentInsets;	// 0x3535cc59
- (void)_updateStyle;	// 0x3535befd
- (void)_updateTitleColorsForState:(unsigned)state;	// 0x3535d055
// declared property getter: - (int)barStyle;	// 0x354d61f5
- (BOOL)contentsEqualTo:(id)to withStyle:(int)style;	// 0x354d5d25
// declared property getter: - (int)controlSize;	// 0x354d5dc9
- (void)dealloc;	// 0x35374bb1
// declared property getter: - (id)image;	// 0x3535b565
// declared property getter: - (float)maximumWidth;	// 0x354d6215
// declared property getter: - (float)minimumWidth;	// 0x354d6205
// declared property setter: - (void)setBarStyle:(int)style;	// 0x3535dfc5
// declared property setter: - (void)setControlSize:(int)size;	// 0x3535df8d
- (void)setFrame:(CGRect)frame;	// 0x3535b475
- (void)setHighlighted:(BOOL)highlighted;	// 0x353e73c9
// declared property setter: - (void)setImage:(id)image;	// 0x35433fcd
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x3535d979
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x3535d935
- (void)setNavigationBarTintColor:(id)color;	// 0x3535e035
// declared property setter: - (void)setStyle:(int)style;	// 0x35434015
// declared property setter: - (void)setTintColor:(id)color;	// 0x3535e025
// declared property setter: - (void)setTitle:(id)title;	// 0x35433fb9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3535d21d
// declared property getter: - (int)style;	// 0x3535cd8d
// declared property getter: - (id)tintColor;	// 0x3535ec1d
// declared property getter: - (id)title;	// 0x3535d541
@end
