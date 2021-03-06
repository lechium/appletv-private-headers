/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "AVAudioSessionDelegateMediaPlayerOnly.h"
#import "MPAudioDeviceControllerDelegate.h"
#import "MPAVErrorResolverDelegate.h"
#import "MediaPlayer-Structs.h"

@class MPAVErrorResolver, MPAVDestinationBrowser, CALayer, MPAVPlaylistManager, NSMutableArray, MPAVItem, NSMutableSet, MPQueuePlayer, MPAudioDeviceController, NSDictionary, MPVideoView, AVPlayerLayer, MPAVControllerToAggregateDCommunicator, NSNotification, NSString, MPQueueFeeder, AVAudioSessionMediaPlayerOnly, NSArray, NSDate;
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
	BOOL _shouldSkipToNextTrackOnResumeFromInterruption;	// 360 = 0x168
}
@property(assign, nonatomic) int EQPreset;	// G=0x31cd7609; S=0x31ccc9b5; @synthesize=_eqPreset
@property(readonly, assign, nonatomic) AVAudioSessionMediaPlayerOnly *_playerAVAudioSession;	// G=0x31ccd6f5; 
@property(readonly, assign, nonatomic) unsigned activeRepeatType;	// G=0x31ccc341; 
@property(readonly, assign, nonatomic) unsigned activeShuffleType;	// G=0x31ccc37d; 
@property(assign, nonatomic) BOOL alwaysPlayWheneverPossible;	// G=0x31ccc841; S=0x31ccc855; 
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x31ccce1d; @synthesize=_audioDeviceController
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x31cd75c9; S=0x31cd75d9; @synthesize=_audioSessionModeOverride
@property(assign, nonatomic) BOOL autoPlayWhenLikelyToKeepUp;	// G=0x31ccc5d5; S=0x31ccc015; 
@property(readonly, assign, nonatomic) MPQueuePlayer *avPlayer;	// G=0x31ccd30d; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x31ccc5e9; @synthesize=_bufferingState
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x31ccc5f9; S=0x31ccc979; 
@property(readonly, assign, nonatomic) MPAVItem *currentItem;	// G=0x31ccc62d; 
@property(readonly, assign, nonatomic) BOOL currentItemIsRental;	// G=0x31ccd3ed; 
@property(readonly, assign, nonatomic) double currentMonotonousTime;	// G=0x31ccb941; 
@property(assign, nonatomic) double currentTime;	// G=0x31ccb7f1; S=0x31ccc045; 
@property(readonly, assign, nonatomic) MPAVDestinationBrowser *destinationBrowser;	// G=0x31cd75e9; @synthesize=_destinationBrowser
@property(assign, nonatomic, getter=destinationIsTVOut, setter=setDestinationIsTVOut:) BOOL destinationIsTVOut;	// G=0x31ccdd99; S=0x31ccddc1; 
@property(assign, nonatomic) BOOL disableAirPlayMirroringDuringPlayback;	// G=0x31ccc909; S=0x31ccc93d; 
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x31ccd3f1; S=0x31ccd401; 
@property(assign, nonatomic) unsigned displayOverridePlaybackState;	// G=0x31cd75f9; S=0x31cd5cb5; @synthesize=_displayOverridePlaybackState
@property(readonly, assign, nonatomic) double durationOfCurrentItemIfAvailable;	// G=0x31cce529; 
@property(readonly, assign, nonatomic) int externalPlaybackType;	// G=0x31ccd489; 
@property(copy, nonatomic) NSString *externalPlaybackVideoGravity;	// G=0x31ccd4c1; S=0x31ccd7b5; 
@property(readonly, assign, nonatomic) MPQueueFeeder *feeder;	// G=0x31cd7619; @synthesize=_feeder
@property(assign, nonatomic) int feederMode;	// G=0x31cd7629; S=0x31cd7639; @synthesize=_feederMode
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x31cd7649; S=0x31ccdbe9; @synthesize=_forceSynchronousQueueFilling
@property(readonly, assign, nonatomic, getter=isFullScreenVideoMode) BOOL fullScreenVideoMode;	// G=0x31cccd21; 
@property(readonly, assign, nonatomic) BOOL hasVolumeControl;	// G=0x31cccc55; 
@property(readonly, assign, nonatomic) BOOL isCurrentItemReady;	// G=0x31ccd015; 
@property(readonly, assign, nonatomic) BOOL isExternalPlaybackActive;	// G=0x31ccc761; 
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x31cd7659; S=0x31ccdc21; @synthesize=_managesSystemDownloads
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x31ccccfd; 
@property(assign, nonatomic) double nextFadeOutDuration;	// G=0x31cd7669; S=0x31ccc9f9; @synthesize=_nextFadeOutDuration
@property(readonly, assign, nonatomic) unsigned numberOfItems;	// G=0x31ccc86d; 
@property(readonly, assign, nonatomic) double playableDurationOfCurrentItemIfAvailable;	// G=0x31cce551; 
@property(assign, nonatomic) int playbackMode;	// G=0x31cccdb9; S=0x31cccd49; 
@property(readonly, assign, nonatomic, getter=isPlaying) BOOL playing;	// G=0x31ccc799; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x31ccc8e1; S=0x31cccae5; 
@property(readonly, assign, nonatomic, getter=isRewindHoldingAtStart) BOOL rewindHoldingAtStart;	// G=0x31ccb6c1; 
@property(readonly, assign, nonatomic) NSString *routeNameForVolumeControl;	// G=0x31cccd01; 
@property(assign, nonatomic) BOOL shouldEnforceHDCP;	// G=0x31cd7681; S=0x31cd7691; @synthesize=_shouldEnforceHDCP
@property(assign, nonatomic) BOOL shouldSkipToNextTrackOnResumeFromInterruption;	// G=0x31cd76b1; S=0x31cd76c1; @synthesize=_shouldSkipToNextTrackOnResumeFromInterruption
@property(readonly, assign, nonatomic) BOOL showPlaybackStateOverlaysOnTVOut;	// G=0x31cce4e9; 
@property(assign, nonatomic) unsigned shuffleType;	// G=0x31cccc19; S=0x31cccb75; 
@property(readonly, assign, nonatomic, getter=isShuffled) BOOL shuffled;	// G=0x31ccc7ed; 
@property(assign, nonatomic) unsigned state;	// G=0x31cd76a1; S=0x31cce471; @synthesize=_state
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x31cccdc9; S=0x31cccddd; 
@property(assign, nonatomic) BOOL subtitlesEnabled;	// G=0x31cccc41; S=0x31cccbcd; 
@property(assign, nonatomic) BOOL ubiquitousBookkeepingEnabled;	// G=0x31cd0431; S=0x31cd040d; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x31ccce45; S=0x31ccce59; 
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// G=0x31ccc831; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x31cce481; S=0x31cce495; 
@property(readonly, assign, nonatomic) CALayer *videoLayer;	// G=0x31ccdded; 
@property(readonly, assign, nonatomic) MPVideoView *videoView;	// G=0x31ccde95; 
@property(assign, nonatomic) float volume;	// G=0x31cccca9; S=0x31ccccd1; 
+ (id)_controllerKeysToObserve;	// 0x31cd2f61
+ (id)_itemKeysToObserve;	// 0x31cd2fd9
+ (id)_playerKeysToObserve;	// 0x31cd30d1
+ (void)initialize;	// 0x31cca1f9
+ (BOOL)isNetworkSupportedPath:(id)path;	// 0x31ccc28d
+ (BOOL)outputSupportsAC3;	// 0x31cccedd
+ (id)sharedInstance;	// 0x31cca239
- (id)init;	// 0x31cca2f1
// declared property getter: - (int)EQPreset;	// 0x31cd7609
- (void)_applicationDidBecomeActive:(id)_application;	// 0x31cd2089
- (void)_applicationDidFinishSuspensionSnapshot:(id)_application;	// 0x31cd24f1
- (void)_applicationSuspended:(id)suspended;	// 0x31cd2441
- (void)_applicationSuspendedEventsOnly:(id)only;	// 0x31cd22c1
- (void)_applicationWillResignActive:(id)_application;	// 0x31cd1fdd
- (void)_attemptAutoPlay;	// 0x31cd520d
- (id)_avPlaylistManager;	// 0x31cd3171
- (BOOL)_canPlayItem:(id)item;	// 0x31cd7171
- (void)_cancelStallTimer;	// 0x31cd31ed
- (void)_cancelUpdateCurrentItemBookkeepingTimer;	// 0x31cd5eb1
- (BOOL)_changeChapterTimeMarkerIndexBy:(int)by;	// 0x31cd32e9
- (void)_checkForBoundaryTimeCrossing;	// 0x31cd47e1
- (void)_clearLastSetTimeIfPlayerTimeIsValid;	// 0x31ccaf39
- (void)_clearResetRateAfterSeeking;	// 0x31cd5f1d
- (void)_clearSeekingIntervalsForStreaming;	// 0x31cd6d89
- (void)_clearVideoLayer;	// 0x31cd3585
- (void)_closedCaptioningStatusDidChangeNotification:(id)_closedCaptioningStatus;	// 0x31cd25e9
- (void)_configureAVPlaylistManager:(id)manager;	// 0x31cd3615
- (void)_configureUpdateCurrentItemBookkeepingTimer;	// 0x31cd5edd
- (BOOL)_connectAVPlaylistManager;	// 0x31cd3989
- (unsigned)_currentIndexInBoundaryCMTimes:(id)boundaryCMTimes;	// 0x31cd4711
- (void)_delayedPlaybackIndexChange;	// 0x31cd2711
- (void)_delayedPostPlaybackStateChangedNotification;	// 0x31cd5a41
- (void)_delayedSetCurrentTime;	// 0x31cd6a8d
- (void)_delayedUpdateScanningRate;	// 0x31cd2769
- (void)_delayedUpdateTimeMarker;	// 0x31cd278d
- (void)_disconnectAVPlaylistManagerWithReason:(int)reason;	// 0x31cd096d
- (unsigned)_displayPlaybackState;	// 0x31cd5d6d
- (void)_endSeekAndChangeRate:(BOOL)rate;	// 0x31cd3b41
- (id)_extractImageFromMetadata:(id)metadata;	// 0x31cd6df9
- (void)_firstVideoFrameDisplayed:(id)displayed;	// 0x31ccee29
- (BOOL)_isChangingQueueContents;	// 0x31ccf121
- (BOOL)_isCloudItem:(id)item;	// 0x31cd3dc1
- (BOOL)_isDownloadingCloudItem:(id)item;	// 0x31cd3e0d
- (BOOL)_isDownloadingCloudOrOtherItem:(id)item;	// 0x31cd3e91
- (void)_isExternalPlaybackActiveDidChange:(id)_isExternalPlaybackActive;	// 0x31ccef39
- (BOOL)_isVideoLayerAttachedToPlayer;	// 0x31cd611d
- (void)_itemAssetIsLoadedNotification:(id)notification;	// 0x31ccf041
- (void)_itemDidChange:(id)_item;	// 0x31ccf181
- (void)_itemFailedToPlayToEnd:(id)end;	// 0x31ccf5e5
- (void)_itemFailedToPlayToEndNotification:(id)endNotification;	// 0x31ccf5b5
- (BOOL)_itemIsRestricted:(id)restricted;	// 0x31cd711d
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x31ccf701
- (void)_itemReadyToPlay:(id)play;	// 0x31ccfa29
- (void)_itemTimeMarkersAvailableNotification:(id)notification;	// 0x31ccf0b5
- (void)_itemWillChange:(id)_item;	// 0x31ccfbf9
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)_mediaLibraryDynamicProperties;	// 0x31cd26e1
- (void)_pauseBookkeepingTimer;	// 0x31cd5e39
- (void)_pausePlaybackIfNecessary;	// 0x31cd7421
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(BOOL)attachment;	// 0x31cd7439
- (void)_pauseTickTimer;	// 0x31cd6f89
- (void)_playbackFailedWithError:(id)error canResolve:(BOOL)resolve;	// 0x31cd7001
- (unsigned)_playbackIndexForDelta:(int)delta fromIndex:(unsigned)index ignoreElapsedTime:(BOOL)time;	// 0x31cd3ea9
// declared property getter: - (id)_playerAVAudioSession;	// 0x31ccd6f5
- (void)_playerFailedToQueueNotification:(id)queueNotification;	// 0x31ccf569
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)item;	// 0x31cced69
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)_postMPAVControllerSize;	// 0x31cceca9
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(unsigned)originalState newState:(unsigned)state delayable:(BOOL)delayable;	// 0x31cd5aa1
- (void)_prepareToPlayItem:(id)playItem;	// 0x31cd3fb9
- (void)_rateDidChange:(id)_rate;	// 0x31cd0591
- (void)_registerForAVItemNotifications:(id)avitemNotifications;	// 0x31cd4a81
- (void)_registerForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x31cd4cd5
- (void)_reloadTimeMarkerObservationsForItem:(id)item;	// 0x31cd48e5
- (void)_resetInternalState;	// 0x31cd4f39
- (void)_resetQueue:(BOOL)queue useVideoLayer:(BOOL)layer;	// 0x31cd500d
- (void)_resumeBookkeepingTimer;	// 0x31cd5e79
- (void)_resumeTickTimer;	// 0x31cd6fc9
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;	// 0x31cd5d99
- (unsigned)_seeklessStateForState:(unsigned)state;	// 0x31ccc6b5
- (void)_serverConnectionDidDie:(id)_serverConnection;	// 0x31cd0be5
- (void)_setAVControllerQueueFeeder:(id)feeder startQueueIndex:(unsigned)index;	// 0x31ccafe1
- (void)_setActionAtEndAttributeForState:(unsigned)state;	// 0x31cd59b1
- (void)_setBufferingState:(unsigned)state;	// 0x31cd5611
- (void)_setItemErrorResolver:(id)resolver;	// 0x31cd5f49
- (BOOL)_setRate:(float)rate forScanning:(BOOL)scanning;	// 0x31ccca6d
- (void)_setState:(unsigned)state;	// 0x31cd5fd9
- (void)_setValid:(BOOL)valid;	// 0x31cd62b9
- (void)_setVideoLayerAttachedToPlayer:(BOOL)player force:(BOOL)force pauseIfNecessary:(BOOL)necessary;	// 0x31cd617d
- (void)_setVideoViewClass:(Class)aClass;	// 0x31cce4ed
- (void)_setupDisplayForPlayback;	// 0x31cd2bd1
- (BOOL)_showsPlayingWhenInState:(unsigned)state;	// 0x31ccc64d
- (void)_sizeDidChange:(id)_size;	// 0x31cd0de5
- (void)_streamBufferFull:(id)full;	// 0x31cd0ee1
- (void)_streamLikelyToKeepUp:(id)keepUp;	// 0x31cd0fe1
- (void)_streamRanDry:(id)dry;	// 0x31cd10e1
- (void)_streamUnlikelyToKeepUp:(id)keepUp;	// 0x31cd11dd
- (void)_switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play configureFeederBlock:(id)block;	// 0x31ccd4f9
- (void)_timeHasJumpedNotification:(id)notification;	// 0x31cd12d9
- (void)_timedMetadataAvailable:(id)available;	// 0x31cd1495
- (void)_tracksDidChange:(id)_tracks;	// 0x31cd1685
- (void)_unregisterForAVItemNotifications:(id)avitemNotifications;	// 0x31cd638d
- (void)_unregisterForAVPlaylistManagerObservation:(id)avplaylistManagerObservation;	// 0x31cd65a1
- (void)_updateCurrentItemBookkeeping;	// 0x31cd0449
- (void)_updateCurrentItemBookkeepingForTimerCallback;	// 0x31cd0501
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;	// 0x31cd260d
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)queueFeeder withItemIndex:(int)itemIndex;	// 0x31ccadf9
- (void)_updateProgress:(CFRunLoopTimerRef)progress;	// 0x31cd67e9
- (void)_updateScanningRate;	// 0x31cd6949
- (void)_updateSeekingIntervalsForStreaming;	// 0x31cd6b1d
- (unsigned)_updateSubsequenceFocus;	// 0x31ccd165
- (void)_verifyDisplayProtection;	// 0x31cd29cd
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x31cd1735
// declared property getter: - (unsigned)activeRepeatType;	// 0x31ccc341
// declared property getter: - (unsigned)activeShuffleType;	// 0x31ccc37d
- (void)airPlayVideoEnded;	// 0x31cd177d
- (BOOL)allowsExternalPlayback;	// 0x31ccc3b9
// declared property getter: - (BOOL)alwaysPlayWheneverPossible;	// 0x31ccc841
- (void)applicationDidReceiveMemoryWarningAsUrgent:(BOOL)application;	// 0x31ccd0e9
- (void)applicationWillTerminate;	// 0x31ccd135
- (void)applyRepeatSettings;	// 0x31ccd235
- (void)applyShuffleSettings;	// 0x31ccd281
// declared property getter: - (id)audioDeviceController;	// 0x31ccce1d
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31cce9e1
// declared property getter: - (id)audioSessionModeOverride;	// 0x31cd75c9
// declared property getter: - (BOOL)autoPlayWhenLikelyToKeepUp;	// 0x31ccc5d5
- (void)autoclearDisplayOverride;	// 0x31cd5c5d
// declared property getter: - (id)avPlayer;	// 0x31ccd30d
- (void)beginInterruption;	// 0x31cd00c1
- (void)beginSeek:(int)seek;	// 0x31ccaae9
- (void)beginTickTimerWithInterval:(double)interval;	// 0x31ccc111
- (void)beginUsingVideoLayer;	// 0x31ccd3b9
// declared property getter: - (unsigned)bufferingState;	// 0x31ccc5e9
- (BOOL)canPlayFastReverse;	// 0x31cce8c5
- (BOOL)canSeekBackwards;	// 0x31cce845
- (BOOL)canSeekForwards;	// 0x31cce885
- (void)changePlaybackIndexBy:(int)by;	// 0x31ccb1b1
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type;	// 0x31ccb1d5
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time;	// 0x31ccb1fd
- (void)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time allowSkippingAds:(BOOL)ads;	// 0x31ccb221
- (BOOL)changePlaybackIndexBy:(int)by deltaType:(int)type ignoreElapsedTime:(BOOL)time allowSkippingAds:(BOOL)ads error:(id *)error;	// 0x31ccb251
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x31ccc5f9
- (void)contentInvalidated;	// 0x31ccd365
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x31ccd38d
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x31ccd335
// declared property getter: - (id)currentItem;	// 0x31ccc62d
// declared property getter: - (BOOL)currentItemIsRental;	// 0x31ccd3ed
// declared property getter: - (double)currentMonotonousTime;	// 0x31ccb941
// declared property getter: - (double)currentTime;	// 0x31ccb7f1
- (double)currentTimeForBookmarking;	// 0x31ccb6d9
- (void)dealloc;	// 0x31cca61d
// declared property getter: - (id)destinationBrowser;	// 0x31cd75e9
// declared property getter: - (BOOL)destinationIsTVOut;	// 0x31ccdd99
// declared property getter: - (BOOL)disableAirPlayMirroringDuringPlayback;	// 0x31ccc909
- (void)disableAutoplayForCurrentItem;	// 0x31ccd051
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x31ccd3f1
// declared property getter: - (unsigned)displayOverridePlaybackState;	// 0x31cd75f9
// declared property getter: - (double)durationOfCurrentItemIfAvailable;	// 0x31cce529
- (id)embeddedDataTimesForItem:(id)item;	// 0x31cd4091
- (void)enableAutoplayForCurrentItem;	// 0x31ccd09d
- (void)endInterruptionFromInterruptor:(id)interruptor category:(id)category flags:(unsigned)flags;	// 0x31cd0125
- (void)endPlayback;	// 0x31ccb9e1
- (void)endSeek;	// 0x31ccb649
- (void)endTickTimer;	// 0x31ccc231
- (void)endUsingVideoLayer;	// 0x31ccd449
- (void)ensureFeederIsClass:(Class)aClass;	// 0x31cce1a9
- (void)ensureFeederIsSubclass:(Class)subclass;	// 0x31cce23d
- (void)ensureHasAVPlaylistManager;	// 0x31ccd479
- (void)errorResolver:(id)resolver didResolveError:(id)error withResolution:(int)resolution;	// 0x31cceae5
// declared property getter: - (int)externalPlaybackType;	// 0x31ccd489
// declared property getter: - (id)externalPlaybackVideoGravity;	// 0x31ccd4c1
- (BOOL)fadeOutForQuit;	// 0x31ccb65d
// declared property getter: - (id)feeder;	// 0x31cd7619
- (void)feederChangedContents:(id)contents;	// 0x31ccd6a5
// declared property getter: - (int)feederMode;	// 0x31cd7629
- (void)finalizeBookkeepingNow;	// 0x31cce391
- (BOOL)forceRestartPlaybackIfNecessary;	// 0x31ccc0a9
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x31cd7649
// declared property getter: - (BOOL)hasVolumeControl;	// 0x31cccc55
// declared property getter: - (BOOL)isCurrentItemReady;	// 0x31ccd015
// declared property getter: - (BOOL)isExternalPlaybackActive;	// 0x31ccc761
// declared property getter: - (BOOL)isFullScreenVideoMode;	// 0x31cccd21
- (BOOL)isLiveStreaming;	// 0x31cce801
// declared property getter: - (BOOL)isPlaying;	// 0x31ccc799
// declared property getter: - (BOOL)isRewindHoldingAtStart;	// 0x31ccb6c1
- (BOOL)isSeekingOrScrubbing;	// 0x31ccb6ad
// declared property getter: - (BOOL)isShuffled;	// 0x31ccc7ed
- (BOOL)isTickTimerEnabled;	// 0x31ccc275
// declared property getter: - (BOOL)isValid;	// 0x31ccc831
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x31cd7659
// declared property getter: - (BOOL)muted;	// 0x31ccccfd
// declared property getter: - (double)nextFadeOutDuration;	// 0x31cd7669
- (void)notifyAVPlayerItemDidChange:(id)notifyAVPlayerItem;	// 0x31cd2701
- (void)notifyAVPlayerItemWillChange:(id)notifyAVPlayerItem;	// 0x31cd26f1
// declared property getter: - (unsigned)numberOfItems;	// 0x31ccc86d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31cd17b9
- (void)pause;	// 0x31ccbb41
- (void)pauseWithFadeout:(float)fadeout;	// 0x31ccba55
- (void)play;	// 0x31ccbc91
- (void)playChapterTimeMarkerAtIndex:(unsigned)index;	// 0x31ccbf75
- (void)playItemAtIndex:(unsigned)index;	// 0x31ccbec9
- (void)playItemAtIndex:(unsigned)index forceRestart:(BOOL)restart;	// 0x31ccbedd
// declared property getter: - (double)playableDurationOfCurrentItemIfAvailable;	// 0x31cce551
// declared property getter: - (int)playbackMode;	// 0x31cccdb9
- (float)rate;	// 0x31ccc895
- (void)reloadFeederWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x31ccd72d
// declared property getter: - (unsigned)repeatType;	// 0x31ccc8e1
- (void)restorePreviousFeederState;	// 0x31cce0c5
// declared property getter: - (id)routeNameForVolumeControl;	// 0x31cccd01
- (void)saveCurrentFeederState;	// 0x31ccdf0d
- (void)setActive:(BOOL)active;	// 0x31ccd785
// declared property setter: - (void)setAlwaysPlayWheneverPossible:(BOOL)possible;	// 0x31ccc855
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x31cd75d9
// declared property setter: - (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x31ccc015
- (void)setAutoclearingDisplayOverridePlaybackState:(unsigned)state;	// 0x31cd5c71
- (void)setClient:(id)client wantsToAllowAirPlayVideo:(BOOL)allowAirPlayVideo;	// 0x31ccc499
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x31ccc979
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x31ccc045
- (void)setCurrentTime:(double)time options:(int)options;	// 0x31ccd7f1
// declared property setter: - (void)setDestinationIsTVOut:(BOOL)anOut;	// 0x31ccddc1
// declared property setter: - (void)setDisableAirPlayMirroringDuringPlayback:(BOOL)playback;	// 0x31ccc93d
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x31ccd401
// declared property setter: - (void)setDisplayOverridePlaybackState:(unsigned)state;	// 0x31cd5cb5
// declared property setter: - (void)setEQPreset:(int)preset;	// 0x31ccc9b5
// declared property setter: - (void)setExternalPlaybackVideoGravity:(id)gravity;	// 0x31ccd7b5
// declared property setter: - (void)setFeederMode:(int)mode;	// 0x31cd7639
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x31ccdbe9
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x31ccdc21
// declared property setter: - (void)setNextFadeOutDuration:(double)duration;	// 0x31ccc9f9
- (void)setPlaybackIndex:(int)index;	// 0x31ccb16d
- (void)setPlaybackIndex:(int)index selectionDirection:(int)direction;	// 0x31ccb041
// declared property setter: - (void)setPlaybackMode:(int)mode;	// 0x31cccd49
- (BOOL)setRate:(float)rate;	// 0x31ccca55
- (void)setRateForScanning:(float)scanning;	// 0x31cd68dd
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x31cccae5
// declared property setter: - (void)setShouldEnforceHDCP:(BOOL)enforceHDCP;	// 0x31cd7691
// declared property setter: - (void)setShouldSkipToNextTrackOnResumeFromInterruption:(BOOL)skipToNextTrackOnResumeFromInterruption;	// 0x31cd76c1
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x31cccb75
// declared property setter: - (void)setState:(unsigned)state;	// 0x31cce471
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x31cccddd
// declared property setter: - (void)setSubtitlesEnabled:(BOOL)enabled;	// 0x31cccbcd
// declared property setter: - (void)setUbiquitousBookkeepingEnabled:(BOOL)enabled;	// 0x31cd040d
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x31ccce59
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x31cce495
// declared property setter: - (void)setVolume:(float)volume;	// 0x31ccccd1
- (BOOL)shouldDisplayAsPlaying;	// 0x31ccc7bd
// declared property getter: - (BOOL)shouldEnforceHDCP;	// 0x31cd7681
- (BOOL)shouldHaveNoActionAtEndForState:(unsigned)state;	// 0x31cce4b9
// declared property getter: - (BOOL)shouldSkipToNextTrackOnResumeFromInterruption;	// 0x31cd76b1
// declared property getter: - (BOOL)showPlaybackStateOverlaysOnTVOut;	// 0x31cce4e9
// declared property getter: - (unsigned)shuffleType;	// 0x31cccc19
- (void)skipToSeekableEnd;	// 0x31cce961
- (void)skipToSeekableStart;	// 0x31cce8f1
// declared property getter: - (unsigned)state;	// 0x31cd76a1
// declared property getter: - (BOOL)stopAtEnd;	// 0x31cccdc9
// declared property getter: - (BOOL)subtitlesEnabled;	// 0x31cccc41
- (void)switchToAudioPlayback:(BOOL)audioPlayback forItem:(id)item;	// 0x31ccdc59
- (void)switchToFeeder:(id)feeder mode:(int)mode index:(unsigned)index play:(BOOL)play;	// 0x31ccd679
- (void)switchToVideoPlayback:(BOOL)videoPlayback forItem:(id)item;	// 0x31ccdce5
- (double)timeOfPlayableEnd;	// 0x31cce679
- (double)timeOfPlayableStart;	// 0x31cce579
- (double)timeOfSeekableEnd;	// 0x31cce7d9
- (double)timeOfSeekableStart;	// 0x31cce7b1
- (void)togglePlayback;	// 0x31ccc069
// declared property getter: - (BOOL)ubiquitousBookkeepingEnabled;	// 0x31cd0431
- (void)updateBookkeepingNow;	// 0x31cce2dd
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x31ccce45
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x31cce481
// declared property getter: - (id)videoLayer;	// 0x31ccdded
// declared property getter: - (id)videoView;	// 0x31ccde95
// declared property getter: - (float)volume;	// 0x31cccca9
@end

