/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UILabel, UIImageView;

@interface MPPortraitControlsOverlay : MPPlaybackControlsView {
	UILabel *_scrubSpeedLabel;	// 144 = 0x90
	UILabel *_scrubInstructionLabel;	// 148 = 0x94
	UIImageView *_scrubInstructionOverlay;	// 152 = 0x98
	UIImageView *_backgroundView;	// 156 = 0x9c
	BOOL _boundsAnimInFlight;	// 160 = 0xa0
	CGRect _boundsAnimGoal;	// 164 = 0xa4
}
- (id)initWithFrame:(CGRect)frame;	// 0x319ecf4d
- (void)_hideScrubInstructionOverlayAnimationDidEnd;	// 0x319ef429
- (int)_layoutStyle;	// 0x319ed2d5
- (void)_resetStateAfterSliderTrackingDone:(id)done;	// 0x319eedf1
- (void)_showScrubInstructionOverlayAnimationDidEnd;	// 0x319ef425
- (void)_sizeToFitAnimationDidEnd;	// 0x319ef411
- (float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;	// 0x319ed30d
- (CGRect)bounds;	// 0x319ed7a1
- (void)dealloc;	// 0x319ed119
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x319ef4c1
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x319ee54d
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x319ef25d
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x319ef26d
- (CGRect)hitRect;	// 0x319ed74d
- (void)layoutSubviews;	// 0x319ee371
- (void)layoutSubviews_Compact;	// 0x319ed801
- (void)layoutSubviews_Short;	// 0x319ed865
- (void)layoutSubviews_Tall;	// 0x319edbf9
- (id)newButtonForPart:(unsigned)part;	// 0x319ed1fd
- (id)newProgressIndicator;	// 0x319ed5b5
- (void)resetDetailSlider:(id)slider;	// 0x319ee3f9
- (void)setVisibleParts:(unsigned)parts;	// 0x319ed55d
- (void)updateForEndOfDetailScrubbing;	// 0x319ee4ad
@end
