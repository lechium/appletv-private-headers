/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRStateMachine.h"

@class NSNumber, NSString, ATVDataItem, NSTimer;

__attribute__((visibility("hidden")))
@interface LTAVLeaseAgent : BRStateMachine {
	ATVDataItem *_item;	// 24 = 0x18
	unsigned long _FPMediaKind;	// 28 = 0x1c
	NSString *_storeMediaKind;	// 32 = 0x20
	NSString *_leaseID;	// 36 = 0x24
	int _numRenewalRetries;	// 40 = 0x28
	NSNumber *_sagaID;	// 44 = 0x2c
	BOOL _drmSyncComplete;	// 48 = 0x30
	FPLeaseSyncOpaque_Ref _lease;	// 52 = 0x34
	NSTimer *renewTimer;	// 56 = 0x38
	double _leaseDuration;	// 60 = 0x3c
}
@property(assign, nonatomic) double leaseDuration;	// G=0x74fa5; S=0x74fbd; @synthesize=_leaseDuration
@property(assign, nonatomic) __weak NSTimer *renewTimer;	// G=0x74f71; S=0x74f91; @synthesize
+ (id)_generateRequestForOperation:(id)operation clientData:(id)data leaseID:(id)anId storeMediaKind:(id)kind;	// 0x758e5
+ (void)initialize;	// 0x74745
+ (id)leaseAgentForMediaItem:(id)mediaItem player:(id)player;	// 0x74775
+ (void)stopAllLeases;	// 0x747d9
- (id)initWithMediaItem:(id)mediaItem player:(id)player;	// 0x74a01
- (void).cxx_destruct;	// 0x74fd1
- (void)_assetDidChange:(id)_asset;	// 0x757ad
- (void)_augmentSagaMediaItemWithDownloadResponse:(id)downloadResponse;	// 0x77b39
- (void)_authenticationFailed:(id)failed;	// 0x752e5
- (void)_authenticationSucceeded:(id)succeeded;	// 0x75209
- (id)_decodeContent:(id)content;	// 0x7503d
- (void)_delayedEventTimerFired:(id)fired;	// 0x78159
- (void)_deviceWillSleep:(id)_device;	// 0x7587d
- (void)_drmSyncCompleteWithError:(id)error wasCancelled:(BOOL)cancelled;	// 0x75c6d
- (id)_dsidFromDownloadResponse:(id)downloadResponse;	// 0x77f61
- (id)_errorFromDictionary:(id)dictionary;	// 0x74471
- (BOOL)_errorIsRecoverable:(int)recoverable;	// 0x780d9
- (void)_initializeStateMachine:(id)machine;	// 0x75fbd
- (id)_initiateLease;	// 0x77cd5
- (id)_invalidateAgentWithError:(id)error;	// 0x75e69
- (id)_invalidateAgentWithError:(id)error wasCancelled:(BOOL)cancelled;	// 0x75e7d
- (void)_leaseAcquisitionLoaded:(id)loaded;	// 0x753c1
- (id)_leaseID;	// 0x75e3d
- (void)_leaseRenewalLoaded:(id)loaded;	// 0x75549
- (void)_mediaDidNotResolve:(id)_media;	// 0x7585d
- (void)_mediaResolved:(id)resolved;	// 0x75811
- (BOOL)_playerMediaIsLeasedItem:(id)item;	// 0x75f25
- (void)_playerWillStop:(id)_player;	// 0x75749
- (void)_postDelayedEvent:(id)event;	// 0x780f9
- (void)_renewLease:(id)lease;	// 0x77ac9
- (void)_stopLease;	// 0x77f3d
- (void)dealloc;	// 0x74eb1
// declared property getter: - (double)leaseDuration;	// 0x74fa5
// declared property getter: - (id)renewTimer;	// 0x74f71
// declared property setter: - (void)setLeaseDuration:(double)duration;	// 0x74fbd
// declared property setter: - (void)setRenewTimer:(id)timer;	// 0x74f91
- (void)startLease;	// 0x74f31
- (void)stopLease;	// 0x74f51
@end

