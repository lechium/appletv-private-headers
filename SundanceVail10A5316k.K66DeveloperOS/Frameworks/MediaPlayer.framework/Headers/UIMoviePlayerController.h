/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPMovieAccessLog, NSDate, MPMovieErrorLog, MPVideoViewController, MPAVItem, UIImage, UIViewController, UIMovieSnapshotView, UIView, UINavigationController, NSString, NSArray, MPVideoView, UIMovieView, MPTransitionController, MPSystemNowPlayingController, MPAVController;

@interface UIMoviePlayerController : NSObject {
	id _delegate;	// 4 = 0x4
	MPAVItem *_item;	// 8 = 0x8
	NSString *_moviePath;	// 12 = 0xc
	MPAVController *_player;	// 16 = 0x10
	UIImage *_posterImage;	// 20 = 0x14
	NSString *_youTubeVideoID;	// 24 = 0x18
	UIViewController *_topViewController;	// 28 = 0x1c
	MPVideoViewController *_activeVideoController;	// 32 = 0x20
	MPVideoView *_videoView;	// 36 = 0x24
	MPTransitionController *_transitionController;	// 40 = 0x28
	int _transitionCount;	// 44 = 0x2c
	UINavigationController *_portraitNavigationController;	// 48 = 0x30
	CFBagRef _ignoredChangeTypes;	// 52 = 0x34
	int _pendingInterfaceOrientation;	// 56 = 0x38
	MPAVItem *_pendingItem;	// 60 = 0x3c
	MPAVItem *_pendingItemWithDifferentType;	// 64 = 0x40
	CGRect _layoutRect;	// 68 = 0x44
	int _lastSetUIInterfaceOrientation;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
	int _interfaceOrientationFromDevice;	// 92 = 0x5c
	NSString *_playbackErrorDescription;	// 96 = 0x60
	unsigned _autoRotationMask;	// 100 = 0x64
	unsigned _displayableParts;	// 104 = 0x68
	unsigned _unmodifiedDisplayableParts;	// 108 = 0x6c
	unsigned _desiredParts;	// 112 = 0x70
	unsigned _audioControlsStyle;	// 116 = 0x74
	unsigned _playableContentTypeOverride;	// 120 = 0x78
	double _timeWhenResignedActive;	// 124 = 0x7c
	double _timeToSnapshot;	// 132 = 0x84
	UIMovieSnapshotView *_snapshotView;	// 140 = 0x8c
	NSArray *_closedCaptionData;	// 144 = 0x90
	MPSystemNowPlayingController *_nowPlayingController;	// 148 = 0x94
	struct {
		unsigned canShowControlsOverlay : 1;
		unsigned wantsControlsOverlayVis : 1;
		unsigned wantsControlsOverlayAnim : 1;
		unsigned wantsControlsOverlayDisableAutohide : 1;
		unsigned wantsFullscreen : 1;
		unsigned alwaysFullscreen : 1;
		unsigned canAnimateControlsOverlay : 1;
		unsigned autoplayWhenLikelyToKeepUp : 1;
		unsigned externalSourceManagesStatusBar : 1;
		unsigned disallowsVideoOut : 1;
		unsigned exited : 1;
		unsigned generatingOrientationNotifications : 1;
		unsigned forStreaming : 1;
		unsigned isExternalTransformationActive : 1;
		unsigned controlsVisibleBeforeExternalTransformation : 1;
		unsigned isActive : 1;
		unsigned resigningActive : 1;
		unsigned didResignActive : 1;
		unsigned uiPrepared : 1;
		unsigned useLegacyControls : 1;
		unsigned isChangingMoviePath : 1;
		unsigned alwaysAllowHidingControlsOverlay : 1;
		unsigned schedulePortraitLoadingIndicator : 1;
		unsigned clientClearedMoviePath : 1;
		unsigned canCommitStatusBarAndOverlayChanges : 1;
		unsigned videoFrameDisplayOnResumeDisabled : 1;
		unsigned usingDebugTestPath : 1;
		unsigned allowsWirelessPlayback : 1;
		unsigned useHostedWindowWhenFullscreen : 1;
	} _mpcBitfield;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) MPMovieAccessLog *accessLog;	// G=0x3481e5f5; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x3481e8ed; S=0x3481e901; 
@property(readonly, assign, nonatomic) BOOL areClosedCaptionsAvailable;	// G=0x3481bb79; 
@property(assign, nonatomic) unsigned audioControlsStyle;	// G=0x34821441; S=0x3481da8d; @synthesize=_audioControlsStyle
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x3481b4b5; S=0x3481b4d5; 
@property(assign) unsigned autoRotationMask;	// G=0x3481d6f5; S=0x3481d705; converted property
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x3481e2a9; S=0x3481e26d; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x3481bc11; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;	// G=0x3481ae09; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;	// G=0x3481ae2d; 
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x3481b401; S=0x3481b425; 
@property(readonly, assign, nonatomic) NSDate *currentDate;	// G=0x3481ba09; 
@property(assign, nonatomic) double currentTime;	// G=0x3481b95d; S=0x3481b99d; 
@property(assign, nonatomic) id delegate;	// G=0x34821451; S=0x34821461; @synthesize=_delegate
@property(assign, nonatomic) BOOL disallowsVideoOut;	// G=0x3481ae79; S=0x3481b2b1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x3481b7d5; 
@property(readonly, assign, nonatomic) MPMovieErrorLog *errorLog;	// G=0x3481e69d; 
@property(readonly, assign, nonatomic) long long fileSize;	// G=0x3481b255; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x3481e47d; S=0x3481e4b9; 
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x3481e55d; 
@property(readonly, assign, nonatomic) unsigned hostedWindowContextID;	// G=0x3481b47d; 
@property(readonly, assign) int interfaceOrientation;	// G=0x3481d51d; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;	// G=0x3481b5cd; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x3481ae9d; S=0x34821471; @synthesize=_item
@property(copy, nonatomic) NSString *moviePath;	// G=0x3481ae8d; S=0x3481aefd; 
@property(copy, nonatomic) NSString *movieSubtitle;	// G=0x3481b0c9; S=0x3481b0f1; 
@property(copy, nonatomic) NSString *movieTitle;	// G=0x3481b11d; S=0x3481b145; 
@property(readonly, assign, nonatomic) UIMovieView *movieView;	// G=0x3481b171; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x3481bb05; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x3481dd59; 
@property(assign, nonatomic) unsigned options;	// G=0x3481ad39; S=0x3481ad4d; 
@property(assign, nonatomic) unsigned playableContentType;	// G=0x3481b575; S=0x3481b541; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x3481b831; 
@property(readonly, assign, nonatomic) double playableEndTime;	// G=0x3481b8a9; 
@property(readonly, assign, nonatomic) double playableStartTime;	// G=0x3481b86d; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x34821481; S=0x3481daf5; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) float playbackRate;	// G=0x3481b719; S=0x3481b751; 
@property(readonly, assign, nonatomic) unsigned playbackState;	// G=0x3481b791; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x3481e379; S=0x3481e2e1; 
@property(readonly, assign, nonatomic) double seekableEndTime;	// G=0x3481b921; 
@property(readonly, assign, nonatomic) double seekableStartTime;	// G=0x3481b8e5; 
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x3481bae1; S=0x3481bac1; 
@property(assign, nonatomic) BOOL useApplicationAudioSession;	// G=0x3481b51d; S=0x3481b4f5; 
@property(assign, nonatomic) BOOL useHostedWindowWhenFullscreen;	// G=0x3481b445; S=0x3481b459; 
@property(assign, nonatomic) BOOL useLegacyControls;	// G=0x3481e83d; S=0x3481e851; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x3481e949; S=0x3481e95d; 
@property(readonly, assign, nonatomic) BOOL videoOutActive;	// G=0x3481b329; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x3481b1d5; 
@property(readonly, assign, nonatomic) float volume;	// G=0x3481bb3d; 
@property(copy, nonatomic) NSString *youTubeVideoID;	// G=0x34821495; S=0x3481e745; @synthesize=_youTubeVideoID
+ (void)allInstancesResignActive;	// 0x3481e801
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size interfaceOrientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x3481db89
+ (Class)preferredWindowClass;	// 0x348214a9
- (id)initWithPlayerSize:(CGSize)playerSize;	// 0x3481a949
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;	// 0x348214c5
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;	// 0x348214fd
- (id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;	// 0x3481a2fd
- (id)_activeVideoController;	// 0x3481c1d5
- (void)_addSnapshotViewForTime:(double)time;	// 0x3481ff55
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;	// 0x348211dd
- (void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x34821261
- (id)_backgroundPlaceholderView;	// 0x348212f5
- (void)_beginDeviceOrientationNotifications;	// 0x34820f75
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x3481f485
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x348210e1
- (void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;	// 0x3481c749
- (unsigned long long)_convertedPartsMask:(unsigned)mask;	// 0x34820cd9
- (unsigned long long)_convertedVisiblePartsMask:(unsigned)mask;	// 0x34820d4d
- (void)_deviceOrientationChanged:(id)changed;	// 0x3481f9b9
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x348208b1
- (void)_endDeviceOrientationNotifications;	// 0x3482104d
- (void)_ensureActive;	// 0x3481fe75
- (void)_exitPlayer:(int)player;	// 0x34820d69
- (int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;	// 0x34820e3d
- (void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x3481c7dd
- (void)_initializeVideoViewController:(id)controller orientation:(int)orientation;	// 0x3481c3a5
- (void)_itemChangedNotification:(id)notification;	// 0x3481f649
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x3481fbc5
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x3481fc81
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x3481fa95
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x348206ed
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x348204a1
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x3481f5bd
- (void)_mutedDidChangeNotification:(id)_muted;	// 0x3481fde5
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;	// 0x3481ce41
- (id)_parentViewControllerForController:(id)controller;	// 0x3481c6cd
- (void)_pausePlaybackForNotification:(id)notification;	// 0x3481f11d
- (void)_performTransition:(id)transition toController:(id)controller;	// 0x3481d285
- (void)_playbackStateChanged:(id)changed;	// 0x3481f851
- (id)_portraitNavigationController:(BOOL)controller;	// 0x3481c8e9
- (void)_prepareAndSetupUI;	// 0x3481e099
- (void)_prepareAndSetupUIForClient;	// 0x3481e18d
- (void)_rateDidChangeNotification:(id)_rate;	// 0x3481fa0d
- (void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;	// 0x3481cb99
- (void)_registerForNotifications;	// 0x34820955
- (void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;	// 0x3481d351
- (void)_removeSnapshotView;	// 0x34820451
- (void)_serverDeathNotification:(id)notification;	// 0x3481f82d
- (void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x3481bd45
- (void)_setTVOutEnabled:(BOOL)enabled;	// 0x34821399
- (BOOL)_shouldIgnoreChangeType:(unsigned)type;	// 0x3481ce7d
- (void)_simpleRemoteNotification:(id)notification;	// 0x3481f235
- (void)_tickNotification:(id)notification;	// 0x3481fd55
- (void)_timeDidJumpNotification:(id)_time;	// 0x3481fc39
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x3481fcc9
- (id)_topViewController;	// 0x3481bc55
- (void)_transitionFinished:(id)finished;	// 0x3481d111
- (void)_tvOutCapabilityChanged:(id)changed;	// 0x3481f961
- (void)_unregisterForNotifications;	// 0x34820b69
- (void)_updateEnabledParts;	// 0x34820e55
- (void)_updateForStreamingOptions;	// 0x3482132d
- (void)_updatePlayableContentTypeOverride;	// 0x348212a5
- (void)_validityChangedNotification:(id)notification;	// 0x3481f841
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x3481fe2d
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x3481fd9d
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x3481f215
- (void)_willEnterForegroundNotification:(id)notification;	// 0x3482090d
- (void)_willResignNotification:(id)notification;	// 0x3481f225
- (void)_willSuspendNotification:(id)notification;	// 0x3481f205
// declared property getter: - (id)accessLog;	// 0x3481e5f5
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x3481e8ed
// declared property getter: - (BOOL)areClosedCaptionsAvailable;	// 0x3481bb79
// declared property getter: - (unsigned)audioControlsStyle;	// 0x34821441
// declared property getter: - (id)audioSessionModeOverride;	// 0x3481b4b5
// converted property getter: - (unsigned)autoRotationMask;	// 0x3481d6f5
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x3481e2a9
- (id)backgroundView;	// 0x3481e24d
- (void)beginExternalTransformation;	// 0x3481e399
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x3481cdd1
- (void)beginTransition;	// 0x3481d071
// declared property getter: - (unsigned)bufferingState;	// 0x3481bc11
// declared property getter: - (BOOL)canContinuePlayingInBackground;	// 0x3481ae09
// declared property getter: - (BOOL)canContinuePlayingWhenLocked;	// 0x3481ae2d
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x3481b401
// declared property getter: - (id)currentDate;	// 0x3481ba09
// declared property getter: - (double)currentTime;	// 0x3481b95d
- (void)dealloc;	// 0x3481a96d
- (void)debugSetup;	// 0x3481a2cd
- (void)delayedDebugSetup;	// 0x3481a2c9
// declared property getter: - (id)delegate;	// 0x34821451
// declared property getter: - (BOOL)disallowsVideoOut;	// 0x3481ae79
// declared property getter: - (double)duration;	// 0x3481b7d5
- (void)endExternalTransformation;	// 0x3481e415
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x3481cea5
- (void)endTransition;	// 0x3481d0c1
// declared property getter: - (id)errorLog;	// 0x3481e69d
// declared property getter: - (long long)fileSize;	// 0x3481b255
// declared property getter: - (id)fullscreenView;	// 0x3481e55d
// declared property getter: - (unsigned)hostedWindowContextID;	// 0x3481b47d
// converted property getter: - (int)interfaceOrientation;	// 0x3481d51d
- (BOOL)isFullScreen;	// 0x34821571
// declared property getter: - (BOOL)isFullscreen;	// 0x3481e47d
// declared property getter: - (BOOL)isPreparedForPlayback;	// 0x3481b5cd
// declared property getter: - (id)item;	// 0x3481ae9d
- (void)layoutUIInRect:(CGRect)rect;	// 0x3481dcc1
- (void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;	// 0x34821535
// declared property getter: - (id)moviePath;	// 0x3481ae8d
- (CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;	// 0x3481ddc1
// declared property getter: - (id)movieSubtitle;	// 0x3481b0c9
// declared property getter: - (id)movieTitle;	// 0x3481b11d
// declared property getter: - (id)movieView;	// 0x3481b171
// declared property getter: - (BOOL)muted;	// 0x3481bb05
// declared property getter: - (CGSize)naturalSize;	// 0x3481dd59
- (id)newTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;	// 0x3481c1e5
- (id)newViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;	// 0x3481c2d5
// declared property getter: - (unsigned)options;	// 0x3481ad39
- (void)pause;	// 0x3481b675
- (void)performTransition:(id)transition;	// 0x3481d1e9
- (void)play;	// 0x3481b635
// declared property getter: - (unsigned)playableContentType;	// 0x3481b575
// declared property getter: - (double)playableDuration;	// 0x3481b831
// declared property getter: - (double)playableEndTime;	// 0x3481b8a9
// declared property getter: - (double)playableStartTime;	// 0x3481b86d
// declared property getter: - (id)playbackErrorDescription;	// 0x34821481
// declared property getter: - (float)playbackRate;	// 0x3481b719
// declared property getter: - (unsigned)playbackState;	// 0x3481b791
- (id)playerView;	// 0x34821589
- (void)portraitDoneButtonAction:(id)action;	// 0x3481c889
- (void)portraitScaleButtonAction:(id)action;	// 0x3481c8bd
// declared property getter: - (id)posterImage;	// 0x3481e379
- (void)prepareAndSetupUI;	// 0x3481e1b1
- (void)prepareForPlayback;	// 0x3481b625
- (void)resignActive;	// 0x3481e9a9
- (BOOL)seekToDate:(id)date;	// 0x3481ba65
// declared property getter: - (double)seekableEndTime;	// 0x3481b921
// declared property getter: - (double)seekableStartTime;	// 0x3481b8e5
- (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x3481da1d
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3481da3d
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x3481e901
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x3481b351
// declared property setter: - (void)setAudioControlsStyle:(unsigned)style;	// 0x3481da8d
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x3481b4d5
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x3481b1fd
// converted property setter: - (void)setAutoRotationMask:(unsigned)mask;	// 0x3481d705
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x3481e26d
- (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x3481d8d9
- (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x3481d919
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x3481b425
- (void)setClosedCaptions:(id)captions;	// 0x3481b385
- (void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;	// 0x3481d979
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x3481b99d
- (void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;	// 0x3481b9c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34821461
- (void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3481d771
// declared property setter: - (void)setDisallowsVideoOut:(BOOL)anOut;	// 0x3481b2b1
- (void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3481d8a9
- (void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x3481d7c9
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x3481e4b9
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3481e4cd
- (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x3481e5a5
- (BOOL)setInterfaceOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x3481d6d1
// declared property setter: - (void)setItem:(id)item;	// 0x34821471
- (void)setItem:(id)item animated:(BOOL)animated;	// 0x3481aeed
- (void)setManagesStatusBar:(BOOL)bar;	// 0x3481b2d5
// declared property setter: - (void)setMoviePath:(id)path;	// 0x3481aefd
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x3481b0f1
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x3481b145
// declared property setter: - (void)setOptions:(unsigned)options;	// 0x3481ad4d
- (BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x3481d551
// declared property setter: - (void)setPlayableContentType:(unsigned)type;	// 0x3481b541
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x3481daf5
// declared property setter: - (void)setPlaybackRate:(float)rate;	// 0x3481b751
// declared property setter: - (void)setPosterImage:(id)image;	// 0x3481e2e1
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x3481bac1
// declared property setter: - (void)setUseApplicationAudioSession:(BOOL)session;	// 0x3481b4f5
// declared property setter: - (void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;	// 0x3481b459
// declared property setter: - (void)setUseLegacyControls:(BOOL)controls;	// 0x3481e851
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x3481e95d
// declared property setter: - (void)setYouTubeVideoID:(id)anId;	// 0x3481e745
- (void)snapshotViewWasTapped:(id)tapped;	// 0x3481f0f5
- (void)stop;	// 0x3481b6b5
// declared property getter: - (BOOL)stopAtEnd;	// 0x3481bae1
- (void)tearDownUI;	// 0x3481e1c1
- (void)unlockMoviePlaybackResources;	// 0x3481ad91
// declared property getter: - (BOOL)useApplicationAudioSession;	// 0x3481b51d
// declared property getter: - (BOOL)useHostedWindowWhenFullscreen;	// 0x3481b445
// declared property getter: - (BOOL)useLegacyControls;	// 0x3481e83d
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned long long)part;	// 0x3481ea8d
- (void)videoController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x3481ef35
- (void)videoController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x3481eea5
- (void)videoControllerDidCreateFullscreenView:(id)videoController;	// 0x3481efc5
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x3481ecf9
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x3481ee25
- (void)videoControllerDidHideOverlay:(id)videoController;	// 0x3481ef7d
- (void)videoControllerDidShowOverlay:(id)videoController;	// 0x3481eeed
- (CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;	// 0x3481f075
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x3481ec45
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x3481ecb1
- (void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;	// 0x3481ed41
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x3481e949
// declared property getter: - (BOOL)videoOutActive;	// 0x3481b329
// declared property getter: - (id)view;	// 0x3481b1d5
- (void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;	// 0x3481d1c1
- (void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;	// 0x3481d1d5
- (void)viewControllerFailedToPlay:(id)play withError:(id)error;	// 0x3481ebed
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x3481ea59
// declared property getter: - (float)volume;	// 0x3481bb3d
// declared property getter: - (id)youTubeVideoID;	// 0x34821495
@end

