/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class AVPlayerItem, BRTextControl, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlayerEventDisplayControl : BRControl {
	NSMutableDictionary *_textAttrs;	// 80 = 0x50
	BRTextControl *_displayText;	// 84 = 0x54
	AVPlayerItem *_playerItem;	// 88 = 0x58
}
+ (void)hidePlaybackEventPopup;	// 0x1ff82d
+ (void)showPlaybackEventPopup:(id)popup;	// 0x1ff6c1
- (id)initWithPlayerItem:(id)playerItem;	// 0x1ff86d
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x1ffff1
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x1fffb9
- (void)dealloc;	// 0x1ff96d
- (void)layoutSubcontrols;	// 0x1ff9d1
@end
