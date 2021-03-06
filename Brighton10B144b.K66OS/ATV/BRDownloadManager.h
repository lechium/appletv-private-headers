/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRDownloadManager : XXUnknownSuperclass {
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x3a21f5; converted property
+ (id)allDownloads;	// 0x3a1535
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x3a1aa9
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x3a169d
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3a1851
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x3a1251
+ (id)downloadTestManager;	// 0x3a1405
+ (BOOL)downloadsInProgress;	// 0x3a14d5
+ (void)initialize;	// 0x3a1029
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x3a108d
+ (void)registerDownloadTestManager:(id)manager;	// 0x3a1335
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x3a1175
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x3a1785
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3a1989
- (id)init;	// 0x3a1ce9
- (void)_assetPlayable:(id)playable;	// 0x3a23f1
- (void)addDownload:(id)download;	// 0x3a1e59
- (void)cancelNetworkSpeedTest;	// 0x3a2639
- (void)dealloc;	// 0x3a1dc9
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x3a21e5
// converted property getter: - (id)downloads;	// 0x3a21f5
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x14a411
- (BOOL)networkDiagnosticsAvailable;	// 0x3a2629
- (BOOL)networkTestInProgress;	// 0x3a262d
- (void)pauseCurrentDownloads;	// 0x14a4dd
- (void)prioritizeDownload:(id)download;	// 0x3a22d1
- (void)removeDownload:(id)download;	// 0x3a1fd1
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3a2635
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3a2631
@end

