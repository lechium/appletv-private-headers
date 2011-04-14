/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPViewController.h"
#import "MPSwipableViewDelegate.h"
#import "UIModalViewDelegate.h"
#import "MPVideoTransferViewController.h"

@class MPImageCacheRequest, MPSwipableView, UIProgressIndicator, UIView, UIAlertView, UIImage, MPTVOutWindow, MPVideoBackgroundView, UIColor, MPVideoView;

@interface MPVideoViewController : MPViewController <MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
	MPVideoBackgroundView *_backgroundView;	// 160 = 0xa0
	MPSwipableView *_backstopView;	// 164 = 0xa4
	unsigned _desiredParts;	// 168 = 0xa8
	unsigned _disabledParts;	// 172 = 0xac
	unsigned _visibleParts;	// 176 = 0xb0
	unsigned _tvOutEnabled : 1;	// 180 = 0xb4
	unsigned _allowsTVOutInBackground : 1;	// 180 = 0xb4
	unsigned _itemTypeOverride;	// 184 = 0xb8
	unsigned _scaleMode;	// 188 = 0xbc
@private
	UIAlertView *_alertSheet;	// 192 = 0xc0
	MPImageCacheRequest *_artworkImageRequest;	// 196 = 0xc4
	UIColor *_backstopColor;	// 200 = 0xc8
	UIProgressIndicator *_loadingIndicator;	// 204 = 0xcc
	MPTVOutWindow *_tvOutWindow;	// 208 = 0xd0
	int _artworkImageStyle;	// 212 = 0xd4
	UIImage *_posterImage;	// 216 = 0xd8
	unsigned _canAnimateControlsOverlay : 1;	// 220 = 0xdc
	unsigned _canShowControlsOverlay : 1;	// 220 = 0xdc
	unsigned _disableControlsAutohide : 1;	// 220 = 0xdc
	unsigned _ownsStatusBar : 1;	// 220 = 0xdc
	unsigned _ownsVideoView : 1;	// 220 = 0xdc
	unsigned _playAfterPop : 1;	// 220 = 0xdc
	unsigned _scheduledLoadingIndicator : 1;	// 220 = 0xdc
	unsigned _displayPlaybackErrorAlerts : 1;	// 220 = 0xdc
	unsigned _allowsDetailScrubbing : 1;	// 221 = 0xdd
	unsigned _attemptAutoPlayWhenControlsHidden : 1;	// 221 = 0xdd
	unsigned _alwaysAllowHidingControlsOverlay : 1;	// 221 = 0xdd
	unsigned _hasShownFirstVideoFrame : 1;	// 221 = 0xdd
	unsigned _allowsWirelessPlayback : 1;	// 221 = 0xdd
	unsigned _disableAutoRotation : 1;	// 221 = 0xdd
	unsigned _inlinePlaybackUsesTVOut : 1;	// 221 = 0xdd
}
@property(assign, nonatomic) BOOL TVOutEnabled;	// G=0x31d8f2e9; S=0x31d90c39; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x31d8f221; S=0x31d8f235; 
@property(assign, nonatomic) BOOL allowsTVOutInBackground;	// G=0x31d8f2fd; S=0x31d90bdd; 
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x31d8f259; S=0x31d90f41; 
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;	// G=0x31d8f3b5; S=0x31d8f3c9; 
@property(assign, nonatomic) int artworkImageStyle;	// G=0x31d8f401; S=0x31d8f411; @synthesize=_artworkImageStyle
@property(readonly, assign, nonatomic) UIView *artworkImageView;	// G=0x31d90ed9; 
@property(assign, nonatomic) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x31d8f26d; S=0x31d90ef9; 
@property(readonly, assign, nonatomic) UIView *backgroundView;	// G=0x31d912e5; 
@property(readonly, assign) CGRect backgroundViewSnapshotFrame;	// G=0x31d9280d; 
@property(retain, nonatomic) UIColor *backstopColor;	// G=0x31d8f431; S=0x31d8f7f5; @synthesize=_backstopColor
@property(assign, nonatomic) BOOL canAnimateControlsOverlay;	// G=0x31d8f35d; S=0x31d8f389; 
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;	// G=0x31d912ad; 
@property(assign, nonatomic) BOOL canShowControlsOverlay;	// G=0x31d8f371; S=0x31d8fa21; 
@property(readonly, assign, nonatomic) BOOL canShowQTAudioOnlyUI;	// G=0x31d90b55; 
@property(assign, nonatomic) BOOL controlsOverlayVisible;	// G=0x31d8f3ad; S=0x31d8fa01; 
@property(assign, nonatomic) unsigned desiredParts;	// G=0x31d8f471; S=0x31d91089; @synthesize=_desiredParts
@property(assign, nonatomic) BOOL disableAutoRotation;	// G=0x31d8f281; S=0x31d8f295; 
@property(assign, nonatomic) BOOL disableControlsAutohide;	// G=0x31d9123d; S=0x31d8f1e1; 
@property(assign, nonatomic) unsigned disabledParts;	// G=0x31d8f461; S=0x31d91061; @synthesize=_disabledParts
@property(assign, nonatomic) BOOL displayPlaybackErrorAlerts;	// G=0x31d8f311; S=0x31d8f321; 
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;	// G=0x31d8f345; S=0x31d90b89; 
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic) BOOL inlinePlaybackUsesTVOut;	// G=0x31d8f2b1; S=0x31d8f2c5; 
@property(assign, nonatomic) unsigned itemTypeOverride;	// G=0x31d8f421; S=0x31d8f34d; @synthesize=_itemTypeOverride
@property(assign, nonatomic) BOOL ownsStatusBar;	// G=0x31d8f1b9; S=0x31d8f1fd; 
@property(retain, nonatomic) UIImage *posterImage;	// G=0x31d8f3f1; S=0x31d913ed; @synthesize=_posterImage
@property(assign, nonatomic) unsigned scaleMode;	// G=0x31d8f451; S=0x31d91049; @synthesize=_scaleMode
@property(readonly, assign, nonatomic) BOOL showArtworkForTVOut;	// G=0x31d8f2e5; 
@property(readonly, assign, nonatomic) BOOL showArtworkInImageView;	// G=0x31d91499; 
@property(readonly, assign, nonatomic, getter=isTransitioningFromFullscreen) BOOL transitioningFromFullscreen;	// G=0x31d8f341; 
@property(readonly, assign, nonatomic, getter=isTransitioningToFullscreen) BOOL transitioningToFullscreen;	// G=0x31d8f33d; 
@property(readonly, retain, nonatomic) MPVideoView *videoView;	// G=0x31d90ba1; 
@property(readonly, assign, nonatomic) BOOL viewControllerWillRequestExit;	// G=0x31d90929; 
@property(assign, nonatomic) unsigned visibleParts;	// G=0x31d8f441; S=0x31d90fe5; @synthesize=_visibleParts
+ (CGRect)calculateArtworkImageViewFrameInRect:(CGRect)rect;	// 0x31d92b15
+ (BOOL)isPlayingToTVOut;	// 0x31d91869
+ (id)sharedVideoView:(BOOL)view;	// 0x31d8fe81
+ (BOOL)supportsFullscreenDisplay;	// 0x31d8f1b5
- (id)init;	// 0x31d918a1
// declared property getter: - (BOOL)TVOutEnabled;	// 0x31d8f2e9
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x31d8f67d
- (void)_cancelArtworkImageRequest;	// 0x31d8f7a5
- (void)_delayedPopForTimeJump;	// 0x31d8ff39
- (void)_delayedShowLoading;	// 0x31d929a1
- (void)_delayedUpdateBackgroundView;	// 0x31d90219
- (void)_enableAirPlayVideoRoutesIfNecessary;	// 0x31d91d01
- (void)_exitPlayerForPlaybackError;	// 0x31d905a5
- (void)_firstVideoFrameDisplayedNotification:(id)notification;	// 0x31d9025d
- (void)_hideLoadingIndicator;	// 0x31d8f5d1
- (void)_itemDurationDidChange:(id)_itemDuration;	// 0x31d8ff79
- (unsigned)_itemTypeWithActualTypePreference;	// 0x31d91525
- (void)_popForTimeJump:(id)timeJump;	// 0x31d90015
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x31d8fa6d
- (void)_screenDidConnect:(id)_screen;	// 0x31d8ffdd
- (void)_screenDidDisconnect:(id)_screen;	// 0x31d8ffa5
- (BOOL)_showDestinationPlaceholder;	// 0x31d92331
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x31d8fb85
- (void)_updateAlwaysPlayWheneverPossible;	// 0x31d911d1
- (void)_updateBackgroundView:(BOOL)view;	// 0x31d900f5
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x31d91651
- (void)_updateProgressControlForItem:(id)item;	// 0x31d8f525
- (void)_videoView_applicationDidEnterBackgroundNotification:(id)_videoView_application;	// 0x31d91dcd
- (void)_videoView_applicationSuspendedNotification:(id)notification;	// 0x31d907d9
- (void)_videoView_applicationWillEnterForegroundNotification:(id)_videoView_application;	// 0x31d93179
- (void)_videoView_availableRoutesDidChangeNotification:(id)_videoView_availableRoutes;	// 0x31d90731
- (void)_videoView_batteryStateDidChangeNotification:(id)_videoView_batteryState;	// 0x31d906f1
- (void)_videoView_destinationDidChangeNotification:(id)_videoView_destination;	// 0x31d90671
- (void)_videoView_effectiveScaleModeChangedNotification:(id)notification;	// 0x31d90629
- (void)_videoView_playbackErrorNotification:(id)notification;	// 0x31d9347d
- (void)_videoView_playbackStateChangedNotification:(id)notification;	// 0x31d90521
- (void)_videoView_resumeEventsOnlyNotification:(id)notification;	// 0x31d904e5
- (void)_videoView_scaleModeChangedNotification:(id)notification;	// 0x31d90459
- (void)_videoView_sizeChangedNotification:(id)notification;	// 0x31d903f9
- (void)_videoView_timedImageMetadataAvailableNotification:(id)notification;	// 0x31d9037d
- (void)_videoView_tvOutCapabilityDidChangeNotification:(id)_videoView_tvOutCapability;	// 0x31d90345
- (void)_videoView_validityChangedNotification:(id)notification;	// 0x31d902f1
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x31d90839
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x31d8f221
// declared property getter: - (BOOL)allowsTVOutInBackground;	// 0x31d8f2fd
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x31d8f259
// declared property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x31d8f3b5
// declared property getter: - (int)artworkImageStyle;	// 0x31d8f401
// declared property getter: - (id)artworkImageView;	// 0x31d90ed9
// declared property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x31d8f26d
// declared property getter: - (id)backgroundView;	// 0x31d912e5
- (void)backgroundViewDidUpdate;	// 0x31d8f3e9
// declared property getter: - (CGRect)backgroundViewSnapshotFrame;	// 0x31d9280d
// declared property getter: - (id)backstopColor;	// 0x31d8f431
- (void)bufferingStateChangedNotification:(id)notification;	// 0x31d9009d
- (CGRect)calculateArtworkImageViewFrame;	// 0x31d92839
- (CGRect)calculateFullScreenArtworkImageViewFrame;	// 0x31d92b71
// declared property getter: - (BOOL)canAnimateControlsOverlay;	// 0x31d8f35d
// declared property getter: - (BOOL)canChangeScaleMode;	// 0x31d912ad
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x31d91719
// declared property getter: - (BOOL)canShowControlsOverlay;	// 0x31d8f371
// declared property getter: - (BOOL)canShowQTAudioOnlyUI;	// 0x31d90b55
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x31d909cd
- (void)chapterListDidDisappear:(id)chapterList;	// 0x31d909b9
// declared property getter: - (BOOL)controlsOverlayVisible;	// 0x31d8f3ad
- (id)createChapterFlipTransition;	// 0x31d8f859
- (void)crossedArtworkTimeMarker:(id)marker;	// 0x31d915ed
- (void)dealloc;	// 0x31d91dd9
// declared property getter: - (unsigned)desiredParts;	// 0x31d8f471
// declared property getter: - (BOOL)disableAutoRotation;	// 0x31d8f281
// declared property getter: - (BOOL)disableControlsAutohide;	// 0x31d9123d
// declared property getter: - (unsigned)disabledParts;	// 0x31d8f461
- (unsigned)disabledPartsForProposedParts:(unsigned)proposedParts;	// 0x31d8f3ed
- (int)displayArtworkImageStyle;	// 0x31d9155d
- (void)displayFreshVideoViewContents;	// 0x31d8fe41
// declared property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x31d8f311
- (void)displayVideoView;	// 0x31d8fdc9
- (void)displayVideoViewOnScreen;	// 0x31d8f385
- (void)displayVideoViewOnTV;	// 0x31d8fc85
- (void)handleScaleModeChange;	// 0x31d8fc2d
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)infoOverlay;	// 0x31d90acd
// declared property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x31d8f2b1
// declared property getter: - (BOOL)isFullscreen;	// 0x31d8f345
- (BOOL)isFullscreenForLayoutPurposes;	// 0x31d915a1
// declared property getter: - (BOOL)isTransitioningFromFullscreen;	// 0x31d8f341
// declared property getter: - (BOOL)isTransitioningToFullscreen;	// 0x31d8f33d
// declared property getter: - (unsigned)itemTypeOverride;	// 0x31d8f421
- (void)loadView;	// 0x31d90ded
- (id)newAlternateTracksTransition;	// 0x31d8f885
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x31d90d4d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31d913a5
// declared property getter: - (BOOL)ownsStatusBar;	// 0x31d8f1b9
// declared property getter: - (id)posterImage;	// 0x31d8f3f1
- (void)reloadArtworkImageView;	// 0x31d92d2d
- (void)removeChildViewController:(id)controller;	// 0x31d90cdd
// declared property getter: - (unsigned)scaleMode;	// 0x31d8f451
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31d8f235
// declared property setter: - (void)setAllowsTVOutInBackground:(BOOL)background;	// 0x31d90bdd
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31d90f41
// declared property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x31d8f3c9
// declared property setter: - (void)setArtworkImageStyle:(int)style;	// 0x31d8f411
// declared property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x31d90ef9
// declared property setter: - (void)setBackstopColor:(id)color;	// 0x31d8f7f5
// declared property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x31d8f389
// declared property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x31d8fa21
- (void)setControlsNeedLayout;	// 0x31d8f2e1
// declared property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x31d8fa01
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x31d8f9d9
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x31d8f3b1
// declared property setter: - (void)setDesiredParts:(unsigned)parts;	// 0x31d91089
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d8f1cd
// declared property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x31d8f295
// declared property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x31d8f1e1
// declared property setter: - (void)setDisabledParts:(unsigned)parts;	// 0x31d91061
// declared property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x31d8f321
// declared property setter: - (void)setFullscreen:(BOOL)fullscreen;	// 0x31d90b89
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x31d8f349
// declared property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x31d8f2c5
- (void)setItem:(id)item;	// 0x31d910a1
// declared property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x31d8f34d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x31d91459
// declared property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x31d8f1fd
- (void)setOwnsVideoView:(BOOL)view;	// 0x31d8f8b1
// declared property setter: - (void)setPosterImage:(id)image;	// 0x31d913ed
// declared property setter: - (void)setScaleMode:(unsigned)mode;	// 0x31d91049
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x31d9100d
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x31d90c39
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x31d90fe5
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d90fad
- (void)showAlternateTracksController:(id)controller;	// 0x31d926a5
// declared property getter: - (BOOL)showArtworkForTVOut;	// 0x31d8f2e5
// declared property getter: - (BOOL)showArtworkInImageView;	// 0x31d91499
- (void)showChaptersController;	// 0x31d91701
- (void)showChaptersControllerAndFadeViews:(id)views;	// 0x31d923b5
- (void)tearDownTVOutWindow;	// 0x31d8fed9
- (void)toggleScaleMode:(BOOL)mode;	// 0x31d90f85
// declared property getter: - (id)videoView;	// 0x31d90ba1
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x31d902b1
// declared property getter: - (BOOL)viewControllerWillRequestExit;	// 0x31d90929
- (void)viewDidAppear:(BOOL)view;	// 0x31d93289
- (void)viewDidDisappear:(BOOL)view;	// 0x31d90c9d
- (void)viewDidUnload;	// 0x31d90d8d
- (void)viewWillDisappear:(BOOL)view;	// 0x31d9323d
// declared property getter: - (unsigned)visibleParts;	// 0x31d8f441
- (unsigned)visiblePartsForProposedParts:(unsigned)proposedParts;	// 0x31d8f21d
@end

