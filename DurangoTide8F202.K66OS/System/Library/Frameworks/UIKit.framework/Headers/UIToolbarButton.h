/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIColor, UILabel, UIToolbarButtonBadge, UISelectionIndicatorView;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
@private
	CGRect _hitRect;	// 68 = 0x44
	UIView *_info;	// 84 = 0x54
	UILabel *_label;	// 88 = 0x58
	UIToolbarButtonBadge *_badge;	// 92 = 0x5c
	UISelectionIndicatorView *_selectedIndicator;	// 96 = 0x60
	int _barStyle;	// 100 = 0x64
	int _style;	// 104 = 0x68
	UIEdgeInsets _glowAdjust;	// 108 = 0x6c
	BOOL _onState;	// 124 = 0x7c
	BOOL _barHeight;	// 125 = 0x7d
	BOOL _badgeAnimated;	// 126 = 0x7e
	BOOL _bezel;	// 127 = 0x7f
	float _width;	// 128 = 0x80
	float _labelHeight;	// 132 = 0x84
	UIEdgeInsets _infoInsets;	// 136 = 0x88
	UIColor *_tintColor;	// 152 = 0x98
	BOOL _isAnimatedTrashButton;	// 156 = 0x9c
	BOOL _imageIsBackground;	// 157 = 0x9d
	id _customToolbarAppearance;	// 160 = 0xa0
	BOOL _isInTopBar;	// 164 = 0xa4
}
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x305eb3a1; S=0x3062a1cd; @synthesize=_isAnimatedTrashButton
+ (void)_adjustPushButton:(id)button withBarStyle:(int)barStyle withStyle:(int)style withTintColor:(id)tintColor isMinibar:(BOOL)minibar;	// 0x305d8a8d
+ (id)_defaultLabelColor;	// 0x30721671
+ (id)_defaultLabelFont;	// 0x307216c1
+ (id)_pushButtonWithBarStyle:(int)barStyle withStyle:(int)style withTintColor:(id)tintColor;	// 0x305d86c9
- (id)initWithImage:(id)image selectedImage:(id)image2 highlightImage:(id)image3 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles withTintColor:(id)tintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 imageIsBackground:(BOOL)background;	// 0x3060fb59
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles withTintColor:(id)tintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets11 glowInsets:(UIEdgeInsets)insets12;	// 0x3060fadd
- (void)_adjustPushButton:(BOOL)button;	// 0x30723c1d
- (void)_adjustPushButtonWithBarStyle:(int)barStyle withTintColor:(id)tintColor isMinibar:(BOOL)minibar;	// 0x306c67ad
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x30721335
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x3072135d
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x30721479
- (CGRect)_buttonBarHitRect;	// 0x305d9f19
- (BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;	// 0x3071f8bd
- (id)_info;	// 0x3071f8d1
- (BOOL)_isBordered;	// 0x305d9e45
- (BOOL)_isOn;	// 0x3071f8c1
- (float)_leftPadding;	// 0x3062a1f1
- (void)_positionBadge;	// 0x305d92ad
- (float)_rightPadding;	// 0x3062a285
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x30721431
- (void)_setBadgeValue:(id)value;	// 0x30725295
- (void)_setBarHeight:(float)height;	// 0x305d95cd
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x305d9eed
- (void)_setCustomToolbarAppearance:(id)appearance;	// 0x30721261
- (void)_setInTopBar:(BOOL)topBar;	// 0x3062a345
- (void)_setInfoWidth:(float)width;	// 0x3062d621
- (void)_setOn:(BOOL)on;	// 0x307213ed
- (void)_setSelected:(BOOL)selected;	// 0x3072151d
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x30722a39
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles selectedTitle:(id)title;	// 0x306c6e51
- (BOOL)_useBarHeight;	// 0x305d9edd
- (void)dealloc;	// 0x306c7185
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x307224dd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30696a49
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x305eb3a1
- (void)layoutSubviews;	// 0x305eaf01
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30723bf9
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30696aa5
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x3062a1cd
- (void)setEnabled:(BOOL)enabled;	// 0x30612ae5
- (void)setFrame:(CGRect)frame;	// 0x305d9251
- (void)setHighlighted:(BOOL)highlighted;	// 0x306a6f69
- (void)setImage:(id)image;	// 0x30617e19
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x30722b71
- (void)setTintColor:(id)color;	// 0x3072129d
- (void)setUseSelectedImage:(BOOL)image;	// 0x306e09f1
@end

