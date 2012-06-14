/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPInlineVideoOverlay, _UIHostedWindow, UIView, MPInlineAudioOverlay, NSString, MPAudioVideoRoutingPopoverController, NSTimer, UITapGestureRecognizer, UIWindow, UIPinchGestureRecognizer;
@protocol MPVideoOverlay;

@interface MPInlineVideoViewController : MPVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
@private
	int _videoOverlayStyle;	// 320 = 0x140
	MPInlineVideoOverlay *_inlineOverlayView;	// 324 = 0x144
	UIView<MPVideoOverlay> *_fullscreenOverlayView;	// 328 = 0x148
	MPInlineAudioOverlay *_audioOverlayView;	// 332 = 0x14c
	int _audioOverlayStyle;	// 336 = 0x150
	UIView *_overlayViewBeingHidden;	// 340 = 0x154
	BOOL _overlayViewIsVisible;	// 344 = 0x158
	NSString *_playbackErrorDescription;	// 348 = 0x15c
	UITapGestureRecognizer *_tapGestureRecognizer;	// 352 = 0x160
	UITapGestureRecognizer *_doubleTapGestureRecognizer;	// 356 = 0x164
	UITapGestureRecognizer *_fullscreenTapGestureRecognizer;	// 360 = 0x168
	UITapGestureRecognizer *_fullscreenDoubleTapGestureRecognizer;	// 364 = 0x16c
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 368 = 0x170
	UIPinchGestureRecognizer *_fullscreenPinchGestureRecognizer;	// 372 = 0x174
	NSTimer *_idleTimer;	// 376 = 0x178
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 380 = 0x17c
	UIWindow *_windowForDisablingAutorotation;	// 384 = 0x180
	unsigned _wantsOverlayVisibleWhenItemIsAvailable : 1;	// 388 = 0x184
	unsigned _wantsOverlayVisibleWhenItemIsAvailableAnimated : 1;	// 388 = 0x184
	unsigned _animatingOverlay : 1;	// 388 = 0x184
	unsigned _inCloneMirrorMode : 1;	// 388 = 0x184
	UIView *_fullscreenView;	// 392 = 0x188
	UIView *_superviewBeforeFullscreen;	// 396 = 0x18c
	UIViewController *_parentViewControllerBeforeFullscreen;	// 400 = 0x190
	unsigned _indexInSuperviewBeforeFullscreen;	// 404 = 0x194
	CGRect _nonFullscreenDestinationFrame;	// 408 = 0x198
	int _desiredInterfaceOrientation;	// 424 = 0x1a8
	int _previousStatusBarStyle;	// 428 = 0x1ac
	_UIHostedWindow *_hostedWindow;	// 432 = 0x1b0
	unsigned _statusBarWasHidden : 1;	// 436 = 0x1b4
	unsigned _isFullscreen : 1;	// 436 = 0x1b4
	unsigned _animatingFullscreenTransition : 1;	// 436 = 0x1b4
	unsigned _animatingFullscreenTransitionToInline : 1;	// 436 = 0x1b4
	unsigned _contentViewDidClipToBounds : 1;	// 436 = 0x1b4
	unsigned _fullscreenViewSizeIsExternallyManaged : 1;	// 436 = 0x1b4
	unsigned _swallowNextTapGesture : 1;	// 436 = 0x1b4
	unsigned _disableTaps : 1;	// 436 = 0x1b4
}
@property(assign, nonatomic) int audioOverlayStyle;	// G=0x34884bc5; S=0x34881295; @synthesize=_audioOverlayStyle
@property(readonly, assign, nonatomic) UIView *fullscreenView;	// G=0x34881349; 
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x34884bd5; S=0x348812e5; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int videoOverlayStyle;	// G=0x34884be9; S=0x348811ad; @synthesize=_videoOverlayStyle
- (id)init;	// 0x3487f009
- (void)_bufferingStateDidChangeNotification:(id)_bufferingState;	// 0x348810f9
- (BOOL)_canHideOverlay:(BOOL)overlay;	// 0x34881f11
- (void)_cancelOverlayIdleTimer;	// 0x348829e5
- (unsigned)_effectiveItemType;	// 0x34884ae5
- (void)_fireOverlayIdleTimer:(id)timer;	// 0x34882809
- (void)_hideOverlayAnimated:(BOOL)animated;	// 0x34882431
- (void)_hideOverlayDidEnd:(id)_hideOverlay finished:(id)finished;	// 0x34882741
- (void)_layoutForItemTypeAvailable;	// 0x34881479
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x34880f81
- (void)_removeCoverView;	// 0x34884b85
- (void)_resetOverlayIdleTimer;	// 0x34882935
- (void)_showOverlayAnimated:(BOOL)animated;	// 0x34881f81
- (void)_showOverlayDidEnd;	// 0x348823a5
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x34883e65
- (void)_transitionFromFullscreenAnimated:(BOOL)fullscreenAnimated fromDoneButton:(BOOL)doneButton;	// 0x34883e79
- (void)_transitionFromFullscreenDidEnd;	// 0x34884669
- (void)_transitionToFullscreenAnimated:(BOOL)fullscreenAnimated;	// 0x34882c41
- (void)_transitionToFullscreenDidEnd;	// 0x34883b75
- (void)_updateForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x34882a45
- (BOOL)_useInlineControls;	// 0x34884b55
- (id)_viewControllerForRotationForViewController:(id)viewController;	// 0x34884b25
- (void)_viewWasPinched:(id)pinched;	// 0x34880e21
- (void)_viewWasTapped:(id)tapped;	// 0x34880c69
// declared property getter: - (int)audioOverlayStyle;	// 0x34884bc5
- (id)audioOverlayViewIfLoaded;	// 0x34881f01
- (id)backgroundView;	// 0x3487fa11
- (BOOL)canShowQTAudioOnlyUI;	// 0x34880351
- (BOOL)controlsOverlayVisible;	// 0x3487fc19
- (id)createChapterFlipTransition;	// 0x34881359
- (void)dealloc;	// 0x3487f091
- (void)displayVideoViewOnScreen;	// 0x3487fea9
// declared property getter: - (id)fullscreenView;	// 0x34881349
- (unsigned)hostedWindowContextID;	// 0x34880419
- (BOOL)isFullscreen;	// 0x34880269
- (BOOL)isTransitioningFromFullscreen;	// 0x34882c11
- (BOOL)isTransitioningToFullscreen;	// 0x34882be1
- (void)loadView;	// 0x3487f331
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x34880c59
- (void)overlayTappedBackButton:(id)button;	// 0x34880ba5
- (void)overlayTappedScaleModeButton:(id)button;	// 0x34880c2d
// declared property getter: - (id)playbackErrorDescription;	// 0x34884bd5
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x348813fd
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x34880b2d
- (void)registerForPlayerNotifications;	// 0x3487f45d
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x3487f731
// declared property setter: - (void)setAudioOverlayStyle:(int)style;	// 0x34881295
- (void)setControlsNeedLayout;	// 0x34880005
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x3487fc29
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x3487f861
- (void)setDisableControlsAutohide:(BOOL)autohide;	// 0x348802bd
- (void)setDisabledParts:(unsigned long long)parts;	// 0x3487f9b9
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;	// 0x3488027d
- (void)setInlinePlaybackUsesTVOut:(BOOL)anOut;	// 0x34880441
- (void)setItem:(id)item;	// 0x3487f791
- (void)setItemTypeOverride:(unsigned)override;	// 0x34880311
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x3487fc51
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x348812e5
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x3487f641
- (void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;	// 0x348803ad
// declared property setter: - (void)setVideoOverlayStyle:(int)style;	// 0x348811ad
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x3487f8c5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3487fc4d
- (void)startTicking;	// 0x3487f5f1
- (void)stopTicking;	// 0x3487f619
- (void)swipableViewHadActivity:(id)activity;	// 0x3487f44d
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned long long)part;	// 0x348804e1
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned long long)part;	// 0x348804fd
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x34880519
- (void)unregisterForPlayerNotifications;	// 0x3487f54d
// declared property getter: - (int)videoOverlayStyle;	// 0x34884be9
- (id)videoOverlayView;	// 0x34881a61
- (id)videoOverlayViewIfLoaded;	// 0x34881ec5
- (void)videoView_firstVideoFrameDisplayedNotification:(id)notification;	// 0x3488116d
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x34881015
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)videoView_tvOutCapability;	// 0x34881085
- (void)viewDidAppear:(BOOL)view;	// 0x3487f3cd
- (void)viewDidDisappear:(BOOL)view;	// 0x3487f40d
@end

