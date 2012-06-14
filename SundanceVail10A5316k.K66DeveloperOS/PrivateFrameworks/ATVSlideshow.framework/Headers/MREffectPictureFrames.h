/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"
#import "MZEffectTiming.h"

@class NSMutableArray, MRCroppingSprite, NSString, NSMutableDictionary, MRImageProvider;

@interface MREffectPictureFrames : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableDictionary *mFrameProviders;	// 120 = 0x78
	MRCroppingSprite *mFrameSprite;	// 124 = 0x7c
	MRImageProvider *mWallProvider;	// 128 = 0x80
	MRImageProvider *mGradientProvider;	// 132 = 0x84
	NSMutableArray *mTableProviders;	// 136 = 0x88
	NSMutableArray *mWallSprites;	// 140 = 0x8c
	NSMutableArray *mLayoutWidths;	// 144 = 0x90
	float mTotalWidth;	// 148 = 0x94
	float mXOffset;	// 152 = 0x98
	BOOL mIsLoaded;	// 156 = 0x9c
	NSMutableArray *mLayouts;	// 160 = 0xa0
	NSMutableArray *mFrames;	// 164 = 0xa4
	NSMutableArray *mSlideOrder;	// 168 = 0xa8
	NSMutableArray *mAspectRatios;	// 172 = 0xac
	NSString *mFirstFrame;	// 176 = 0xb0
	NSString *mLastFrame;	// 180 = 0xb4
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x365b47e1
+ (BOOL)hasCustomTiming;	// 0x365b47d9
+ (void)initialize;	// 0x365b011d
- (id)initWithEffectID:(id)effectID;	// 0x365b1f2d
- (void)_applyTimingToSlideProviders;	// 0x365b4981
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x365b5e69
- (void)_cleanup;	// 0x365b2041
- (void)_drawBreakFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365b8361
- (void)_drawBreakFrameInRect:(CGRect)rect frameWidth:(float)width time:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365b89bd
- (id)_drawFrame:(id)frame provider:(id)provider index:(int)index rect:(CGRect)rect time:(double)time onTable:(BOOL)table inContext:(id)context withArguments:(id)arguments;	// 0x365b8e3d
- (double)_durationForEffect;	// 0x365b4c99
- (double)_durationForEffect:(BOOL)effect;	// 0x365b4cb1
- (CGRect)_frameRectFromInfo:(id)info onShelf:(BOOL)shelf;	// 0x365b61e5
- (float)_nextSlideProviderAspectRatioToFitInAspectRatio:(id)aspectRatio providerKeys:(id)keys slideInformation:(id)information index:(int *)index force:(BOOL)force;	// 0x365b7ba1
- (id)_populateFrames;	// 0x365b5ef5
- (id)_randomFrameForAspectRatio:(id)aspectRatio forTable:(BOOL)table allowMatte:(BOOL)matte onlyLoaded:(BOOL)loaded ignoreFrames:(id)frames randomGenerator:(id)generator;	// 0x365b7e9d
- (CGRect)_rectForFrameID:(id)frameID rect:(CGRect)rect onTable:(BOOL)table aspectRatio:(float)ratio slideAspectRatio:(float)ratio5;	// 0x365b8191
- (void)_setupLayoutWithSlideInformation:(id)slideInformation;	// 0x365b52cd
- (float)_startingOffset;	// 0x365b524d
- (float)_startingWidth;	// 0x365b50f5
- (void)_unload;	// 0x365b969d
- (float)_xForSlideAtIndex:(int)index layoutWidth:(float *)width;	// 0x365b62c5
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x365b6961
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x365b6a49
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x365b9509
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x365b9655
- (BOOL)isLoadedForTime:(double)time;	// 0x365b279d
- (id)layoutsWithSlidesInfo:(id)slidesInfo seed:(unsigned)seed hasShelf:(BOOL)shelf;	// 0x365b2339
- (double)lowestDisplayTime;	// 0x365b6a61
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365b2bc1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365b6a79
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x365b4931
- (void)setPixelSize:(CGSize)size;	// 0x365b299d
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x365b6821
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x365b6731
@end

