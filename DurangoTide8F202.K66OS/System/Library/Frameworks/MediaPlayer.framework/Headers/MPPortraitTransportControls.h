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
+ (float)defaultHeight;	// 0x31d9c955
- (id)init;	// 0x31d9cb3d
- (void)_layoutBasicParts;	// 0x31d9cff9
- (void)_layoutComplexParts;	// 0x31d9ce25
- (id)createVolumeSlider;	// 0x31d9ca49
- (void)dealloc;	// 0x31d9c9a9
- (void)layoutSubviews;	// 0x31d9c95d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x31d9cc55
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31d9c9f5
@end

