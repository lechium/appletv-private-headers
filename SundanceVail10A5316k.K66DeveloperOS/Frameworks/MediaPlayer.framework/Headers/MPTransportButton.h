/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPButton.h"

@class MPAVController;

@interface MPTransportButton : MPButton {
@private
	MPAVController *player;	// 208 = 0xd0
}
@property(retain, nonatomic) MPAVController *player;	// G=0x3484d645; S=0x3484d655; @synthesize
- (id)_automationID;	// 0x3484d4f9
- (void)dealloc;	// 0x3484d5f9
// declared property getter: - (id)player;	// 0x3484d645
// declared property setter: - (void)setPlayer:(id)player;	// 0x3484d655
@end

