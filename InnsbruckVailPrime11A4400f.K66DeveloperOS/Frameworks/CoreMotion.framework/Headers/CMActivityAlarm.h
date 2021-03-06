/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMActivityAlarm : NSObject {
	BOOL fIsValid;	// 4 = 0x4
	CFRunLoopRef fRunLoop;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *fQueue;	// 12 = 0xc
	id fHandler;	// 16 = 0x10
	unsigned _trigger;	// 20 = 0x14
	double _duration;	// 24 = 0x18
}
@property(assign, nonatomic) double duration;	// G=0x2d95dd41; S=0x2d95dd59; @synthesize=_duration
@property(assign, nonatomic) unsigned trigger;	// G=0x2d95dd6d; S=0x2d95dd7d; @synthesize=_trigger
+ (BOOL)activityAlarmAvailable;	// 0x2d95d625
+ (id)activityAlarmInfo;	// 0x2d95d66d
- (id)initWithTrigger:(unsigned)trigger duration:(double)duration onQueue:(id)queue withHandler:(id)handler;	// 0x2d95d689
- (id)initWithTrigger:(unsigned)trigger duration:(double)duration onRunLoop:(CFRunLoopRef)loop withHandler:(id)handler;	// 0x2d95d7c5
- (void)dealloc;	// 0x2d95d8f9
// declared property getter: - (double)duration;	// 0x2d95dd41
- (void)fire;	// 0x2d95da99
- (void)invalidate;	// 0x2d95d939
- (BOOL)isValid;	// 0x2d95da75
// declared property setter: - (void)setDuration:(double)duration;	// 0x2d95dd59
// declared property setter: - (void)setTrigger:(unsigned)trigger;	// 0x2d95dd7d
// declared property getter: - (unsigned)trigger;	// 0x2d95dd6d
@end

