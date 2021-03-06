/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVPlayerTimelyCaller.h"

@class NSArray;

@interface AVPlayerOccasionalCaller : AVPlayerTimelyCaller {
	NSArray *_times;	// 44 = 0x2c
	id _block;	// 48 = 0x30
}
- (id)initWithPlayer:(id)player times:(id)times queue:(id)queue block:(id)block;	// 0x3174e469
- (void)_effectiveRateChanged;	// 0x3174e7f5
- (void)_handleTimeDiscontinuity;	// 0x3174eead
- (XXStruct_pwHToB)_nextFiringTimeAfterTime:(XXStruct_pwHToB)time;	// 0x3174eb71
- (XXStruct_pwHToB)_previousFiringTimeBeforeTime:(XXStruct_pwHToB)time;	// 0x3174e935
- (void)_resetNextFireTime;	// 0x3174eced
- (void)dealloc;	// 0x3174e791
@end

