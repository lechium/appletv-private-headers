/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class NSMutableDictionary, MRImageProvider, NSArray;

@interface MREffectFlipup : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSMutableDictionary *mBreakInformation;	// 120 = 0x78
	float mZPositions[6];	// 124 = 0x7c
	float mXPositions[6];	// 148 = 0x94
	BOOL mIsLoaded;	// 172 = 0xac
	double mTiming[6];	// 176 = 0xb0
	MRImageProvider *mGradientProvider;	// 224 = 0xe0
	NSArray *mSortDescriptors;	// 228 = 0xe4
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x33acff99
+ (BOOL)hasCustomTiming;	// 0x33acff95
+ (void)initialize;	// 0x33acfb49
- (id)initWithEffectID:(id)effectID;	// 0x33acfc51
- (void)_applySizeScripts:(float)scripts;	// 0x33ad0929
- (void)_applyTimingToSlideProviders;	// 0x33ad0301
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x33ad0579
- (void)_cleanup;	// 0x33acfe01
- (double)_durationForEffect:(int)effect;	// 0x33ad0071
- (int)_iterationForTime:(double)time;	// 0x33ad0f71
- (void)_setupForSlideInformation:(id)slideInformation aspectRatio:(float)ratio;	// 0x33ad00b1
- (double)_startTimeForIteration:(int)iteration;	// 0x33ad0f31
- (void)_unload;	// 0x33ad28e5
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x33ad04f9
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x33ad0549
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33ad2751
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33ad289d
- (BOOL)isLoadedForTime:(double)time;	// 0x33ad0f09
- (void)loadPositions;	// 0x33ad0afd
- (double)lowestDisplayTime;	// 0x33ad0561
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33ad0605
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33ad0fc1
- (void)setAttributes:(id)attributes;	// 0x33acfea5
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x33ad02b1
- (void)setPixelSize:(CGSize)size;	// 0x33acff41
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x33ad04a1
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x33ad0469
@end

