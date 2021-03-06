/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import </libobjc.A.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface ACDAccessPluginManager : NSObject {
	NSSet *_accessPlugins;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_accessPluginQueue;	// 8 = 0x8
}
- (id)init;	// 0x2fe9d9bd
- (void).cxx_destruct;	// 0x2fe9ed51
- (id)_authorizationPluginForAccountType:(id)accountType;	// 0x2fe9eb1d
- (void)authorizeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id)completion;	// 0x2fe9de69
- (void)handleAccessRequestToAccountsOfType:(id)type forClient:(id)client withOptions:(id)options store:(id)store allowUserInteraction:(BOOL)interaction completion:(id)completion;	// 0x2fe9da15
- (void)revokeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id)completion;	// 0x2fe9e2d1
- (void)revokeAllAccessToAccountsOfType:(id)type store:(id)store withCompletion:(id)completion;	// 0x2fe9e72d
@end

