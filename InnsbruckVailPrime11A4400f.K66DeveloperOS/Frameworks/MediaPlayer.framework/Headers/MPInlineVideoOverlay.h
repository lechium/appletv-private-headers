/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoOverlay.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"

@class MPNowPlayingItemQueueInfoButton, MPInlineTransportControls;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
	MPInlineTransportControls *_transportControls;	// 164 = 0xa4
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 168 = 0xa8
	unsigned _layoutSubviewsActive : 1;	// 172 = 0xac
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x2e2cff49; S=0x2e2cff81; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x2e2cef09
- (void).cxx_destruct;	// 0x2e2d02b5
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x2e2d027d
- (void)_configureLinkButtonForCurrentItemTime;	// 0x2e2cfbad
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x2e2d02ad
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x2e2cff49
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x2e2cfcfd
- (void)dealloc;	// 0x2e2cefb1
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x2e2cfd41
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x2e2cfea1
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x2e2cfdf9
- (void)layoutSubviews;	// 0x2e2cf071
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x2e2cfba1
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x2e2cff81
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x2e2d0029
- (void)setDisabledParts:(unsigned long long)parts;	// 0x2e2d0165
- (void)setFrame:(CGRect)frame;	// 0x2e2cfb4d
- (void)setItem:(id)item;	// 0x2e2cffc1
- (void)setVideoViewController:(id)controller;	// 0x2e2d01b9
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x2e2d00bd
@end
