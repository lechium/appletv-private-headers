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
	MRCroppingSprite *mTextSprite;	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 120 = 0x78
	MRImage *mTextImage;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x360bd5d1
- (void)_cleanup;	// 0x360bd62d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x360bdc05
- (int)_maxLinesForTextElement:(id)textElement;	// 0x360bd6d9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x360bd6b1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x360bd6dd
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x360bd721
- (BOOL)isLoadedForTime:(double)time;	// 0x360bd779
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x360bd801
@end
