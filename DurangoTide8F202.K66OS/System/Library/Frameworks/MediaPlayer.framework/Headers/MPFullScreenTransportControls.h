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
	UIImage *_backgroundImage;	// 120 = 0x78
	float _requiredFrameSizeWidth;	// 124 = 0x7c
}
- (id)init;	// 0x31ddd1b5
- (void)_layoutVolumeSlider:(id)slider;	// 0x31ddd2bd
- (id)createVolumeSlider;	// 0x31ddcfbd
- (void)dealloc;	// 0x31ddd051
- (void)drawRect:(CGRect)rect;	// 0x31ddd111
- (void)layoutSubviews;	// 0x31ddd3a9
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31ddd99d
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x31ddcf8d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31ddd09d
@end

