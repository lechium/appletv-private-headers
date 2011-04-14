/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectMapTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x314b0b61
- (void)_cleanup;	// 0x314b0bb9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314b1149
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x314b0c39
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x314b0c7d
- (BOOL)isLoadedForTime:(double)time;	// 0x314b0ef5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314b0f65
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314b0fa5
- (void)setAttributes:(id)attributes;	// 0x314b0cc9
@end

