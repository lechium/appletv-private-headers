/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRStatusAlertControlDelegate, BRImageControl;

@interface BRStatusAlertControl : BRControl {
@private
	BRStatusAlertControlDelegate *_animationDelegate;	// 48 = 0x30
	BRImageControl *_background;	// 52 = 0x34
	BRImageControl *_overlay;	// 56 = 0x38
	int _fadeHalfCount;	// 60 = 0x3c
	int _maxFadeCount;	// 64 = 0x40
}
+ (id)alertWithType:(int)type;	// 0x3027c5d1
+ (void)postStatusAlertOfType:(id)type;	// 0x3027c62d
- (id)init;	// 0x3027c7ad
- (void)_cancel;	// 0x3027ce89
- (void)_setDuration:(float)duration;	// 0x3027ce45
- (void)_setType:(int)type;	// 0x3027ca75
- (id)accessibilityLabel;	// 0x3027ca55
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3027c9cd
- (void)dealloc;	// 0x3027c7ed
- (BOOL)isAccessibilityElement;	// 0x3027ca51
- (void)layoutSubcontrols;	// 0x3027c879
@end

