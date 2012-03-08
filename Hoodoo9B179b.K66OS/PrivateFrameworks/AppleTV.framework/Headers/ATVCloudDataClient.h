/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVPushNotificationListener.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, ML3MusicLibrary, ATVSagaClient, ATVCloudItemPropertiesUploadNotificationTask, ATVCloudPushNotificationTask, NSTimer, NSNumber;

@interface ATVCloudDataClient : NSObject <ATVPushNotificationListener> {
@private
	dispatch_queue_s *_artworkProcessingQueue;	// 4 = 0x4
	unsigned short _concurrentArtworkRequestCount;	// 8 = 0x8
	BOOL _deauthenticationInProgress;	// 10 = 0xa
	BOOL _deviceActivated;	// 11 = 0xb
	unsigned _uploadInterval;	// 12 = 0xc
	ATVDataClientRef _cloudDataClient;	// 16 = 0x10
	ATVSagaClient *_cloudClient;	// 20 = 0x14
	ML3MusicLibrary *_mlLibrary;	// 24 = 0x18
	NSMutableDictionary *_artworkRequestMap;	// 28 = 0x1c
	NSNumber *_accountDSID;	// 32 = 0x20
	ATVCloudPushNotificationTask *_pushUpdateTask;	// 36 = 0x24
	ATVCloudItemPropertiesUploadNotificationTask *_itemPropertiesUploadTask;	// 40 = 0x28
	NSTimer *_playerStopTimer;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *_accountDSID;	// G=0x3038ffcd; S=0x3038ffdd; @synthesize
@property(retain, nonatomic) NSMutableDictionary *_artworkRequestMap;	// G=0x3038ff99; S=0x3038ffa9; @synthesize
@property(retain, nonatomic) ATVSagaClient *_cloudClient;	// G=0x3038ff31; S=0x3038ff41; @synthesize
@property(assign, nonatomic) ATVDataClientRef _cloudDataClient;	// G=0x3038ff11; S=0x3038ff21; @synthesize
@property(retain, nonatomic) ATVCloudItemPropertiesUploadNotificationTask *_itemPropertiesUploadTask;	// G=0x30390035; S=0x30390045; @synthesize
@property(retain, nonatomic) ML3MusicLibrary *_mlLibrary;	// G=0x3038ff65; S=0x3038ff75; @synthesize
@property(retain, nonatomic) NSTimer *_playerStopTimer;	// G=0x30390069; S=0x30390079; @synthesize
@property(retain, nonatomic) ATVCloudPushNotificationTask *_pushUpdateTask;	// G=0x30390001; S=0x30390011; @synthesize
+ (ATVDataClientRef)cloudDataClient;	// 0x3038f8d5
- (id)init;	// 0x3038fb79
// declared property getter: - (id)_accountDSID;	// 0x3038ffcd
// declared property getter: - (id)_artworkRequestMap;	// 0x3038ff99
- (void)_cancelPlayerStopTimer;	// 0x30391efd
// declared property getter: - (id)_cloudClient;	// 0x3038ff31
- (void)_cloudClientLibraryUpdated:(id)updated;	// 0x30391335
- (void)_cloudClientUpdateLibrary:(id)library;	// 0x3039128d
// declared property getter: - (ATVDataClientRef)_cloudDataClient;	// 0x3038ff11
- (void)_connectionProgress;	// 0x303913d5
- (void)_continueInitCloudClient;	// 0x30390e7d
- (void)_deallocCloudClient;	// 0x30390fb9
- (void)_deleteCloudDatabase;	// 0x3039118d
- (void)_iTunesAccountChanged:(id)changed;	// 0x30391821
- (void)_iTunesAccountReauthenticated:(id)reauthenticated;	// 0x303919b9
- (BOOL)_initCloudClient;	// 0x30390305
// declared property getter: - (id)_itemPropertiesUploadTask;	// 0x30390035
- (void)_itemPropertiesUploadTaskNotification:(id)notification;	// 0x303917d9
- (void)_itemPropertyUpdateNotification:(id)notification;	// 0x303915b9
// declared property getter: - (id)_mlLibrary;	// 0x3038ff65
- (void)_musicStoreURLBagRefreshed:(id)refreshed;	// 0x30391b25
- (void)_parentalControlAccessChanged:(id)changed;	// 0x30391c71
- (void)_playerStateChanged:(id)changed;	// 0x30391d0d
// declared property getter: - (id)_playerStopTimer;	// 0x30390069
- (void)_playerStopTimerHandler:(id)handler;	// 0x30391ea5
// declared property getter: - (id)_pushUpdateTask;	// 0x30390001
- (void)_registerPushForUser:(id)user cookies:(id)cookies;	// 0x303bde85
- (void)_rootCollectionUpdated:(id)updated;	// 0x30391bf9
- (void)_sendConnectionMade:(id)made;	// 0x30391385
- (void)_unregisterPush;	// 0x303be2e1
- (void)_userActivityHandler:(id)handler;	// 0x30391e49
- (void)cancelArtworkRequestForIdentifier:(id)identifier;	// 0x303bf561
- (void)cancelImageRequest:(void *)request;	// 0x303902f5
- (void)cloudDataClient:(ATVDataClientRef)client handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30398e71
- (void)connectWithContext:(void *)context;	// 0x3039009d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x303be31d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x303be321
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x303be35d
- (void)connectionDidFinishLoading:(id)connection;	// 0x303be319
- (void)dealloc;	// 0x3038fd21
- (void)didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x303be361
- (void)disconnectWithContext:(void *)context;	// 0x3039022d
- (void)handleGeniusQuery:(ATVMediaQueryRef)query completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x30399149
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context completionQueue:(dispatch_queue_s *)queue completionHandler:(id)handler;	// 0x3039023d
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier requestedSize:(CGSize)size crop:(BOOL)crop withContext:(void *)context;	// 0x303902d1
- (void *)loadArtworkForMedia:(void *)media artworkIdentifier:(id)identifier withContext:(void *)context;	// 0x303bebe9
- (void)processArtworkQuery:(ATVMediaQueryRef)query withCompletionQueue:(dispatch_queue_s *)completionQueue completionHandler:(id)handler;	// 0x303bf67d
- (void)setDataClient:(ATVDataClientRef)client;	// 0x3038fdf5
// declared property setter: - (void)set_accountDSID:(id)dsid;	// 0x3038ffdd
// declared property setter: - (void)set_artworkRequestMap:(id)map;	// 0x3038ffa9
// declared property setter: - (void)set_cloudClient:(id)client;	// 0x3038ff41
// declared property setter: - (void)set_cloudDataClient:(ATVDataClientRef)client;	// 0x3038ff21
// declared property setter: - (void)set_itemPropertiesUploadTask:(id)task;	// 0x30390045
// declared property setter: - (void)set_mlLibrary:(id)library;	// 0x3038ff75
// declared property setter: - (void)set_playerStopTimer:(id)timer;	// 0x30390079
// declared property setter: - (void)set_pushUpdateTask:(id)task;	// 0x30390011
@end

