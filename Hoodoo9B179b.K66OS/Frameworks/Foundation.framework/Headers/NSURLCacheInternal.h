/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSMutableDictionary, NSString, NSURLQueue, NSLock, NSMutableSet, NSURLCacheNode;

__attribute__((visibility("hidden")))
@interface NSURLCacheInternal : NSObject {
@private
	unsigned memoryCapacity;	// 4 = 0x4
	unsigned diskCapacity;	// 8 = 0x8
	NSString *diskPath;	// 12 = 0xc
	unsigned currentMemoryUsage;	// 16 = 0x10
	unsigned currentDiskUsage;	// 20 = 0x14
	NSMutableDictionary *memoryCache;	// 24 = 0x18
	NSLock *memoryCacheGuard;	// 28 = 0x1c
	NSURLCacheNode *memoryCacheLRUHead;	// 32 = 0x20
	NSURLCacheNode *memoryCacheLRUTail;	// 36 = 0x24
	unsigned memoryCacheItemLengthThreshold;	// 40 = 0x28
	NSLock *diskCacheGuard;	// 44 = 0x2c
	NSMutableDictionary *diskCachePendingWrites;	// 48 = 0x30
	NSMutableSet *diskCachePendingRemovals;	// 52 = 0x34
	NSURLQueue *diskCachePendingOperations;	// 56 = 0x38
	unsigned diskCacheItemLengthThreshold;	// 60 = 0x3c
	double diskCacheTouchTime;	// 64 = 0x40
	NSLRUFileList *diskCacheLRUList;	// 72 = 0x48
	unsigned timerResetCount;	// 76 = 0x4c
	unsigned syncSkipCount;	// 80 = 0x50
	CFURLCacheRef _cacheRef;	// 84 = 0x54
	BOOL diskCacheLeftoverFilesRemovedFlag;	// 88 = 0x58
	BOOL _pad1;	// 89 = 0x59
	BOOL _pad2;	// 90 = 0x5a
	BOOL _pad3;	// 91 = 0x5b
}
- (void)dealloc;	// 0x310c5231
- (void)finalize;	// 0x310c533d
@end

