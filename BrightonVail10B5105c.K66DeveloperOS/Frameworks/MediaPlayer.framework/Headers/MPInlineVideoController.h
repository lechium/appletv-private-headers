/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransportControlsTarget.h"
#import "MPSwipableViewDelegate.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "MPVideoControllerProtocol.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class MPAudioVideoRoutingPopoverController, MPSwipableView, NSString, NSSet, UIAlertView, UIActivityIndicatorView, NSTimer, MPInlineAudioOverlay, UINavigationController, MPVideoContainerView, MPInlineVideoFullscreenViewController, UIWindow, UITapGestureRecognizer, MPTVOutWindow, MPAVController, MPVideoBackgroundView, UIPinchGestureRecognizer, MPAVItem, UIView, UIColor, UIImage;
@protocol MPVideoOverlay;

@interface MPInlineVideoController : NSObject <MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate, UIPopoverControllerDelegate> {
	id _delegate;	// 4 = 0x4
	MPAVItem *_item;	// 8 = 0x8
	MPAVController *_player;	// 12 = 0xc
	BOOL _allowsDetailScrubbing;	// 16 = 0x10
	BOOL _allowsWirelessPlayback;	// 17 = 0x11
	BOOL _alwaysAllowHidingControlsOverlay;	// 18 = 0x12
	int _artworkImageStyle;	// 20 = 0x14
	BOOL _attemptAutoPlayWhenControlsHidden;	// 24 = 0x18
	MPVideoBackgroundView *_backgroundView;	// 28 = 0x1c
	UIColor *_backstopColor;	// 32 = 0x20
	BOOL _canAnimateControlsOverlay;	// 36 = 0x24
	BOOL _canShowControlsOverlay;	// 37 = 0x25
	BOOL _controlsOverlayVisible;	// 38 = 0x26
	unsigned long long _desiredParts;	// 40 = 0x28
	unsigned long long _disabledParts;	// 48 = 0x30
	BOOL _disableAutoRotation;	// 56 = 0x38
	BOOL _disableControlsAutohide;	// 57 = 0x39
	BOOL _displayPlaybackErrorAlerts;	// 58 = 0x3a
	BOOL _inlinePlaybackUsesTVOut;	// 59 = 0x3b
	unsigned _itemTypeOverride;	// 60 = 0x3c
	BOOL _ownsStatusBar;	// 64 = 0x40
	UIImage *_posterImage;	// 68 = 0x44
	unsigned _scaleMode;	// 72 = 0x48
	BOOL _TVOutEnabled;	// 76 = 0x4c
	BOOL _TVOutEnabledMaster;	// 77 = 0x4d
	BOOL _useHostedWindowWhenFullscreen;	// 78 = 0x4e
	MPSwipableView *_view;	// 80 = 0x50
	UIView<MPVideoOverlay> *_videoOverlayView;	// 84 = 0x54
	unsigned long long _visibleParts;	// 88 = 0x58
	int _audioOverlayStyle;	// 96 = 0x60
	BOOL _navigationBarHidden;	// 100 = 0x64
	NSString *_playbackErrorDescription;	// 104 = 0x68
	int _videoOverlayStyle;	// 108 = 0x6c
	UIAlertView *_alertSheet;	// 112 = 0x70
	UIWindow *_alternateTracksWindow;	// 116 = 0x74
	MPInlineAudioOverlay *_audioOverlayView;	// 120 = 0x78
	unsigned _backgroundTaskId;	// 124 = 0x7c
	BOOL _batteryMonitoringWasEnabled;	// 128 = 0x80
	UINavigationController *_chaptersContainerController;	// 132 = 0x84
	MPVideoContainerView *_containerView;	// 136 = 0x88
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 140 = 0x8c
	MPInlineVideoFullscreenViewController *_fullscreenViewController;	// 144 = 0x90
	BOOL _fullscreenViewSizeIsExternallyManaged;	// 148 = 0x94
	UIWindow *_fullscreenWindow;	// 152 = 0x98
	BOOL _hasShownFirstVideoFrame;	// 156 = 0x9c
	NSTimer *_idleTimer;	// 160 = 0xa0
	BOOL _inCloneMirrorMode;	// 164 = 0xa4
	BOOL _isAnimatingOverlay;	// 165 = 0xa5
	BOOL _isTransitioningFromFullscreen;	// 166 = 0xa6
	BOOL _isTransitioningToFullscreen;	// 167 = 0xa7
	UIActivityIndicatorView *_loadingIndicator;	// 168 = 0xa8
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 172 = 0xac
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 176 = 0xb0
	int _savedStatusBarStyle;	// 180 = 0xb4
	BOOL _savedIsStatusBarHidden;	// 184 = 0xb8
	unsigned _scaleModeOverride;	// 188 = 0xbc
	BOOL _scheduledLoadingIndicator;	// 192 = 0xc0
	BOOL _swallowNextTapGesture;	// 193 = 0xc1
	UITapGestureRecognizer *_tapGestureRecognizer;	// 196 = 0xc4
	MPTVOutWindow *_tvOutWindow;	// 200 = 0xc8
	UIView *_videoBackgroundView;	// 204 = 0xcc
	NSSet *_viewsToFade;	// 208 = 0xd0
	BOOL _wantsOverlayVisibleWhenItemIsAvailable;	// 212 = 0xd4
	BOOL _wasPlaying;	// 213 = 0xd5
	UIWindow *_windowForDisablingAutorotation;	// 216 = 0xd8
	UIWindow *_windowForFullscreenTransition;	// 220 = 0xdc
}
@property(assign) BOOL TVOutEnabled;	// G=0x3507d86d; S=0x35076341; converted property
@property(assign) BOOL allowsDetailScrubbing;	// G=0x3507d69d; S=0x3507d6ad; converted property
@property(assign) BOOL allowsWirelessPlayback;	// G=0x3507d6bd; S=0x35075da1; converted property
@property(assign) BOOL alwaysAllowHidingControlsOverlay;	// G=0x3507d6cd; S=0x3507d6dd; converted property
@property(assign) int artworkImageStyle;	// G=0x3507d6ed; S=0x3507d6fd; converted property
@property(assign) BOOL attemptAutoPlayWhenControlsHidden;	// G=0x3507d70d; S=0x3507d71d; converted property
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x3507d8e9; S=0x3507749d; @synthesize=_audioOverlayStyle
@property(readonly, retain) MPVideoBackgroundView *backgroundView;	// G=0x3507d72d; converted property
@property(retain) UIColor *backstopColor;	// G=0x3507d73d; S=0x3507d74d; converted property
@property(assign) BOOL canAnimateControlsOverlay;	// G=0x3507d75d; S=0x3507d76d; converted property
@property(assign) BOOL canShowControlsOverlay;	// G=0x3507d77d; S=0x35075dcd; converted property
@property(assign) BOOL controlsOverlayVisible;	// G=0x3507d78d; S=0x3507d79d; converted property
@property(assign, nonatomic) id delegate;	// G=0x3507d65d; S=0x3507d66d; @synthesize=_delegate
@property(assign) unsigned long long desiredParts;	// G=0x3507d7ad; S=0x350760b5; converted property
@property(assign) BOOL disableAutoRotation;	// G=0x3507d7c5; S=0x3507d7d5; converted property
@property(assign) BOOL disableControlsAutohide;	// G=0x35075885; S=0x35076141; converted property
@property(assign) unsigned long long disabledParts;	// G=0x3507d7e5; S=0x35076181; converted property
@property(assign) BOOL displayPlaybackErrorAlerts;	// G=0x3507d7fd; S=0x3507d80d; converted property
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x35077429; 
@property(assign) BOOL inlinePlaybackUsesTVOut;	// G=0x3507d81d; S=0x3507624d; converted property
@property(retain, nonatomic) MPAVItem *item;	// G=0x3507d68d; S=0x35074e71; @synthesize=_item
@property(assign) unsigned itemTypeOverride;	// G=0x3507d82d; S=0x35076279; converted property
@property(assign, nonatomic) BOOL navigationBarHidden;	// G=0x3507d8a5; S=0x35077539; @synthesize=_navigationBarHidden
@property(assign, nonatomic) int orientation;	// G=0x35074e6d; S=0x3507505d; 
@property(assign) BOOL ownsStatusBar;	// G=0x35075b81; S=0x3507d83d; converted property
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x3507d8b5; S=0x350774d5; @synthesize=_playbackErrorDescription
@property(retain, nonatomic) MPAVController *player;	// G=0x3507d67d; S=0x35075065; @synthesize=_player
@property(retain) UIImage *posterImage;	// G=0x3507d84d; S=0x3507d85d; converted property
@property(readonly, assign, nonatomic) BOOL savedIsStatusBarHidden;	// G=0x3507d8c9; @synthesize=_savedIsStatusBarHidden
@property(readonly, assign, nonatomic) int savedStatusBarStyle;	// G=0x3507d8d9; @synthesize=_savedStatusBarStyle
@property(assign) unsigned scaleMode;	// G=0x35075d79; S=0x350762a1; converted property
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x3507d895; S=0x35077599; @synthesize=_videoOverlayStyle
@property(readonly, assign, nonatomic) UIView *view;	// G=0x35075189; 
@property(assign) unsigned long long visibleParts;	// G=0x3507d87d; S=0x3507637d; converted property
- (id)init;	// 0x35074609
// converted property getter: - (BOOL)TVOutEnabled;	// 0x3507d86d
- (void)_applicationResumedEventsOnly:(id)only;	// 0x35077f45
- (void)_applicationSuspended:(id)suspended;	// 0x35077f85
- (void)_applicationWillEnterForeground:(id)_application;	// 0x3507802d
- (void)_availableRoutesChanged:(id)changed;	// 0x35078081
- (void)_batteryStateDidChange:(id)_batteryState;	// 0x35078139
- (void)_bufferingStateChanged:(id)changed;	// 0x35078179
- (BOOL)_canEnableAirPlayVideoRoutes;	// 0x35078d19
- (void)_cancelOverlayIdleTimer;	// 0x35078c99
- (void)_delayedShowLoadingIndicator;	// 0x35078fa1
- (void)_delayedUpdateBackgroundView;	// 0x35079295
- (void)_destroyAudioOverlayView;	// 0x350792d5
- (void)_destroyVideoOverlayView;	// 0x35079325
- (void)_doneWithChapters:(id)chapters;	// 0x35079389
- (void)_durationAvailable:(id)available;	// 0x35078249
- (unsigned)_effectiveItemType;	// 0x350794e9
- (void)_effectiveScaleModeDidChange:(id)_effectiveScaleMode;	// 0x350782c9
- (void)_enableAirPlayVideoRoutesIfNecessary;	// 0x3507953d
- (void)_firstVideoFrameDisplayed:(id)displayed;	// 0x35078279
- (void)_flipFromChaptersDidStop:(id)_flipFromChapters finished:(id)finished context:(void *)context;	// 0x35079585
- (void)_flipToChaptersDidStop:(id)_flipToChapters finished:(id)finished context:(void *)context;	// 0x35079665
- (void)_hideLoadingIndicator;	// 0x35079685
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x35079731
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x35079a09
- (BOOL)_isAnimatingFullscreenTransition;	// 0x35079ac1
- (void)_isExternalPlaybackActiveDidChange:(id)_isExternalPlaybackActive;	// 0x35078359
- (void)_itemTypeAvailable:(id)available;	// 0x350783d9
- (unsigned)_itemTypeWithActualTypePreference;	// 0x35079af1
- (void)_overlayIdleTimerFired:(id)fired;	// 0x35079b35
- (BOOL)_overlayViewIsVisible;	// 0x35079c61
- (void)_playbackError:(id)error;	// 0x35078469
- (void)_playbackStateChanged:(id)changed;	// 0x35078815
- (void)_postScaleModeDidChange;	// 0x35079cb9
- (void)_postViewControllerRequestsExitWithReason:(int)reason;	// 0x35079d19
- (void)_registerForPlayerNotifications;	// 0x35079da5
- (void)_resetOverlayIdleTimer;	// 0x35079f39
- (void)_scaleModeDidChange:(id)_scaleMode;	// 0x350788d5
- (void)_scheduleLoadingIndicatorIfNeeded;	// 0x3507a009
- (void)_screenDidConnect:(id)_screen;	// 0x3507896d
- (void)_screenDidDisconnect:(id)_screen;	// 0x35078a4d
- (void)_setupSubviews;	// 0x3507a0b5
- (void)_setupTVOutWindow;	// 0x3507a569
- (BOOL)_shouldShowDestinationPlaceholder;	// 0x3507a679
- (void)_showChapters;	// 0x3507a6f9
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x3507ac79
- (void)_showOverlayDidEnd;	// 0x3507b0a1
- (void)_showStillFrameIfNotAlreadyPlaying;	// 0x3507b10d
- (void)_sizeDidChange:(id)_size;	// 0x35078b2d
- (void)_tearDownTVOutWindow;	// 0x3507b1c1
- (void)_timedImageMetadataAvailable:(id)available;	// 0x35078bb1
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x3507b2c9
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x3507b2e1
- (void)_transitionFromFullscreenDidEnd;	// 0x3507bc4d
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x3507bec1
- (void)_transitionToFullscreenDidEnd;	// 0x3507c4e9
- (void)_unregisterForPlayerNotifications;	// 0x3507cab5
- (void)_updateAlwaysPlayWheneverPossible;	// 0x3507cbd9
- (void)_updateBackgroundViewConfiguration:(BOOL)configuration;	// 0x3507cc59
- (void)_updateBackgroundViewInformation;	// 0x3507ceb9
- (void)_updateDisableAirPlayMirroringDuringPlayback;	// 0x3507cf9d
- (void)_updateDoubleTapGestureRecognizer;	// 0x3507d04d
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned)playbackState;	// 0x3507d0d5
- (void)_updateProgressControlForItem:(id)item;	// 0x3507d1b5
- (void)_updateTVOutEnabled;	// 0x3507d281
- (BOOL)_useInlineControls;	// 0x3507d3a9
- (void)_validityChanged:(id)changed;	// 0x35078c39
- (void)_viewWasPinched:(id)pinched;	// 0x3507d575
- (void)_viewWasTapped:(id)tapped;	// 0x3507d3e5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x35077e2d
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x3507d69d
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x3507d6bd
// converted property getter: - (BOOL)alwaysAllowHidingControlsOverlay;	// 0x3507d6cd
// converted property getter: - (int)artworkImageStyle;	// 0x3507d6ed
// converted property getter: - (BOOL)attemptAutoPlayWhenControlsHidden;	// 0x3507d70d
// declared property getter: - (int)audioOverlayStyle;	// 0x3507d8e9
// converted property getter: - (id)backgroundView;	// 0x3507d72d
- (CGRect)backgroundViewSnapshotFrame;	// 0x350755e5
// converted property getter: - (id)backstopColor;	// 0x3507d73d
// converted property getter: - (BOOL)canAnimateControlsOverlay;	// 0x3507d75d
- (BOOL)canChangeScaleMode;	// 0x35075625
- (BOOL)canHideOverlay:(BOOL)overlay;	// 0x35075665
// converted property getter: - (BOOL)canShowControlsOverlay;	// 0x3507d77d
- (BOOL)canShowQTAudioOnlyUI;	// 0x35078f21
- (void)chapterList:(id)list selectedChapter:(unsigned)chapter;	// 0x35077d79
- (void)clearWeakReferencesToObject:(id)object;	// 0x35074e51
// converted property getter: - (BOOL)controlsOverlayVisible;	// 0x3507d78d
- (void)dealloc;	// 0x35074905
// declared property getter: - (id)delegate;	// 0x3507d65d
// converted property getter: - (unsigned long long)desiredParts;	// 0x3507d7ad
// converted property getter: - (BOOL)disableAutoRotation;	// 0x3507d7c5
// converted property getter: - (BOOL)disableControlsAutohide;	// 0x35075885
// converted property getter: - (unsigned long long)disabledParts;	// 0x3507d7e5
// converted property getter: - (BOOL)displayPlaybackErrorAlerts;	// 0x3507d7fd
- (void)displayVideoView;	// 0x350758f1
- (void)exitFullscreen;	// 0x35077255
- (void)fullscreenOverlayDidHide;	// 0x35077399
- (void)fullscreenOverlayDidShow;	// 0x350773e1
- (void)fullscreenOverlayWillHideAnimated:(BOOL)fullscreenOverlay;	// 0x35077269
- (void)fullscreenOverlayWillShowAnimated:(BOOL)fullscreenOverlay;	// 0x35077319
// declared property getter: - (id)fullscreenView;	// 0x35077429
- (id)hostedWindow;	// 0x35075ab1
- (unsigned)hostedWindowContextID;	// 0x35075b05
// converted property getter: - (BOOL)inlinePlaybackUsesTVOut;	// 0x3507d81d
- (BOOL)isFullscreen;	// 0x35075b69
// declared property getter: - (id)item;	// 0x3507d68d
// converted property getter: - (unsigned)itemTypeOverride;	// 0x3507d82d
// declared property getter: - (BOOL)navigationBarHidden;	// 0x3507d8a5
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x35074e69
// declared property getter: - (int)orientation;	// 0x35074e6d
- (void)overlayDidBeginScrubbing:(id)overlay;	// 0x35077cc5
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x35077cd5
- (void)overlayDidEndScrubbing:(id)overlay;	// 0x35077ce5
- (void)overlayTappedBackButton:(id)button;	// 0x35077cf5
- (void)overlayTappedScaleModeButton:(id)button;	// 0x35077d4d
// converted property getter: - (BOOL)ownsStatusBar;	// 0x35075b81
// declared property getter: - (id)playbackErrorDescription;	// 0x3507d8b5
// declared property getter: - (id)player;	// 0x3507d67d
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x35077ecd
// converted property getter: - (id)posterImage;	// 0x3507d84d
- (void)prepareToDisplayVideo;	// 0x35075c05
- (void)saveStatusBarState;	// 0x35077449
// declared property getter: - (BOOL)savedIsStatusBarHidden;	// 0x3507d8c9
// declared property getter: - (int)savedStatusBarStyle;	// 0x3507d8d9
// converted property getter: - (unsigned)scaleMode;	// 0x35075d79
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x3507d6ad
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35075da1
// converted property setter: - (void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;	// 0x3507d6dd
// converted property setter: - (void)setArtworkImageStyle:(int)style;	// 0x3507d6fd
// converted property setter: - (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;	// 0x3507d71d
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x3507749d
// converted property setter: - (void)setBackstopColor:(id)color;	// 0x3507d74d
// converted property setter: - (void)setCanAnimateControlsOverlay:(BOOL)overlay;	// 0x3507d76d
// converted property setter: - (void)setCanShowControlsOverlay:(BOOL)overlay;	// 0x35075dcd
- (void)setClosedCaptions:(id)captions;	// 0x35075e1d
- (void)setControlsNeedLayout;	// 0x35075e21
// converted property setter: - (void)setControlsOverlayVisible:(BOOL)visible;	// 0x3507d79d
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate;	// 0x3507606d
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x35076091
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3507d66d
// converted property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x350760b5
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x350760d9
// converted property setter: - (void)setDisableAutoRotation:(BOOL)rotation;	// 0x3507d7d5
// converted property setter: - (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x35076141
// converted property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x35076181
// converted property setter: - (void)setDisplayPlaybackErrorAlerts:(BOOL)alerts;	// 0x3507d80d
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x350761dd
// converted property setter: - (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x3507624d
// declared property setter: - (void)setItem:(id)item;	// 0x35074e71
// converted property setter: - (void)setItemTypeOverride:(unsigned)override;	// 0x35076279
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x35077539
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x3507505d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35075061
// converted property setter: - (void)setOwnsStatusBar:(BOOL)bar;	// 0x3507d83d
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x350774d5
// declared property setter: - (void)setPlayer:(id)player;	// 0x35075065
// converted property setter: - (void)setPosterImage:(id)image;	// 0x3507d85d
// converted property setter: - (void)setScaleMode:(unsigned)mode;	// 0x350762a1
- (void)setScaleModeOverride:(unsigned)override animated:(BOOL)animated;	// 0x350762f9
// converted property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x35076341
- (void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;	// 0x3507636d
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x35077599
// converted property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x3507637d
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x350763a1
- (void)showAlternateTracksController:(id)controller;	// 0x350764e1
- (void)swipableView:(id)view didMoveToSuperview:(id)superview;	// 0x35077685
- (void)swipableViewHadActivity:(id)activity;	// 0x350776d5
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x350776e9
// declared property getter: - (int)videoOverlayStyle;	// 0x3507d895
- (id)videoOverlayView;	// 0x35076e3d
- (id)videoView;	// 0x350771a1
// declared property getter: - (id)view;	// 0x35075189
- (BOOL)viewControllerWillRequestExit;	// 0x350771c9
// converted property getter: - (unsigned long long)visibleParts;	// 0x3507d87d
@end

