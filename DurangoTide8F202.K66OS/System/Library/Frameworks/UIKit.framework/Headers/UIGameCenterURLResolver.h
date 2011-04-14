/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIURLResolver.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIGameCenterURLResolver : UIURLResolver {
@private
	NSArray *_gameCenterHostPatterns;	// 4 = 0x4
	NSArray *_gameCenterPathPatterns;	// 8 = 0x8
}
+ (id)urlCacheChangedNotificationName;	// 0x307516d9
+ (id)urlCacheName;	// 0x307516cd
- (id)initWithDictionary:(id)dictionary;	// 0x307528e9
- (void)dealloc;	// 0x3075288d
- (BOOL)isGameCenterURL:(id)url;	// 0x3075179d
@end

