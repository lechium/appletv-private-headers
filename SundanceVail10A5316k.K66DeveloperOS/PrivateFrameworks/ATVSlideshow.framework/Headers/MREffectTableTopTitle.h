/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRTextRenderer, NSMutableArray, MRCroppingSprite, MRImage;

@interface MREffectTableTopTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mImage;	// 120 = 0x78
	NSMutableArray *mLetterImages;	// 124 = 0x7c
	NSMutableArray *mLetterFrames;	// 128 = 0x80
	NSMutableArray *mCachedRenderedLetters;	// 132 = 0x84
	CGContextRef mCachedRenderedText;	// 136 = 0x88
	int mNumberOfLetters;	// 140 = 0x8c
	MRCroppingSprite *mTextSprite;	// 144 = 0x90
}
- (id)init;	// 0x364d2909
- (void)_cleanup;	// 0x364d29c5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d2b59
- (int)_maxLinesForTextElement:(id)textElement;	// 0x364d2ee9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x364d2eb5
- (void)_unload;	// 0x364d2eed
- (void)cacheRenderedWords;	// 0x364d3055
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x364d2a29
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x364d2a6d
- (BOOL)isLoadedForTime:(double)time;	// 0x364d2ac5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x364d3391
@end

