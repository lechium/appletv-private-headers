/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"
#import "MPVideoOverlayDelegate.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate> {
@private
	MPFullScreenVideoOverlay *_overlayView;	// 284 = 0x11c
	int _autorotationState;	// 288 = 0x120
	BOOL _inhibitOverlay;	// 292 = 0x124
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x319dd89d; S=0x319dd8c1; converted property
@property(assign, nonatomic) int autorotationState;	// G=0x319dec4d; S=0x319dec5d; @synthesize=_autorotationState
@property(assign) BOOL inhibitOverlay;	// G=0x319dec2d; S=0x319dec3d; converted property
@property(readonly, assign, nonatomic) MPFullScreenVideoOverlay *overlayView;	// G=0x319dde79; 
- (id)init;	// 0x319dd115
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x319de9ad
- (void)_reallyRemoveOverlay;	// 0x319debc5
- (void)_rotationAnimationFinished:(id)finished;	// 0x319dead1
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x319dd89d
// declared property getter: - (int)autorotationState;	// 0x319dec4d
- (BOOL)controlsOverlayVisible;	// 0x319dd86d
- (id)createChapterFlipTransition;	// 0x319dd735
- (void)dealloc;	// 0x319dd171
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x319de1fd
// converted property getter: - (BOOL)inhibitOverlay;	// 0x319dec2d
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x319dd34d
- (void)overlayTappedBackButton:(id)button;	// 0x319de7dd
- (void)overlayTappedScaleModeButton:(id)button;	// 0x319de8b9
// declared property getter: - (id)overlayView;	// 0x319dde79
- (void)playbackStateDidChangeNotification:(id)playbackState;	// 0x319de339
- (void)removeChildViewController:(id)controller;	// 0x319dd415
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x319dd8c1
// declared property setter: - (void)setAutorotationState:(int)state;	// 0x319dec5d
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x319dd55d
- (void)setDisabledParts:(unsigned)parts;	// 0x319dd64d
// converted property setter: - (void)setInhibitOverlay:(BOOL)overlay;	// 0x319dec3d
- (void)setItem:(id)item;	// 0x319dd4dd
- (void)setTVOutEnabled:(BOOL)enabled;	// 0x319dd6bd
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x319dd5cd
- (void)showChaptersController;	// 0x319dd7e9
- (void)showOverlayAnimated:(BOOL)animated;	// 0x319de0b5
- (void)startTicking;	// 0x319dd2ed
- (void)stopTicking;	// 0x319dd32d
- (id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;	// 0x319de8e5
- (void)transformVideoForInterfaceOrientation:(int)interfaceOrientation animate:(BOOL)animate;	// 0x319dd8e1
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x319de4f1
- (id)videoOverlayView;	// 0x319de095
- (id)videoOverlayViewIfLoaded;	// 0x319de0a5
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x319de449
- (void)viewDidAppear:(BOOL)view;	// 0x319dd205
- (void)viewDidDisappear:(BOOL)view;	// 0x319dd2a9
@end

