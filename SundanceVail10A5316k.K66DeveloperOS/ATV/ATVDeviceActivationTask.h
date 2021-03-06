/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"
#import "ATVDeviceActivationDelegate.h"

@class ATVDeviceActivationAction;

__attribute__((visibility("hidden")))
@interface ATVDeviceActivationTask : BRBackgroundTask <ATVDeviceActivationDelegate> {
	BOOL _processingActivation;	// 44 = 0x2c
	ATVDeviceActivationAction *_action;	// 48 = 0x30
}
+ (void)scheduleOneShotActivationCheck;	// 0xbe359
+ (void)scheduleRepeatingActivationCheck;	// 0xbe2c1
- (void)activationFailedForAction:(id)action withReason:(int)reason error:(id)error;	// 0xbe5b9
- (void)activationSucceeded:(id)succeeded;	// 0xbe509
- (void)dealloc;	// 0xbe4bd
- (BOOL)perform:(id)perform;	// 0xbe38d
@end

