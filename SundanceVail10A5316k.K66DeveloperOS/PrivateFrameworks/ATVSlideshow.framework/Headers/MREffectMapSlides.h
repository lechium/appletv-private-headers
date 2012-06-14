/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MURandom, MRImageProvider, NSMutableDictionary;

@interface MREffectMapSlides : MREffect {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	MRImageProvider *mBoxShadowBig;	// 120 = 0x78
	MRImageProvider *mBoxShadowBigBottom;	// 124 = 0x7c
	MRImageProvider *mBoxShadowBigTop;	// 128 = 0x80
	MURandom *mRandom;	// 132 = 0x84
}
- (id)initWithEffectID:(id)effectID;	// 0x3649a571
- (void)_cleanup;	// 0x3649a7b9
- (void)_renderBigShadowForRect:(CGRect)rect scale:(float)scale rects:(id)rects atTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3649d6f9
- (void)_unload;	// 0x3649db7d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3649d9e9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3649db35
- (BOOL)isLoadedForTime:(double)time;	// 0x3649a8f1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3649a961
- (void)render1SlideAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3649acd1
- (void)render2SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3649b199
- (void)render3SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3649bcd9
- (void)render4SlidesAtTime:(double)time inContext:(id)context withArguments:(id)arguments scale:(float)scale;	// 0x3649c731
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3649aa01
- (void)renderKey:(id)key shadow:(id)shadow shadowRect:(CGRect)rect size:(CGSize)size position:(CGPoint)position xRot:(float)rot tX:(float)x time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3649d359
- (void)setPixelSize:(CGSize)size;	// 0x3649a861
@end
