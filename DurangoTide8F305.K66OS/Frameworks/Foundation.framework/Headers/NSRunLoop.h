/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSRunLoop.h> // Unknown library


@interface NSRunLoop (NSRunLoop)
+ (id)_new:(id)aNew;	// 0x327548e1
+ (id)currentRunLoop;	// 0x3273667d
+ (id)mainRunLoop;	// 0x32769529
- (id)init;	// 0x327b8a0d
- (void)_addPort:(id)port forMode:(id)mode;	// 0x327b8b8d
- (BOOL)_containsPort:(id)port forMode:(id)mode;	// 0x327b9259
- (void)_enumerateInfoPairsWithBlock:(id)block;	// 0x327b8abd
- (void)_invalidateTimers;	// 0x327b8981
- (void)_portInvalidated:(id)invalidated;	// 0x327b8d4d
- (void)_removePort:(id)port forMode:(id)mode;	// 0x327b9001
- (void)_wakeup;	// 0x327b9b6d
- (void)acceptInputForMode:(id)mode beforeDate:(id)date;	// 0x327b9955
- (void)addPort:(id)port forMode:(id)mode;	// 0x327b9629
- (void)addTimer:(id)timer forMode:(id)mode;	// 0x32763859
- (id)allModes;	// 0x327ba521
- (void)cancelPerformSelector:(SEL)selector target:(id)target argument:(id)argument;	// 0x327ba009
- (void)cancelPerformSelectorsWithTarget:(id)target;	// 0x327b9dd1
- (BOOL)containsPort:(id)port forMode:(id)mode;	// 0x327b9421
- (BOOL)containsTimer:(id)timer forMode:(id)mode;	// 0x327b9831
- (id)copyWithZone:(NSZone *)zone;	// 0x327b8a25
- (id)currentMode;	// 0x327b9925
- (void)dealloc;	// 0x3274c075
- (id)description;	// 0x327ba4c9
- (CFRunLoopRef)getCFRunLoop;	// 0x32736801
- (id)limitDateForMode:(id)mode;	// 0x327b9a49
- (void)performSelector:(SEL)selector target:(id)target argument:(id)argument order:(unsigned)order modes:(id)modes;	// 0x3276d109
- (id)portsForMode:(id)mode;	// 0x327b89ed
- (void)removePort:(id)port forMode:(id)mode;	// 0x327b9529
- (void)removeTimer:(id)timer forMode:(id)mode;	// 0x327b973d
- (void)run;	// 0x32768835
- (BOOL)runBeforeDate:(id)date;	// 0x327b89a9
- (BOOL)runMode:(id)mode beforeDate:(id)date;	// 0x3273fd01
- (BOOL)runMode:(id)mode untilDate:(id)date;	// 0x327b9c25
- (void)runUntilDate:(id)date;	// 0x327b9b91
- (id)timersForMode:(id)mode;	// 0x327b89cd
@end

