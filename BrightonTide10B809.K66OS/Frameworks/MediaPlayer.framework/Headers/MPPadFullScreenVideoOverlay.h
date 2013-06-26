/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIPopoverControllerDelegate.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class UIActivityIndicatorView, UIImageView, UINavigationButton, UILabel, MPNowPlayingItemQueueInfoButton, UINavigationBar, NSString, MPPadFullScreenTransportControls, UIPopoverController, UINavigationItem;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
	MPPadFullScreenTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	UIImageView *_hudImageView;	// 160 = 0xa0
	UINavigationBar *_navigationBar;	// 164 = 0xa4
	UINavigationItem *_navigationItem;	// 168 = 0xa8
	UIImageView *_navigationBarBackgroundShort;	// 172 = 0xac
	UIImageView *_navigationBarBackgroundTall;	// 176 = 0xb0
	UIImageView *_navigationBarShadow;	// 180 = 0xb4
	NSString *_title;	// 184 = 0xb8
	UINavigationButton *_scaleModeButton;	// 188 = 0xbc
	UILabel *_scrubSpeedLabel;	// 192 = 0xc0
	UILabel *_scrubInstructionsLabel;	// 196 = 0xc4
	UIPopoverController *_popoverController;	// 200 = 0xc8
	UILabel *_loadingMovieLabel;	// 204 = 0xcc
	UIActivityIndicatorView *_loadingMovieIndicator;	// 208 = 0xd0
	unsigned _layoutSubviewsActive : 1;	// 212 = 0xd4
	unsigned _navigationBarHidden : 1;	// 212 = 0xd4
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x31d25f81; S=0x31d25fcd; converted property
@property(assign) unsigned long long disabledParts;	// G=0x31d263a5; S=0x31d263bd; converted property
@property(readonly, retain) UINavigationBar *navigationBar;	// G=0x31d26421; converted property
@property(assign) BOOL navigationBarHidden;	// G=0x31d25fb9; S=0x31d262c9; converted property
@property(copy, nonatomic) NSString *title;	// G=0x31d28155; S=0x31d267bd; @synthesize=_title
- (id)initWithFrame:(CGRect)frame;	// 0x31d251b1
- (void)_applicationWillResignActive:(id)_application;	// 0x31d26a79
- (void)_configureLinkButtonForCurrentItemTime;	// 0x31d25e41
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x31d28041
- (void)_doneButton:(id)button;	// 0x31d26725
- (void)_hideScrubInstructions;	// 0x31d27ed1
- (void)_initSubviews;	// 0x31d26c6d
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)_isExternalPlaybackActive;	// 0x31d26a65
- (void)_itemDurationAvailableNotification:(id)notification;	// 0x31d269e1
- (id)_navBarBackgroundImageForProgressControl:(BOOL)progressControl tallStyle:(BOOL)style;	// 0x31d26a99
- (void)_reconfigureNavigationBarAnimated:(BOOL)animated;	// 0x31d275dd
- (void)_scaleButton:(id)button;	// 0x31d26771
- (void)_scheduleHidePopoverTimer;	// 0x31d28095
- (void)_showScrubInstructions;	// 0x31d27d89
- (void)_videoViewScaleModeDidChangeNotification:(id)_videoViewScaleMode;	// 0x31d26a51
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x31d25f81
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x31d25f49
- (void)dealloc;	// 0x31d252b5
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x31d2666d
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x31d26459
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x31d265b5
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x31d264fd
// converted property getter: - (unsigned long long)disabledParts;	// 0x31d263a5
- (void)hideAlternateTracks;	// 0x31d269c1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31d25d85
- (void)layoutSubviews;	// 0x31d25489
// converted property getter: - (id)navigationBar;	// 0x31d26421
// converted property getter: - (BOOL)navigationBarHidden;	// 0x31d25fb9
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x31d25e35
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x31d266b9
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31d25fcd
- (void)setAlpha:(float)alpha;	// 0x31d25dc1
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d26249
// converted property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x31d263bd
- (void)setInterfaceOrientation:(int)orientation;	// 0x31d261f1
- (void)setItem:(id)item;	// 0x31d2600d
// converted property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x31d262c9
- (void)setPlayer:(id)player;	// 0x31d261a9
// declared property setter: - (void)setTitle:(id)title;	// 0x31d267bd
- (void)setVideoViewController:(id)controller;	// 0x31d26125
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31d26311
- (void)showAlternateTracks;	// 0x31d26821
// declared property getter: - (id)title;	// 0x31d28155
@end
