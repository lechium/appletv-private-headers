/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class MPInlineTransportControls, MPNowPlayingItemQueueInfoButton;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
	MPInlineTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	unsigned _layoutSubviewsActive : 1;	// 160 = 0xa0
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x31dc2fe5; S=0x31dc301d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x31dc2139
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31dc32d9
- (void)_configureLinkButtonForCurrentItemTime;	// 0x31dc2cf9
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x31dc3309
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x31dc2fe5
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x31dc2e21
- (void)dealloc;	// 0x31dc21c1
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x31dc2e59
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x31dc2f65
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x31dc2ee5
- (void)layoutSubviews;	// 0x31dc2291
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x31dc2ced
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x31dc301d
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31dc30b9
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31dc31f5
- (void)setFrame:(CGRect)frame;	// 0x31dc2ca5
- (void)setItem:(id)item;	// 0x31dc305d
- (void)setVideoViewController:(id)controller;	// 0x31dc3249
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31dc314d
@end

