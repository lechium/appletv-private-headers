/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRCroppingSprite;

@interface MREffectJustAText : MREffect {
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
	BOOL mTextWasUpdatedSinceLastRendering;	// 128 = 0x80
	CGSize mSizeOfText;	// 132 = 0x84
}
- (id)init;	// 0x3356bc69
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3356c0a1
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3356c7b1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3356c78d
- (void)_unload;	// 0x3356c7f5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3356bcc5
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3356bcd1
- (BOOL)isLoadedForTime:(double)time;	// 0x3356bcf9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3356bd7d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3356bdc5
@end

