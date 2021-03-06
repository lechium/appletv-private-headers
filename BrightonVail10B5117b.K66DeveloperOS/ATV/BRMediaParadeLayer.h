/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRMediaParadeLayer : BRControl {
	CGSize _animationBounds;	// 84 = 0x54
	CGSize _maxImageBounds;	// 92 = 0x5c
	BOOL _paused;	// 100 = 0x64
}
@property(assign) BOOL paused;	// G=0x2f0261; S=0x2effc1; converted property
@property(retain) id provider;	// G=0x2efda1; S=0x2efd85; converted property
- (id)init;	// 0x2efcc1
- (id)_addLayerForImage:(id)image;	// 0x2f0271
- (void)_updateAnimationForImageLayer:(id)imageLayer withTimeOffset:(double)timeOffset;	// 0x2f03d1
- (void)_updateAnimations;	// 0x2f02e9
- (void)_updateKeyframes;	// 0x2f0949
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2f0be1
- (void)layoutSubcontrols;	// 0x2eff29
- (long)maxImages;	// 0x2efdbd
// converted property getter: - (BOOL)paused;	// 0x2f0261
// converted property getter: - (id)provider;	// 0x2efda1
- (void)setImages:(id)images;	// 0x2efdc1
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x2effc1
// converted property setter: - (void)setProvider:(id)provider;	// 0x2efd85
@end

