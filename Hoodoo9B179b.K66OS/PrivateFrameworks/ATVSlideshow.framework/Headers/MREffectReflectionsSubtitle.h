/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRCroppingSprite, MRTextRenderer;

@interface MREffectReflectionsSubtitle : MREffect {
	MRCroppingSprite *mTextSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x3550c0a9
- (void)_cleanup;	// 0x3550c105
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550c63d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3550c1b5
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3550c18d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3550c1b9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3550c209
- (BOOL)isLoadedForTime:(double)time;	// 0x3550c261
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3550c2e5
@end

