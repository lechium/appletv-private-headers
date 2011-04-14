/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectSnapshot : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
	BOOL mNumberOfLines;	// 128 = 0x80
}
- (id)initWithEffectID:(id)effectID;	// 0x314e09c5
- (void)_cleanup;	// 0x314e0a29
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e2041
- (int)_maxLinesForTextElement:(id)textElement;	// 0x314e203d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x314e1f91
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x314e1ead
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x314e1f35
- (BOOL)isLoadedForTime:(double)time;	// 0x314e0aa9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e0b19
@end

