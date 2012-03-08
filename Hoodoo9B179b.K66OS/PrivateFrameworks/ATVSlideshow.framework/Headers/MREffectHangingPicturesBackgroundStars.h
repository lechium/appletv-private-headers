/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundStars : MREffect {
	XXStruct_$nPp2C *mStars;	// 112 = 0x70
	float *mStarsVertices;	// 116 = 0x74
	float *mStarsTexCoords;	// 120 = 0x78
	float *mStarsAttributes;	// 124 = 0x7c
	MRImageProvider *mBackgroundImageProvider;	// 128 = 0x80
	MRImageProvider *mStarImageProvider;	// 132 = 0x84
}
+ (void)initialize;	// 0x354de1fd
- (id)initWithEffectID:(id)effectID;	// 0x354de2c9
- (void)_cleanup;	// 0x354de56d
- (void)_initStars;	// 0x354de695
- (void)_unload;	// 0x354def81
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354de951
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354de9dd
- (void)setPixelSize:(CGSize)size;	// 0x354de5e1
@end

