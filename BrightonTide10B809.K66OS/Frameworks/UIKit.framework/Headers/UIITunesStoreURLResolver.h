/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIITunesStoreURLResolver : UIURLResolver {
	NSArray *_converters;	// 4 = 0x4
}
+ (id)urlCacheChangedNotificationName;	// 0x32b9c0a5
+ (id)urlCacheName;	// 0x32b9bb31
- (id)initWithDictionary:(id)dictionary;	// 0x32b9bb3d
- (id)_newURLConverterWithHostPatterns:(id)hostPatterns hostWhiteList:(id)list pathPatterns:(id)patterns;	// 0x32d35185
- (id)convertedURLForURL:(id)url;	// 0x32b9c19d
- (void)dealloc;	// 0x32d351fd
@end
