/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Ubiquity.framework/Ubiquity
 */

#import "Ubiquity-Structs.h"
#import "NSNetServiceDelegate.h"
#import "NSNetServiceBrowserDelegate.h"
#import "APSConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class APSConnection, NSMutableSet, NSString, NSSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UBBonjourManager : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate, APSConnectionDelegate> {
@private
	bool _suspended;	// 4 = 0x4
	bool _invalidated;	// 5 = 0x5
	bool _setupComplete;	// 6 = 0x6
	bool _use_ssl;	// 7 = 0x7
	bool _previously_suspended;	// 8 = 0x8
	bool _bonjourDisabled;	// 9 = 0x9
	bool _srvBonjourDisabled;	// 10 = 0xa
	dispatch_queue_s *_notifyQueue;	// 12 = 0xc
	CFRunLoopRef _runloop;	// 16 = 0x10
	unsigned char _uuid[16];	// 20 = 0x14
	int _port;	// 36 = 0x24
	/*function-pointer*/ void *_notify_cb;	// 40 = 0x28
	/*function-pointer*/ void *_mme_set_token_cb;	// 44 = 0x2c
	/*function-pointer*/ void *_mme_push_cb;	// 48 = 0x30
	void *_notify_ctx;	// 52 = 0x34
	NSString *_domain;	// 56 = 0x38
	NSString *_mmeUUID;	// 60 = 0x3c
	NSString *_pushEnvironment;	// 64 = 0x40
	NSSet *_vlans;	// 68 = 0x44
	NSMutableDictionary *_identities;	// 72 = 0x48
	CFDictionaryRef _uuidCtx;	// 76 = 0x4c
	int _periodicPushInterval;	// 80 = 0x50
	unsigned long long _refetchMMeConfigTime;	// 84 = 0x54
	dispatch_source_s *_periodicPushTimer;	// 92 = 0x5c
	APSConnection *_pushConnection;	// 96 = 0x60
	struct {
		NSMutableDictionary *_browsers;
		NSMutableSet *_resolvingNetServices;
		struct {
			NSMutableDictionary *_byFQDN;
			NSMutableDictionary *_byIdentity;
		} _monitoredNetServices;
	} _browserState;	// 100 = 0x64
	struct {
		NSMutableDictionary *_netServices;
	} _publishedState;	// 116 = 0x74
	struct {
		struct {
			NSMutableDictionary *_byFQDN;
			NSMutableDictionary *_byEndPoint;
			NSMutableDictionary *_byUUID;
		} _foundServices;
		NSMutableDictionary *_preferredFQDN;
		NSMutableDictionary *_collectionUUIDs;
	} _serviceState;	// 120 = 0x78
}
- (id)init;	// 0x30d15241
- (void)_deallocBrowserState;	// 0x30d140b1
- (void)_deallocNetworkState;	// 0x30d14fd1
- (void)_deallocPublishedState;	// 0x30d147f9
- (void)_deallocPushState;	// 0x30d14c69
- (void)_deallocServiceState;	// 0x30d14a71
- (id)_endPointForServiceDict:(id)serviceDict;	// 0x30d156b5
- (id)_fqdnForNetService:(id)netService;	// 0x30d157d1
- (id)_fqdnForServiceDict:(id)serviceDict;	// 0x30d1573d
- (id)_getIdentityForNetService:(id)netService rnd:(unsigned *)rnd;	// 0x30d15909
- (bool)_havePreferredFQDN:(id)fqdn;	// 0x30d172fd
- (void)_initBrowserState;	// 0x30d14371
- (void)_initNetworkState;	// 0x30d1508d
- (void)_initPublishedState;	// 0x30d149c5
- (void)_initPushState;	// 0x30d14d41
- (void)_initServiceState;	// 0x30d14b49
- (bool)_isValid;	// 0x30d14095
- (void)_processNetService:(id)service type:(int)type;	// 0x30d17bdd
- (void)_rearmPeriodicPushTimer;	// 0x30d16821
- (void)_refetchMMeConfig;	// 0x30d16019
- (void)_restartBrowsers;	// 0x30d14645
- (void)_runBlockOnRL:(id)rl;	// 0x30d15525
- (id)_serviceDataForIdentity:(id)identity prependedID:(id)anId;	// 0x30d15a35
- (bool)_splitNetServiceName:(id)name rnd:(unsigned *)rnd hashedID:(id *)anId;	// 0x30d15851
- (void)_updateServicesForIdentity:(id)identity;	// 0x30d15b4d
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x30d188bd
- (void)connection:(id)connection didReceivePublicToken:(id)token;	// 0x30d187f9
- (XXStruct_iqH4zA *)copyOnlinePeerContexts:(unsigned *)contexts;	// 0x30d179d9
- (id)copyPreferredEndPointURL:(unsigned char [16])url;	// 0x30d173e1
- (void)dealloc;	// 0x30d15149
- (void)invalidate;	// 0x30d178ad
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x30d18489
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x30d18699
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x30d18365
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x30d18749
- (void)netServiceDidResolveAddress:(id)netService;	// 0x30d18545
- (void)removeIdentity:(id)identity;	// 0x30d16d19
- (void)resume;	// 0x30d17671
- (void)sendMMePush:(id)push;	// 0x30d165fd
- (void)setContext:(void *)context forUUID:(unsigned char [16])uuid;	// 0x30d17941
- (void)setMMeUUID:(unsigned char [16])uuid;	// 0x30d170fd
- (void)setPreferredFQDN:(id)fqdn forUUID:(unsigned char [16])uuid;	// 0x30d1722d
- (void)setupClient:(unsigned char [16])client port:(int)port use_ssl:(bool)ssl notify_cb:(/*function-pointer*/ void *)cb notify_ctx:(void *)ctx domain:(id)domain vlans:(id)vlans;	// 0x30d16a05
- (void)setupMMeEnvironment:(id)environment mme_set_token_cb:(/*function-pointer*/ void *)cb mme_push_cb:(/*function-pointer*/ void *)cb3;	// 0x30d16fbd
- (void)suspend;	// 0x30d175c1
- (void)updateIdentity:(id)identity collections:(id)collections;	// 0x30d16bb9
- (bool)uuidOnline:(unsigned char [16])online;	// 0x30d17559
@end

