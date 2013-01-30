/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, MRImageProvider, MRTextRenderer;

@interface MREffectScrapbookTitle : MREffect {
	MRImageProvider *mImageProviders[5];	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 136 = 0x88
	MRTextRenderer *mTextRenderer0;	// 140 = 0x8c
	MRImage *mTextImage0;	// 144 = 0x90
	float mLocalTranslationX;	// 148 = 0x94
	float mLocalTranslationY;	// 152 = 0x98
}
- (id)initWithEffectID:(id)effectID;	// 0x339f0821
- (void)_cleanup;	// 0x339f1365
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f19f1
- (int)_maxLinesForTextElement:(id)textElement;	// 0x339f1da1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x339f1d19
- (void)_unload;	// 0x339f1da5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x339f147d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x339f1691
- (BOOL)isAlphaFriendly;	// 0x339f188d
- (BOOL)isLoadedForTime:(double)time;	// 0x339f1805
- (BOOL)isOpaque;	// 0x339f1889
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f1891
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f1915
- (void)renderEffectTitle2AtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f2e99
- (void)renderEffectTitleAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x339f1e71
- (void)setPixelSize:(CGSize)size;	// 0x339f13cd
@end
