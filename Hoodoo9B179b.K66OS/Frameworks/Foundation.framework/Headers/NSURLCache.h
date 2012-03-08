/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
@private
	NSURLCacheInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned diskCapacity;	// G=0x3102916d; S=0x31028f25; converted property
@property(assign) unsigned memoryCapacity;	// G=0x310c59c1; S=0x31028ef5; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x310c612d
+ (void)_performDiskCacheSync;	// 0x310c6111
+ (void)setSharedURLCache:(id)cache;	// 0x31035da9
+ (id)sharedURLCache;	// 0x31028ba9
- (id)init;	// 0x31028c99
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x310c5761
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x31028cc5
- (CFURLCacheRef)_CFURLCache;	// 0x31028fdd
- (id)_cacheDirectory;	// 0x31028fd9
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x310c5a21
- (void)_diskCacheClear;	// 0x310c6bc1
- (BOOL)_diskCacheCreateDirectory;	// 0x310c6639
- (void)_diskCacheCreateLRUList:(id)list;	// 0x310c6555
- (id)_diskCacheDefaultPath;	// 0x31028f81
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x310c71e1
- (void)_diskCacheExecuteWrite:(id)write;	// 0x310c6ec5
- (id)_diskCacheGet:(id)get;	// 0x310c6755
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x310c70f5
- (void)_diskCacheScheduleWrite:(id)write;	// 0x310c6df1
- (void)_diskCacheSetSyncTimer;	// 0x310c61e1
- (void)_diskCacheSync;	// 0x310c62b5
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x310c6ca1
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x310c5b99
- (void)_memoryCacheClear;	// 0x310c605d
- (id)_memoryCacheGet:(id)get;	// 0x310c5d5d
- (void)_memoryCachePut:(id)put;	// 0x310c5e19
- (void)_memoryCacheRemove:(id)remove;	// 0x310c5f49
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x310c5ab9
- (void)_memoryCacheTouchNode:(id)node;	// 0x310c5c2d
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x310c5c81
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x310c55ad
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x310c5751
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x310c5741
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x310c56e1
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x310c5731
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x310c5721
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x310c5711
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x310c5701
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x310c56f1
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x310c562d
- (id)cachedResponseForRequest:(id)request;	// 0x310c583d
- (unsigned)currentDiskUsage;	// 0x310c5a01
- (unsigned)currentMemoryUsage;	// 0x310c59e1
- (void)dealloc;	// 0x310c5a6d
// converted property getter: - (unsigned)diskCapacity;	// 0x3102916d
// converted property getter: - (unsigned)memoryCapacity;	// 0x310c59c1
- (void)removeAllCachedResponses;	// 0x31048421
- (void)removeCachedResponseForRequest:(id)request;	// 0x310c597d
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x31028f25
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x31028ef5
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x310c5911
@end

