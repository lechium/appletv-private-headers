/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRPercentageIndicatorLayer, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRVolumeControl : BRControl {
@private
	BRImageControl *_speakerOnLayer;	// 48 = 0x30
	BRImageControl *_speakerOffLayer;	// 52 = 0x34
	BRPercentageIndicatorLayer *_percentageIndicatorLayer;	// 56 = 0x38
}
@property(assign) float volume;	// G=0x302fb491; S=0x302fb391; converted property
- (id)init;	// 0x302faf29
- (void)dealloc;	// 0x302fb201
- (void)layoutSubcontrols;	// 0x302fb275
// converted property setter: - (void)setVolume:(float)volume;	// 0x302fb391
// converted property getter: - (float)volume;	// 0x302fb491
@end

