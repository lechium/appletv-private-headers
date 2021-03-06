/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPAbstractFullScreenVideoViewController.h"

@class MPAudioVideoRoutingPopoverController, MPWildcatFullScreenVideoOverlay;

@interface MPWildcatFullScreenVideoViewController : MPAbstractFullScreenVideoViewController {
@private
	MPWildcatFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 228 = 0xe4
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 232 = 0xe8
	unsigned _firstVideoFrameDisplayed : 1;	// 236 = 0xec
}
- (id)init;	// 0x335e7049
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x335e63a1
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x335e64c5
- (void)_rotationAnimationFinished:(id)finished;	// 0x335e6375
- (BOOL)canChangeScaleMode;	// 0x335e6929
- (BOOL)controlsOverlayVisible;	// 0x335e6ac1
- (void)dealloc;	// 0x335e6f59
- (void)firstVideoFrameDisplayedNotification:(id)notification;	// 0x335e62e5
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x335e669d
- (void)loadView;	// 0x335e6f0d
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x335e6411
- (void)overlayTappedBackButton:(id)button;	// 0x335e644d
- (void)overlayTappedScaleModeButton:(id)button;	// 0x335e6429
- (id)overlayView;	// 0x335e67e9
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x335e65ad
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x335e6bcd
- (void)setDisabledParts:(unsigned)parts;	// 0x335e6b0d
- (void)setItem:(id)item;	// 0x335e6a41
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x335e69a1
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x335e6b65
- (void)showOverlayAnimated:(BOOL)animated;	// 0x335e9119
- (void)startTicking;	// 0x335e6dcd
- (void)stopTicking;	// 0x335e6dad
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x335e6c39
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x335e8f99
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x335e6601
- (void)viewWillDisappear:(BOOL)view;	// 0x335e6e05
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x335e6d0d
@end

