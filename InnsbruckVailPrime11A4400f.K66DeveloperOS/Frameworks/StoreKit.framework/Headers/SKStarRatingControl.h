/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIControl.h>
#import "StoreKit-Structs.h"

@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl {
	UIImageView *_backgroundImageView;	// 120 = 0x78
	UILabel *_explanationLabel;	// 124 = 0x7c
	UIImageView *_foregroundImageView;	// 128 = 0x80
	CGSize _hitPadding;	// 132 = 0x84
	float _starWidth;	// 140 = 0x8c
	CGPoint _trackingLastPoint;	// 144 = 0x90
	CGPoint _trackingStartPoint;	// 152 = 0x98
	float _value;	// 160 = 0xa0
}
@property(copy, nonatomic) NSString *explanationText;	// G=0x2f386fed; S=0x2f387021; 
@property(assign, nonatomic) float starWidth;	// G=0x2f387591; S=0x2f3875a1; @synthesize=_starWidth
@property(assign, nonatomic) float value;	// G=0x2f38712d; S=0x2f38710d; 
- (id)initWithBackgroundImage:(id)backgroundImage foregroundImage:(id)image;	// 0x2f386c69
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x2f38713d
- (CGRect)_foregroundImageClipBounds;	// 0x2f38737d
- (id)_newExplanationLabel;	// 0x2f3873d9
- (void)_updateValueForPoint:(CGPoint)point;	// 0x2f3874b1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f387145
- (BOOL)canHandleSwipes;	// 0x2f387141
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f387191
- (void)dealloc;	// 0x2f386dd9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f387241
// declared property getter: - (id)explanationText;	// 0x2f386fed
- (CGRect)hitRect;	// 0x2f3872bd
- (void)layoutSubviews;	// 0x2f386e51
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f387339
// declared property setter: - (void)setExplanationText:(id)text;	// 0x2f387021
- (void)setHitPadding:(CGSize)padding;	// 0x2f38700d
// declared property setter: - (void)setStarWidth:(float)width;	// 0x2f3875a1
// declared property setter: - (void)setValue:(float)value;	// 0x2f38710d
- (void)sizeToFit;	// 0x2f386f65
// declared property getter: - (float)starWidth;	// 0x2f387591
// declared property getter: - (float)value;	// 0x2f38712d
@end

