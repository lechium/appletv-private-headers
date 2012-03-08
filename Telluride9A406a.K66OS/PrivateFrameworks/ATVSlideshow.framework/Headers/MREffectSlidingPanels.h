/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, NSMutableDictionary, MRImage, MRTextRenderer;

@interface MREffectSlidingPanels : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	CGContextRef mCachedRenderedText;	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 124 = 0x7c
	MRCroppingSprite *mTextSprite;	// 128 = 0x80
	CGSize mMaxTextSize;	// 132 = 0x84
}
- (id)init;	// 0x349e8209
- (void)_cleanup;	// 0x349e82a5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349e8365
- (int)_maxLinesForTextElement:(id)textElement;	// 0x349e88cd
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x349e88b1
- (void)_unload;	// 0x349e8909
- (void)computeAnimationForTime:(double)time direction:(id)direction rect:(CGRect *)rect justification:(CGPoint *)justification;	// 0x349ea10d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349e9f09
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349ea07d
- (BOOL)isLoadedForTime:(double)time;	// 0x349e82d1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349e89cd
@end

