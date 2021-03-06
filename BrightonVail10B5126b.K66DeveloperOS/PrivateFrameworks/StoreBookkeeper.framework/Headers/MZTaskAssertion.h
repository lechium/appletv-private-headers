/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class MZProcessAssertion, NSString;

@interface MZTaskAssertion : NSObject {
	id _expireHandler;	// 4 = 0x4
	NSString *_debugInfo;	// 8 = 0x8
	MZProcessAssertion *_processAssertion;	// 12 = 0xc
}
+ (id)newBackgroundTaskWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x35494c3d
- (id)initWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x35494c79
- (void)dealloc;	// 0x35494fed
- (id)description;	// 0x354953c5
- (void)invalidate;	// 0x3549511d
- (void)performExpirationHandler;	// 0x35495061
@end

