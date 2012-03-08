/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"

@class BRMediaHost;

__attribute__((visibility("hidden")))
@interface BRMediaHostDisconnectedDialog : BROptionDialog {
@private
	BRMediaHost *_mediaHost;	// 152 = 0x98
	unsigned _timerSatisfied : 1;	// 156 = 0x9c
}
@property(retain) BRMediaHost *mediaHost;	// G=0x303097b9; S=0x30309779; converted property
- (id)initWithHost:(id)host;	// 0x30309501
- (void)_checkHostStatus:(id)status;	// 0x3030983d
- (void)dealloc;	// 0x30309695
- (void)goToSources;	// 0x303096e1
// converted property getter: - (id)mediaHost;	// 0x303097b9
// converted property setter: - (void)setMediaHost:(id)host;	// 0x30309779
- (void)wasPushed;	// 0x303097c9
@end

