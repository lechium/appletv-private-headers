/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImageView.h"

@class _UINavigationBarAppearanceStorage, UIColor;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBackground : UIImageView {
	UIColor *_tintColor;	// 96 = 0x60
	_UINavigationBarAppearanceStorage *_appearanceStorage;	// 100 = 0x64
	UIImageView *_shadowView;	// 104 = 0x68
	struct {
		unsigned isTranslucent : 1;
		unsigned barStyle : 3;
		unsigned backgroundImageNeedsUpdate : 1;
		unsigned isContainedInPopover : 1;
	} _navbarFlags;	// 108 = 0x6c
}
@property(retain, nonatomic, setter=_setShadowView:) UIImageView *_shadowView;	// G=0x32ba8ea5; S=0x32b45175; @synthesize
@property(retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;	// G=0x32b484fd; S=0x32ba8ac5; @synthesize=_appearanceStorage
@property(assign, nonatomic) int barStyle;	// G=0x32cdb4e9; S=0x32bb0909; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32cdb4d9; S=0x32cdb481; 
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32cdb501; S=0x32bb0c6d; 
- (id)initWithFrame:(CGRect)frame barStyle:(int)style tintColor:(id)color appearance:(id)appearance isTranslucent:(BOOL)translucent;	// 0x32b445d5
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x32b10269
- (id)_customShadowImageForSearchBar;	// 0x32cdb535
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b498a9
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x32b446f5
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x32cdb515
// declared property setter: - (void)_setShadowView:(id)view;	// 0x32b45175
// declared property getter: - (id)_shadowView;	// 0x32ba8ea5
// declared property getter: - (id)appearanceStorage;	// 0x32b484fd
// declared property getter: - (int)barStyle;	// 0x32cdb4e9
- (void)dealloc;	// 0x32bac815
- (void)didMoveToSuperview;	// 0x32b44dc9
// declared property getter: - (BOOL)isTranslucent;	// 0x32cdb501
// declared property setter: - (void)setAppearanceStorage:(id)storage;	// 0x32ba8ac5
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32bb0909
- (void)setBounds:(CGRect)bounds;	// 0x32cdb5c1
- (void)setFrame:(CGRect)frame;	// 0x32b446c5
// declared property setter: - (void)setTintColor:(id)color;	// 0x32cdb481
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32bb0c6d
// declared property getter: - (id)tintColor;	// 0x32cdb4d9
- (void)updateBackgroundImage;	// 0x32b447ed
@end

