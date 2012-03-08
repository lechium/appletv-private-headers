/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls {
	UIImage *_backgroundImage;	// 128 = 0x80
	float _requiredFrameSizeWidth;	// 132 = 0x84
}
- (id)init;	// 0x309af24d
- (void)_layoutVolumeSlider:(id)slider;	// 0x309b0225
- (void)_playbackModeDidChange;	// 0x309b0385
- (void)dealloc;	// 0x309af3b1
- (void)drawRect:(CGRect)rect;	// 0x309af431
- (void)layoutSubviews;	// 0x309af50d
- (id)newVolumeSlider;	// 0x309afde1
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x309afe69
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x309afdad
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x309af499
@end

