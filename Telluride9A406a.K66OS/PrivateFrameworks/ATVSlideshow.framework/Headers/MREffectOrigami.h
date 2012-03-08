/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface MREffectOrigami : MREffect {
	NSArray *mPatchworkAtBeginning;	// 112 = 0x70
	NSArray *mPatchworkAtEnd;	// 116 = 0x74
	NSMutableDictionary *mSprites;	// 120 = 0x78
	NSMutableArray *mSpriteKeysWatcher;	// 124 = 0x7c
	NSMutableArray *mAnimationTimeBounds;	// 128 = 0x80
	double mDurationStretchFactor;	// 132 = 0x84
	float mDescriptionAspectRatio;	// 140 = 0x8c
	float mPixelUnit;	// 144 = 0x90
}
+ (void)initialize;	// 0x349bcc3d
- (id)init;	// 0x349bcd01
- (void)_cleanup;	// 0x349bcdc5
- (void)_setTargetSizeOfImageProviders;	// 0x349bce69
- (void)_unload;	// 0x349bce49
- (BOOL)changedBetweenTime:(double)time andTime:(double)time2 remainingStillDuration:(double)duration;	// 0x349ca421
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x349bf435
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x349bf565
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349c9539
- (void)render1To3DownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c4999
- (void)render1To3LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c5da9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x349beb1d
- (void)renderFallAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349bfe65
- (void)renderFlipDiagonalAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c851d
- (void)renderFlipDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c1c99
- (void)renderFlipLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c0531
- (void)renderFold4LeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c718d
- (void)renderFoldDownAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c4231
- (void)renderFoldLeftAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c3589
- (void)renderStillAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c017d
- (void)renderUnfoldingFlowerAtTime:(double)time andProgress:(float)progress inContext:(id)context withArguments:(id)arguments inRect:(CGRect)rect withAttributes:(id)attributes;	// 0x349c8a51
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x349bf5ad
- (double)stillDurationFromTime:(double)time;	// 0x349ca26d
- (double)stretchTime:(double)time;	// 0x349ca11d
@end

