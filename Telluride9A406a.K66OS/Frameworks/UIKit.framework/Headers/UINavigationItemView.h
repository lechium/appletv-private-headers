/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UINavigationItem, UIFont;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
@private
	UIFont *_font;	// 48 = 0x30
	UINavigationItem *_item;	// 52 = 0x34
	float _titleWidth;	// 56 = 0x38
	BOOL _titleAutosizesToFit;	// 60 = 0x3c
	UIView *_topCrossView;	// 64 = 0x40
	UIView *_bottomCrossView;	// 68 = 0x44
	BOOL _isCrossFading;	// 72 = 0x48
	int _lineBreakMode;	// 76 = 0x4c
}
@property(retain) UIFont *font;	// G=0x35842c89; S=0x35842c45; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x35842c35; S=0x356b3bb5; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x356b3979
- (void)_cleanUpCrossView;	// 0x35842ffd
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x35842efd
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x356e1d2d
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x356e1be5
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x356e1aa1
- (id)_defaultFont;	// 0x356e1a69
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x35842c99
- (void)_resetTitleWidth;	// 0x356cccf1
- (id)_scriptingInfo;	// 0x357bd20d
- (void)_setLineBreakMode:(int)mode;	// 0x356cd165
- (float)_titleWidth;	// 0x356fc629
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x356e1b65
- (void)drawRect:(CGRect)rect;	// 0x356e177d
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x356e1861
// converted property getter: - (id)font;	// 0x35842c89
- (id)navigationItem;	// 0x35842c25
// converted property setter: - (void)setFont:(id)font;	// 0x35842c45
- (void)setFrame:(CGRect)frame;	// 0x356b3a35
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x356b3bb5
- (id)title;	// 0x357522e5
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x35842c35
@end

