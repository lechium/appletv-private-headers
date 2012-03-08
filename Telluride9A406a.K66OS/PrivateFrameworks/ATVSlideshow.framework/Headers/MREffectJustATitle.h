/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectJustATitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 112 = 0x70
	MRTextRenderer *mTextRenderer1;	// 116 = 0x74
	MRImage *mImage0;	// 120 = 0x78
	MRImage *mImage1;	// 124 = 0x7c
	MRCroppingSprite *mTextSprite0;	// 128 = 0x80
	MRCroppingSprite *mTextSprite1;	// 132 = 0x84
	CGRect mText0Rect;	// 136 = 0x88
	CGRect mText1Rect;	// 152 = 0x98
	BOOL mTextWasUpdatedSinceLastRendering;	// 168 = 0xa8
}
- (id)init;	// 0x349a9ce9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349aa881
- (int)_maxLinesForTextElement:(id)textElement;	// 0x349ab239
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x349ab131
- (void)_unload;	// 0x349ab2a9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349a9ff5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349aa081
- (BOOL)isLoadedForTime:(double)time;	// 0x349aa111
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349aa205
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349aa251
- (void)setAttributes:(id)attributes;	// 0x349a9d6d
@end

