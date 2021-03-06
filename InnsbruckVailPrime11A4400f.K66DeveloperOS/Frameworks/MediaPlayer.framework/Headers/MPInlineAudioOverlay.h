/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UILabel, MPInlineAudioTransportControls, NSString;
@protocol MPVideoControllerProtocol;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
	id<MPVideoControllerProtocol> _videoViewController;	// 224 = 0xe0
	int _style;	// 228 = 0xe4
	UIView *_backgroundView;	// 232 = 0xe8
	MPInlineAudioTransportControls *_transportControls;	// 236 = 0xec
	UILabel *_streamingLabel;	// 240 = 0xf0
	NSString *_playbackErrorDescription;	// 244 = 0xf4
	UILabel *_playbackErrorDescriptionLabel;	// 248 = 0xf8
}
@property(copy, nonatomic) NSString *playbackErrorDescription;	// G=0x2e2d873d; S=0x2e2d80b1; @synthesize=_playbackErrorDescription
@property(assign, nonatomic) int style;	// G=0x2e2d8751; S=0x2e2d7f9d; @synthesize=_style
@property(assign, nonatomic) __weak id<MPVideoControllerProtocol> videoViewController;	// G=0x2e2d8761; S=0x2e2d81b1; @synthesize=_videoViewController
- (id)initWithFrame:(CGRect)frame;	// 0x2e2d7079
- (void).cxx_destruct;	// 0x2e2d8781
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x2e2d7f19
- (CGRect)_frameInBackgroundViewForDescriptionLabel:(id)descriptionLabel;	// 0x2e2d8689
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x2e2d7f49
- (id)_newDescriptionLabel;	// 0x2e2d8579
- (void)_updateVisiblePartsForAvailableRoutes;	// 0x2e2d84c5
- (void)dealloc;	// 0x2e2d7179
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)partMask;	// 0x2e2d7e8d
- (void)layoutSubviews;	// 0x2e2d7241
- (id)newProgressIndicator;	// 0x2e2d7bfd
// declared property getter: - (id)playbackErrorDescription;	// 0x2e2d873d
- (void)reloadView;	// 0x2e2d7dfd
- (void)setCurrentTime:(double)time;	// 0x2e2d7ca5
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x2e2d82ad
- (void)setHidden:(BOOL)hidden animated:(BOOL)animated completionBlock:(id)block;	// 0x2e2d82d1
- (void)setItem:(id)item;	// 0x2e2d7d95
// declared property setter: - (void)setPlaybackErrorDescription:(id)description;	// 0x2e2d80b1
- (void)setPlayer:(id)player;	// 0x2e2d7ec5
// declared property setter: - (void)setStyle:(int)style;	// 0x2e2d7f9d
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x2e2d81b1
// declared property getter: - (int)style;	// 0x2e2d8751
// declared property getter: - (id)videoViewController;	// 0x2e2d8761
@end

