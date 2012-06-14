/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


@interface NSTimer (NSTimer)
@property(retain) id fireDate;	// G=0x31a8ad6d; S=0x31a8ad91; converted property
@property(assign) double fireTime;	// G=0x31a8adf5; S=0x31a8ae1d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319e1ac9
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x31a320ad
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x319e1a2d
+ (id)timerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x31a8ac41
+ (id)timerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x31a8ab91
+ (id)timerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x31a1a6c9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x31a8acb9
- (double)_cffireTime;	// 0x31a8ae69
- (XXStruct_K1psTC)context;	// 0x31a8ae59
- (CFStringRef)copyDebugDescription;	// 0x31a8adb9
- (void)fire;	// 0x31a8ad49
// converted property getter: - (id)fireDate;	// 0x31a8ad6d
// converted property getter: - (double)fireTime;	// 0x31a8adf5
- (double)interval;	// 0x31a8ade5
- (void)invalidate;	// 0x31a8acc5
- (BOOL)isValid;	// 0x31a8ace9
- (long)order;	// 0x31a8ade1
// converted property setter: - (void)setFireDate:(id)date;	// 0x31a8ad91
// converted property setter: - (void)setFireTime:(double)time;	// 0x31a8ae1d
- (double)timeInterval;	// 0x31a8ad11
- (id)userInfo;	// 0x31a8adb5
@end

