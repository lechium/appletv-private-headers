/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x325aced5; S=0x325ace25; converted property
@property(assign) unsigned stackSize;	// G=0x325acf95; S=0x325acf69; converted property
@property(assign) double threadPriority;	// G=0x325acfc9; S=0x325ad089; converted property
+ (id)callStackReturnAddresses;	// 0x325acc91
+ (id)callStackSymbols;	// 0x325acd09
+ (id)currentThread;	// 0x32501169
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x32521ea5
+ (void)exit;	// 0x32536221
+ (BOOL)isDying;	// 0x325acdf1
+ (BOOL)isMainThread;	// 0x3251ae8d
+ (BOOL)isMultiThreaded;	// 0x3254b7ed
+ (id)mainThread;	// 0x325008a1
+ (BOOL)setThreadPriority:(double)priority;	// 0x3252d2e9
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x325503d9
+ (void)sleepUntilDate:(id)date;	// 0x325acba1
+ (double)threadPriority;	// 0x325acb39
- (id)init;	// 0x32509595
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x32521f11
- (void)_nq:(id)nq;	// 0x32500dfd
- (void)cancel;	// 0x325ad1ed
- (void)dealloc;	// 0x32509481
- (id)description;	// 0x325ad235
- (BOOL)isCancelled;	// 0x325ad1c9
- (BOOL)isDying;	// 0x325acdcd
- (BOOL)isExecuting;	// 0x325ad179
- (BOOL)isFinished;	// 0x325ad1a1
- (BOOL)isMainThread;	// 0x3254b7b9
- (void)main;	// 0x32522155
// converted property getter: - (id)name;	// 0x325aced5
- (id)runLoop;	// 0x325acd81
// converted property setter: - (void)setName:(id)name;	// 0x325ace25
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x325acf69
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x325ad089
// converted property getter: - (unsigned)stackSize;	// 0x325acf95
- (void)start;	// 0x3252200d
- (id)threadDictionary;	// 0x32527215
// converted property getter: - (double)threadPriority;	// 0x325acfc9
@end
