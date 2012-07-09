/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebApplicationCache : NSObject {
}
+ (long long)defaultOriginQuota;	// 0x31678f55
+ (void)deleteAllApplicationCaches;	// 0x31678f85
+ (void)deleteCacheForOrigin:(id)origin;	// 0x31678f95
+ (long long)diskUsageForOrigin:(id)origin;	// 0x31678f65
+ (void)initializeWithBundleIdentifier:(id)bundleIdentifier;	// 0x31678d75
+ (long long)maximumSize;	// 0x31678f11
+ (id)originsWithCache;	// 0x31678fb5
+ (void)setDefaultOriginQuota:(long long)quota;	// 0x316583bd
+ (void)setMaximumSize:(long long)size;	// 0x31678f21
@end
