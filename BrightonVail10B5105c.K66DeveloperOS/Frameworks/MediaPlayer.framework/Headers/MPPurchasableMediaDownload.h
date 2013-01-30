/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSError, MPPurchasableMediaDownloadManager, NSMutableArray, NSOperation;
@protocol OS_dispatch_queue;

@interface MPPurchasableMediaDownload : NSObject {
	NSObject<OS_dispatch_queue> *_accessQueue;	// 4 = 0x4
	BOOL _cancelled;	// 8 = 0x8
	unsigned long long _downloadIdentifier;	// 12 = 0xc
	NSString *_downloadPhaseIdentifier;	// 20 = 0x14
	NSError *_failureError;	// 24 = 0x18
	BOOL _finished;	// 28 = 0x1c
	BOOL _hasCheckedRestoreDownload;	// 29 = 0x1d
	MPPurchasableMediaDownloadManager *_manager;	// 32 = 0x20
	NSMutableArray *_observers;	// 36 = 0x24
	NSOperation *_operation;	// 40 = 0x28
	long long _bytesDownloaded;	// 44 = 0x2c
	double _downloadPercentComplete;	// 52 = 0x34
	unsigned long long _libraryItemIdentifier;	// 60 = 0x3c
	BOOL _restoreDownload;	// 68 = 0x44
	long long _storeItemIdentifier;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) long long bytesDownloaded;	// G=0x3506f745; @synthesize=_bytesDownloaded
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// G=0x3506fc8d; 
@property(readonly, assign, nonatomic) long long downloadIdentifier;	// G=0x350704a1; 
@property(readonly, assign, nonatomic) double downloadPercentComplete;	// G=0x3506f829; @synthesize=_downloadPercentComplete
@property(readonly, assign, nonatomic) NSString *downloadPhaseIdentifier;	// G=0x3506f919; 
@property(readonly, assign, nonatomic) NSError *failureError;	// G=0x3506fadd; 
@property(readonly, assign, nonatomic, getter=isFinished) BOOL finished;	// G=0x3506fd5d; 
@property(readonly, assign, nonatomic) unsigned long long libraryItemIdentifier;	// G=0x3506ff31; @synthesize=_libraryItemIdentifier
@property(retain) MPPurchasableMediaDownloadManager *manager;	// G=0x35070991; S=0x35070b41; converted property
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x3506fe2d; @dynamic
@property(readonly, assign, nonatomic, getter=isRestoreDownload) BOOL restoreDownload;	// G=0x3506fe61; @synthesize=_restoreDownload
@property(readonly, assign, nonatomic) long long storeItemIdentifier;	// G=0x35070015; @synthesize=_storeItemIdentifier
- (id)init;	// 0x3506f545
- (id)initWithManager:(id)manager;	// 0x3506f5e5
- (void)_notifyDidCancel;	// 0x35070d3d
- (void)_notifyDidFinishWithError:(id)_notify;	// 0x3507110d
- (void)_notifyDidProgressWithPercentComplete:(double)_notify;	// 0x35071551
- (void)_notifyDidPurchaseWithPurchase:(id)_notify;	// 0x350719dd
- (void)addObserver:(id)observer;	// 0x350700f9
// declared property getter: - (long long)bytesDownloaded;	// 0x3506f745
- (void)cancel;	// 0x350701f5
- (void)dealloc;	// 0x3506f645
- (id)description;	// 0x3506f6d1
// declared property getter: - (long long)downloadIdentifier;	// 0x350704a1
// declared property getter: - (double)downloadPercentComplete;	// 0x3506f829
// declared property getter: - (id)downloadPhaseIdentifier;	// 0x3506f919
// declared property getter: - (id)failureError;	// 0x3506fadd
// declared property getter: - (BOOL)isCancelled;	// 0x3506fc8d
// declared property getter: - (BOOL)isFinished;	// 0x3506fd5d
// declared property getter: - (BOOL)isPaused;	// 0x3506fe2d
// declared property getter: - (BOOL)isRestoreDownload;	// 0x3506fe61
// declared property getter: - (unsigned long long)libraryItemIdentifier;	// 0x3506ff31
// converted property getter: - (id)manager;	// 0x35070991
- (void)removeObserver:(id)observer;	// 0x35070271
- (void)setBytesDownloaded:(long long)downloaded;	// 0x35070389
- (void)setCancelled:(BOOL)cancelled;	// 0x35070421
- (void)setDownloadIdentifier:(unsigned long long)identifier;	// 0x35070585
- (void)setDownloadPercentComplete:(double)complete;	// 0x350706fd
- (void)setDownloadPhaseIdentifier:(id)identifier;	// 0x3507061d
- (void)setFailureError:(id)error;	// 0x35070795
- (void)setFinished:(BOOL)finished;	// 0x35070879
- (void)setLibraryItemIdentifier:(unsigned long long)identifier;	// 0x350708f9
// converted property setter: - (void)setManager:(id)manager;	// 0x35070b41
- (void)setRestoreDownload:(BOOL)download;	// 0x35070c25
- (void)setStoreItemIdentifier:(long long)identifier;	// 0x35070ca5
// declared property getter: - (long long)storeItemIdentifier;	// 0x35070015
@end
