/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x331388d5; converted property
+ (id)allDownloads;	// 0x33137bc1
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x33138141
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x33137d0d
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x33137ef9
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x33137911
+ (id)downloadTestManager;	// 0x33137aa1
+ (BOOL)downloadsInProgress;	// 0x33137b61
+ (void)initialize;	// 0x331376f9
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x3313775d
+ (void)registerDownloadTestManager:(id)manager;	// 0x331379e1
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x33137845
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x33137e0d
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x33138025
- (id)init;	// 0x331383cd
- (void)_assetPlayable:(id)playable;	// 0x33138abd
- (void)addDownload:(id)download;	// 0x33138539
- (void)cancelNetworkSpeedTest;	// 0x33138d0d
- (void)dealloc;	// 0x331384a9
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x331388c5
// converted property getter: - (id)downloads;	// 0x331388d5
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x32f343c9
- (BOOL)networkDiagnosticsAvailable;	// 0x33138d01
- (BOOL)networkTestInProgress;	// 0x33138d05
- (void)pauseCurrentDownloads;	// 0x32f3448d
- (void)prioritizeDownload:(id)download;	// 0x331389a9
- (void)removeDownload:(id)download;	// 0x331386b1
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x33138d09
@end

