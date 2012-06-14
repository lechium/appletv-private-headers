/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"
#import "SBUIBannerItemView.h"


@interface SBUIRoundedBannerItemView : UIView <SBUIBannerItemView> {
	UIView *_backgroundShadowView;	// 84 = 0x54
	UIView *_contentContainerView;	// 88 = 0x58
	UIView *_contentView;	// 92 = 0x5c
	UIView *_underlayView;	// 96 = 0x60
}
@property(readonly, retain) UIView *contentView;	// G=0x349be901; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x349be44d
- (id)bannerItem;	// 0x349be8fd
// converted property getter: - (id)contentView;	// 0x349be901
- (void)dealloc;	// 0x349be775
- (void)drawStretchableBackground:(CGContextRef)background;	// 0x349be911
- (void)layoutSubviews;	// 0x349be801
@end

