/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoViewController.h"
#import "MPSwipableViewDelegate.h"

@class MPPortraitInfoOverlay, MPPortraitTransportControls, UINavigationBar;

@interface MPPortraitVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
	MPPortraitInfoOverlay *_overlayView;	// 224 = 0xe0
	UINavigationBar *_navigationBar;	// 228 = 0xe4
	MPPortraitTransportControls *_transportControls;	// 232 = 0xe8
	unsigned _ownsTransportControls : 1;	// 236 = 0xec
	unsigned _waitingToShowOverlay : 1;	// 236 = 0xec
}
@property(assign) BOOL allowsDetailScrubbing;	// G=0x31d8e1f1; S=0x31d8e1cd; converted property
@property(retain, nonatomic) UINavigationBar *navigationBar;	// G=0x31d8ddad; S=0x31d8f18d; @synthesize=_navigationBar
@property(readonly, assign, nonatomic) BOOL ownsTransportControls;	// G=0x31d8dd99; 
+ (BOOL)supportsFullscreenDisplay;	// 0x31d8dd95
- (id)init;	// 0x31d8e4b5
- (id)initWithTransportControls:(BOOL)transportControls;	// 0x31d8eacd
- (void)_handleSwipeRight;	// 0x31d8de1d
- (id)_overlayView;	// 0x31d8eb25
- (void)_removeOverlayView;	// 0x31d8ddbd
- (void)_showOverlayView:(BOOL)view;	// 0x31d8e435
// converted property getter: - (BOOL)allowsDetailScrubbing;	// 0x31d8e1f1
- (CGRect)backgroundViewSnapshotFrame;	// 0x31d8f0f1
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x31d8e371
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x31d8e309
- (id)createChapterFlipTransition;	// 0x31d8e855
- (void)dealloc;	// 0x31d8ea49
- (void)displayVideoViewOnScreen;	// 0x31d8ed39
- (void)loadView;	// 0x31d8ee31
// declared property getter: - (id)navigationBar;	// 0x31d8ddad
- (id)newAlternateTracksTransition;	// 0x31d8e93d
- (id)newOverlayViewWithFrame:(CGRect)frame;	// 0x31d8dea1
// declared property getter: - (BOOL)ownsTransportControls;	// 0x31d8dd99
- (void)restoreOverlayViewAfterTransition:(id)transition;	// 0x31d8e255
// converted property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31d8e1cd
- (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31d8e569
- (void)setControlsOverlayVisible:(BOOL)visible animate:(BOOL)animate force:(BOOL)force;	// 0x31d8e3bd
- (void)setDesiredParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d8e7f1
- (void)setDisabledParts:(unsigned)parts;	// 0x31d8e799
- (void)setItem:(id)item;	// 0x31d8e4fd
// declared property setter: - (void)setNavigationBar:(id)bar;	// 0x31d8f18d
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x31d8e4cd
- (void)setVisibleParts:(unsigned)parts animate:(BOOL)animate;	// 0x31d8e719
- (void)showChaptersController;	// 0x31d8e5c1
- (void)showOverlayView;	// 0x31d8e3e9
- (void)startTicking;	// 0x31d8e235
- (void)stopTicking;	// 0x31d8e215
- (void)swipableView:(id)view swipedInDirection:(int)direction;	// 0x31d8e199
- (void)swipableView:(id)view tappedWithCount:(unsigned)count;	// 0x31d8e119
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x31d8df2d
- (void)transportControlsDidResize:(id)transportControls;	// 0x31d8ec71
- (void)viewDidAppear:(BOOL)view;	// 0x31d8e9ad
- (void)viewDidDisappear:(BOOL)view;	// 0x31d8e699
- (void)viewWillAppear:(BOOL)view;	// 0x31d8e6d9
@end

