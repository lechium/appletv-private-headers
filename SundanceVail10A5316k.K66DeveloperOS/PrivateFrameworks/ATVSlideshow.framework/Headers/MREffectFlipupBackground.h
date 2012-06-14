/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectFlipupBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 116 = 0x74
}
- (id)initWithEffectID:(id)effectID;	// 0x365a18b5
- (void)_cleanup;	// 0x365a19b9
- (void)_unload;	// 0x365a1cb5
- (BOOL)isLoadedForTime:(double)time;	// 0x365a1a49
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365a1a6d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365a1cb1
- (void)setAttributes:(id)attributes;	// 0x365a1ad5
- (void)setPixelSize:(CGSize)size;	// 0x365a19f5
@end

