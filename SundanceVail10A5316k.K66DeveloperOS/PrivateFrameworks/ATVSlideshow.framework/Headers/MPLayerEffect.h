/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPLayer.h"
#import "MPEffectSupport.h"
#import "MPEffectSupportPrivate.h"

@class MCContainerEffect, NSString, NSArray, NSMutableDictionary, NSMutableArray;
@protocol MZEffectTiming;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {
	MCContainerEffect *_layerEffect;	// 48 = 0x30
	NSString *_effectID;	// 52 = 0x34
	NSString *_presetID;	// 56 = 0x38
	NSMutableArray *_slides;	// 60 = 0x3c
	NSMutableArray *_secondarySlides;	// 64 = 0x40
	NSMutableArray *_texts;	// 68 = 0x44
	NSMutableDictionary *_effectAttributes;	// 72 = 0x48
	int _randomSeed;	// 76 = 0x4c
	NSObject<MZEffectTiming> *_effectTiming;	// 80 = 0x50
	BOOL _supportsEffectTiming;	// 84 = 0x54
	int _liveIndex;	// 88 = 0x58
}
@property(retain) NSMutableDictionary *effectAttributes;	// G=0x3644a425; S=0x3644a4bd; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x3644a16d; S=0x3644a17d; 
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming> *effectTiming;	// G=0x3644cff9; @synthesize=_effectTiming
@property(assign) int liveIndex;	// G=0x3644d009; S=0x3644d019; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x3644a2ad; S=0x3644a2d1; 
@property(assign) int randomSeed;	// G=0x3644a385; S=0x3644a395; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x3644b7ed; converted property
@property(readonly, assign, nonatomic) NSArray *slides;	// G=0x3644a849; 
@property(readonly, assign, nonatomic) NSArray *texts;	// G=0x3644be65; 
+ (id)layerEffectWithEffectID:(id)effectID;	// 0x36449409
+ (id)layerEffectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x36449445
+ (id)layerEffectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x36449485
+ (id)layerEffectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x364494c5
- (id)init;	// 0x36449331
- (id)initWithCoder:(id)coder;	// 0x364499e5
- (id)initWithEffectID:(id)effectID;	// 0x3644950d
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x36449521
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x36449635
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x3644974d
- (id)_effectAttributes;	// 0x3644cbd1
- (void)_updateEffectTiming;	// 0x3644ca61
- (void)_updateTiming:(BOOL)timing;	// 0x3644cc79
- (void)addSecondarySlide:(id)slide;	// 0x3644b7fd
- (void)addSecondarySlides:(id)slides;	// 0x3644b85d
- (void)addSlide:(id)slide;	// 0x3644a859
- (void)addSlides:(id)slides;	// 0x3644a8b9
- (void)addText:(id)text;	// 0x3644be75
- (void)addTexts:(id)texts;	// 0x3644bed5
- (id)allSlides:(BOOL)slides;	// 0x3644ce31
- (void)applyFormattedAttributes;	// 0x3644d979
- (id)container;	// 0x3644d061
- (void)copySecondarySlides:(id)slides;	// 0x3644e551
- (void)copySlides:(id)slides;	// 0x3644e435
- (void)copyTexts:(id)texts;	// 0x3644e66d
- (id)copyWithZone:(NSZone *)zone;	// 0x3644a059
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x3644d6c1
- (void)createSlidesWithPaths:(id)paths;	// 0x3644d50d
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x3644d121
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x3644d145
- (void)dealloc;	// 0x36449f4d
- (id)description;	// 0x36449e9d
- (id)effectAttributeForKey:(id)key;	// 0x3644a54d
// converted property getter: - (id)effectAttributes;	// 0x3644a425
// declared property getter: - (id)effectID;	// 0x3644a16d
// declared property getter: - (id)effectTiming;	// 0x3644cff9
- (void)encodeWithCoder:(id)coder;	// 0x36449881
- (void)finalize;	// 0x36449f0d
- (id)formattedAttributes;	// 0x3644d875
- (double)fullDuration;	// 0x3644d111
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x3644b8a1
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x3644a8fd
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x3644bf19
// converted property getter: - (int)liveIndex;	// 0x3644d009
- (double)lowestDisplayTime;	// 0x3644d029
- (double)mainDuration;	// 0x3644c599
- (int)maxNumberOfSecondarySlides;	// 0x3644d0c1
- (int)maxNumberOfSlides;	// 0x3644d071
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x3644b71d
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x3644c465
// declared property getter: - (id)presetID;	// 0x3644a2ad
// converted property getter: - (int)randomSeed;	// 0x3644a385
- (void)removeAllSecondarySlides;	// 0x3644c535
- (void)removeAllSlides;	// 0x3644b6b9
- (void)removeAllTexts;	// 0x3644c405
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x3644bce1
- (void)removeSlidesAtIndices:(id)indices;	// 0x3644b319
- (void)removeTextsAtIndices:(id)indices;	// 0x3644c29d
// converted property getter: - (id)secondarySlides;	// 0x3644b7ed
- (void)setDuration:(double)duration;	// 0x3644c5f9
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x3644a699
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x3644a4bd
// declared property setter: - (void)setEffectID:(id)anId;	// 0x3644a17d
- (void)setLayerEffect:(id)effect;	// 0x3644dce1
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x3644d019
- (void)setPhaseInDuration:(double)duration;	// 0x3644c771
- (void)setPhaseOutDuration:(double)duration;	// 0x3644c8e9
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3644a2d1
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x3644a395
- (id)slideInformation;	// 0x3644da51
// declared property getter: - (id)slides;	// 0x3644a849
// declared property getter: - (id)texts;	// 0x3644be65
@end

