/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperation, NSDictionary, MRLayerEffect, NSString, MRImage;

@interface MREffect : NSObject <MRLoadable, MRRenderable> {
	NSDictionary *mDescription;	// 4 = 0x4
	MRLayerEffect *mEffectLayer;	// 8 = 0x8
	MRImage *mOutputImage;	// 12 = 0xc
	NSString *mEffectID;	// 16 = 0x10
	NSDictionary *mAttributes;	// 20 = 0x14
	NSDictionary *mFlattenedAttributes;	// 24 = 0x18
	unsigned mSeed;	// 28 = 0x1c
	NSRange mMultiImageSlideRange;	// 32 = 0x20
	BOOL mNeedsToUpdateSlides;	// 40 = 0x28
	BOOL mNeedsToUpdateTexts;	// 41 = 0x29
	BOOL mNeedsToUpdateAttributes;	// 42 = 0x2a
	NSOperation *mPreloadOperation;	// 44 = 0x2c
	CGSize mPixelSize;	// 48 = 0x30
	MRImage *mAccumulatedImage;	// 56 = 0x38
	BOOL mNeedsToUpdateAccumulatedImage;	// 60 = 0x3c
	double mDefaultPhaseInDuration;	// 64 = 0x40
	double mDefaultMainDuration;	// 72 = 0x48
	double mDefaultPhaseOutDuration;	// 80 = 0x50
	double mPhaseInDuration;	// 88 = 0x58
	double mMainDuration;	// 96 = 0x60
	double mPhaseOutDuration;	// 104 = 0x68
}
@property(retain, nonatomic) MRImage *accumulatedImage;	// G=0x354d8159; S=0x354d748d; @synthesize=mAccumulatedImage
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x354d80ed; S=0x354d72e9; @synthesize=mAttributes
@property(readonly, assign) NSString *effectID;	// G=0x354d80dd; @synthesize=mEffectID
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;	// G=0x354d7c99; 
@property(readonly, assign, nonatomic) BOOL isInfinite;	// G=0x354d7d05; 
@property(readonly, assign, nonatomic) BOOL isNative3D;	// G=0x354d7bed; 
@property(readonly, assign, nonatomic) BOOL isOpaque;	// G=0x354d7c59; 
@property(readonly, assign, nonatomic) double mainDuration;	// G=0x354d81b1; @synthesize=mMainDuration
@property(assign, nonatomic) NSRange multiImageSlideRange;	// G=0x354d8169; S=0x354d8185; @synthesize=mMultiImageSlideRange
@property(assign, nonatomic) BOOL needsToUpdateSlides;	// G=0x354d8119; S=0x354d8129; @synthesize=mNeedsToUpdateSlides
@property(assign, nonatomic) BOOL needsToUpdateTexts;	// G=0x354d8139; S=0x354d8149; @synthesize=mNeedsToUpdateTexts
@property(readonly, assign, nonatomic) double phaseInDuration;	// G=0x354d8199; @synthesize=mPhaseInDuration
@property(readonly, assign, nonatomic) double phaseOutDuration;	// G=0x354d81c9; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) CGSize pixelSize;	// G=0x354d80fd; S=0x354d7285; @synthesize=mPixelSize
@property(readonly, assign, nonatomic) BOOL supportsDynamicExpansion;	// G=0x354d81e9; 
@property(readonly, assign, nonatomic) unsigned typicalSlideBatchSize;	// G=0x354d81ed; 
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information andTextInformation:(id)information4;	// 0x354d727d
+ (id)defaultEffectAttributesWithEffectID:(id)effectID andSlideInformation:(id)information;	// 0x354d7281
+ (BOOL)hasCustomTiming;	// 0x354d7279
+ (id)retainedEffectWithEffectID:(id)effectID forEffectLayer:(id)effectLayer;	// 0x354d6ac1
+ (BOOL)supportsDynamicExpansionForEffectID:(id)effectID;	// 0x354d81e1
+ (unsigned)typicalSlideBatchSizeForEffectID:(id)effectID;	// 0x354d81e5
- (id)initWithEffectID:(id)effectID;	// 0x354d6b15
- (void)_cleanup;	// 0x354d7251
- (double)_computePhaseTimeForTime:(double)time;	// 0x354d7029
- (double)_computeTimeForPhaseTime:(double)phaseTime;	// 0x354d713d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354d8229
- (int)_maxLinesForTextElement:(id)textElement;	// 0x354d80d9
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x354d80c1
- (void)_unload;	// 0x354d822d
// declared property getter: - (id)accumulatedImage;	// 0x354d8159
// declared property getter: - (id)attributes;	// 0x354d80ed
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x354d74e5
- (void)cancelLoading;	// 0x354d7b05
- (void)cleanup;	// 0x354d6cc1
- (void)dealloc;	// 0x354d6c41
// declared property getter: - (id)effectID;	// 0x354d80dd
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x354d74ed
- (void)endMorphing;	// 0x354d74e9
- (void)finalize;	// 0x354d6c81
- (unsigned)firstSlideIndexStillNeededAtTime:(double)time;	// 0x354d81f1
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x354d74f1
// declared property getter: - (BOOL)isAlphaFriendly;	// 0x354d7c99
// declared property getter: - (BOOL)isInfinite;	// 0x354d7d05
- (BOOL)isLoadedForTime:(double)time;	// 0x354d74f5
// declared property getter: - (BOOL)isNative3D;	// 0x354d7bed
// declared property getter: - (BOOL)isOpaque;	// 0x354d7c59
- (BOOL)isRetainedByEffectLayer;	// 0x354d6fcd
- (void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;	// 0x354d74f9
- (void)loadWithArguments:(id)arguments;	// 0x354d77dd
// declared property getter: - (double)mainDuration;	// 0x354d81b1
// declared property getter: - (NSRange)multiImageSlideRange;	// 0x354d8169
- (BOOL)needsMoreSlidesAtTime:(double)time;	// 0x354d81f9
// declared property getter: - (BOOL)needsToUpdateSlides;	// 0x354d8119
// declared property getter: - (BOOL)needsToUpdateTexts;	// 0x354d8139
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354d7f59
// declared property getter: - (double)phaseInDuration;	// 0x354d8199
// declared property getter: - (double)phaseOutDuration;	// 0x354d81c9
// declared property getter: - (CGSize)pixelSize;	// 0x354d80fd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354d7d09
- (void)releaseByEffectLayer:(id)layer;	// 0x354d6ef1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354d7db1
- (void)retainByEffectLayer:(id)layer;	// 0x354d6e69
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x354d7df5
// declared property setter: - (void)setAccumulatedImage:(id)image;	// 0x354d748d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x354d72e9
- (void)setLiveAttributes:(id)attributes;	// 0x354d7489
// declared property setter: - (void)setMultiImageSlideRange:(NSRange)range;	// 0x354d8185
// declared property setter: - (void)setNeedsToUpdateSlides:(BOOL)updateSlides;	// 0x354d8129
// declared property setter: - (void)setNeedsToUpdateTexts:(BOOL)updateTexts;	// 0x354d8149
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x354d6fe5
// declared property setter: - (void)setPixelSize:(CGSize)size;	// 0x354d7285
// declared property getter: - (BOOL)supportsDynamicExpansion;	// 0x354d81e9
// declared property getter: - (unsigned)typicalSlideBatchSize;	// 0x354d81ed
- (void)unload;	// 0x354d7999
@end

