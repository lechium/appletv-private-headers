/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, NSMutableDictionary, MRImage;

@interface MREffectWatercolorPanel : MREffect {
	NSMutableDictionary *mSprites;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x314e85d9
- (void)_cleanup;	// 0x314e8645
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e9a09
- (int)_maxLinesForTextElement:(id)textElement;	// 0x314e9a05
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x314e99d9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x314e97d9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x314e994d
- (BOOL)isLoadedForTime:(double)time;	// 0x314e866d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e86dd
- (void)renderEffect2AtTime:(double)time isSquare:(BOOL)square inContext:(id)context withArguments:(id)arguments;	// 0x314e87f5
- (void)renderEffect3AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e8e25
- (void)renderEffectSubtitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x314e9209
@end

