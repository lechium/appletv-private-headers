/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"

@class NSMutableDictionary, HSLibrary, NSMutableSet;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {
@private
	HSLibrary *_homeSharingLibrary;	// 20 = 0x14
	NSMutableDictionary *_tokenDataForDSIDs;	// 24 = 0x18
	NSMutableSet *_loadedContainerPIDs;	// 28 = 0x1c
	NSMutableDictionary *_blocksForLoadingContainerPIDs;	// 32 = 0x20
	dispatch_queue_s *_containerFillQueue;	// 36 = 0x24
	int _homeSharingGroupIDChangedToken;	// 40 = 0x28
	unsigned _updateCheckEnabled : 1;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) HSLibrary *homeSharingLibrary;	// G=0x309de7e1; @synthesize=_homeSharingLibrary
@property(readonly, assign, nonatomic) BOOL isSupportedSharingVersion;	// G=0x309dd589; 
+ (void)_determineHomeSharingGroupIDIfNecessary;	// 0x309dd6f9
+ (void)beginScanningForLibraries;	// 0x309dada9
+ (BOOL)canValidateHomeSharingCredentials;	// 0x309db299
+ (void)determineHomeSharingGroupIDForAppleID:(id)appleID password:(id)password completionHandler:(id)handler;	// 0x309db3e5
+ (void)endScanningForLibraries;	// 0x309db129
+ (BOOL)hasHomeSharingCredentials;	// 0x309db231
+ (id)homeSharingAppleID;	// 0x309db2a5
+ (id)homeSharingGroupID;	// 0x309db345
+ (BOOL)isConnecting;	// 0x309db161
+ (BOOL)isScanningForLibraries;	// 0x309dad99
- (id)initWithHomeSharingLibrary:(id)homeSharingLibrary;	// 0x309db57d
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x309dd531
- (void)_fetchTokensForAuthorizedDSIDs;	// 0x309dd86d
- (void)_fillContainerForQueryCriteria:(id)queryCriteria completionBlock:(id)block;	// 0x309de01d
- (void)_scheduleUpdateCheck;	// 0x309ddb65
- (id)_tokenDataForMediaItem:(id)mediaItem;	// 0x309ddfc9
- (void)_willEnterForegroundNotification:(id)notification;	// 0x309dd549
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x309dd015
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block progressHandler:(id)handler;	// 0x309dba1d
- (void)dealloc;	// 0x309db89d
- (void)disconnect;	// 0x309dc091
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x309dc0dd
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x309dd215
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x309dc4e5
- (BOOL)hasGeniusMixes;	// 0x309dcc55
// declared property getter: - (id)homeSharingLibrary;	// 0x309de7e1
// declared property getter: - (BOOL)isSupportedSharingVersion;	// 0x309dd589
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x309dc861
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x309dcb21
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x309dc785
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x309dcb55
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x309dc6a9
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x309dc5c9
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x309dc4e9
- (id)name;	// 0x309db9b9
- (id)protectedContentSupportStorageURL;	// 0x309dd4cd
- (BOOL)requiresAuthentication;	// 0x309db9f9
- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)itemID;	// 0x309dd405
- (void)setTokenData:(id)data forAuthorizedDSID:(unsigned long long)authorizedDSID;	// 0x309dd5bd
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x309dcc59
- (id)uniqueIdentifier;	// 0x309db9d9
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value;	// 0x309dc4e1
@end

