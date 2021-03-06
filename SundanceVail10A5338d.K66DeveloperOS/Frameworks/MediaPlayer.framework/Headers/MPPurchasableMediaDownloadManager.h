/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "SSDownloadHandlerDelegate.h"
#import <NSObject.h> // Unknown library
#import "SSDownloadManagerObserver.h"

@class NSMutableArray, NSArray, NSMutableSet, MPPurchasableMediaDownloadOperationQueue, NSMutableDictionary, SSDownloadHandler, SSDownloadManager;
@protocol OS_dispatch_queue;

@interface MPPurchasableMediaDownloadManager : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	NSMutableSet *_alertViews;	// 8 = 0x8
	NSMutableDictionary *_downloadByMediaItemPersistentID;	// 12 = 0xc
	SSDownloadHandler *_downloadHandler;	// 16 = 0x10
	SSDownloadManager *_downloadManager;	// 20 = 0x14
	MPPurchasableMediaDownloadOperationQueue *_downloadOperationQueue;	// 24 = 0x18
	NSMutableArray *_downloads;	// 28 = 0x1c
	NSObject<OS_dispatch_queue> *_downloadSessionQueue;	// 32 = 0x20
	NSMutableArray *_downloadSessions;	// 36 = 0x24
	CFDictionaryRef _groupDownloadsByDownload;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSArray *downloads;	// G=0x342268b1; @synthesize=_downloads
+ (id)sharedManager;	// 0x342260c1
- (id)init;	// 0x34226171
- (void)_cancelAndCleanUpPurchasableDownload:(id)download;	// 0x34229851
- (void)_cancelPurchasesBatchedWithDownload:(id)download;	// 0x34229769
- (void)_cleanUpPurchasableDownload:(id)download;	// 0x34229d1d
- (void)_closeSessionForAsset:(id)asset;	// 0x34229e69
- (id)_downloadSessionForAVAsset:(id)avasset;	// 0x3422a1a1
- (id)_downloadSessionWithID:(id)anId;	// 0x3422a41d
- (BOOL)_isNetworkSufficientForPlayback;	// 0x3422a6c1
- (id)_newDownloadObserverForPurchasableMediaDownload:(id)purchasableMediaDownload purchaseHandler:(id)handler completionHandler:(id)handler3;	// 0x3422a8d1
- (id)_newPurchasableMediaDownloadFromSSDownload:(id)ssdownload;	// 0x3422a735
- (id)_openSessionWithProperties:(id)properties;	// 0x3422a90d
- (id)_openSessionWithProperties:(id)properties style:(int *)style;	// 0x3422af01
- (void)_setMediaItem:(id)item isTemporaryDownload:(BOOL)download;	// 0x3422b425
- (BOOL)_showCellularRestrictedDialogForMediaItem:(id)mediaItem;	// 0x3422b579
- (BOOL)_showNoNetworkDialogForMediaItem:(id)mediaItem;	// 0x3422b899
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason;	// 0x34226b39
- (void)addDownloadForMediaItem:(id)mediaItem purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x34226b61
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason;	// 0x34226a75
- (void)addDownloadsForMediaEntity:(id)mediaEntity purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x34226a9d
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason;	// 0x34226ba1
- (void)addDownloadsForMediaItemCollection:(id)mediaItemCollection purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x34226bc9
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason;	// 0x34226bfd
- (void)addDownloadsForMediaItems:(id)mediaItems purchaseReason:(int)reason withPurchaseHandler:(id)purchaseHandler completionHandler:(id)handler;	// 0x34226c25
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x342296b5
- (BOOL)canOpenSessionWithMediaItem:(id)mediaItem;	// 0x3422778d
- (void)cancelDownloadForMediaItem:(id)mediaItem;	// 0x34227719
- (void)dealloc;	// 0x3422675d
- (id)downloadForFirstDownloadingMediaItemInCollection:(id)collection;	// 0x342278f9
- (id)downloadForMediaItem:(id)mediaItem;	// 0x342279c9
- (id)downloadForMediaItemPersistentID:(unsigned long long)mediaItemPersistentID;	// 0x342279fd
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x34229185
- (void)downloadHandler:(id)handler handleSession:(id)session;	// 0x342293d9
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x34228b31
// declared property getter: - (id)downloads;	// 0x342268b1
- (id)downloadsBatchedWithDownload:(id)download;	// 0x34227be5
- (BOOL)isSessionRequiredToPlayMediaItem:(id)playMediaItem;	// 0x34227dad
- (id)openSessionWithMediaItem:(id)mediaItem;	// 0x342280a1
- (BOOL)prioritizeSessionForAVItem:(id)avitem;	// 0x34228561
- (void)purchaseOperation:(id)operation didFinishWithPurchase:(id)purchase error:(id)error;	// 0x342288e5
- (void)purchaseOperationDidCancel:(id)purchaseOperation;	// 0x34228a9d
- (BOOL)showNetworkConstraintDialogForMediaItem:(id)mediaItem;	// 0x3422872d
@end

