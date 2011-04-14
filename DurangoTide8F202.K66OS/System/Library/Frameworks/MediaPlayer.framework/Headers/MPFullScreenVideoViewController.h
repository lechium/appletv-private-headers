/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController {
@private
	MPFullScreenVideoOverlay *_overlayView;	// 228 = 0xe4
	int _autorotationState;	// 232 = 0xe8
	BOOL _inhibitOverlay;	// 236 = 0xec
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x31d8b931; S=0x31d8b90d; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x31d8a2a5; S=0x31d8a2b5; @synthesize=_autorotationState
@property(assign, nonatomic) BOOL inhibitOverlay;	// G=0x31d8a2c5; S=0x31d8a2d5; @synthesize=_inhibitOverlay
@property(readonly, retain) MPFullScreenVideoOverlay *overlayView;	// G=0x31d8d4c5; converted property
- (id)init;	// 0x31d8bff1
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x31d8b1f1
- (void)_reallyRemoveOverlay;	// 0x31d8b0bd
- (void)_rotationAnimationFinished:(id)finished;	// 0x31d8b119
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x31d8b931
// declared property getter: - (int)autorotationState;	// 0x31d8a2a5
- (BOOL)controlsOverlayVisible;	// 0x31d8b955
- (id)createChapterFlipTransition;	// 0x31d8b9f9
- (void)dealloc;	// 0x31d8bf69
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x31d8b7f9
// declared property getter: - (BOOL)inhibitOverlay;	// 0x31d8a2c5
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x31d8bd81
- (void)overlayTappedBackButton:(id)button;	// 0x31d8b329
- (void)overlayTappedScaleModeButton:(id)button;	// 0x31d8b305
// converted property getter: - (id)overlayView;	// 0x31d8d4c5
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x31d8b705
- (void)removeChildViewController:(id)controller;	// 0x31d8bcc9
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31d8b90d
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x31d8a2b5
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d8bbe9
- (void)setDisabledParts:(unsigned)parts;	// 0x31d8bb0d
// declared property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x31d8a2d5
- (void)setItem:(id)item;	// 0x31d8bc51
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x31d8ba9d
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d8bb75
- (void)showChaptersController;	// 0x31d8b97d
- (void)showOverlayAnimated:(BOOL)animated;	// 0x31d8d3a5
- (void)startTicking;	// 0x31d8be5d
- (void)stopTicking;	// 0x31d8be3d
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x31d8d2fd
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x31d8d839
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x31d8b435
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x31d8b669
- (void)viewDidAppear:(BOOL)view;	// 0x31d8bed5
- (void)viewDidDisappear:(BOOL)view;	// 0x31d8be95
@end

