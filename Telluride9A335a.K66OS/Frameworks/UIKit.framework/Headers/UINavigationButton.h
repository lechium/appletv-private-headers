/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class NSSet, UIImage, NSString, UIColor;

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
@property(assign, nonatomic) int barStyle;	// G=0x33b49bf5; S=0x339d2a31; @synthesize=_barStyle
@property(assign, nonatomic) int controlSize;	// G=0x33b497c9; S=0x339d29f9; 
@property(retain, nonatomic) UIImage *image;	// G=0x339d002d; S=0x33aa868d; 
@property(assign, nonatomic) float maximumWidth;	// G=0x33b49c15; S=0x339d23e5; @synthesize=_maximumWidth
@property(assign, nonatomic) float minimumWidth;	// G=0x33b49c05; S=0x339d23a1; @synthesize=_minimumWidth
@property(assign, nonatomic) int style;	// G=0x339d17f9; S=0x33aa86d5; @synthesize=_style
@property(retain, nonatomic) UIColor *tintColor;	// G=0x339d36ed; S=0x339d2a91; 
@property(retain, nonatomic) NSString *title;	// G=0x339d1fad; S=0x33aa8679; 
+ (id)defaultFont;	// 0x339d0041
- (id)initWithImage:(id)image;	// 0x33b496fd
- (id)initWithImage:(id)image style:(int)style;	// 0x33ae3665
- (id)initWithImage:(id)image width:(float)width style:(int)style;	// 0x33b496cd
- (id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;	// 0x339d36b5
- (id)initWithTitle:(id)title;	// 0x33b496a5
- (id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;	// 0x339cf9ed
- (id)initWithTitle:(id)title style:(int)style;	// 0x33abd105
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;	// 0x339cfa21
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;	// 0x339cfa5d
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33b49881
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49bed
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49be5
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33a4d331
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49889
- (void)_UIAppearance_setTintColor:(id)color;	// 0x33a4d669
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33b499f9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33a4d4d9
- (void)_adjustBounds;	// 0x339d20e9
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x339d248d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x33b497e1
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x339d2af9
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x33b497dd
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x339d18c5
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x33b49669
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x33b49695
- (id)_scriptingInfo;	// 0x33ac4271
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33b49885
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49bf1
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49be9
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x33a4d321
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x33b499e9
- (void)_setBoundsAdjustment:(CGSize)adjustment;	// 0x339d2429
- (void)_setTintColor:(id)color;	// 0x33a4d659
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x33b49b71
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x33a4d4c9
- (id)_tintColor;	// 0x339d1081
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x33b49b81
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x33b49835
- (void)_updateContentInsets;	// 0x339d16c5
- (void)_updateStyle;	// 0x339d09c5
- (void)_updateTitleColorsForState:(unsigned)state;	// 0x339d1ac1
// declared property getter: - (int)barStyle;	// 0x33b49bf5
- (BOOL)contentsEqualTo:(id)to withStyle:(int)style;	// 0x33b49725
// declared property getter: - (int)controlSize;	// 0x33b497c9
- (void)dealloc;	// 0x339ea7ed
// declared property getter: - (id)image;	// 0x339d002d
// declared property getter: - (float)maximumWidth;	// 0x33b49c15
// declared property getter: - (float)minimumWidth;	// 0x33b49c05
// declared property setter: - (void)setBarStyle:(int)style;	// 0x339d2a31
// declared property setter: - (void)setControlSize:(int)size;	// 0x339d29f9
- (void)setFrame:(CGRect)frame;	// 0x339cff3d
- (void)setHighlighted:(BOOL)highlighted;	// 0x33a5c1b1
// declared property setter: - (void)setImage:(id)image;	// 0x33aa868d
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x339d23e5
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x339d23a1
- (void)setNavigationBarTintColor:(id)color;	// 0x339d2aa1
// declared property setter: - (void)setStyle:(int)style;	// 0x33aa86d5
// declared property setter: - (void)setTintColor:(id)color;	// 0x339d2a91
// declared property setter: - (void)setTitle:(id)title;	// 0x33aa8679
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x339d1c89
// declared property getter: - (int)style;	// 0x339d17f9
// declared property getter: - (id)tintColor;	// 0x339d36ed
// declared property getter: - (id)title;	// 0x339d1fad
@end

