/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "AVAudioSessionDelegateMediaPlayerOnly.h"
#import "MPAudioDeviceControllerDelegate.h"
#import "MPAVErrorResolverDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MPAVErrorResolver, NSMutableSet, MPAVDestinationBrowser, MPAVPlaylistManager, MPAVItem, NSDictionary, MPQueuePlayer, AVPlayerLayer, MPAudioDeviceController, NSNotification, MPVideoView, AVAudioSessionMediaPlayerOnly, MPAVControllerToAggregateDCommunicator, NSDate, NSString, MPQueueFeeder, NSArray, CALayer;
@protocol OS_dispatch_source;

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAudioDeviceControllerDelegate, MPAVErrorResolverDelegate> {
	MPAVPlaylistManager *_avPlaylistManager;	// 4 = 0x4
	BOOL _forceSynchronousQueueFilling;	// 8 = 0x8
	BOOL _managesSystemDownloads;	// 9 = 0x9
	int _playbackMode;	// 12 = 0xc
	BOOL _valid;	// 16 = 0x10
	MPAudioDeviceController *_audioDeviceController;	// 20 = 0x14
	MPQueueFeeder *_feeder;	// 24 = 0x18
	MPAVErrorResolver *_itemErrorResolver;	// 28 = 0x1c
	NSDictionary *_pickedRouteDescription;	// 32 = 0x20
	AVPlayerLayer *_videoLayer;	// 36 = 0x24
	unsigned _videoLayerUsageCount;	// 40 = 0x28
	MPVideoView *_videoView;	// 44 = 0x2c
	unsigned _tickTimerEnabled;	// 48 = 0x30
	CFRunLoopTimerRef _tickTimer;	// 52 = 0x34
	double _tickInterval;	// 56 = 0x38
	CFRunLoopTimerRef _currentItemBookkeepingTimer;	// 64 = 0x40
	int _indexChangeDirection;	// 68 = 0x44
	unsigned _itemIndexAtDeath;	// 72 = 0x48
	int _lastDisconnectReason;	// 76 = 0x4c
	double _lastKnownTimeBeforeDeath;	// 80 = 0x50
	double _lastPlaybackIndexChangeTime;	// 88 = 0x58
	double _lastSetTime;	// 96 = 0x60
	double _lastSetTimeChangeTime;	// 104 = 0x68
	unsigned _hasDelayedCurrentTimeToSet : 1;	// 112 = 0x70
	unsigned _forceDelayedCurrentTimeToSet : 1;	// 112 = 0x70
	double _delayedCurrentTimeToSet;	// 116 = 0x74
	int _delayedCurrentTimeOptions;	// 124 = 0x7c
	unsigned _lastSetTimeMarker;	// 128 = 0x80
	double _temporaryChapterTime;	// 132 = 0x84
	unsigned _autoPlayWhenLikelyToKeepUp : 1;	// 140 = 0x8c
	unsigned _autoplayDisabledForCurrentItem : 1;	// 140 = 0x8c
	int _eqPreset;	// 144 = 0x90
	double _nextFadeOutDuration;	// 148 = 0x94
	id _boundaryTimeObserver;	// 156 = 0x9c
	NSArray *_boundaryTimes;	// 160 = 0xa0
	unsigned _boundaryTimeIndexLastPosted;	// 164 = 0xa4
	float _rateBeforeSeek;	// 168 = 0xa8
	float _inflightSeekRate;	// 172 = 0xac
	unsigned _scanLevel;	// 176 = 0xb0
	int _scanDirection;	// 180 = 0xb4
	int _resetRateAfterSeekingUpdateDisabled;	// 184 = 0xb8
	unsigned _seeklessState;	// 188 = 0xbc
	unsigned _isSeekingOrScrubbing : 1;	// 192 = 0xc0
	unsigned _resetRateAfterSeeking : 1;	// 192 = 0xc0
	unsigned _activeRewindHoldingAtStart : 1;	// 192 = 0xc0
	double _lastSeekableEnd;	// 196 = 0xc4
	double _whenSawSeekableEnd;	// 204 = 0xcc
	double _maxSeekableFwd;	// 212 = 0xd4
	double _seekFwdSlop;	// 220 = 0xdc
	double _lastSeekableStart;	// 228 = 0xe4
	double _whenSawSeekableStart;	// 236 = 0xec
	double _maxSeekableRev;	// 244 = 0xf4
	double _seekRevSlop;	// 252 = 0xfc
	unsigned _canSeekRev : 1;	// 260 = 0x104
	unsigned _canSeekFwd : 1;	// 260 = 0x104
	unsigned _alwaysPlayWheneverPossible : 1;	// 260 = 0x104
	unsigned _stopAtEnd : 1;	// 260 = 0x104
	unsigned _didReachEnd : 1;	// 260 = 0x104
	unsigned _pausedDuringInterruption : 1;	// 260 = 0x104
	unsigned _resumePlaybackWhenActive : 1;	// 260 = 0x104
	unsigned _useApplicationAudioSession : 1;	// 260 = 0x104
	unsigned _subtitlesEnabled : 1;	// 261 = 0x105
	unsigned _videoFrameDisplayOnResumeDisabled : 1;	// 261 = 0x105
	unsigned _disconnectedVideoLayerOnSuspend : 1;	// 261 = 0x105
	unsigned _playInBackgroundUserDefaultEnabled : 1;	// 261 = 0x105
	unsigned _canPlayFastForward : 1;	// 261 = 0x105
	unsigned _canPlayFastReverse : 1;	// 261 = 0x105
	unsigned _state;	// 264 = 0x108
	unsigned _displayOverridePlaybackState;	// 268 = 0x10c
	unsigned _bufferingState;	// 272 = 0x110
	NSNotification *_delayedPlaybackStateNotification;	// 276 = 0x114
	NSObject<OS_dispatch_source> *_stallTimerSource;	// 280 = 0x118
	NSMutableArray *_queueFeederStateStack;	// 284 = 0x11c
	int _feederMode;	// 288 = 0x120
	MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;	// 292 = 0x124
	double _itemInitialBookmarkTime;	// 296 = 0x128
	float _rateBeforeResignActive;	// 304 = 0x130
	int _ubiquitousBookkeepingDisabledCount;	// 308 = 0x134
	double _secondsSinceUbiquitousCheckpoint;	// 312 = 0x138
	Class _videoViewClass;	// 320 = 0x140
	NSString *_audioSessionModeOverride;	// 324 = 0x144
	double _lastInterruptionEnd;	// 328 = 0x148
	BOOL _shouldEnforceHDCP;	// 336 = 0x150
	NSMutableSet *_clientsWantingAirPlayVideo;	// 340 = 0x154
	BOOL _didResolveError;	// 344 = 0x158
	BOOL _disallowsAMRAudio;	// 345 = 0x159
	NSDate *_itemDidChangeDate;	// 348 = 0x15c
	unsigned _stallBackgroundTaskIdentifier;	// 352 = 0x160
	MPAVDestinationBrowser *_destinationBrowser;	// 356 = 0x164
}
@property(assign, nonatomic) int EQPreset;	// G=0x35cd0a69; S=0x35cc6afd; @synthesize=_eqPreset
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;	// G=0x35cc78dd; 
@property(readonly, assign, nonatomic) unsigned activeRepeatType;	// G=0x35cc64a1; 
@property(readonly, assign, nonatomic) unsigned activeShuffleType;	// G=0x35cc64dd; 
@property(assign, nonatomic) BOOL alwaysPlayWheneverPossible;	// G=0x35cc6989; S=0x35cc699d; 
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x35cc6f65; @synthesize=_audioDeviceController
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x35cd0a29; S=0x35cd0a39; @synthesize=_audioSessionModeOverride
@property(assign, nonatomic) BOOL autoPlayWhenLikelyToKeepUp;	// G=0x35cc6735; S=0x35cc6175; 
@property(readonly, assign, nonatomic) MPQueuePlayer *avPlayer;	// G=0x35cc7415; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x35cc6749; @synthesize=_bufferingState
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x35cc6759; S=0x35cc6ac1; 
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x35cc678d; 
@property(readonly, assign, nonatomic) BOOL currentItemIsRental;	// G=0x35cc74cd; 
@property(readonly, assign, nonatomic) double currentMonotonousTime;	// G=0x35cc5ae9; 
@property(assign, nonatomic) double currentTime;	// G=0x35cc5999; S=0x35cc61a5; 
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *destinationBrowser;	// G=0x35cd0a49; @synthesize=_destinationBrowser
@property(assign, nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;	// G=0x35cc7e81; S=0x35cc7ea9; 
@property(assign, nonatomic) BOOL disableAirPlayMirroringDuringPlayback;	// G=0x35cc6a51; S=0x35cc6a85; 
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x35cc74d1; S=0x35cc74e1; 
@property(assign, nonatomic) unsigned displayOverridePlaybackState;	// G=0x35cd0a59; S=0x35ccf2cd; @synthesize=_displayOverridePlaybackState
@property(readonly, assign, nonatomic) double durationOfCurrentItemIfAvailable;	// G=0x35cc8615; 
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;	// G=0x35cc7569; S=0x35cc799d; 
@property(readonly, assign, nonatomic) MPQueueFeeder *feeder;	// G=0x35cd0a79; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x35cd0a89; S=0x35cd0a99; @synthesize=_feederMode
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x35cd0aa9; S=0x35cc7d69; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic, getter=isFullScreenVideoMode) BOOL fullScreenVideoMode;	// G=0x35cc6e69; 
@property(readonly, assign, nonatomic) BOOL hasVolumeControl;	// G=0x35cc6d9d; 
@property(readonly, assign, nonatomic) BOOL isAirPlayVideoActive;	// G=0x35cc68a9; 
@property(readonly, assign, nonatomic) BOOL isCurrentItemReady;	// G=0x35cc715d; 
@property(readonly, assign, nonatomic) BOOL isInExtendedMode;	// G=0x35cc85d1; 
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x35cd0ab9; S=0x35cc7da1; @synthesize=_managesSystemDownloads
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x35cc6e45; 
@property(assign, nonatomic) double nextFadeOutDuration;	// G=0x35cd0ac9; S=0x35cc6b41; @synthesize=_nextFadeOutDuration
@property(readonly, assign, nonatomic) unsigned numberOfItems;	// G=0x35cc69b5; 
@property(readonly, assign, nonatomic) double playableDurationOfCurrentItemIfAvailable;	// G=0x35cc863d; 
@property(assign, nonatomic) int playbackMode;	// G=0x35cc6f01; S=0x35cc6e91; 
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x35cc68e1; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x35cc6a29; S=0x35cc6c2d; 
@property(readonly, assign, nonatomic, getter=isRewindHoldingAtStart) BOOL rewindHoldingAtStart;	// G=0x35cc5869; 
@property(readonly, assign, nonatomic) NSString *routeNameForVolumeControl;	// G=0x35cc6e49; 
@property(assign, nonatomic) BOOL shouldEnforceHDCP;	// G=0x35cd0ae1; S=0x35cd0af1; @synthesize=_shouldEnforceHDCP
@property(readonly, assign, nonatomic) BOOL showPlaybackStateOverlaysOnTVOut;	// G=0x35cc85d5; 
@property(assign, nonatomic) unsigned shuffleType;	// G=0x35cc6d61; S=0x35cc6cbd; 
@property(readonly, assign, nonatomic, getter=isShuffled) BOOL shuffled;	// G=0x35cc6935; 
@property(assign, nonatomic) unsigned state;	// G=0x35cd0b01; S=0x35cc8559; @synthesize=_state
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x35cc6f11; S=0x35cc6f25; 
@property(assign, nonatomic) BOOL subtitlesEnabled;	// G=0x35cc6d89; S=0x35cc6d15; 
@property(assign, nonatomic) BOOL ubiquitousBookkeepingEnabled;	// G=0x35cc9f95; S=0x35cc9f71; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x35cc6f8d; S=0x35cc6fa1; 
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x35cc6979; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x35cc8569; S=0x35cc857d; 
@property(readonly, assign, nonatomic) CALayer *videoLayer;	// G=0x35cc7ed5; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x35cc7f7d; 
@property(assign, nonatomic) float volume;	// G=0x35cc6df1; S=0x35cc6e19; 
+ (id)_controllerKeysToObserve;	// 0x35ccc639
+ (id)_itemKeysToObserve;	// 0x35ccc6b1
+ (id)_playerKeysToObserve;	// 0x35ccc7a9
+ (void)initialize;	// 0x35cc44e9
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x35cc63ed
+ (BOOL)outputSupportsAC3;	// 0x35cc7025
+ (id)sharedInstance;	// 0x35cc4529
- (id)init;	// 0x35cc45e1
// declared property getter: - (int)EQPreset;	// 0x35cd0a69
- (void)_applicationDidBecomeActive:(id)_application;	// 0x35ccb811
- (void)_applicationDidFinishSuspensionSnapshot:(id)_application;	// 0x35ccbbed
- (void)_applicationSuspended:(id)suspended;	// 0x35ccbb71
- (void)_applicationSuspendedEventsOnly:(id)only;	// 0x35ccba21
- (void)_applicationWillResignActive:(id)_application;	// 0x35ccb799
- (void)_attemptAutoPlay;	// 0x35cce8a5
- (id)_avPlaylistManager;	// 0x35ccc849
- (BOOL)_canPlayItem:(id)item;	// 0x35cd05f1
- (void)_cancelStallTimer;	// 0x35ccc8c5
- (void)_cancelUpdateCurrentItemBookkeepingTimer;	// 0x35ccf4c9
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)by;	// 0x35ccc9c1
- (void)_checkForBoundaryTimeCrossing;	// 0x35ccde79
- (void)_clearLastSetTimeIfPlayerTimeIsValid;	// 0x35cc51d1
- (void)_clearResetRateAfterSeeking;	// 0x35ccf535
- (void)_clearSeekingIntervalsForStreaming;	// 0x35cd02d5
- (void)_clearVideoLayer;	// 0x35cccc5d
- (void)_closedCaptioningStatusDidChangeNotification:(id)_closedCaptioningStatus;	// 0x35ccbcc1
- (void)_configureAVPlaylistManager:(id)manager;	// 0x35cccced
- (void)_configureUpdateCurrentItemBookkeepingTimer;	// 0x35ccf4f5
- (BOOL)_connectAVPlaylistManager;	// 0x35ccd061
- (unsigned)_currentIndexInBoundaryCMTimes:(id)boundaryCMTimes;	// 0x35ccdda9
- (void)_delayedPlaybackIndexChange;	// 0x35ccbde9
- (void)_delayedPostPlaybackStateChangedNotification;	// 0x35ccf059
- (void)_delayedSetCurrentTime;	// 0x35cd0011
- (void)_delayedUpdateScanningRate;	// 0x35ccbe41
- (void)_delayedUpdateTimeMarker;	// 0x35ccbe65
- (void)_disconnectAVPlaylistManagerWithReason:(int)reason;	// 0x35cca42d
- (unsigned)_displayPlaybackState;	// 0x35ccf385
- (void)_endSeekAndChangeRate:(BOOL)rate;	// 0x35ccd219
- (id)_extractImageFromMetadata:(id)metadata;	// 0x35cd0345
- (void)_firstVideoFrameDisplayed:(id)displayed;	// 0x35cc8e6d
- (void)_isAirPlayVideoActiveDidChange:(id)_isAirPlayVideoActive;	// 0x35cc8eb5
- (BOOL)_isChangingQueueContents;	// 0x35cc901d
- (BOOL)_isCloudItem:(id)item;	// 0x35ccd459
- (BOOL)_isDownloadingCloudItem:(id)item;	// 0x35ccd4a5
- (BOOL)_isDownloadingCloudOrTiltItem:(id)item;	// 0x35ccd529
- (BOOL)_isVideoLayerAttachedToPlayer;	// 0x35ccf735
- (void)_itemAssetIsLoadedNotification:(id)notification;	// 0x35cc8f3d
- (void)_itemDidChange:(id)_item;	// 0x35cc907d
- (void)_itemFailedToPlayToEnd:(id)end;	// 0x35cc9435
- (void)_itemFailedToPlayToEndNotification:(id)endNotification;	// 0x35cc9405
- (BOOL)_itemIsRestricted:(id)restricted;	// 0x35cd059d
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x35cc9511
- (void)_itemReadyToPlay:(id)play;	// 0x35cc9801
- (void)_itemTimeMarkersAvailableNotification:(id)notification;	// 0x35cc8fb1
- (void)_itemWillChange:(id)_item;	// 0x35cc9909
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)_mediaLibraryDynamicProperties;	// 0x35ccbdb9
- (void)_pauseBookkeepingTimer;	// 0x35ccf451
- (void)_pausePlaybackIfNecessary;	// 0x35cd08a1
- (void)_pauseTickTimer;	// 0x35cd0449
- (void)_playbackFailedWithError:(id)error canResolve:(BOOL)resolve;	// 0x35cd04c1
- (unsigned)_playbackIndexForDelta:(int)delta fromIndex:(unsigned)index ignoreElapsedTime:(BOOL)time;	// 0x35ccd541
// declared property getter: - (id)_playerAVAudioSession;	// 0x35cc78dd
- (void)_playerFailedToQueueNotification:(id)queueNotification;	// 0x35cc93b9
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)item;	// 0x35cc8dad
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)_postMPAVControllerSize;	// 0x35cc8ced
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)originalState newState:(unsigned)state delayable:(BOOL)delayable;	// 0x35ccf0b9
- (void)_prepareToPlayItem:(id)playItem;	// 0x35ccd651
- (void)_rateDidChange:(id)_rate;	// 0x35cca0f1
- (void)_registerForAVItemNotifications:(id)avitemNotifications;	// 0x35cce119
- (void)_registerForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x35cce36d
- (void)_reloadTimeMarkerObservationsForItem:(id)item;	// 0x35ccdf7d
- (void)_resetInternalState;	// 0x35cce5d1
- (void)_resetQueue:(BOOL)queue useVideoLayer:(BOOL)layer;	// 0x35cce6a5
- (void)_resumeBookkeepingTimer;	// 0x35ccf491
- (void)_resumeTickTimer;	// 0x35cd0489
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;	// 0x35ccf3b1
- (unsigned)_seeklessStateForState:(unsigned)state;	// 0x35cc67fd
- (void)_serverConnectionDidDie:(id)_serverConnection;	// 0x35cca6a5
- (void)_setAVControllerQueueFeeder:(id)feeder startQueueIndex:(unsigned)index;	// 0x35cc5279
- (void)_setActionAtEndAttributeForState:(unsigned)state;	// 0x35ccefc9
- (void)_setBufferingState:(unsigned)state;	// 0x35ccec39
- (void)_setFeeder:(id)feeder;	// 0x35cc75a1
- (void)_setItemErrorResolver:(id)resolver;	// 0x35ccf561
- (BOOL)_setRate:(float)rate forScanning:(BOOL)scanning;	// 0x35cc6bb5
- (void)_setState:(unsigned)state;	// 0x35ccf5f1
- (void)_setValid:(BOOL)valid;	// 0x35ccf8d1
- (void)_setVideoLayerAttachedToPlayer:(BOOL)player force:(BOOL)force pauseIfNecessary:(BOOL)necessary;	// 0x35ccf795
- (void)_setVideoViewClass:(Class)aClass;	// 0x35cc85d9
- (void)_setupDisplayForPlayback;	// 0x35ccc2a9
- (BOOL)_showsPlayingWhenInState:(unsigned)state;	// 0x35cc67ad
- (void)_sizeDidChange:(id)_size;	// 0x35cca865
- (void)_streamBufferFull:(id)full;	// 0x35cca895
- (void)_streamLikelyToKeepUp:(id)keepUp;	// 0x35cca969
- (void)_streamRanDry:(id)dry;	// 0x35ccaa3d
- (void)_streamUnlikelyToKeepUp:(id)keepUp;	// 0x35ccab11
- (void)_switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play configureFeederBlock:(id)block;	// 0x35cc76e1
- (void)_timeHasJumpedNotification:(id)notification;	// 0x35ccabe5
- (void)_timedMetadataAvailable:(id)available;	// 0x35ccad41
- (void)_tracksDidChange:(id)_tracks;	// 0x35ccaf01
- (void)_unregisterForAVItemNotifications:(id)avitemNotifications;	// 0x35ccf9a5
- (void)_unregisterForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x35ccfb71
- (void)_updateCurrentItemBookkeeping;	// 0x35cc9fad
- (void)_updateCurrentItemBookkeepingForTimerCallback;	// 0x35cca061
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;	// 0x35ccbce5
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)queueFeeder withItemIndex:(int)itemIndex;	// 0x35cc5091
- (void)_updateProgress:(CFRunLoopTimerRef)progress;	// 0x35ccfdb9
- (void)_updateScanningRate;	// 0x35ccff19
- (void)_updateSeekingIntervalsForStreaming;	// 0x35cd0069
- (unsigned)_updateSubsequenceFocus;	// 0x35cc726d
- (void)_verifyDisplayProtection;	// 0x35ccc0a5
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x35ccaf69
// declared property getter: - (unsigned)activeRepeatType;	// 0x35cc64a1
// declared property getter: - (unsigned)activeShuffleType;	// 0x35cc64dd
- (void)airPlayVideoEnded;	// 0x35ccafb1
- (BOOL)allowsAirPlayVideo;	// 0x35cc6519
// declared property getter: - (BOOL)alwaysPlayWheneverPossible;	// 0x35cc6989
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)application;	// 0x35cc71f1
- (void)applicationWillTerminate;	// 0x35cc723d
- (void)applyRepeatSettings;	// 0x35cc733d
- (void)applyShuffleSettings;	// 0x35cc7389
// declared property getter: - (id)audioDeviceController;	// 0x35cc6f65
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x35cc8ad1
// declared property getter: - (id)audioSessionModeOverride;	// 0x35cd0a29
// declared property getter: - (BOOL)autoPlayWhenLikelyToKeepUp;	// 0x35cc6735
- (void)autoclearDisplayOverride;	// 0x35ccf275
// declared property getter: - (id)avPlayer;	// 0x35cc7415
- (void)beginInterruption;	// 0x35cc9ce9
- (void)beginSeek:(int)seek;	// 0x35cc4dd9
- (void)beginTickTimerWithInterval:(double)interval;	// 0x35cc6271
- (void)beginUsingVideoLayer;	// 0x35cc7499
// declared property getter: - (unsigned)bufferingState;	// 0x35cc6749
- (BOOL)canPlayFastReverse;	// 0x35cc89b5
- (BOOL)canSeekBackwards;	// 0x35cc8935
- (BOOL)canSeekForwards;	// 0x35cc8975
- (void)changePlaybackIndexBy:(int)by;	// 0x35cc5449
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type;	// 0x35cc5469
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time;	// 0x35cc5491
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x35cc6759
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x35cc746d
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x35cc743d
// declared property getter: - (id)currentItem;	// 0x35cc678d
// declared property getter: - (BOOL)currentItemIsRental;	// 0x35cc74cd
// declared property getter: - (double)currentMonotonousTime;	// 0x35cc5ae9
// declared property getter: - (double)currentTime;	// 0x35cc5999
- (double)currentTimeForBookmarking;	// 0x35cc5881
- (void)dealloc;	// 0x35cc490d
// declared property getter: - (id)destinationBrowser;	// 0x35cd0a49
// declared property getter: - (BOOL)destinationIsTVOut;	// 0x35cc7e81
// declared property getter: - (BOOL)disableAirPlayMirroringDuringPlayback;	// 0x35cc6a51
- (void)disableAutoplayForCurrentItem;	// 0x35cc7199
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x35cc74d1
// declared property getter: - (unsigned)displayOverridePlaybackState;	// 0x35cd0a59
// declared property getter: - (double)durationOfCurrentItemIfAvailable;	// 0x35cc8615
- (id)embeddedDataTimesForItem:(id)item;	// 0x35ccd729
- (void)enableAutoplayForCurrentItem;	// 0x35cc71c5
- (void)endInterruptionFromInterruptor:(id)interruptor category:(id)category flags:(unsigned)flags;	// 0x35cc9d1d
- (void)endPlayback;	// 0x35cc5b89
- (void)endSeek;	// 0x35cc57f1
- (void)endTickTimer;	// 0x35cc6391
- (void)endUsingVideoLayer;	// 0x35cc7529
- (void)ensureFeederIsClass:(Class)aClass;	// 0x35cc8291
- (void)ensureFeederIsSubclass:(Class)subclass;	// 0x35cc8325
- (void)ensureHasAVPlaylistManager;	// 0x35cc7559
- (void)errorResolver:(id)resolver didResolveError:(id)error withResolution:(int)resolution;	// 0x35cc8bb5
// declared property getter: - (id)externalPlaybackVideoGravity;	// 0x35cc7569
- (BOOL)fadeOutForQuit;	// 0x35cc5805
// declared property getter: - (id)feeder;	// 0x35cd0a79
- (void)feederChangedContents:(id)contents;	// 0x35cc788d
// declared property getter: - (int)feederMode;	// 0x35cd0a89
- (void)finalizeBookkeepingNow;	// 0x35cc8479
- (BOOL)forceRestartPlaybackIfNecessary;	// 0x35cc6209
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x35cd0aa9
// declared property getter: - (BOOL)hasVolumeControl;	// 0x35cc6d9d
// declared property getter: - (BOOL)isAirPlayVideoActive;	// 0x35cc68a9
// declared property getter: - (BOOL)isCurrentItemReady;	// 0x35cc715d
// declared property getter: - (BOOL)isFullScreenVideoMode;	// 0x35cc6e69
// declared property getter: - (BOOL)isInExtendedMode;	// 0x35cc85d1
- (BOOL)isLiveStreaming;	// 0x35cc88f1
// declared property getter: - (BOOL)isPlaying;	// 0x35cc68e1
// declared property getter: - (BOOL)isRewindHoldingAtStart;	// 0x35cc5869
- (BOOL)isSeekingOrScrubbing;	// 0x35cc5855
// declared property getter: - (BOOL)isShuffled;	// 0x35cc6935
- (BOOL)isTickTimerEnabled;	// 0x35cc63d5
// declared property getter: - (BOOL)isValid;	// 0x35cc6979
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x35cd0ab9
// declared property getter: - (BOOL)muted;	// 0x35cc6e45
// declared property getter: - (double)nextFadeOutDuration;	// 0x35cd0ac9
- (void)notifyAVPlayerItemDidChange:(id)notifyAVPlayerItem;	// 0x35ccbdd9
- (void)notifyAVPlayerItemWillChange:(id)notifyAVPlayerItem;	// 0x35ccbdc9
// declared property getter: - (unsigned)numberOfItems;	// 0x35cc69b5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35ccaff1
- (void)pause;	// 0x35cc5cc9
- (void)pauseWithFadeout:(float)fadeout;	// 0x35cc5bfd
- (void)play;	// 0x35cc5e19
- (void)playChapterTimeMarkerAtIndex:(unsigned)index;	// 0x35cc60d5
- (void)playItemAtIndex:(unsigned)index;	// 0x35cc6029
- (void)playItemAtIndex:(unsigned)index forceRestart:(BOOL)restart;	// 0x35cc603d
// declared property getter: - (double)playableDurationOfCurrentItemIfAvailable;	// 0x35cc863d
// declared property getter: - (int)playbackMode;	// 0x35cc6f01
- (float)rate;	// 0x35cc69dd
- (void)reloadFeederWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x35cc7915
// declared property getter: - (unsigned)repeatType;	// 0x35cc6a29
- (void)restorePreviousFeederState;	// 0x35cc81ad
// declared property getter: - (id)routeNameForVolumeControl;	// 0x35cc6e49
- (void)saveCurrentFeederState;	// 0x35cc7ff5
- (void)setActive:(BOOL)active;	// 0x35cc796d
// declared property setter: - (void)setAlwaysPlayWheneverPossible:(BOOL)possible;	// 0x35cc699d
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x35cd0a39
// declared property setter: - (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x35cc6175
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned)state;	// 0x35ccf289
- (void)setClient:(id)client wantsToAllowAirPlayVideo:(BOOL)allowAirPlayVideo;	// 0x35cc65f9
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x35cc6ac1
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x35cc61a5
- (void)setCurrentTime:(double)time options:(int)options;	// 0x35cc79d9
// declared property setter: - (void)setDestinationIsTVOut:(BOOL)anOut;	// 0x35cc7ea9
// declared property setter: - (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)playback;	// 0x35cc6a85
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x35cc74e1
// declared property setter: - (void)setDisplayOverridePlaybackState:(unsigned)state;	// 0x35ccf2cd
// declared property setter: - (void)setEQPreset:(int)preset;	// 0x35cc6afd
// declared property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x35cc799d
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x35cd0a99
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x35cc7d69
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x35cc7da1
// declared property setter: - (void)setNextFadeOutDuration:(double)duration;	// 0x35cc6b41
- (void)setPlaybackIndex:(int)index;	// 0x35cc5405
- (void)setPlaybackIndex:(int)index selectionDirection:(int)direction;	// 0x35cc52d9
// declared property setter: - (void)setPlaybackMode:(int)mode;	// 0x35cc6e91
- (BOOL)setRate:(float)rate;	// 0x35cc6b9d
- (void)setRateForScanning:(float)scanning;	// 0x35ccfead
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x35cc6c2d
// declared property setter: - (void)setShouldEnforceHDCP:(BOOL)enforceHDCP;	// 0x35cd0af1
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x35cc6cbd
// declared property setter: - (void)setState:(unsigned)state;	// 0x35cc8559
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x35cc6f25
// declared property setter: - (void)setSubtitlesEnabled:(BOOL)enabled;	// 0x35cc6d15
// declared property setter: - (void)setUbiquitousBookkeepingEnabled:(BOOL)enabled;	// 0x35cc9f71
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x35cc6fa1
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x35cc857d
// declared property setter: - (void)setVolume:(float)volume;	// 0x35cc6e19
- (BOOL)shouldDisplayAsPlaying;	// 0x35cc6905
// declared property getter: - (BOOL)shouldEnforceHDCP;	// 0x35cd0ae1
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned)state;	// 0x35cc85a1
// declared property getter: - (BOOL)showPlaybackStateOverlaysOnTVOut;	// 0x35cc85d5
// declared property getter: - (unsigned)shuffleType;	// 0x35cc6d61
- (void)skipToSeekableEnd;	// 0x35cc8a51
- (void)skipToSeekableStart;	// 0x35cc89e1
// declared property getter: - (unsigned)state;	// 0x35cd0b01
// declared property getter: - (BOOL)stopAtEnd;	// 0x35cc6f11
// declared property getter: - (BOOL)subtitlesEnabled;	// 0x35cc6d89
- (void)switchToAudioPlayback:(BOOL)audioPlayback forItem:(id)item;	// 0x35cc7dd9
- (void)switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play;	// 0x35cc7861
- (void)switchToVideoPlayback:(BOOL)videoPlayback forItem:(id)item;	// 0x35cc7e15
- (double)timeOfPlayableEnd;	// 0x35cc8769
- (double)timeOfPlayableStart;	// 0x35cc8669
- (double)timeOfSeekableEnd;	// 0x35cc88c9
- (double)timeOfSeekableStart;	// 0x35cc88a1
- (void)togglePlayback;	// 0x35cc61c9
// declared property getter: - (BOOL)ubiquitousBookkeepingEnabled;	// 0x35cc9f95
- (void)updateBookkeepingNow;	// 0x35cc83c5
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x35cc6f8d
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x35cc8569
// declared property getter: - (id)videoLayer;	// 0x35cc7ed5
// declared property getter: - (id)videoView;	// 0x35cc7f7d
// declared property getter: - (float)volume;	// 0x35cc6df1
@end
