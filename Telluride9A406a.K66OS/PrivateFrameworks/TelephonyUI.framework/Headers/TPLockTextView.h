/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class NSTimer, NSString, UIFont;

@interface TPLockTextView : UIView {
	NSString *_label;	// 48 = 0x30
	CGImageRef _textCache;	// 52 = 0x34
	char *_textData;	// 56 = 0x38
	NSTimer *_maskTimer;	// 60 = 0x3c
	double _maskStartTime;	// 64 = 0x40
	UIFont *_labelFont;	// 72 = 0x48
	float _deltaFromDefaultTrackWidth;	// 76 = 0x4c
	float _fps;	// 80 = 0x50
}
@property(readonly, retain) NSString *label;	// G=0x3601a5f1; converted property
- (id)initWithLabel:(id)label fontSize:(float)size trackWidthDelta:(float)delta;	// 0x3601afb1
- (void)_cacheLabel:(id)label size:(CGSize)size;	// 0x3601b131
- (void)dealloc;	// 0x3601b2f1
- (void)drawRect:(CGRect)rect;	// 0x3601adc1
- (BOOL)isAnimating;	// 0x3601a601
// converted property getter: - (id)label;	// 0x3601a5f1
- (void)movedFromWindow:(id)window;	// 0x3601ad7d
- (void)setFPS:(float)fps;	// 0x3601a841
- (void)startAnimation;	// 0x3601a6dd
- (void)stopAnimation;	// 0x3601a7ed
@end

