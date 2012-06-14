/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class NSString, NSSet, UIColor, UIImage;

@interface UINavigationButton : UIButton {
@private
	NSSet *_possibleTitles;	// 176 = 0xb0
	int _style;	// 180 = 0xb4
	int _barStyle;	// 184 = 0xb8
	UIColor *_navigationBarTintColor;	// 188 = 0xbc
	CGSize _boundsAdjustment;	// 192 = 0xc0
	id _appearanceStorage;	// 200 = 0xc8
	NSSet *_possibleSystemItems;	// 204 = 0xcc
	unsigned _size : 2;	// 208 = 0xd0
	unsigned _pad : 30;	// 208 = 0xd0
	float _minimumWidth;	// 212 = 0xd4
	float _maximumWidth;	// 216 = 0xd8
}
@property(assign, nonatomic) int barStyle;	// G=0x3024b815; S=0x300dee2d; @synthesize=_barStyle
@property(assign, nonatomic) int controlSize;	// G=0x3024b1c9; S=0x300dedf1; 
@property(retain, nonatomic) UIImage *image;	// G=0x300dc745; S=0x301a7731; 
@property(assign, nonatomic) float maximumWidth;	// G=0x3024b835; S=0x300de7b5; @synthesize=_maximumWidth
@property(assign, nonatomic) float minimumWidth;	// G=0x3024b825; S=0x300de771; @synthesize=_minimumWidth
@property(assign, nonatomic) int style;	// G=0x300ddf9d; S=0x301a7779; @synthesize=_style
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300df4a1; S=0x300dee91; 
@property(retain, nonatomic) NSString *title;	// G=0x300de385; S=0x301a7719; 
+ (id)defaultFont;	// 0x300dc759
- (id)initWithImage:(id)image;	// 0x3024ab55
- (id)initWithImage:(id)image style:(int)style;	// 0x301dedbd
- (id)initWithImage:(id)image width:(float)width style:(int)style;	// 0x3024ab21
- (id)initWithImage:(id)image width:(float)width style:(int)style applyBezel:(BOOL)bezel forBarStyle:(int)barStyle buttonItemStyle:(int)style6;	// 0x300df465
- (id)initWithTitle:(id)title;	// 0x3024aaf5
- (id)initWithTitle:(id)title possibleTitles:(id)titles style:(int)style;	// 0x300dc3b9
- (id)initWithTitle:(id)title style:(int)style;	// 0x301bb805
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles possibleSystemItems:(id)items tintColor:(id)color applyBezel:(BOOL)bezel forButtonItemStyle:(int)buttonItemStyle;	// 0x3024a839
- (id)initWithValue:(id)value width:(float)width style:(int)style barStyle:(int)style4 possibleTitles:(id)titles tintColor:(id)color;	// 0x300dc3f1
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3024b4a1
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b80d
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b805
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3014fded
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3024b1e5
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b4a9
- (void)_UIAppearance_setTintColor:(id)color;	// 0x3014ffc5
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b625
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3014fe25
- (void)_adjustBounds;	// 0x300de4b5
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x300de86d
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x3024b3f1
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x300deefd
- (int)_barButtonItemStyle;	// 0x3024a815
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x3024b1dd
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x3024ac25
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x300de07d
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x3024a761
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x3024a785
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x3024ac29
- (id)_scriptingInfo;	// 0x301c2881
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3024b4a5
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b811
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b809
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3014fdd9
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3024b3e1
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b615
- (void)_setBoundsAdjustment:(CGSize)adjustment;	// 0x300de7fd
- (void)_setTintColor:(id)color;	// 0x3014ffb1
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3024b791
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3014fe15
- (id)_tintColor;	// 0x300dd891
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3024b7a1
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x3024b455
- (void)_updateContentInsets;	// 0x300dde5d
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x3024a795
- (void)_updateStyle;	// 0x300dd1e5
- (void)_updateTitleColorsForState:(unsigned)state;	// 0x300de1d5
// declared property getter: - (int)barStyle;	// 0x3024b815
- (BOOL)contentsEqualTo:(id)to withStyle:(int)style;	// 0x3024ab81
// declared property getter: - (int)controlSize;	// 0x3024b1c9
- (void)dealloc;	// 0x300f4481
// declared property getter: - (id)image;	// 0x300dc745
// declared property getter: - (float)maximumWidth;	// 0x3024b835
// declared property getter: - (float)minimumWidth;	// 0x3024b825
// declared property setter: - (void)setBarStyle:(int)style;	// 0x300dee2d
// declared property setter: - (void)setControlSize:(int)size;	// 0x300dedf1
- (void)setEnabled:(BOOL)enabled;	// 0x3024b115
- (void)setFrame:(CGRect)frame;	// 0x300dc63d
- (void)setHighlighted:(BOOL)highlighted;	// 0x3015e3c9
// declared property setter: - (void)setImage:(id)image;	// 0x301a7731
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x300de7b5
// declared property setter: - (void)setMinimumWidth:(float)width;	// 0x300de771
- (void)setNavigationBarTintColor:(id)color;	// 0x300deea5
// declared property setter: - (void)setStyle:(int)style;	// 0x301a7779
// declared property setter: - (void)setTintColor:(id)color;	// 0x300dee91
// declared property setter: - (void)setTitle:(id)title;	// 0x301a7719
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300de355
// declared property getter: - (int)style;	// 0x300ddf9d
// declared property getter: - (id)tintColor;	// 0x300df4a1
// declared property getter: - (id)title;	// 0x300de385
@end

