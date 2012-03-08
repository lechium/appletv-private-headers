/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSURLCache, NSString, ISURLCacheConfiguration;

@interface ISURLCache : NSObject {
@private
	NSURLCache *_cache;	// 4 = 0x4
	ISURLCacheConfiguration *_configuration;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned currentDiskUsage;	// G=0x36964a95; 
@property(readonly, assign, nonatomic) unsigned currentMemoryUsage;	// G=0x36964ab5; 
@property(readonly, assign, nonatomic) unsigned diskCapacity;	// G=0x36964ad5; 
@property(readonly, assign, nonatomic) unsigned memoryCapacity;	// G=0x36964af5; 
@property(readonly, assign) NSString *persistentIdentifier;	// G=0x36964839; 
+ (id)cacheDirectoryPath;	// 0x36964549
+ (id)persistentIdentifierFromPropertyList:(id)propertyList;	// 0x36964639
- (id)init;	// 0x36964455
- (id)initWithCacheConfiguration:(id)cacheConfiguration;	// 0x36964469
- (BOOL)_urlStringMatchesFileExtensions:(id)extensions;	// 0x36964bcd
- (BOOL)_urlStringMatchesURLPatterns:(id)patterns;	// 0x36964c99
- (id)cachedResponseForRequest:(id)request;	// 0x36964a75
- (BOOL)criteriaMatchesRequest:(id)request;	// 0x369646b5
// declared property getter: - (unsigned)currentDiskUsage;	// 0x36964a95
// declared property getter: - (unsigned)currentMemoryUsage;	// 0x36964ab5
- (void)dealloc;	// 0x369644e9
// declared property getter: - (unsigned)diskCapacity;	// 0x36964ad5
- (BOOL)isUsableByClientWithIdentifier:(id)identifier;	// 0x369647e5
// declared property getter: - (unsigned)memoryCapacity;	// 0x36964af5
// declared property getter: - (id)persistentIdentifier;	// 0x36964839
- (void)purgeMemoryCache;	// 0x36964b15
- (void)reloadWithCacheConfiguration:(id)cacheConfiguration;	// 0x36964859
- (void)removeAllCachedResponses;	// 0x36964b41
- (void)removeCachedResponseForRequest:(id)request;	// 0x36964b61
- (void)saveMemoryCacheToDisk;	// 0x36964b81
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x36964bad
@end

