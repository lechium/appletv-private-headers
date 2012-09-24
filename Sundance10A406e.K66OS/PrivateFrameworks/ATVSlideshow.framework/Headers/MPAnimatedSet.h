/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSMutableDictionary, NSMutableArray, NSDictionary, MUMathExpressionDoubleBased, MCContainerParallelizer;

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
@property(readonly, assign) NSString *animatedSetID;	// G=0x35fceb65; @synthesize=mAnimatedSetID
@property(copy) NSDictionary *attributes;	// G=0x35fcecc9; S=0x35fcecdd; @synthesize=mAttributes
@property(readonly, assign) MCContainerParallelizer *container;	// G=0x35fcee1d; @synthesize=mContainer
@property(assign) double defaultFeaturingAnimationDuration;	// G=0x35fcec61; S=0x35fcec95; @synthesize=mDefaultFeaturingAnimationDuration
@property(assign) double defaultFeaturingDuration;	// G=0x35fcebf9; S=0x35fcec2d; @synthesize=mDefaultFeaturingDuration
@property(assign) float distance;	// G=0x35fcedc5; S=0x35fcedd9; @synthesize=mDistance
@property(assign) BOOL easeInEaseOutBetweenFeaturedSlides;	// G=0x35fceced; S=0x35fced05; @synthesize=mEaseInEaseOutBetweenFeaturedSlides
@property(assign) BOOL firstSlideIsShared;	// G=0x35fced1d; S=0x35fced35; @synthesize=mFirstSlideIsShared
@property(readonly, assign) double fullDuration;	// G=0x35fce9c9; 
@property(copy) NSString *introAnimationID;	// G=0x35fced7d; S=0x35fced91; @synthesize=mIntroAnimationID
@property(assign) BOOL lastSlideIsShared;	// G=0x35fced4d; S=0x35fced65; @synthesize=mLastSlideIsShared
@property(readonly, assign) unsigned maximumNumberOfSlides;	// G=0x35fcc719; 
@property(readonly, assign) unsigned minimumNumberOfSlides;	// G=0x35fcc715; 
@property(readonly, assign) BOOL needsEvenNumberOfSlides;	// G=0x35fcc71d; 
@property(copy) NSString *outroAnimationID;	// G=0x35fceda1; S=0x35fcedb5; @synthesize=mOutroAnimationID
@property(assign) float speed;	// G=0x35fcedf1; S=0x35fcee05; @synthesize=mSpeed
@property(assign) double startTime;	// G=0x35fceb91; S=0x35fcebc5; @synthesize=mStartTime
@property(readonly, assign) BOOL timeWraps;	// G=0x35fceb79; @synthesize=mTimeWraps
- (id)initWithAnimatedSetID:(id)animatedSetID;	// 0x35fcbbd9
- (id)initWithCoder:(id)coder;	// 0x35fcc185
// declared property getter: - (id)animatedSetID;	// 0x35fceb65
- (void)applyIntroAnimationPathsToPlug:(id)plug atPosition:(unsigned)position;	// 0x35fcdfc1
// declared property getter: - (id)attributes;	// 0x35fcecc9
- (void)chooseAnIntroAnimation;	// 0x35fcea0d
- (void)chooseAnOutroAnimation;	// 0x35fceab9
- (void)computeAnimationPathsForTime:(double)time andPosition:(unsigned)position usingAnimationPaths:(id)paths otherAttributes:(id)attributes plugTimeOffset:(double)offset plugTimeOffsetKind:(int)kind plugAnimationPaths:(id)paths7;	// 0x35fcd569
// declared property getter: - (id)container;	// 0x35fcee1d
- (void)dealloc;	// 0x35fcc529
- (void)decodeFromSlides:(id)slides;	// 0x35fcc721
// declared property getter: - (double)defaultFeaturingAnimationDuration;	// 0x35fcec61
// declared property getter: - (double)defaultFeaturingDuration;	// 0x35fcebf9
// declared property getter: - (float)distance;	// 0x35fcedc5
// declared property getter: - (BOOL)easeInEaseOutBetweenFeaturedSlides;	// 0x35fceced
- (void)encodeWithCoder:(id)coder;	// 0x35fcbe49
- (double)featuringTimeForSlideAtPosition:(unsigned)position;	// 0x35fccba1
// declared property getter: - (BOOL)firstSlideIsShared;	// 0x35fced1d
// declared property getter: - (double)fullDuration;	// 0x35fce9c9
- (void)insertIntoContainer:(id)container;	// 0x35fcd181
// declared property getter: - (id)introAnimationID;	// 0x35fced7d
// declared property getter: - (BOOL)lastSlideIsShared;	// 0x35fced4d
// declared property getter: - (unsigned)maximumNumberOfSlides;	// 0x35fcc719
// declared property getter: - (unsigned)minimumNumberOfSlides;	// 0x35fcc715
// declared property getter: - (BOOL)needsEvenNumberOfSlides;	// 0x35fcc71d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35fcc649
// declared property getter: - (id)outroAnimationID;	// 0x35fceda1
- (void)removeAllSlides;	// 0x35fcca91
- (void)removeSlideAtPosition:(unsigned)position;	// 0x35fcc961
- (void)setAnimationPaths:(id)paths onPlug:(id)plug atPosition:(unsigned)position atTimeOffset:(double)timeOffset withTimeOffsetKind:(int)timeOffsetKind forDuration:(double)duration withFunctionTimeOffset:(double)functionTimeOffset andFunctionTimeFactor:(double)factor easeIn:(BOOL)anIn easeOut:(BOOL)anOut otherAttributes:(id)attributes;	// 0x35fcdb01
- (void)setAnimationPathsForPlug:(id)plug atPosition:(unsigned)position;	// 0x35fce139
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x35fcecdd
// declared property setter: - (void)setDefaultFeaturingAnimationDuration:(double)duration;	// 0x35fcec95
// declared property setter: - (void)setDefaultFeaturingDuration:(double)duration;	// 0x35fcec2d
// declared property setter: - (void)setDistance:(float)distance;	// 0x35fcedd9
// declared property setter: - (void)setEaseInEaseOutBetweenFeaturedSlides:(BOOL)easeOutBetweenFeaturedSlides;	// 0x35fced05
// declared property setter: - (void)setFirstSlideIsShared:(BOOL)shared;	// 0x35fced35
// declared property setter: - (void)setIntroAnimationID:(id)anId;	// 0x35fced91
// declared property setter: - (void)setLastSlideIsShared:(BOOL)shared;	// 0x35fced65
// declared property setter: - (void)setOutroAnimationID:(id)anId;	// 0x35fcedb5
// declared property setter: - (void)setSpeed:(float)speed;	// 0x35fcee05
// declared property setter: - (void)setStartTime:(double)time;	// 0x35fcebc5
- (void)showSlide:(id)slide atPosition:(unsigned)position featuringAttributes:(id)attributes;	// 0x35fcc899
- (id)slides;	// 0x35fccb8d
// declared property getter: - (float)speed;	// 0x35fcedf1
// declared property getter: - (double)startTime;	// 0x35fceb91
- (double)time1OfGoodPositionForPosition:(int)position;	// 0x35fcee31
- (double)time2OfGoodPositionForPosition:(int)position;	// 0x35fcf061
- (double)timeOfGoodPositionForPosition:(int)position;	// 0x35fcde81
// declared property getter: - (BOOL)timeWraps;	// 0x35fceb79
- (void)updateContainer;	// 0x35fcce81
@end
