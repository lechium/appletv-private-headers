/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVDataClient.h"

@class ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MEITunesPhotoDataClient : ATVDataClient {
	AppContext *_appContext;	// 4 = 0x4
	unsigned long long _pairingID;	// 8 = 0x8
	ATVDataQuery *_pendingQuery;	// 16 = 0x10
}
@property(readonly, assign) AppContext *appContext;	// G=0x1ac71; converted property
@property(assign, nonatomic) unsigned long long pairingID;	// G=0x1c069; S=0x1c081; @synthesize=_pairingID
@property(retain, nonatomic) ATVDataQuery *pendingQuery;	// G=0x1c095; S=0x1c0a5; @synthesize=_pendingQuery
+ (id)iTunesPhotoDataClientWithName:(id)name;	// 0x1a941
- (id)initWithPairingID:(unsigned long long)pairingID appContext:(AppContext *)context name:(id)name;	// 0x1aa31
- (void).cxx_destruct;	// 0x1c0cd
- (void)_photoLibraryChangedNotification:(id)notification;	// 0x1bfa5
- (void)_photoLibraryReceivedNotification:(id)notification;	// 0x1b885
- (void)_requestPhotoLibraryWithQuery:(id)query;	// 0x1b4d1
// converted property getter: - (AppContext *)appContext;	// 0x1ac71
- (void)concreteDataClientConnect;	// 0x1ac81
- (void)concreteDataClientDisconnect;	// 0x1ae55
- (void)dealloc;	// 0x1ab31
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x1af6d
- (id)imageURLWithAsset:(id)asset size:(CGSize)size crop:(BOOL)crop;	// 0x1b161
// declared property getter: - (unsigned long long)pairingID;	// 0x1c069
// declared property getter: - (id)pendingQuery;	// 0x1c095
// declared property setter: - (void)setPairingID:(unsigned long long)anId;	// 0x1c081
// declared property setter: - (void)setPendingQuery:(id)query;	// 0x1c0a5
@end

