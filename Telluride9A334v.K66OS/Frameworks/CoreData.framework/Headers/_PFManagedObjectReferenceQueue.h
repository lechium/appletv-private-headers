/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _PFManagedObjectReferenceQueue : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	int _spinLock;	// 8 = 0x8
	int _flags;	// 12 = 0xc
	int _signalRunloop;	// 16 = 0x10
	NSManagedObjectContext *_context;	// 20 = 0x14
	CFArrayRef _queue;	// 24 = 0x18
	CFRunLoopObserverRef _rlObserver;	// 28 = 0x1c
}
- (id)initForContext:(id)context;	// 0x31e367b5
- (BOOL)_GC_queueForDealloc:(id)dealloc;	// 0x31eb3309
- (void)_contextDidDealloc;	// 0x31e65e51
- (BOOL)_isDeallocating;	// 0x31eb3305
- (void)_processReferenceQueue:(BOOL)queue;	// 0x31e65575
- (BOOL)_queueBatchForDealloc:(CFArrayRef)dealloc;	// 0x31e66459
- (int)_queueCount;	// 0x31e68d69
- (BOOL)_queueForDealloc:(id)dealloc;	// 0x31e6622d
- (BOOL)_signal;	// 0x31eb330d
- (BOOL)_tryRetain;	// 0x31eb3301
- (void)_unregisterRunloopObservers;	// 0x31e63d15
- (void)dealloc;	// 0x31e66619
- (void)finalize;	// 0x31ebe5c1
- (void)release;	// 0x31e368d9
- (id)retain;	// 0x31e368b9
- (unsigned)retainCount;	// 0x31eb32ed
@end
