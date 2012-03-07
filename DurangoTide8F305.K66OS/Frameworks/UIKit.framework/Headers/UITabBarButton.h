/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImage, UITabBarButtonLabel, UITabBarButtonBadge, UITabBarSelectionIndicatorView;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl {
@private
	CGRect _hitRect;	// 68 = 0x44
	UIView *_info;	// 84 = 0x54
	UITabBarButtonLabel *_label;	// 88 = 0x58
	UITabBarButtonBadge *_badge;	// 92 = 0x5c
	UITabBarSelectionIndicatorView *_selectedIndicator;	// 96 = 0x60
	BOOL _onState;	// 100 = 0x64
	BOOL _barHeight;	// 101 = 0x65
	BOOL _badgeAnimated;	// 102 = 0x66
	UIEdgeInsets _infoInsets;	// 104 = 0x68
	UIImage *_customSelectedIndicatorImage;	// 120 = 0x78
}
+ (id)_defaultLabelColor;	// 0x31fe5191
+ (id)_defaultLabelFont;	// 0x31fe516d
+ (id)_donePushButton;	// 0x32181965
- (id)initWithImage:(id)image selectedImage:(id)image2 label:(id)label withInsets:(UIEdgeInsets)insets tabBarAppearance:(id)appearance;	// 0x31fe4bf9
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x321807d1
- (BOOL)_isOn;	// 0x3217ee95
- (void)_positionBadge;	// 0x31fe5325
- (id)_scriptingInfo;	// 0x3217f471
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x32180789
- (void)_setBadgeValue:(id)value;	// 0x32182cc5
- (void)_setBarHeight:(float)height;	// 0x31fe5a2d
- (void)_setCustomSelectedIndicatorImage:(id)image;	// 0x32180729
- (void)_setOn:(BOOL)on;	// 0x3217ee85
- (void)_setSelected:(BOOL)selected;	// 0x31fe80a1
- (void)_setTabBarHitRect:(CGRect)rect;	// 0x31fe6275
- (void)_showSelectedIndicator:(BOOL)indicator changeSelection:(BOOL)selection;	// 0x31fe5b59
- (CGRect)_tabBarHitRect;	// 0x3217ee69
- (BOOL)_useBarHeight;	// 0x3217eea5
- (void)dealloc;	// 0x32180895
- (void)layoutSubviews;	// 0x31fe8899
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32181941
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3206c759
- (void)setEnabled:(BOOL)enabled;	// 0x31fe5a95
- (void)setFrame:(CGRect)frame;	// 0x31fe52c9
- (void)setImage:(id)image;	// 0x32180875
@end
