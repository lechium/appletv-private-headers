/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class NSTimer;

@interface ATVRebootWaitController : BRViewController {
@private
	NSTimer *_holdoffTimer;	// 84 = 0x54
	float _lastProgressPercent;	// 88 = 0x58
}
- (id)init;	// 0x3409c2f9
- (void)_holdOffScreenSaver:(id)saver;	// 0x3409c541
- (BOOL)brEventAction:(id)action;	// 0x3409c4d9
- (void)dealloc;	// 0x3409c43d
- (id)secondaryProgressImagePath;	// 0x3409c4dd
- (void)setUpdatePercentage:(float)percentage;	// 0x3409c469
- (void)wasDismissed;	// 0x3409c50d
@end
