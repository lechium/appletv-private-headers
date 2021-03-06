/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"

@class UIImageView;

@interface MPPortraitTransportControls : MPTransportControls {
	UIImageView *_backgroundView;	// 120 = 0x78
}
+ (float)defaultHeight;	// 0x33756955
- (id)init;	// 0x33756b3d
- (void)_layoutBasicParts;	// 0x33756ff9
- (void)_layoutComplexParts;	// 0x33756e25
- (id)createVolumeSlider;	// 0x33756a49
- (void)dealloc;	// 0x337569a9
- (void)layoutSubviews;	// 0x3375695d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x33756c55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x337569f5
@end

