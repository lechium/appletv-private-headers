/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MZEffectTiming.h"
#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableDictionary, NSMutableArray;

@interface MREffectFloating : MREffect <MZEffectTiming> {
	int mTotalImages;	// 112 = 0x70
	NSMutableArray *mFrontSlideOrder;	// 116 = 0x74
	NSMutableArray *mMiddleSlideOrder;	// 120 = 0x78
	NSMutableArray *mBackSlideOrder;	// 124 = 0x7c
	BOOL mNeedsUpdate;	// 128 = 0x80
	BOOL mNeedsMoreSlides;	// 129 = 0x81
	int mIterationOffset;	// 132 = 0x84
	NSMutableDictionary *mSlideTimes;	// 136 = 0x88
	float *mVBOData;	// 140 = 0x8c
	unsigned mVBO;	// 144 = 0x90
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
@property(assign, nonatomic) int totalImages;	// G=0x3561d701; S=0x3561d711; @synthesize=mTotalImages
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x3561b89d
+ (BOOL)hasCustomTiming;	// 0x3561aac5
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x3561aac9
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x3561aacd
- (id)initWithEffectID:(id)effectID;	// 0x3561a905
- (void)_applySizeScript;	// 0x3561b025
- (void)_applyTimingToSlideProviders;	// 0x3561b3bd
- (void)_bestTimeInfoFor:(id)aFor time:(double)time start:(float *)start end:(float *)end;	// 0x3561b749
- (void)_cleanup;	// 0x3561aa15
- (double)_mainDurationForImageCount:(int)imageCount;	// 0x3561adb5
- (void)_orderImages;	// 0x3561bdad
- (float)_rotationForRelative:(float)relative directionFactor:(float)factor;	// 0x3561d685
- (void)_unload;	// 0x3561d721
- (float)_zTranslationForRelativeTime:(float)relativeTime;	// 0x3561d5cd
- (void)appendSlideInformation:(id)information andTextInformation:(id)information2;	// 0x3561af69
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x3561bd41
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x3561bd99
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x3561ab11
- (BOOL)isOpaque;	// 0x3561ad81
- (double)lowestDisplayTime;	// 0x3561bd2d
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x3561af59
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3561bf9d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3561c1bd
- (void)setMultiImageSlideRange:(NSRange)range;	// 0x3561ae1d
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x3561afe9
- (void)setPixelSize:(CGSize)size;	// 0x3561ad85
// declared property setter: - (void)setTotalImages:(int)images;	// 0x3561d711
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x3561bb3d
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x3561b991
- (BOOL)supportsDynamicExpansion;	// 0x3561aad1
// declared property getter: - (int)totalImages;	// 0x3561d701
- (int)typicalSlideBatchSize;	// 0x3561aad5
@end

