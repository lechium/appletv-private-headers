/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 116 = 0x74
	CGRect mColor;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x339e1f8d
- (void)_cleanup;	// 0x339e20ad
- (void)_unload;	// 0x339e254d
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x339e250d
- (void)endMorphing;	// 0x339e252d
- (BOOL)isLoadedForTime:(double)time;	// 0x339e213d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339e2161
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339e23dd
- (void)setAttributes:(id)attributes;	// 0x339e21c9
- (void)setPixelSize:(CGSize)size;	// 0x339e20e9
@end
