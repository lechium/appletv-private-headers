/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class MCContainerParallelizer, NSDictionary, NSMutableDictionary, NSMutableArray, MUMathExpressionDoubleBased, NSString;

@interface MPAnimatedSet : NSObject <NSCoding> {
	NSString *mAnimatedSetID;	// 4 = 0x4
	NSDictionary *mDescription;	// 8 = 0x8
	MUMathExpressionDoubleBased *mTimeOfGoodPositionFormula;	// 12 = 0xc
	BOOL mTimeWraps;	// 16 = 0x10
	NSMutableDictionary *mSlides;	// 20 = 0x14
	NSMutableArray *mFeaturedSlidePositions;	// 24 = 0x18
	NSMutableArray *mFeaturingAttributes;	// 28 = 0x1c
	double mStartTime;	// 32 = 0x20
	double mIntroDuration;	// 40 = 0x28
	double mMainDuration;	// 48 = 0x30
	double mOutroDuration;	// 56 = 0x38
	double mTotalNumberOfIntervals;	// 64 = 0x40
	double mDefaultFeaturingDuration;	// 72 = 0x48
	double mDefaultFeaturingAnimationDuration;	// 80 = 0x50
	NSDictionary *mDefaultFeaturingAnimationAttributes;	// 88 = 0x58
	NSDictionary *mAttributes;	// 92 = 0x5c
	BOOL mEaseInEaseOutBetweenFeaturedSlides;	// 96 = 0x60
	BOOL mFirstSlideIsShared;	// 97 = 0x61
	BOOL mLastSlideIsShared;	// 98 = 0x62
	NSString *mIntroAnimationID;	// 100 = 0x64
	NSString *mOutroAnimationID;	// 104 = 0x68
	float mDistance;	// 108 = 0x6c
	float mSpeed;	// 112 = 0x70
	MCContainerParallelizer *mContainer;	// 116 = 0x74
}
@property(readonly, assign) NSString *animatedSetID;	// G=0x35426e15; @synthesize=mAnimatedSetID
@property(copy) NSDictionary *attributes;	// G=0x35426f6d; S=0x35426f81; @synthesize=mAttributes
@property(readonly, assign) MCContainerParallelizer *container;	// G=0x354270b5; @synthesize=mContainer
@property(assign) double defaultFeaturingAnimationDuration;	// G=0x35426f05; S=0x35426f39; @synthesize=mDefaultFeaturingAnimationDuration
@property(assign) double defaultFeaturingDuration;	// G=0x35426e9d; S=0x35426ed1; @synthesize=mDefaultFeaturingDuration
@property(assign) float distance;	// G=0x35427075; S=0x35427085; @synthesize=mDistance
@property(assign) BOOL easeInEaseOutBetweenFeaturedSlides;	// G=0x35426fa5; S=0x35426fb5; @synthesize=mEaseInEaseOutBetweenFeaturedSlides
@property(assign) BOOL firstSlideIsShared;	// G=0x35426fc5; S=0x35426fd5; @synthesize=mFirstSlideIsShared
@property(readonly, assign) double fullDuration;	// G=0x35426c79; 
@property(copy) NSString *introAnimationID;	// G=0x35427005; S=0x35427019; @synthesize=mIntroAnimationID
@property(assign) BOOL lastSlideIsShared;	// G=0x35426fe5; S=0x35426ff5; @synthesize=mLastSlideIsShared
@property(readonly, assign) unsigned maximumNumberOfSlides;	// G=0x35424a01; 
@property(readonly, assign) unsigned minimumNumberOfSlides;	// G=0x354249fd; 
@property(readonly, assign) BOOL needsEvenNumberOfSlides;	// G=0x35424a05; 
@property(copy) NSString *outroAnimationID;	// G=0x3542703d; S=0x35427051; @synthesize=mOutroAnimationID
@property(assign) float speed;	// G=0x35427095; S=0x354270a5; @synthesize=mSpeed
@property(assign) double startTime;	// G=0x35426e35; S=0x35426e69; @synthesize=mStartTime
@property(readonly, assign) BOOL timeWraps;	// G=0x35426e25; @synthesize=mTimeWraps
- (id)initWithAnimatedSetID:(id)animatedSetID;	// 0x35423ead
- (id)initWithCoder:(id)coder;	// 0x35424441
// declared property getter: - (id)animatedSetID;	// 0x35426e15
- (void)applyIntroAnimationPathsToPlug:(id)plug atPosition:(unsigned)position;	// 0x354261d9
// declared property getter: - (id)attributes;	// 0x35426f6d
- (void)chooseAnIntroAnimation;	// 0x35426cbd
- (void)chooseAnOutroAnimation;	// 0x35426d69
- (void)computeAnimationPathsForTime:(double)time andPosition:(unsigned)position usingAnimationPaths:(id)paths otherAttributes:(id)attributes plugTimeOffset:(double)offset plugTimeOffsetKind:(int)kind plugAnimationPaths:(id)paths7;	// 0x354257dd
// declared property getter: - (id)container;	// 0x354270b5
- (void)dealloc;	// 0x35424805
- (void)decodeFromSlides:(id)slides;	// 0x35424a09
// declared property getter: - (double)defaultFeaturingAnimationDuration;	// 0x35426f05
// declared property getter: - (double)defaultFeaturingDuration;	// 0x35426e9d
// declared property getter: - (float)distance;	// 0x35427075
// declared property getter: - (BOOL)easeInEaseOutBetweenFeaturedSlides;	// 0x35426fa5
- (void)encodeWithCoder:(id)coder;	// 0x35424121
- (double)featuringTimeForSlideAtPosition:(unsigned)position;	// 0x35424e31
// declared property getter: - (BOOL)firstSlideIsShared;	// 0x35426fc5
// declared property getter: - (double)fullDuration;	// 0x35426c79
- (void)insertIntoContainer:(id)container;	// 0x3542541d
// declared property getter: - (id)introAnimationID;	// 0x35427005
// declared property getter: - (BOOL)lastSlideIsShared;	// 0x35426fe5
// declared property getter: - (unsigned)maximumNumberOfSlides;	// 0x35424a01
// declared property getter: - (unsigned)minimumNumberOfSlides;	// 0x354249fd
// declared property getter: - (BOOL)needsEvenNumberOfSlides;	// 0x35424a05
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35424935
// declared property getter: - (id)outroAnimationID;	// 0x3542703d
- (void)removeAllSlides;	// 0x35424d45
- (void)removeSlideAtPosition:(unsigned)position;	// 0x35424c15
- (void)setAnimationPaths:(id)paths onPlug:(id)plug atPosition:(unsigned)position atTimeOffset:(double)timeOffset withTimeOffsetKind:(int)timeOffsetKind forDuration:(double)duration withFunctionTimeOffset:(double)functionTimeOffset andFunctionTimeFactor:(double)factor easeIn:(BOOL)anIn easeOut:(BOOL)anOut otherAttributes:(id)attributes;	// 0x35425d75
- (void)setAnimationPathsForPlug:(id)plug atPosition:(unsigned)position;	// 0x3542635d
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x35426f81
// declared property setter: - (void)setDefaultFeaturingAnimationDuration:(double)duration;	// 0x35426f39
// declared property setter: - (void)setDefaultFeaturingDuration:(double)duration;	// 0x35426ed1
// declared property setter: - (void)setDistance:(float)distance;	// 0x35427085
// declared property setter: - (void)setEaseInEaseOutBetweenFeaturedSlides:(BOOL)easeOutBetweenFeaturedSlides;	// 0x35426fb5
// declared property setter: - (void)setFirstSlideIsShared:(BOOL)shared;	// 0x35426fd5
// declared property setter: - (void)setIntroAnimationID:(id)anId;	// 0x35427019
// declared property setter: - (void)setLastSlideIsShared:(BOOL)shared;	// 0x35426ff5
// declared property setter: - (void)setOutroAnimationID:(id)anId;	// 0x35427051
// declared property setter: - (void)setSpeed:(float)speed;	// 0x354270a5
// declared property setter: - (void)setStartTime:(double)time;	// 0x35426e69
- (void)showSlide:(id)slide atPosition:(unsigned)position featuringAttributes:(id)attributes;	// 0x35424b59
- (id)slides;	// 0x35424e21
// declared property getter: - (float)speed;	// 0x35427095
// declared property getter: - (double)startTime;	// 0x35426e35
- (double)time1OfGoodPositionForPosition:(int)position;	// 0x354270c5
- (double)time2OfGoodPositionForPosition:(int)position;	// 0x354272c1
- (double)timeOfGoodPositionForPosition:(int)position;	// 0x35426095
// declared property getter: - (BOOL)timeWraps;	// 0x35426e25
- (void)updateContainer;	// 0x35425109
@end

