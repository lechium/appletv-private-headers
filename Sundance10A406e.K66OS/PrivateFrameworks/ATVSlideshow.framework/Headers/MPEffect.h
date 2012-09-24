/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "MPFilterSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectContainer, MCContainerEffect, NSString, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCPlugParallel;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
	NSMutableArray *_slides;	// 4 = 0x4
	NSMutableArray *_secondarySlides;	// 8 = 0x8
	NSMutableArray *_texts;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCContainerEffect *_container;	// 28 = 0x1c
	MCPlugParallel *_plug;	// 32 = 0x20
	MPAudioPlaylist *_audioPlaylist;	// 36 = 0x24
	MPEffectContainer *_parentContainer;	// 40 = 0x28
	BOOL _replaceSlides;	// 44 = 0x2c
	BOOL _supportsEffectTiming;	// 45 = 0x2d
	BOOL _skipEffectTiming;	// 46 = 0x2e
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	float _opacity;	// 52 = 0x34
	CGPoint _position;	// 56 = 0x38
	float _zPosition;	// 64 = 0x40
	CGSize _size;	// 68 = 0x44
	float _rotationAngle;	// 76 = 0x4c
	float _xRotationAngle;	// 80 = 0x50
	float _yRotationAngle;	// 84 = 0x54
	float _scale;	// 88 = 0x58
	double _timeIn;	// 92 = 0x5c
	double _phaseInDuration;	// 100 = 0x64
	double _phaseOutDuration;	// 108 = 0x6c
	double _mainDuration;	// 116 = 0x74
	NSString *_effectID;	// 124 = 0x7c
	NSString *_presetID;	// 128 = 0x80
	int _audioPriority;	// 132 = 0x84
	int _randomSeed;	// 136 = 0x88
	NSString *_uuid;	// 140 = 0x8c
	int _liveIndex;	// 144 = 0x90
	BOOL _cleaningUp;	// 148 = 0x94
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x3602298d; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x36022bfd; S=0x36022c0d; converted property
@property(assign) int audioPriority;	// G=0x36022d39; S=0x36022d49; converted property
@property(retain) MCContainerEffect *container;	// G=0x36022eed; S=0x36025829; converted property
@property(retain) id effectAttributes;	// G=0x3601e981; S=0x3601e991; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x3601e751; S=0x3601e761; 
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming> *effectTiming;	// G=0x36022e1d; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x360222c5; converted property
@property(assign) double fullDuration;	// G=0x3601f2c1; S=0x3601f321; converted property
@property(assign) float height;	// G=0x36026f09; S=0x36026f3d; converted property
@property(assign) int liveIndex;	// G=0x36022ecd; S=0x36022edd; converted property
@property(assign, nonatomic) double mainDuration;	// G=0x3601f8b1; S=0x3601f8c9; 
@property(assign) float opacity;	// G=0x3601eab1; S=0x3601eac1; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x36022d6d; S=0x360260b5; converted property
@property(assign, nonatomic) double phaseInDuration;	// G=0x3601f38d; S=0x3601f3a5; 
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3601f61d; S=0x3601f635; 
@property(retain) MCPlugParallel *plug;	// G=0x36022efd; S=0x36025289; converted property
@property(assign) CGPoint position;	// G=0x3601eca1; S=0x3601ecb9; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x3601e8b9; S=0x3601e8dd; 
@property(assign) int randomSeed;	// G=0x36022d7d; S=0x36022d8d; converted property
@property(assign, nonatomic) BOOL replaceSlides;	// G=0x3602178d; S=0x3602179d; 
@property(assign) float rotationAngle;	// G=0x3601eec5; S=0x3601eed5; converted property
@property(assign) float scale;	// G=0x3601eba9; S=0x3601ebb9; converted property
@property(retain) id scriptingAnimations;	// G=0x36026fd9; S=0x36027345; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x36020f09; converted property
@property(assign) CGSize size;	// G=0x3601efb5; S=0x3601efcd; converted property
@property(readonly, assign, nonatomic) NSArray *slides;	// G=0x3601fbbd; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x360243f9; converted property
@property(readonly, assign, nonatomic) NSArray *texts;	// G=0x36021b19; 
@property(readonly, retain) NSString *uuid;	// G=0x36024865; converted property
@property(assign) float width;	// G=0x36026f71; S=0x36026fa5; converted property
@property(assign) float xPosition;	// G=0x36026e39; S=0x36026e6d; converted property
@property(assign) float xRotationAngle;	// G=0x3601f0e1; S=0x3601f0f1; converted property
@property(assign) float yPosition;	// G=0x36026ea1; S=0x36026ed5; converted property
@property(assign) float yRotationAngle;	// G=0x3601f1d1; S=0x3601f1e1; converted property
@property(assign) float zPosition;	// G=0x3601edd5; S=0x3601ede5; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3601c5e1
+ (id)effectWithEffectID:(id)effectID;	// 0x3601c631
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x3601c66d
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x3601c6ad
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x3601c6ed
- (id)init;	// 0x3601cb59
- (id)initWithCoder:(id)coder;	// 0x3601d8f1
- (id)initWithEffectID:(id)effectID;	// 0x3601c735
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x3601c749
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x3601c899
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x3601c9ed
- (id)_effectAttributes;	// 0x36024175
- (void)_updateEffectTimingWithDocument:(id)document;	// 0x360217ad
- (void)_updateTiming:(BOOL)timing;	// 0x36021941
- (void)addFilter:(id)filter;	// 0x360222d5
- (void)addFilters:(id)filters;	// 0x36022335
- (void)addSecondarySlide:(id)slide;	// 0x36020f19
- (void)addSecondarySlides:(id)slides;	// 0x36020fa5
- (void)addSlide:(id)slide;	// 0x3601fbcd
- (void)addSlides:(id)slides;	// 0x3601fc59
- (void)addText:(id)text;	// 0x36021b29
- (void)addTexts:(id)texts;	// 0x36021bb5
- (id)animationPathForKey:(id)key;	// 0x3602299d
// converted property getter: - (id)animationPaths;	// 0x3602298d
- (void)applyFormattedAttributes;	// 0x36024321
// converted property getter: - (id)audioPlaylist;	// 0x36022bfd
// converted property getter: - (int)audioPriority;	// 0x36022d39
- (void)cleanup;	// 0x36025121
// converted property getter: - (id)container;	// 0x36022eed
- (void)copyAnimationPaths:(id)paths;	// 0x36024fd5
- (void)copyAudioPlaylist:(id)playlist;	// 0x360250dd
- (void)copyFilters:(id)filters;	// 0x36024e95
- (void)copySecondarySlides:(id)slides;	// 0x36024c15
- (void)copySlides:(id)slides;	// 0x36024ad5
- (void)copyTexts:(id)texts;	// 0x36024d55
- (void)copyVars:(id)vars;	// 0x360248ed
- (id)copyWithZone:(NSZone *)zone;	// 0x3601e44d
- (int)countOfFilters;	// 0x36026d09
- (int)countOfSlides;	// 0x36026aa9
- (int)countOfTexts;	// 0x36026bd9
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x36023899
- (void)createSlidesWithPaths:(id)paths;	// 0x360236e5
- (void)createTextsWithDefaultStrings;	// 0x36022f0d
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x360232f9
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x3602331d
- (void)dealloc;	// 0x3601e5a5
- (id)description;	// 0x3601cd89
- (void)dump;	// 0x36023cf5
- (id)effectAttributeForKey:(id)key;	// 0x3601e9e9
// converted property getter: - (id)effectAttributes;	// 0x3601e981
// declared property getter: - (id)effectID;	// 0x3601e751
- (id)effectPresetID;	// 0x360240f1
// declared property getter: - (id)effectTiming;	// 0x36022e1d
- (void)encodeWithCoder:(id)coder;	// 0x3601d1b1
// converted property getter: - (id)filters;	// 0x360222c5
- (void)finalize;	// 0x3601e565
- (id)formattedAttributes;	// 0x3602421d
- (id)fullDebugLog;	// 0x36023d1d
// converted property getter: - (double)fullDuration;	// 0x3601f2c1
- (BOOL)hasBreaksInDocument:(id)document;	// 0x360267a9
- (BOOL)hasMovies;	// 0x360266d9
// converted property getter: - (float)height;	// 0x36026f09
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x36022379
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x36026d49
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x36026ae9
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x36026c19
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x36020fe9
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x3601fc9d
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x36021bf9
- (BOOL)isTextOnly;	// 0x36022279
// converted property getter: - (int)liveIndex;	// 0x36022ecd
- (double)lowestDisplayTime;	// 0x36021ae1
// declared property getter: - (double)mainDuration;	// 0x3601f8b1
- (int)maxNumberOfSecondarySlides;	// 0x36022e7d
- (int)maxNumberOfSlides;	// 0x36022e2d
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x36022899
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x36020e11
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x36022181
- (id)nearestLayerGroup;	// 0x36026879
- (id)nearestPlug;	// 0x360248ad
- (BOOL)needsParallelizer;	// 0x36026115
- (id)objectID;	// 0x3602483d
- (id)objectInFiltersAtIndex:(int)index;	// 0x36026d29
- (id)objectInSlidesAtIndex:(int)index;	// 0x36026ac9
- (id)objectInTextsAtIndex:(int)index;	// 0x36026bf9
// converted property getter: - (float)opacity;	// 0x3601eab1
// converted property getter: - (id)parentContainer;	// 0x36022d6d
- (id)parentDocument;	// 0x36024875
// declared property getter: - (double)phaseInDuration;	// 0x3601f38d
// declared property getter: - (double)phaseOutDuration;	// 0x3601f61d
// converted property getter: - (id)plug;	// 0x36022efd
- (id)plugID;	// 0x36024815
// converted property getter: - (CGPoint)position;	// 0x3601eca1
// declared property getter: - (id)presetID;	// 0x3601e8b9
// converted property getter: - (int)randomSeed;	// 0x36022d7d
- (void)reconfigureSlides;	// 0x36023a4d
- (void)removeAllFilters;	// 0x360227f9
- (void)removeAllSecondarySlides;	// 0x36021691
- (void)removeAllSlides;	// 0x36020b91
- (void)removeAllTexts;	// 0x360220e1
- (void)removeAnimationPathForKey:(id)key;	// 0x36022b55
- (void)removeFiltersAtIndices:(id)indices;	// 0x36022665
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x36026d89
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x36026b29
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x36026c59
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x36021451
- (void)removeSlidesAtIndices:(id)indices;	// 0x360206f5
- (void)removeTextsAtIndices:(id)indices;	// 0x36021f79
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x36026dc5
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x36026b65
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x36026c95
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x36020df9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x36020c35
// declared property getter: - (BOOL)replaceSlides;	// 0x3602178d
- (void)replaceTextsWitStrings:(id)strings;	// 0x36023071
// converted property getter: - (float)rotationAngle;	// 0x3601eec5
// converted property getter: - (float)scale;	// 0x3601eba9
- (void)scaleMainDuration;	// 0x36026329
// converted property getter: - (id)scriptingAnimations;	// 0x36026fd9
// converted property getter: - (id)secondarySlides;	// 0x36020f09
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x360229c9
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x36022c0d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x36022d49
// converted property setter: - (void)setContainer:(id)container;	// 0x36025829
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x3601ea15
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x3601e991
// declared property setter: - (void)setEffectID:(id)anId;	// 0x3601e761
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x3601f321
// converted property setter: - (void)setHeight:(float)height;	// 0x36026f3d
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x36022edd
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x3601f8c9
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3601eac1
// converted property setter: - (void)setParentContainer:(id)container;	// 0x360260b5
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3601f3a5
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3601f635
// converted property setter: - (void)setPlug:(id)plug;	// 0x36025289
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3601ecb9
// declared property setter: - (void)setPresetID:(id)anId;	// 0x3601e8dd
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x36022d8d
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x3602179d
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3601eed5
// converted property setter: - (void)setScale:(float)scale;	// 0x3601ebb9
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x36027345
// converted property setter: - (void)setSize:(CGSize)size;	// 0x3601efcd
- (void)setSkipEffectTiming:(BOOL)timing;	// 0x36024151
// converted property setter: - (void)setWidth:(float)width;	// 0x36026fa5
// converted property setter: - (void)setXPosition:(float)position;	// 0x36026e6d
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x3601f0f1
// converted property setter: - (void)setYPosition:(float)position;	// 0x36026ed5
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x3601f1e1
// converted property setter: - (void)setZPosition:(float)position;	// 0x3601ede5
// converted property getter: - (CGSize)size;	// 0x3601efb5
- (id)slideForMCSlide:(id)mcslide;	// 0x360268a1
- (id)slideInformationWithDocument:(id)document;	// 0x36024409
// declared property getter: - (id)slides;	// 0x3601fbbd
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x360243f9
- (BOOL)supportsUnlimitedSlides;	// 0x36021735
// declared property getter: - (id)texts;	// 0x36021b19
- (void)updateEffectAttributes;	// 0x36024775
- (void)updateTiming;	// 0x36024161
// converted property getter: - (id)uuid;	// 0x36024865
- (id)videoPaths;	// 0x36023ff1
// converted property getter: - (float)width;	// 0x36026f71
// converted property getter: - (float)xPosition;	// 0x36026e39
// converted property getter: - (float)xRotationAngle;	// 0x3601f0e1
// converted property getter: - (float)yPosition;	// 0x36026ea1
// converted property getter: - (float)yRotationAngle;	// 0x3601f1d1
- (int)zIndex;	// 0x3601fb49
// converted property getter: - (float)zPosition;	// 0x3601edd5
@end
