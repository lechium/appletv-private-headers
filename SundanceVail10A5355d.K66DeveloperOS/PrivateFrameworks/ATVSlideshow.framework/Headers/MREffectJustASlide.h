/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite *mSprite;	// 116 = 0x74
	BOOL mForceIsOpaque;	// 120 = 0x78
}
- (id)init;	// 0x320c6f31
- (void)_cleanup;	// 0x320c6f95
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x320c7ab1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x320c7af5
- (BOOL)isAlphaFriendly;	// 0x320c70f1
- (BOOL)isNative3D;	// 0x320c6fc1
- (BOOL)isOpaque;	// 0x320c7051
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c7a55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c716d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c71e9
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x320c7989
@end
