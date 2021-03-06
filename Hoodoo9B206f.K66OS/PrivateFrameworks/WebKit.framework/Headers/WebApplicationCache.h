/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebApplicationCache : NSObject {
}
+ (long long)defaultOriginQuota;	// 0x30d33055
+ (void)deleteAllApplicationCaches;	// 0x30d33509
+ (void)deleteCacheForOrigin:(id)origin;	// 0x30d334e9
+ (long long)diskUsageForOrigin:(id)origin;	// 0x30d33519
+ (void)initializeWithBundleIdentifier:(id)bundleIdentifier;	// 0x30d33065
+ (long long)maximumSize;	// 0x30d331b5
+ (id)originsWithCache;	// 0x30d331f9
+ (void)setDefaultOriginQuota:(long long)quota;	// 0x30d0c5f9
+ (void)setMaximumSize:(long long)size;	// 0x30d331c5
@end

