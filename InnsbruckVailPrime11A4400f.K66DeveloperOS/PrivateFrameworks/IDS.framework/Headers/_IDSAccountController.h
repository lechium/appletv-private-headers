/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library
#import "IDSDaemonListenerProtocol.h"

@class NSMapTable, NSMutableSet, NSString, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {
	id _delegateContext;	// 4 = 0x4
	NSMapTable *_delegateToInfo;	// 8 = 0x8
	NSString *_serviceToken;	// 12 = 0xc
	NSString *_service;	// 16 = 0x10
	NSMutableSet *_cachedAccounts;	// 20 = 0x14
	NSMutableSet *_enabledAccounts;	// 24 = 0x18
	NSMutableDictionary *_transactionIDToHandlersMap;	// 28 = 0x1c
	BOOL _accountsLoaded;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSSet *accounts;	// G=0x311659cd; 
@property(readonly, assign, nonatomic) NSSet *enabledAccounts;	// G=0x31165a45; 
@property(readonly, assign, nonatomic) NSString *serviceName;	// G=0x31165abd; 
- (id)initWithService:(id)service delegateContext:(id)context;	// 0x311656d1
- (void)_callDelegatesWithBlock:(id)block;	// 0x31165c8d
- (void)_connect;	// 0x31165e2d
- (void)_loadCachedAccounts;	// 0x311664f5
- (void)_loadCachedAccountsWithDictionaries:(id)dictionaries;	// 0x31165f85
- (void)_removeAccount:(id)account;	// 0x31167789
- (void)_removeAndDeregisterAccount:(id)account;	// 0x311676cd
- (void)_setupAccountWithLoginID:(id)loginID accountConfig:(id)config authToken:(id)token password:(id)password completionHandler:(id)handler;	// 0x31166a45
- (void)accountAdded:(id)added;	// 0x31167c0d
- (void)accountDisabled:(id)disabled onService:(id)service;	// 0x311698e9
- (void)accountEnabled:(id)enabled onService:(id)service;	// 0x311695b5
- (void)accountRemoved:(id)removed;	// 0x31168055
- (void)accountUpdated:(id)updated;	// 0x311683a5
- (id)accountWithLoginID:(id)loginID service:(id)service;	// 0x311668ed
- (id)accountWithUniqueID:(id)uniqueID;	// 0x311667ad
// declared property getter: - (id)accounts;	// 0x311659cd
- (void)accountsChanged:(id)changed forTopic:(id)topic;	// 0x31168705
- (void)addAccount:(id)account;	// 0x31167595
- (void)addDelegate:(id)delegate queue:(id)queue;	// 0x31165b21
- (void)dealloc;	// 0x311658d9
- (void)disableAccount:(id)account;	// 0x31167a25
- (void)enableAccount:(id)account;	// 0x31167845
// declared property getter: - (id)enabledAccounts;	// 0x31165a45
- (void)removeDelegate:(id)delegate;	// 0x31165c35
// declared property getter: - (id)serviceName;	// 0x31165abd
- (void)setupAccountWithLoginID:(id)loginID aliases:(id)aliases password:(id)password completionHandler:(id)handler;	// 0x31166c21
- (void)setupAccountWithLoginID:(id)loginID authToken:(id)token profileID:(id)anId selfHandle:(id)handle aliases:(id)aliases completionHandler:(id)handler;	// 0x31166e95
- (void)setupAccountWithLoginID:(id)loginID authToken:(id)token profileID:(id)anId selfHandle:(id)handle completionHandler:(id)handler;	// 0x31166be9
- (void)setupAccountWithLoginID:(id)loginID password:(id)password completionHandler:(id)handler;	// 0x31166bc5
- (void)setupAccountWithSetupParameters:(id)setupParameters aliases:(id)aliases completionHandler:(id)handler;	// 0x311671e5
- (void)setupCompleteForAccount:(id)account transactionID:(id)anId setupError:(id)error;	// 0x311691ed
@end

