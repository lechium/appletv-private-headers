/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSDictionary;

@interface BRBackgroundTask : NSObject {
@private
	double _interval;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	NSTimer *_initialDelayTimer;	// 20 = 0x14
	NSTimer *_reenableTimer;	// 24 = 0x18
	NSTimer *_intervalTimer;	// 28 = 0x1c
	BOOL _enabled;	// 32 = 0x20
	BOOL _firedWhileDisabled;	// 33 = 0x21
	int _taskType;	// 36 = 0x24
	NSDictionary *_userInfo;	// 40 = 0x28
}
@property(readonly, assign) BOOL enabled;	// G=0x30358db1; converted property
@property(readonly, assign) double interval;	// G=0x30358b21; converted property
+ (void)_resumeBackgroundProcessing:(id)processing;	// 0x3035972d
+ (void)_resumeHeavyBackgroundProcessing:(id)processing;	// 0x303597a9
+ (void)_suspendBackgroundProcessing:(id)processing;	// 0x303596d9
+ (void)_suspendHeavyBackgroundProcessing:(id)processing;	// 0x30359755
+ (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x303597d1
+ (void)disableBackgroundTasks:(id)tasks ofType:(int)type;	// 0x303581b1
+ (void)enableBackgroundTasksOfType:(int)type;	// 0x30357e35
+ (void)initialize;	// 0x30357c95
+ (void)performFinishedForTask:(id)task;	// 0x3035886d
+ (void)registerBackgroundTask:(id)task;	// 0x30358471
+ (id)taskForContext:(id)context ofType:(int)type;	// 0x30357fe5
+ (void)unregisterBackgroundTask:(id)task;	// 0x3035866d
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x30358a11
- (void)_cancelTimers;	// 0x30358f8d
- (void)_delayedPerform:(id)perform;	// 0x303593bd
- (void)_intervalPerform:(id)perform;	// 0x30359585
- (void)_setEnabled:(BOOL)enabled;	// 0x30359395
- (void)_setupTimers;	// 0x30358dc1
- (void)_updateTimersForTimeChange;	// 0x303590b9
- (id)_userInfo;	// 0x303596c9
- (void)dealloc;	// 0x30358ab1
- (void)disable:(id)disable;	// 0x30358d79
- (void)enable;	// 0x30358b39
// converted property getter: - (BOOL)enabled;	// 0x30358db1
// converted property getter: - (double)interval;	// 0x30358b21
- (BOOL)perform:(id)perform;	// 0x30358da9
- (void)stop;	// 0x30358dad
- (int)type;	// 0x30358b11
@end

