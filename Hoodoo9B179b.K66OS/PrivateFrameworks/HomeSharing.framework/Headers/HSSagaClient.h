/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSMutableSet;

@interface HSSagaClient : NSObject {
@private
	BOOL _active;	// 4 = 0x4
	xpc_connection_s *_connection;	// 8 = 0x8
	void *_connectionData;	// 12 = 0xc
	dispatch_queue_s *_connectionQueue;	// 16 = 0x10
	id _deauthenticationCompletionHandler;	// 20 = 0x14
	id _updateInProgressChangedHandler;	// 24 = 0x18
	BOOL _didLoadURLBag;	// 28 = 0x1c
	NSMutableSet *_pendingArtworkRequests;	// 32 = 0x20
	unsigned _updatePollingFrequency;	// 36 = 0x24
}
@property(copy, nonatomic) id updateInProgressChangedHandler;	// G=0x317b5841; S=0x317b5851; @synthesize=_updateInProgressChangedHandler
- (id)init;	// 0x317b2b71
- (id)initWithAccount:(id)account baseURL:(id)url userAgent:(id)agent cookieHeaders:(id)headers;	// 0x317b2b95
- (id)initWithAccount:(id)account baseURL:(id)url userAgent:(id)agent cookieHeaders:(id)headers buildIdentifier:(id)identifier;	// 0x317b2bc1
- (void)_cancelUpdatePolling;	// 0x317b4bf1
- (void)_handleMessage:(unsigned long long)message withResponse:(void *)response;	// 0x317b4cc9
- (void)_loadURLBagWithCompletionHandler:(id)completionHandler;	// 0x317b4ed9
- (void)_scheduleUpdatePolling;	// 0x317b54c9
- (void)_serverDidLaunch;	// 0x317b55d1
- (void)_serverUpdateInProgressDidChange;	// 0x317b57b9
- (void)_updateForPollingInterval;	// 0x317b5635
- (void)addGeniusPlaylistWithName:(id)name seedItemSagaIDs:(id)ids itemSagaIDs:(id)ids3 completionHandler:(id)handler;	// 0x317b3211
- (void)addPlaylistWithName:(id)name completionHandler:(id)handler;	// 0x317b33d1
- (void)authenticateWithCompletionHandler:(id)completionHandler;	// 0x317b34cd
- (void)becomeActive;	// 0x317b38c9
- (void)dealloc;	// 0x317b312d
- (void)deauthenticateWithCompletionHandler:(id)completionHandler;	// 0x317b3cd9
- (void)incrementItemProperty:(id)property forSagaID:(unsigned long long)sagaID;	// 0x317b48cd
- (void)isAuthenticatedWithCompletionHandler:(id)completionHandler;	// 0x317b3dfd
- (void)isAuthenticatedWithQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x317b3e1d
- (void)loadArtworkDataForSagaID:(unsigned long long)sagaID;	// 0x317b3fa5
- (void)loadGeniusItemsForSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x317b4195
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)completionHandler;	// 0x317b43dd
- (void)loadUpdateProgressWithCompletionHandler:(id)completionHandler;	// 0x317b44b1
- (void)removePlaylistWithSagaID:(unsigned long long)sagaID completionHandler:(id)handler;	// 0x317b463d
- (void)resignActive;	// 0x317b4711
- (void)setItemProperties:(id)properties forSagaID:(unsigned long long)sagaID;	// 0x317b4741
// declared property setter: - (void)setUpdateInProgressChangedHandler:(id)progressChangedHandler;	// 0x317b5851
// declared property getter: - (id)updateInProgressChangedHandler;	// 0x317b5841
- (void)updatePlaylistWithSagaID:(unsigned long long)sagaID itemSagaIDs:(id)ids queue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x317b4a11
@end

