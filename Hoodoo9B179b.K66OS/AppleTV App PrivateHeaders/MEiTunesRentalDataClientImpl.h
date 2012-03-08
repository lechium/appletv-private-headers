/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTVAPPBinary-Structs.h"
#import "MEiTunesRentalDataClient.h"

@class BRBackgroundTask, NSCountedSet, NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MEiTunesRentalDataClientImpl : MEiTunesRentalDataClient {
	BRBackgroundTask *_rentalExpirationTask;	// 4 = 0x4
	ATVDataClientRef _dataClientRef;	// 8 = 0x8
	void *_connectInfo;	// 12 = 0xc
	NSArray *_rentals;	// 16 = 0x10
	double _lastRefreshInitiated;	// 20 = 0x14
	BOOL _acquisitionRefreshesRentals;	// 28 = 0x1c
	NSMutableArray *_cacheTriggers;	// 32 = 0x20
	int _lastRankValue;	// 36 = 0x24
	NSCountedSet *_showInfosToIgnore;	// 40 = 0x28
	NSMutableDictionary *_showInfosToWriteToKVS;	// 44 = 0x2c
	BOOL _overrideRentalCountCheck;	// 48 = 0x30
	CFArrayRef _iCloudItems;	// 52 = 0x34
}
@property(retain) NSArray *rentals;	// G=0x45a21; S=0x45861; converted property
+ (void)_updateMediaItem:(ATVMediaItemRef)item withShowInfo:(id)showInfo transactionOptions:(id)options;	// 0x45b55
+ (void)_updateShowInfoForRentals:(id)rentals;	// 0x45ca5
- (id)init;	// 0x45391
- (void).cxx_destruct;	// 0x48e29
- (BOOL)_isShowInfoBeingWrittenToKVSForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x47bd5
- (void)_updateShowInfoForMediaItem:(ATVMediaItemRef)mediaItem withPropertiesUpdated:(id)propertiesUpdated;	// 0x47d09
- (void)acquisitionSuccessful:(id)successful;	// 0x47161
- (void)authenticationCancelled:(id)cancelled;	// 0x474f1
- (void)authenticationSucceeded:(id)succeeded;	// 0x47429
- (void)availableRentalCount:(id)count;	// 0x46ffd
- (void)availableRentals:(id)rentals;	// 0x46f5d
- (id)buildRentalsArray:(id)array;	// 0x45f69
- (void)checkInOutstandingRentals:(id)outstandingRentals;	// 0x48c99
- (id)cloudItems;	// 0x45751
- (void)connectClient:(ATVDataClientRef)client info:(void *)info;	// 0x45825
- (void)dealloc;	// 0x45695
- (void)disconnectClient:(ATVDataClientRef)client;	// 0x4585d
- (void)fetchAvailableRentals;	// 0x4873d
- (void)mainMenuVisible:(id)visible;	// 0x48c89
- (void)markAsConnected;	// 0x46e09
- (ATVMediaItemRef)mediaItemWithEarliestExpirationDate;	// 0x46e41
- (void)networkStateChanged:(id)changed;	// 0x48bf9
- (void)playbackResolutionChanged:(id)changed;	// 0x478cd
- (void)preferredAccountAuthenticationSucceeded:(id)succeeded;	// 0x48aa9
- (void)preferredAccountEstablished:(id)established;	// 0x488b1
- (void)preferredAccountRemoved:(id)removed;	// 0x48785
- (id)processQuery:(ATVMediaQueryRef)query;	// 0x46cb9
- (void)propertyUpdated:(id)updated;	// 0x47929
- (void)queueRentalRefreshCompleteNotification:(id)notification;	// 0x481d5
- (void)refreshAvailableRentals;	// 0x48319
- (void)refreshAvailableRentalsImmediate;	// 0x48541
- (void)refreshAvailableRentalsOverridingRentalCheckCount;	// 0x482f9
- (void)rentalRefreshRequest:(id)request;	// 0x475a5
// converted property getter: - (id)rentals;	// 0x45a21
- (id)rentalsAndPurchases;	// 0x45a35
- (void)setDataClientRef:(ATVDataClientRef)ref;	// 0x45aa1
// converted property setter: - (void)setRentals:(id)rentals;	// 0x45861
- (void)showInfoChanged:(id)changed;	// 0x475e1
- (void)updateRentalExpirationTask;	// 0x489f1
@end

