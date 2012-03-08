/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSThread : NSObject {
@private
	id _private;	// 4 = 0x4
	unsigned char _bytes[44];	// 8 = 0x8
}
@property(retain) id name;	// G=0x35e75dd1; S=0x35e0ca95; converted property
@property(assign) unsigned stackSize;	// G=0x35e75e69; S=0x35e75e3d; converted property
@property(assign) double threadPriority;	// G=0x35e75e99; S=0x35e75f59; converted property
+ (id)callStackReturnAddresses;	// 0x35e19e75
+ (id)callStackSymbols;	// 0x35e75cb1
+ (id)currentThread;	// 0x35dd67ed
+ (void)detachNewThreadSelector:(SEL)selector toTarget:(id)target withObject:(id)object;	// 0x35de2659
+ (void)exit;	// 0x35df2381
+ (BOOL)isDying;	// 0x35e75d9d
+ (BOOL)isMainThread;	// 0x35dd6c31
+ (BOOL)isMultiThreaded;	// 0x35e75b59
+ (id)mainThread;	// 0x35dd5e65
+ (BOOL)setThreadPriority:(double)priority;	// 0x35e067e9
+ (void)sleepForTimeInterval:(double)timeInterval;	// 0x35e19a95
+ (void)sleepUntilDate:(id)date;	// 0x35e75bd1
+ (double)threadPriority;	// 0x35e75b69
- (id)init;	// 0x35de27c1
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x35de26c1
- (void)_nq:(id)nq;	// 0x35dd64d1
- (void)cancel;	// 0x35e760cd
- (void)dealloc;	// 0x35df13d1
- (id)description;	// 0x35e76119
- (BOOL)isCancelled;	// 0x35e760a5
- (BOOL)isDying;	// 0x35e75d75
- (BOOL)isExecuting;	// 0x35e76055
- (BOOL)isFinished;	// 0x35e7607d
- (BOOL)isMainThread;	// 0x35e04301
- (void)main;	// 0x35de2a49
// converted property getter: - (id)name;	// 0x35e75dd1
- (id)runLoop;	// 0x35e75d29
// converted property setter: - (void)setName:(id)name;	// 0x35e0ca95
// converted property setter: - (void)setStackSize:(unsigned)size;	// 0x35e75e3d
// converted property setter: - (void)setThreadPriority:(double)priority;	// 0x35e75f59
// converted property getter: - (unsigned)stackSize;	// 0x35e75e69
- (void)start;	// 0x35de28f5
- (id)threadDictionary;	// 0x35e02a69
// converted property getter: - (double)threadPriority;	// 0x35e75e99
@end

