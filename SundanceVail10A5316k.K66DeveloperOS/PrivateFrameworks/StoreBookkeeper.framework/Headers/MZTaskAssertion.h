/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MZTaskAssertion : NSObject {
@private
	id _expireHandler;	// 4 = 0x4
	NSString *_debugInfo;	// 8 = 0x8
}
+ (id)newBackgroundTaskWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x3085a275
- (id)initWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x3085a2b1
- (void)dealloc;	// 0x3085a3cd
- (id)description;	// 0x3085a571
- (void)invalidate;	// 0x3085a49d
- (void)performExpirationHandler;	// 0x3085a441
@end

