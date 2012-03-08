/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSRunLoop.h> // Unknown library


@interface NSRunLoop (NSRunLoop)
+ (id)_new:(id)aNew;	// 0x3101e041
+ (id)currentRunLoop;	// 0x310034f9
+ (id)mainRunLoop;	// 0x31034969
- (id)init;	// 0x3109b8c9
- (void)_addPort:(id)port forMode:(id)mode;	// 0x3109b38d
- (BOOL)_containsPort:(id)port forMode:(id)mode;	// 0x3109b1e9
- (void)_enumerateInfoPairsWithBlock:(id)block;	// 0x3109adb1
- (void)_invalidateTimers;	// 0x3109bee1
- (void)_portInvalidated:(id)invalidated;	// 0x3109ae89
- (void)_removePort:(id)port forMode:(id)mode;	// 0x3109b591
- (void)_wakeup;	// 0x3109c009
- (void)acceptInputForMode:(id)mode beforeDate:(id)date;	// 0x3109c035
- (void)addPort:(id)port forMode:(id)mode;	// 0x3109b945
- (void)addTimer:(id)timer forMode:(id)mode;	// 0x3102aa11
- (id)allModes;	// 0x3109be8d
- (void)cancelPerformSelector:(SEL)selector target:(id)target argument:(id)argument;	// 0x3109c4c1
- (void)cancelPerformSelectorsWithTarget:(id)target;	// 0x3102daa9
- (BOOL)containsPort:(id)port forMode:(id)mode;	// 0x3109bb71
- (BOOL)containsTimer:(id)timer forMode:(id)mode;	// 0x3109bd99
- (id)copyWithZone:(NSZone *)zone;	// 0x3109b8b9
- (id)currentMode;	// 0x31008b2d
- (void)dealloc;	// 0x3102137d
- (id)description;	// 0x3109b8e1
- (CFRunLoopRef)getCFRunLoop;	// 0x31003529
- (id)limitDateForMode:(id)mode;	// 0x3109bee5
- (void)performSelector:(SEL)selector target:(id)target argument:(id)argument order:(unsigned)order modes:(id)modes;	// 0x3101e5e5
- (id)portsForMode:(id)mode;	// 0x3109bc71
- (void)removePort:(id)port forMode:(id)mode;	// 0x3109ba71
- (void)removeTimer:(id)timer forMode:(id)mode;	// 0x3109bc8d
- (void)run;	// 0x3101f4d5
- (BOOL)runBeforeDate:(id)date;	// 0x3109c225
- (BOOL)runMode:(id)mode beforeDate:(id)date;	// 0x31005a75
- (BOOL)runMode:(id)mode untilDate:(id)date;	// 0x3109c131
- (void)runUntilDate:(id)date;	// 0x3102ab01
- (id)timersForMode:(id)mode;	// 0x3109bd7d
@end

