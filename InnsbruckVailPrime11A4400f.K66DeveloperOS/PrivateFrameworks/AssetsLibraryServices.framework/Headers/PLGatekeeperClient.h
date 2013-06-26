/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import "AssetsLibraryServices-Structs.h"
#import </libobjc.A.h>

@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLGatekeeperClient : NSObject {
	NSObject<OS_xpc_object> *connection;	// 4 = 0x4
}
@property(assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x3019089d; S=0x301908ad; @synthesize
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;	// G=0x3018daa9; 
+ (id)sharedInstance;	// 0x3018dab1
- (id)init;	// 0x3018db55
- (void)addAssetWithURL:(id)url toAlbumWithUUID:(id)uuid handler:(id)handler;	// 0x3018ea31
- (void)addGroupWithName:(id)name handler:(id)handler;	// 0x3018e845
- (void)analyzeAllMoments;	// 0x30190551
- (void)analyzeInvalidMomentsAndDupesIfNeeded;	// 0x3019059d
- (void)analyzeMoment:(id)moment;	// 0x301905e9
- (void)analyzeMomentList:(id)list;	// 0x301906a9
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)purgeSharedAssetsSpace;	// 0x301900b5
- (void)automaticallyDeleteEmptyAlbum:(id)album;	// 0x30190439
- (void)cleanupAfteriTunesSync;	// 0x3018f505
- (void)cleanupForStoreDemoMode;	// 0x3018fe21
- (void)cleanupModelAfteriTunesRestore;	// 0x3018f779
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned)lastClearedRecordID;	// 0x3018fdc9
- (void)clearChangeStore;	// 0x3018fa09
// declared property getter: - (id)connection;	// 0x3019089d
- (void)createPhotoLibraryDatabase;	// 0x3018ecd9
- (void)createPhotostreamAlbumWithStreamID:(id)streamID;	// 0x3018fae9
- (void)dataMigrationWillFinish;	// 0x3018f881
- (id)emailAddressForKey:(int)key;	// 0x3019023d
- (void)enablePhotostreamsWithStreamID:(id)streamID;	// 0x3018fa91
- (int)fileDescriptorForAssetURL:(id)assetURL;	// 0x3018df49
- (id)fileURLForAssetURL:(id)assetURL withAdjustments:(BOOL)adjustments;	// 0x3018e015
- (id)fileURLForNewAssetWithType:(unsigned)type extension:(id)extension;	// 0x3018e465
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)albums;	// 0x3018f465
- (int)getCurrentApplicationBadgeCount;	// 0x3018fc5d
- (id)getCurrentBulletins;	// 0x3018fb95
- (int)getCurrentModelVersion;	// 0x30190801
- (void)getLibrarySizes:(id)sizes;	// 0x3018f115
- (void)getPhotosAndVideosCountWithHandler:(id)handler;	// 0x3018ee6d
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned)recordID;	// 0x3018fce1
- (id)imageDataForAsset:(id)asset format:(int)format;	// 0x3018e759
- (void)importFileSystemAssetsWaitingForReply:(BOOL)reply;	// 0x3018ed5d
- (int)keyForEmailAddress:(id)emailAddress;	// 0x30190185
- (void)launchAssetsd;	// 0x3018ee05
- (void)notifyAboutTerminationDueToUncaughtException:(id)uncaughtException;	// 0x3018f905
- (id)personInfoDictionaryForPersonID:(id)personID;	// 0x301902ed
- (unsigned long long)purgeableSharedAssetsSpace;	// 0x30190005
- (void)rebuildCloudFeed;	// 0x30190769
- (void)rebuildMomentLists;	// 0x30190505
- (void)rebuildMomentsIncremental:(BOOL)incremental;	// 0x301904a1
- (void)recalculateCachedAlbumCounts;	// 0x3018f9c5
- (void)recoverFromCrashIfNeeded;	// 0x3018fa4d
- (void)repairPotentialModelCorruption;	// 0x3018f7fd
- (void)repairSingletonObjects;	// 0x3018fb49
// declared property getter: - (id)replyQueue;	// 0x3018daa9
- (void)requestAccessWithHandler:(id)handler;	// 0x3018dc71
- (void)requestImageDataForAsset:(id)asset format:(int)format handler:(id)handler;	// 0x3018e561
- (void)resetDupesAnalysis;	// 0x301907b5
- (void)saveAssetWithJobDictionary:(id)jobDictionary handler:(id)handler imageSurface:(IOSurfaceRef)surface previewImageSurface:(IOSurfaceRef)surface4;	// 0x3018e115
- (unsigned)secondsNeededToCleanupModelAfteriTunesRestore;	// 0x3018f6dd
- (void)sendDaemonJob:(id)job replyHandler:(id)handler;	// 0x3018fe65
- (id)sendQueue;	// 0x3018da99
// declared property setter: - (void)setConnection:(id)connection;	// 0x301908ad
- (void)setPersonInfoDictionary:(id)dictionary forPersonID:(id)personID;	// 0x301903a9
- (void)updateCameraPreviewWellImage:(id)image;	// 0x3018f345
- (void)updateModelAfterOTARestore;	// 0x3018f3e1
- (void)updateRestoredAssetWithUUID:(id)uuid paths:(id)paths;	// 0x3018f551
- (void)updateSharedAlbumsCachedServerConfigurationLimits;	// 0x3018ffb5
- (void)updateThumbnailsForPhotos:(id)photos waitForReply:(BOOL)reply assignNewIndex:(BOOL)index forceRefresh:(BOOL)refresh;	// 0x3018f269
- (void)waitUntilConnectionSendsAllMessages;	// 0x3018ff1d
- (void)writeDataInBackground:(id)background toFileURL:(id)fileURL;	// 0x3018f669
@end
