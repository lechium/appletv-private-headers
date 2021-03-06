/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIBarBackgroundImageView.h"

@class _UIBackdropView, UIColor, UIImageView, UIView, _UINavigationBarAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBackground : _UIBarBackgroundImageView {
	UIColor *_barTintColor;	// 156 = 0x9c
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 160 = 0xa0
	UIImageView *_shadowView;	// 164 = 0xa4
	_UIBackdropView *_adaptiveBackdrop;	// 168 = 0xa8
	struct {
		unsigned barTranslucence : 3;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
		unsigned barWantsAdaptiveBackdrop : 1;
		unsigned barForcesOpaqueBackground : 1;
	} _navbarFlags;	// 172 = 0xac
}
@property(retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;	// G=0x2f49665d; S=0x2f438585; @synthesize
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x2f43bcbd; S=0x2f496535; @synthesize=_appearanceStorage
@property(assign, nonatomic) BOOL barForcesOpaqueBackground;	// G=0x2f5d0a81; S=0x2f5d0a5d; 
@property(assign, nonatomic) int barStyle;	// G=0x2f5d09d1; S=0x2f49d849; 
@property(retain, nonatomic) UIColor *barTintColor;	// G=0x2f5d09c1; S=0x2f5d0969; 
@property(assign, nonatomic) BOOL barWantsAdaptiveBackdrop;	// G=0x2f5d0a45; S=0x2f5d0a21; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x2f5d09e5; S=0x2f49dc55; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style barTintColor:(id)color appearance:(id)appearance barTranslucence:(int)translucence;	// 0x2f5d0ab1
- (id)_currentCustomBackground;	// 0x2f5d0e89
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL *)legacy;	// 0x2f5d0bbd
- (id)_customShadowImageForSearchBar;	// 0x2f5d1075
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x2f43d1bd
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x2f437789
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x2f5d0a95
// declared property setter: - (void)_setShadowView:(id)view;	// 0x2f438585
// declared property getter: - (id)_shadowView;	// 0x2f49665d
// declared property getter: - (id)appearanceStorage;	// 0x2f43bcbd
// declared property getter: - (BOOL)barForcesOpaqueBackground;	// 0x2f5d0a81
// declared property getter: - (int)barStyle;	// 0x2f5d09d1
// declared property getter: - (id)barTintColor;	// 0x2f5d09c1
// declared property getter: - (BOOL)barWantsAdaptiveBackdrop;	// 0x2f5d0a45
- (void)dealloc;	// 0x2f499999
- (void)didMoveToSuperview;	// 0x2f438339
// declared property getter: - (BOOL)isTranslucent;	// 0x2f5d09e5
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x2f496535
// declared property setter: - (void)setBarForcesOpaqueBackground:(BOOL)background;	// 0x2f5d0a5d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x2f49d849
// declared property setter: - (void)setBarTintColor:(id)color;	// 0x2f5d0969
// declared property setter: - (void)setBarWantsAdaptiveBackdrop:(BOOL)backdrop;	// 0x2f5d0a21
- (void)setBounds:(CGRect)bounds;	// 0x2f5d1125
- (void)setFrame:(CGRect)frame;	// 0x2f437759
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x2f49dc55
- (void)updateBackgroundImage;	// 0x2f437871
@end

