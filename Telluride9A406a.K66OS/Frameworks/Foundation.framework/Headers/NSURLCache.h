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
@property(assign) unsigned diskCapacity;	// G=0x35dfa17d; S=0x35df9f35; converted property
@property(assign) unsigned memoryCapacity;	// G=0x35e969d1; S=0x35df9f05; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x35e9713d
+ (void)_performDiskCacheSync;	// 0x35e97121
+ (void)setSharedURLCache:(id)cache;	// 0x35e06db9
+ (id)sharedURLCache;	// 0x35df9bb9
- (id)init;	// 0x35df9ca9
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x35e96771
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x35df9cd5
- (CFURLCacheRef)_CFURLCache;	// 0x35df9fed
- (id)_cacheDirectory;	// 0x35df9fe9
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x35e96a31
- (void)_diskCacheClear;	// 0x35e97bd1
- (BOOL)_diskCacheCreateDirectory;	// 0x35e97649
- (void)_diskCacheCreateLRUList:(id)list;	// 0x35e97565
- (id)_diskCacheDefaultPath;	// 0x35df9f91
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x35e981f1
- (void)_diskCacheExecuteWrite:(id)write;	// 0x35e97ed5
- (id)_diskCacheGet:(id)get;	// 0x35e97765
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x35e98105
- (void)_diskCacheScheduleWrite:(id)write;	// 0x35e97e01
- (void)_diskCacheSetSyncTimer;	// 0x35e971f1
- (void)_diskCacheSync;	// 0x35e972c5
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x35e97cb1
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x35e96ba9
- (void)_memoryCacheClear;	// 0x35e9706d
- (id)_memoryCacheGet:(id)get;	// 0x35e96d6d
- (void)_memoryCachePut:(id)put;	// 0x35e96e29
- (void)_memoryCacheRemove:(id)remove;	// 0x35e96f59
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x35e96ac9
- (void)_memoryCacheTouchNode:(id)node;	// 0x35e96c3d
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x35e96c91
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x35e965bd
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x35e96761
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x35e96751
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x35e966f1
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x35e96741
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x35e96731
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x35e96721
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x35e96711
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x35e96701
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x35e9663d
- (id)cachedResponseForRequest:(id)request;	// 0x35e9684d
- (unsigned)currentDiskUsage;	// 0x35e96a11
- (unsigned)currentMemoryUsage;	// 0x35e969f1
- (void)dealloc;	// 0x35e96a7d
// converted property getter: - (unsigned)diskCapacity;	// 0x35dfa17d
// converted property getter: - (unsigned)memoryCapacity;	// 0x35e969d1
- (void)removeAllCachedResponses;	// 0x35e19431
- (void)removeCachedResponseForRequest:(id)request;	// 0x35e9698d
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x35df9f35
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x35df9f05
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x35e96921
@end

