/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface SQLitePredicate : NSObject <NSCopying> {
}
- (id)SQLForEntityClass:(Class)entityClass;	// 0x3680d295
- (id)SQLJoinClausesForEntityClass:(Class)entityClass;	// 0x3680d299
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x3680d291
- (id)copyWithZone:(NSZone *)zone;	// 0x3680d281
- (unsigned)hash;	// 0x3680d29d
- (BOOL)isEqual:(id)equal;	// 0x3680d2c5
@end
