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
+ (id)urlCacheChangedNotificationName;	// 0x3096608d
+ (id)urlCacheName;	// 0x30965b19
- (id)initWithDictionary:(id)dictionary;	// 0x30965b25
- (id)_newURLConverterWithHostPatterns:(id)hostPatterns hostWhiteList:(id)list pathPatterns:(id)patterns;	// 0x30afed05
- (id)convertedURLForURL:(id)url;	// 0x30966185
- (void)dealloc;	// 0x30afed7d
@end

