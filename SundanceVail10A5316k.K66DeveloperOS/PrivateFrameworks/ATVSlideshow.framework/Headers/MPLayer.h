/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"

@class MCMontage, NSString, MPLayerInternal, NSMutableDictionary, MCPlugParallel, NSMutableArray, MPAudioPlaylist;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x3644539d; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x364446f5; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3644513d; S=0x3644514d; converted property
@property(assign, nonatomic) int audioPriority;	// G=0x36445151; S=0x36445171; @dynamic
@property(assign) double duration;	// G=0x36444e39; S=0x36444e59; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x36443f39; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x364440b9; converted property
@property(assign) float height;	// G=0x364479a5; S=0x364479d9; converted property
@property(assign, nonatomic) BOOL isAudioLayer;	// G=0x3644525d; S=0x36445281; @dynamic
@property(assign) BOOL isTriggered;	// G=0x36445021; S=0x36445045; converted property
@property(copy, nonatomic) NSString *layerID;	// G=0x36445305; S=0x364452e5; @dynamic
@property(retain) MCMontage *montage;	// G=0x36445561; S=0x36446fd5; converted property
@property(assign) double numberOfLoops;	// G=0x364451b9; S=0x364451d9; converted property
@property(assign) float opacity;	// G=0x36444941; S=0x36444961; converted property
@property(retain) id parent;	// G=0x36444dad; S=0x36446f1d; converted property
@property(assign) double phaseInDuration;	// G=0x36444f09; S=0x36444f29; converted property
@property(assign) double phaseOutDuration;	// G=0x36444f95; S=0x36444fb5; converted property
@property(retain) MCPlugParallel *plug;	// G=0x36445551; S=0x364467bd; converted property
@property(assign) CGPoint position;	// G=0x36444a21; S=0x36444a51; converted property
@property(assign) float rotationAngle;	// G=0x36444b19; S=0x36444b39; converted property
@property(assign) float scale;	// G=0x364449b1; S=0x364449d1; converted property
@property(retain) id scriptingAnimations;	// G=0x36447a75; S=0x36447de1; converted property
@property(assign) CGSize size;	// G=0x36444b89; S=0x36444bb9; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x36447019; S=0x36447029; converted property
@property(assign) BOOL startsPaused;	// G=0x364450d1; S=0x364450f5; converted property
@property(assign) double timeIn;	// G=0x36444dbd; S=0x36444ddd; converted property
@property(copy, nonatomic) NSString *title;	// G=0x36443ef9; S=0x36443f19; @dynamic
@property(assign) float width;	// G=0x36447a0d; S=0x36447a41; converted property
@property(assign) float xPosition;	// G=0x364478d5; S=0x36447909; converted property
@property(assign) float xRotationAngle;	// G=0x36444c11; S=0x36444c31; converted property
@property(assign) float yPosition;	// G=0x3644793d; S=0x36447971; converted property
@property(assign) float yRotationAngle;	// G=0x36444c81; S=0x36444ca1; converted property
@property(assign) int zIndex;	// G=0x36444cf1; S=0x36444d3d; converted property
@property(assign) float zPosition;	// G=0x36444aa9; S=0x36444ac9; converted property
+ (id)animatedLayer;	// 0x36441f99
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36441ee1
+ (id)effectLayer;	// 0x36441fdd
+ (id)layer;	// 0x36441f11
+ (id)sequentialLayer;	// 0x36441f55
- (id)init;	// 0x36442021
- (id)initWithCoder:(id)coder;	// 0x36443111
- (id)action;	// 0x36445d75
- (id)actionForKey:(id)key;	// 0x364453ad
// converted property getter: - (id)actions;	// 0x3644539d
- (void)addEffectContainer:(id)container;	// 0x36443f49
- (void)addEffectContainers:(id)containers;	// 0x36443fcd
- (void)addFilter:(id)filter;	// 0x364440c9
- (void)addFilters:(id)filters;	// 0x36444125
- (id)allSlides:(BOOL)slides;	// 0x36445571
- (id)allSongs;	// 0x364458e9
- (id)animationPathForKey:(id)key;	// 0x36444705
// converted property getter: - (id)animationPaths;	// 0x364446f5
// converted property getter: - (id)audioPlaylist;	// 0x3644513d
// declared property getter: - (int)audioPriority;	// 0x36445151
- (void)cleanup;	// 0x36446679
- (void)configureActions;	// 0x36447561
- (void)copyActions:(id)actions;	// 0x36446531
- (void)copyAnimationPaths:(id)paths;	// 0x3644642d
- (void)copyAudioPlaylist:(id)playlist;	// 0x36446635
- (void)copyEffectContainers:(id)containers;	// 0x364461b5
- (void)copyFilters:(id)filters;	// 0x364462ed
- (void)copyStruct:(id)aStruct;	// 0x36445e01
- (id)copyWithZone:(NSZone *)zone;	// 0x36443cb5
- (int)countOfEffectContainers;	// 0x36447675
- (int)countOfFilters;	// 0x364477a5
- (void)dealloc;	// 0x36443de5
- (id)description;	// 0x364423c1
- (void)dump;	// 0x36445aa5
// converted property getter: - (double)duration;	// 0x36444e39
// converted property getter: - (id)effectContainers;	// 0x36443f39
- (void)encodeWithCoder:(id)coder;	// 0x364424e1
// converted property getter: - (id)filters;	// 0x364440b9
- (void)finalize;	// 0x36443db9
- (id)fullDebugLog;	// 0x36445acd
// converted property getter: - (float)height;	// 0x364479a5
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x3644400d
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x36444165
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x364476b5
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x364477e5
// declared property getter: - (BOOL)isAudioLayer;	// 0x3644525d
// converted property getter: - (BOOL)isTriggered;	// 0x36445021
// declared property getter: - (id)layerID;	// 0x36445305
- (id)layerKey;	// 0x36445325
// converted property getter: - (id)montage;	// 0x36445561
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x364440b5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x36444609
// converted property getter: - (double)numberOfLoops;	// 0x364451b9
- (id)objectID;	// 0x36445dc1
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x36447695
- (id)objectInFiltersAtIndex:(int)index;	// 0x364477c5
// converted property getter: - (float)opacity;	// 0x36444941
// converted property getter: - (id)parent;	// 0x36444dad
- (id)parentDocument;	// 0x36445cf5
// converted property getter: - (double)phaseInDuration;	// 0x36444f09
// converted property getter: - (double)phaseOutDuration;	// 0x36444f95
// converted property getter: - (id)plug;	// 0x36445551
- (id)plugID;	// 0x36445da1
// converted property getter: - (CGPoint)position;	// 0x36444a21
- (void)reconnectAllTransitions;	// 0x36447345
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x36447231
- (void)removeActionForKey:(id)key;	// 0x364454d9
- (void)removeAllEffectContainers;	// 0x36444015
- (void)removeAllFilters;	// 0x36444569
- (void)removeAnimationPathForKey:(id)key;	// 0x364448b5
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x36444011
- (void)removeFiltersAtIndices:(id)indices;	// 0x36444421
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x364476f5
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x36447825
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x36447731
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x36447861
- (void)resetStartTimes;	// 0x36447421
// converted property getter: - (float)rotationAngle;	// 0x36444b19
// converted property getter: - (float)scale;	// 0x364449b1
// converted property getter: - (id)scriptingAnimations;	// 0x36447a75
- (void)setAction:(id)action forKey:(id)key;	// 0x364453cd
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36444725
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3644514d
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x36445171
// converted property setter: - (void)setDuration:(double)duration;	// 0x36444e59
// converted property setter: - (void)setHeight:(float)height;	// 0x364479d9
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x36445281
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36445045
// declared property setter: - (void)setLayerID:(id)anId;	// 0x364452e5
// converted property setter: - (void)setMontage:(id)montage;	// 0x36446fd5
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x364451d9
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x36444961
// converted property setter: - (void)setParent:(id)parent;	// 0x36446f1d
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36444f29
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36444fb5
// converted property setter: - (void)setPlug:(id)plug;	// 0x364467bd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x36444a51
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x36444b39
// converted property setter: - (void)setScale:(float)scale;	// 0x364449d1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x36447de1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x36444bb9
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x36447029
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x364450f5
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x36444ddd
// declared property setter: - (void)setTitle:(id)title;	// 0x36443f19
// converted property setter: - (void)setWidth:(float)width;	// 0x36447a41
// converted property setter: - (void)setXPosition:(float)position;	// 0x36447909
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x36444c31
// converted property setter: - (void)setYPosition:(float)position;	// 0x36447971
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x36444ca1
// converted property setter: - (void)setZIndex:(int)index;	// 0x36444d3d
// converted property setter: - (void)setZPosition:(float)position;	// 0x36444ac9
// converted property getter: - (CGSize)size;	// 0x36444b89
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x36447019
// converted property getter: - (BOOL)startsPaused;	// 0x364450d1
// converted property getter: - (double)timeIn;	// 0x36444dbd
// declared property getter: - (id)title;	// 0x36443ef9
- (void)updateDurationPadding:(double)padding;	// 0x36447081
- (void)updateMainDuration;	// 0x36447161
- (id)uuid;	// 0x36445de1
// converted property getter: - (float)width;	// 0x36447a0d
// converted property getter: - (float)xPosition;	// 0x364478d5
// converted property getter: - (float)xRotationAngle;	// 0x36444c11
// converted property getter: - (float)yPosition;	// 0x3644793d
// converted property getter: - (float)yRotationAngle;	// 0x36444c81
// converted property getter: - (int)zIndex;	// 0x36444cf1
// converted property getter: - (float)zPosition;	// 0x36444aa9
@end

