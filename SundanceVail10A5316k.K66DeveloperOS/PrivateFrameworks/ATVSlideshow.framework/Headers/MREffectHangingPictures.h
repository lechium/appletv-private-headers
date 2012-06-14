/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"

@class NSMutableArray, NSString, MRImageProvider, NSMutableDictionary;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {
	MRImageProvider *mRopeImageProvider;	// 116 = 0x74
	MRImageProvider *mPhotoFrameImageProviders[3];	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 132 = 0x84
	NSMutableDictionary *mMatrices;	// 136 = 0x88
	NSString *mCurrentMainSlideKey;	// 140 = 0x8c
	NSMutableArray *mSmallSlideProviders;	// 144 = 0x90
	double mSlideTimings[20][3];	// 148 = 0x94
	BOOL mScenario[9];	// 628 = 0x274
	unsigned char mNumberOfRopes;	// 637 = 0x27d
	unsigned short mFrameIndices;	// 638 = 0x27e
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x36487779
+ (BOOL)hasCustomTiming;	// 0x36487775
+ (void)initialize;	// 0x364872b9
- (id)initWithEffectID:(id)effectID;	// 0x36487391
- (void)_applyTimingToSlideProviders;	// 0x36487a19
- (void)_applyTimingToSmallSlideProviders;	// 0x36487b3d
- (double)_buildScenarioWithNumberOfSlides:(unsigned)slides orientationInformation:(BOOL *)information;	// 0x36487f71
- (void)_cleanup;	// 0x36487695
- (void)_unload;	// 0x3648af91
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x364879b5
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x364879e9
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3648ad35
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3648aedd
- (BOOL)isLoadedForTime:(double)time;	// 0x36488529
- (double)lowestDisplayTime;	// 0x36487a01
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x36488719
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3648a0d9
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x36487cd1
- (void)setPixelSize:(CGSize)size;	// 0x36487d31
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x36487951
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x36487921
@end

