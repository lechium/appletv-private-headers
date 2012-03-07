/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPInlineAudioTransportControls : MPTransportControls {
@private
	int _style;	// 128 = 0x80
}
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x35bae645
- (id)buttonImageForPart:(unsigned)part;	// 0x35baea19
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35baeb71
- (void)layoutSubviews;	// 0x35baebad
- (id)newVolumeSlider;	// 0x35baeb15
- (id)pauseButtonImage;	// 0x35baeb45
- (id)playButtonImage;	// 0x35baeb19
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x35bae6f1
@end
