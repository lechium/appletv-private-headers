/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSTimer.h> // Unknown library


@interface NSTimer (NSTimer)
@property(retain) id fireDate;	// G=0x3611d405; S=0x3611d429; converted property
@property(assign) double fireTime;	// G=0x3611d48d; S=0x3611d4b5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3606df81
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x3611d215
+ (id)scheduledTimerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x3606dee5
+ (id)timerWithFireDate:(id)fireDate target:(id)target selector:(SEL)selector userInfo:(id)info;	// 0x3611d2d9
+ (id)timerWithTimeInterval:(double)timeInterval invocation:(id)invocation repeats:(BOOL)repeats;	// 0x3611d169
+ (id)timerWithTimeInterval:(double)timeInterval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x360ba4b9
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x3611d351
- (double)_cffireTime;	// 0x3611d501
- (XXStruct_K1psTC)context;	// 0x3611d4f1
- (CFStringRef)copyDebugDescription;	// 0x3611d451
- (void)fire;	// 0x3611d3e1
// converted property getter: - (id)fireDate;	// 0x3611d405
// converted property getter: - (double)fireTime;	// 0x3611d48d
- (double)interval;	// 0x3611d47d
- (void)invalidate;	// 0x3611d35d
- (BOOL)isValid;	// 0x3611d381
- (long)order;	// 0x3611d479
// converted property setter: - (void)setFireDate:(id)date;	// 0x3611d429
// converted property setter: - (void)setFireTime:(double)time;	// 0x3611d4b5
- (double)timeInterval;	// 0x3611d3a9
- (id)userInfo;	// 0x3611d44d
@end
