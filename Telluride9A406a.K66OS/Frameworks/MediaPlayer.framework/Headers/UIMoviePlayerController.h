/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPVideoViewController, MPAVItem, UIMovieSnapshotView, NSDate, NSString, UIImage, UIViewController, UINavigationController, NSArray, UIView, MPVideoView, MPTransitionController, MPSystemNowPlayingController, MPAVController, MPMovieAccessLog, MPMovieErrorLog;

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
	} _mpcBitfield;	// 152 = 0x98
}
@property(readonly, assign, nonatomic) MPMovieAccessLog *accessLog;	// G=0x319c0c19; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x319c0f1d; S=0x319c0f31; 
@property(readonly, assign, nonatomic) BOOL areClosedCaptionsAvailable;	// G=0x319bd8fd; 
@property(assign, nonatomic) unsigned audioControlsStyle;	// G=0x319c3b21; S=0x319c003d; @synthesize=_audioControlsStyle
@property(assign) unsigned autoRotationMask;	// G=0x319bfc7d; S=0x319bfc8d; converted property
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x319c08bd; S=0x319c0881; 
@property(readonly, assign, nonatomic) unsigned bufferingState;	// G=0x319bd995; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;	// G=0x319bcc99; 
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;	// G=0x319bccbd; 
@property(assign, nonatomic) BOOL closedCaptioningEnabled;	// G=0x319bd2a9; S=0x319bd2cd; 
@property(readonly, assign, nonatomic) NSDate *currentDate;	// G=0x319bd78d; 
@property(assign, nonatomic) double currentTime;	// G=0x319bd6e1; S=0x319bd721; 
@property(assign, nonatomic) id delegate;	// G=0x319c3b31; S=0x319c3b41; @synthesize=_delegate
@property(assign, nonatomic) BOOL disallowsVideoOut;	// G=0x319bcd0d; S=0x319bd161; 
@property(readonly, assign, nonatomic) double duration;	// G=0x319bd555; 
@property(readonly, assign, nonatomic) MPMovieErrorLog *errorLog;	// G=0x319c0cc1; 
@property(readonly, assign, nonatomic) long long fileSize;	// G=0x319bd105; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x319c0a9d; S=0x319c0add; 
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x319c0b81; 
@property(readonly, assign) int interfaceOrientation;	// G=0x319bfaa1; converted property
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;	// G=0x319bd37d; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x319bcd31; S=0x319c3b51; @synthesize=_item
@property(copy, nonatomic) NSString *moviePath;	// G=0x319bcd21; S=0x319bcd91; 
@property(copy, nonatomic) NSString *movieSubtitle;	// G=0x319bcf69; S=0x319bcf91; 
@property(copy, nonatomic) NSString *movieTitle;	// G=0x319bcfbd; S=0x319bcfe5; 
@property(readonly, assign, nonatomic) MPVideoView *movieView;	// G=0x319bd011; 
@property(readonly, assign, nonatomic) BOOL muted;	// G=0x319bd889; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x319c0309; 
@property(assign, nonatomic) unsigned options;	// G=0x319bcbc5; S=0x319bcbd9; 
@property(assign, nonatomic) unsigned playableContentType;	// G=0x319bd329; S=0x319bd2ed; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x319bd5b5; 
@property(readonly, assign, nonatomic) double playableEndTime;	// G=0x319bd62d; 
@property(readonly, assign, nonatomic) double playableStartTime;	// G=0x319bd5f1; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x319c3b75; S=0x319c009d; @synthesize=_playbackErrorDescription
@property(readonly, assign, nonatomic) float playbackRate;	// G=0x319bd4c5; 
@property(readonly, assign, nonatomic) unsigned playbackState;	// G=0x319bd511; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x319c0995; S=0x319c08f5; 
@property(readonly, assign, nonatomic) double seekableEndTime;	// G=0x319bd6a5; 
@property(readonly, assign, nonatomic) double seekableStartTime;	// G=0x319bd669; 
@property(assign, nonatomic) BOOL stopAtEnd;	// G=0x319bd865; S=0x319bd845; 
@property(assign, nonatomic) BOOL useLegacyControls;	// G=0x319c0e5d; S=0x319c0e71; 
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;	// G=0x319c0f89; S=0x319c0f9d; 
@property(readonly, assign, nonatomic) BOOL videoOutActive;	// G=0x319bd1d1; 
@property(readonly, assign, nonatomic) UIView *view;	// G=0x319bd075; 
@property(readonly, assign, nonatomic) float volume;	// G=0x319bd8c1; 
@property(copy, nonatomic) NSString *youTubeVideoID;	// G=0x319c3b85; S=0x319c0d69; @synthesize=_youTubeVideoID
+ (void)allInstancesResignActive;	// 0x319c0e25
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size interfaceOrientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x319c012d
+ (CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size orientation:(int)orientation destinationTVOut:(BOOL)anOut;	// 0x319c3b95
+ (Class)preferredWindowClass;	// 0x319c3c09
- (id)initWithPlayerSize:(CGSize)playerSize;	// 0x319bc7a9
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;	// 0x319c3c25
- (id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;	// 0x319c3c5d
- (id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;	// 0x319bc155
- (id)_activeVideoController;	// 0x319bdf71
- (void)_addSnapshotViewForTime:(double)time;	// 0x319c2571
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;	// 0x319c3899
- (void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x319c3925
- (id)_backgroundPlaceholderView;	// 0x319c39d5
- (void)_beginDeviceOrientationNotifications;	// 0x319c3639
- (void)_bufferingStateChangedNotification:(id)notification;	// 0x319c1a8d
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x319c379d
- (void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;	// 0x319be5e5
- (unsigned)_convertedPartsMask:(unsigned)mask;	// 0x319c33a5
- (unsigned)_convertedVisiblePartsMask:(unsigned)mask;	// 0x319c3415
- (void)_delayedShowPortraitLoading;	// 0x319bf091
- (void)_deviceOrientationChanged:(id)changed;	// 0x319c1fd9
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x319c2f31
- (void)_endDeviceOrientationNotifications;	// 0x319c3709
- (void)_ensureActive;	// 0x319c2499
- (void)_exitPlayer:(int)player;	// 0x319c3431
- (int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;	// 0x319c34f9
- (void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x319be675
- (void)_hideLoadingForStateChange:(id)stateChange;	// 0x319bf129
- (void)_initializeVideoViewController:(id)controller orientation:(int)orientation;	// 0x319be181
- (void)_itemChangedNotification:(id)notification;	// 0x319c1c69
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x319c21f1
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x319c22a9
- (void)_itemReadyToPlayNotification:(id)playNotification;	// 0x319c20b5
- (void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;	// 0x319c2cc5
- (void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;	// 0x319c2a8d
- (void)_movieTypeAvailableNotification:(id)notification;	// 0x319c1bdd
- (void)_mutedDidChangeNotification:(id)_muted;	// 0x319c2409
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;	// 0x319bf38d
- (id)_parentViewControllerForController:(id)controller;	// 0x319be47d
- (void)_pausePlaybackForNotification:(id)notification;	// 0x319c1719
- (void)_performTransition:(id)transition toController:(id)controller;	// 0x319bf809
- (void)_playbackStateChanged:(id)changed;	// 0x319c1e75
- (id)_portraitNavigationController:(BOOL)controller;	// 0x319be785
- (id)_portraitNavigationControllerTitleView;	// 0x319beda1
- (id)_portraitNavigationRootController:(BOOL)controller;	// 0x319beaf1
- (void)_prepareAndSetupUI;	// 0x319c0671
- (void)_prepareAndSetupUIForClient;	// 0x319c079d
- (void)_prepareContainersForSwitchToActiveController:(id)activeController;	// 0x319be53d
- (void)_preparePortraitViewControllerContainers;	// 0x319bea5d
- (void)_rateDidChangeNotification:(id)_rate;	// 0x319c202d
- (void)_reconfigurePortraitNavigationBarNowIfNecessary;	// 0x319bf219
- (void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;	// 0x319bee05
- (void)_registerForNotifications;	// 0x319c2fd1
- (void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;	// 0x319bf8d9
- (void)_removeSnapshotView;	// 0x319c2a35
- (void)_schedulePortraitLoadingIndicatorIfNeeded;	// 0x319bf18d
- (void)_serverDeathNotification:(id)notification;	// 0x319c1e51
- (void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;	// 0x319bdac9
- (void)_setPortraitLoadingShowing:(BOOL)showing;	// 0x319bf0a5
- (void)_setTVOutEnabled:(BOOL)enabled;	// 0x319c3a79
- (BOOL)_shouldIgnoreChangeType:(unsigned)type;	// 0x319bf3c9
- (void)_simpleRemoteNotification:(id)notification;	// 0x319c182d
- (void)_tearDownContainersForSwitchFromViewController:(id)viewController;	// 0x319be591
- (void)_tearDownPortraitViewControllerContainers;	// 0x319beab5
- (void)_tickNotification:(id)notification;	// 0x319c2379
- (void)_timeDidJumpNotification:(id)_time;	// 0x319c2261
- (void)_timedMetadataAvailableNotification:(id)notification;	// 0x319c22f1
- (id)_titlesForPortraitNavigationBarAtTime:(double)time;	// 0x319beb1d
- (id)_titlesViewForNavigationItem:(id)navigationItem;	// 0x319bece9
- (id)_topViewController;	// 0x319bd9d9
- (void)_transitionFinished:(id)finished;	// 0x319bf661
- (void)_tvOutCapabilityChanged:(id)changed;	// 0x319c1f85
- (void)_unregisterForNotifications;	// 0x319c3209
- (void)_updateEnabledParts;	// 0x319c350d
- (void)_updateForStreamingOptions;	// 0x319c3a0d
- (void)_updatePlayableContentTypeOverride;	// 0x319c3985
- (void)_validityChangedNotification:(id)notification;	// 0x319c1e65
- (void)_videoViewPathWillChangeNotification:(id)_videoViewPath;	// 0x319c2451
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x319bf301
- (void)_volumeDidChangeNotification:(id)_volume;	// 0x319c23c1
- (void)_willBeginSuspendAnimationNotification:(id)notification;	// 0x319c180d
- (void)_willEnterForegroundNotification:(id)notification;	// 0x319c2f89
- (void)_willResignNotification:(id)notification;	// 0x319c181d
- (void)_willSuspendNotification:(id)notification;	// 0x319c17fd
// declared property getter: - (id)accessLog;	// 0x319c0c19
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x319c0f1d
// declared property getter: - (BOOL)areClosedCaptionsAvailable;	// 0x319bd8fd
// declared property getter: - (unsigned)audioControlsStyle;	// 0x319c3b21
// converted property getter: - (unsigned)autoRotationMask;	// 0x319bfc7d
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x319c08bd
- (id)backgroundView;	// 0x319c0861
- (void)beginExternalTransformation;	// 0x319c09b5
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x319bf311
- (void)beginTransition;	// 0x319bf5c5
// declared property getter: - (unsigned)bufferingState;	// 0x319bd995
// declared property getter: - (BOOL)canContinuePlayingInBackground;	// 0x319bcc99
// declared property getter: - (BOOL)canContinuePlayingWhenLocked;	// 0x319bccbd
// declared property getter: - (BOOL)closedCaptioningEnabled;	// 0x319bd2a9
- (id)createTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;	// 0x319bdf81
- (id)createViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;	// 0x319be071
- (void)crossedChapterTimeMarker:(id)marker;	// 0x319bf2ad
// declared property getter: - (id)currentDate;	// 0x319bd78d
// declared property getter: - (double)currentTime;	// 0x319bd6e1
- (void)dealloc;	// 0x319bc7cd
- (void)debugSetup;	// 0x319bc125
- (void)delayedDebugSetup;	// 0x319bc121
// declared property getter: - (id)delegate;	// 0x319c3b31
// declared property getter: - (BOOL)disallowsVideoOut;	// 0x319bcd0d
// declared property getter: - (double)duration;	// 0x319bd555
- (void)endExternalTransformation;	// 0x319c0a35
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x319bf3f1
- (void)endTransition;	// 0x319bf615
// declared property getter: - (id)errorLog;	// 0x319c0cc1
// declared property getter: - (long long)fileSize;	// 0x319bd105
// declared property getter: - (id)fullscreenView;	// 0x319c0b81
// converted property getter: - (int)interfaceOrientation;	// 0x319bfaa1
- (BOOL)isFullScreen;	// 0x319c3cd1
// declared property getter: - (BOOL)isFullscreen;	// 0x319c0a9d
// declared property getter: - (BOOL)isPreparedForPlayback;	// 0x319bd37d
// declared property getter: - (id)item;	// 0x319bcd31
- (void)layoutUIInRect:(CGRect)rect;	// 0x319c0271
- (void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;	// 0x319c3c95
// declared property getter: - (id)moviePath;	// 0x319bcd21
- (CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;	// 0x319c0371
// declared property getter: - (id)movieSubtitle;	// 0x319bcf69
// declared property getter: - (id)movieTitle;	// 0x319bcfbd
// declared property getter: - (id)movieView;	// 0x319bd011
// declared property getter: - (BOOL)muted;	// 0x319bd889
// declared property getter: - (CGSize)naturalSize;	// 0x319c0309
// declared property getter: - (unsigned)options;	// 0x319bcbc5
- (int)orientation;	// 0x319c3cf9
- (void)pause;	// 0x319bd421
- (void)performTransition:(id)transition;	// 0x319bf769
- (void)play;	// 0x319bd3e1
// declared property getter: - (unsigned)playableContentType;	// 0x319bd329
// declared property getter: - (double)playableDuration;	// 0x319bd5b5
// declared property getter: - (double)playableEndTime;	// 0x319bd62d
// declared property getter: - (double)playableStartTime;	// 0x319bd5f1
// declared property getter: - (id)playbackErrorDescription;	// 0x319c3b75
// declared property getter: - (float)playbackRate;	// 0x319bd4c5
// declared property getter: - (unsigned)playbackState;	// 0x319bd511
- (id)playerView;	// 0x319c3ce9
- (void)portraitDoneButtonAction:(id)action;	// 0x319be725
- (void)portraitScaleButtonAction:(id)action;	// 0x319be759
// declared property getter: - (id)posterImage;	// 0x319c0995
- (void)prepareAndSetupUI;	// 0x319c07c1
- (void)prepareForPlayback;	// 0x319bd3d1
- (void)resignActive;	// 0x319c0ff9
- (BOOL)seekToDate:(id)date;	// 0x319bd7e9
// declared property getter: - (double)seekableEndTime;	// 0x319bd6a5
// declared property getter: - (double)seekableStartTime;	// 0x319bd669
- (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x319bffd5
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x319bfff5
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x319c0f31
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x319bd1f9
// declared property setter: - (void)setAudioControlsStyle:(unsigned)style;	// 0x319c003d
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;	// 0x319bd09d
// converted property setter: - (void)setAutoRotationMask:(unsigned)mask;	// 0x319bfc8d
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x319c0881
- (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x319bfe6d
- (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x319bfeb1
// declared property setter: - (void)setClosedCaptioningEnabled:(BOOL)enabled;	// 0x319bd2cd
- (void)setClosedCaptions:(id)captions;	// 0x319bd22d
- (void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;	// 0x319bff29
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x319bd721
- (void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;	// 0x319bd745
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x319c3b41
- (void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x319bfcf9
// declared property setter: - (void)setDisallowsVideoOut:(BOOL)anOut;	// 0x319bd161
- (void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;	// 0x319bfe39
- (void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;	// 0x319bfd4d
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x319c0add
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x319c0af1
- (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x319c0bc9
- (BOOL)setInterfaceOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x319bfc59
// declared property setter: - (void)setItem:(id)item;	// 0x319c3b51
- (void)setItem:(id)item animated:(BOOL)animated;	// 0x319bcd81
- (void)setManagesStatusBar:(BOOL)bar;	// 0x319bd189
// declared property setter: - (void)setMoviePath:(id)path;	// 0x319bcd91
// declared property setter: - (void)setMovieSubtitle:(id)subtitle;	// 0x319bcf91
// declared property setter: - (void)setMovieTitle:(id)title;	// 0x319bcfe5
// declared property setter: - (void)setOptions:(unsigned)options;	// 0x319bcbd9
- (BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x319bfad5
// declared property setter: - (void)setPlayableContentType:(unsigned)type;	// 0x319bd2ed
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x319c009d
// declared property setter: - (void)setPosterImage:(id)image;	// 0x319c08f5
// declared property setter: - (void)setStopAtEnd:(BOOL)end;	// 0x319bd845
- (BOOL)setUIOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;	// 0x319c3d51
// declared property setter: - (void)setUseLegacyControls:(BOOL)controls;	// 0x319c0e71
// declared property setter: - (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;	// 0x319c0f9d
// declared property setter: - (void)setYouTubeVideoID:(id)anId;	// 0x319c0d69
- (BOOL)shouldDisplayTitles;	// 0x319beb19
- (void)snapshotViewWasTapped:(id)tapped;	// 0x319c16e9
- (void)stop;	// 0x319bd461
// declared property getter: - (BOOL)stopAtEnd;	// 0x319bd865
- (void)tearDownUI;	// 0x319c07d1
- (void)unlockMoviePlaybackResources;	// 0x319bcc21
// declared property getter: - (BOOL)useLegacyControls;	// 0x319c0e5d
- (BOOL)videoController:(id)controller tappedButtonPart:(unsigned)part;	// 0x319c10d5
- (void)videoControllerDidCreateFullscreenView:(id)videoController;	// 0x319c15b9
- (void)videoControllerDidEnterFullscreen:(id)videoController;	// 0x319c12fd
- (void)videoControllerDidExitFullscreen:(id)videoController;	// 0x319c1419
- (void)videoControllerDidHideOverlay:(id)videoController;	// 0x319c1571
- (void)videoControllerDidShowOverlay:(id)videoController;	// 0x319c14e1
- (CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;	// 0x319c1669
- (BOOL)videoControllerShouldAutohide:(id)videoController;	// 0x319c1245
- (BOOL)videoControllerShouldShowPositionInQueueUI:(id)videoController;	// 0x319c12b1
- (void)videoControllerWillEnterFullscreen:(id)videoController;	// 0x319c12b5
- (void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;	// 0x319c1345
- (void)videoControllerWillHideOverlay:(id)videoController;	// 0x319c1529
- (void)videoControllerWillShowOverlay:(id)videoController;	// 0x319c1499
// declared property getter: - (BOOL)videoFrameDisplayOnResumeDisabled;	// 0x319c0f89
// declared property getter: - (BOOL)videoOutActive;	// 0x319bd1d1
// declared property getter: - (id)view;	// 0x319bd075
- (void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;	// 0x319bf741
- (void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;	// 0x319bf755
- (void)viewControllerFailedToPlay:(id)play withError:(id)error;	// 0x319c11f1
- (void)viewControllerRequestsExit:(id)exit reason:(int)reason;	// 0x319c10a1
// declared property getter: - (float)volume;	// 0x319bd8c1
// declared property getter: - (id)youTubeVideoID;	// 0x319c3b85
@end
