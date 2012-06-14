/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"

@class NSSet;

@interface ACDAccountAccessManager : NSObject {
	NSSet *_accessPlugins;	// 4 = 0x4
	dispatch_queue_s *_accessPluginQueue;	// 8 = 0x8
	dispatch_semaphore_s *_accessPluginQueueSemaphore;	// 12 = 0xc
	id _authorizationCompletionHandler;	// 16 = 0x10
}
- (id)init;	// 0x324a94a9
- (void).cxx_destruct;	// 0x324aa6a5
- (id)_authorizationPluginForAccountType:(id)accountType;	// 0x324aa471
- (void)authorizeAccessToAccounts:(id)accounts forClient:(id)client withAccessInfo:(id)accessInfo completion:(id)completion;	// 0x324a9575
- (void)dealloc;	// 0x324a9521
- (void)revokeAccessToAccounts:(id)accounts forBundleID:(id)bundleID withAccessInfo:(id)accessInfo completion:(id)completion;	// 0x324a9ac1
- (void)revokeAllAccessToAccounts:(id)accounts withCompletion:(id)completion;	// 0x324a9fd5
@end
