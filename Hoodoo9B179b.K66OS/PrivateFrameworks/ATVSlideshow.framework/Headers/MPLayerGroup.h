/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import <NSObject.h> // Unknown library
#import "MPLayerableSupportInternal.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class NSString, NSArray, MPAudioPlaylist, NSMutableDictionary, NSMutableArray, MCContainerParallelizer, NSDictionary, MPLayerGroupInternal, MCPlugParallel;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x354a566d; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x354a4911; converted property
@property(copy, nonatomic) NSArray *audioPaths;	// G=0x354a3ae5; S=0x354a3af5; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x354a2931; S=0x354a2941; converted property
@property(retain) id authoredVersionInfo;	// G=0x354a8cd9; S=0x354a8cf9; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x354a132d; S=0x354a14e9; converted property
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x354a4249; S=0x354a426d; @dynamic
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// G=0x354a2ef1; S=0x354a2f4d; @dynamic
@property(retain) id container;	// G=0x354a6575; S=0x354a6585; converted property
@property(assign) double duration;	// G=0x354a24c1; S=0x354a2569; converted property
@property(assign) double durationPadding;	// G=0x354a7bf9; S=0x354a7c19; converted property
@property(assign, nonatomic) NSDictionary *initialState;	// G=0x354a33f9; S=0x354a3419; 
@property(assign) BOOL isTriggered;	// G=0x354a2791; S=0x354a27b5; converted property
@property(assign) int lastSlideUsed;	// G=0x354aa811; S=0x354aa759; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x354a1729; converted property
@property(assign, nonatomic) int loopingMode;	// G=0x354a2de5; S=0x354a2e05; @dynamic
@property(assign) double numberOfLoops;	// G=0x354a3c9d; S=0x354a3cbd; converted property
@property(assign) float opacity;	// G=0x354a4c4d; S=0x354a4c6d; converted property
@property(retain) id parent;	// G=0x354a2921; S=0x354a6255; converted property
@property(assign) double phaseInDuration;	// G=0x354a3ea5; S=0x354a3ec5; converted property
@property(assign) double phaseOutDuration;	// G=0x354a406d; S=0x354a408d; converted property
@property(retain) MCPlugParallel *plug;	// G=0x354a5909; S=0x354a66dd; converted property
@property(assign) CGPoint position;	// G=0x354a4d5d; S=0x354a4d8d; converted property
@property(assign) float rotationAngle;	// G=0x354a4fa9; S=0x354a4fc9; converted property
@property(assign) float scale;	// G=0x354a5415; S=0x354a5435; converted property
@property(assign) CGSize size;	// G=0x354a50b9; S=0x354a50e9; converted property
@property(assign) BOOL startsPaused;	// G=0x354a2859; S=0x354a287d; converted property
@property(assign) double timeIn;	// G=0x354a26b5; S=0x354a26d5; converted property
@property(readonly, assign, nonatomic) NSString *uuid;	// G=0x354a33d9; 
@property(copy, nonatomic) NSArray *videoPaths;	// G=0x354a3955; S=0x354a3a45; @dynamic
@property(assign) float xRotationAngle;	// G=0x354a51f5; S=0x354a5215; converted property
@property(assign) float yRotationAngle;	// G=0x354a5305; S=0x354a5325; converted property
@property(assign) int zIndex;	// G=0x354a5525; S=0x354a55a1; converted property
@property(assign) float zPosition;	// G=0x354a4e99; S=0x354a4eb9; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3549e911
- (id)init;	// 0x3549e999
- (id)initWithCoder:(id)coder;	// 0x3549f7c1
- (id)absoluteVideoPaths;	// 0x354a6001
- (id)actionForKey:(id)key;	// 0x354a567d
- (id)actionableObjectForID:(id)anId;	// 0x354aa87d
// converted property getter: - (id)actions;	// 0x354a566d
- (void)addAudioPath:(id)path;	// 0x354a35f1
- (void)addAudioPaths:(id)paths;	// 0x354a36cd
- (void)addLayer:(id)layer;	// 0x354a1739
- (void)addLayers:(id)layers;	// 0x354a1795
- (void)addVideoPath:(id)path;	// 0x354a3469
- (void)addVideoPaths:(id)paths;	// 0x354a3545
- (id)allEffectContainers;	// 0x354a5919
- (id)allEffects;	// 0x354a59f1
- (id)allSlides:(BOOL)slides;	// 0x354a5ad1
- (id)allSongs;	// 0x354a5c69
- (id)animationPathForKey:(id)key;	// 0x354a4921
// converted property getter: - (id)animationPaths;	// 0x354a4911
- (double)aspectRatioDidChange:(float)aspectRatio atTime:(double)time;	// 0x354a986d
// declared property getter: - (id)audioPaths;	// 0x354a3ae5
// converted property getter: - (id)audioPlaylist;	// 0x354a2931
// converted property getter: - (id)authoredVersionInfo;	// 0x354a8cd9
- (id)authoringOptionForKey:(id)key;	// 0x354a14c9
// converted property getter: - (id)authoringOptions;	// 0x354a132d
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x354a4249
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x354a2ef1
- (void)cachePaths;	// 0x354a61f5
- (void)cleanup;	// 0x354a7515
- (void)configureActions;	// 0x354a6341
// converted property getter: - (id)container;	// 0x354a6575
- (void)copyActions:(id)actions;	// 0x354a8c01
- (void)copyAnimationPaths:(id)paths;	// 0x354a8b29
- (void)copyAudioPlaylist:(id)playlist;	// 0x354a8ae5
- (void)copyLayerDictionary:(id)dictionary;	// 0x354a8a0d
- (void)copyLayers:(id)layers;	// 0x354a8905
- (void)copyStruct:(id)aStruct;	// 0x354a84f5
- (id)copyWithZone:(NSZone *)zone;	// 0x354a06c1
- (int)countOfLayers;	// 0x354aab85
- (void)dealloc;	// 0x354a0865
- (BOOL)detectFacesInBackground;	// 0x354aab49
// converted property getter: - (double)duration;	// 0x354a24c1
// converted property getter: - (double)durationPadding;	// 0x354a7bf9
- (void)encodeWithCoder:(id)coder;	// 0x3549ed71
- (void)finalize;	// 0x354a0825
// declared property getter: - (id)initialState;	// 0x354a33f9
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x354a17d5
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x354aac89
// converted property getter: - (BOOL)isTriggered;	// 0x354a2791
- (id)keyedLayers;	// 0x354a4371
// converted property getter: - (int)lastSlideUsed;	// 0x354aa811
- (id)layerForKey:(id)key;	// 0x354a4381
- (id)layerKey;	// 0x354a42f9
- (id)layerKeyDictionary;	// 0x354aab29
// converted property getter: - (id)layers;	// 0x354a1729
- (BOOL)layersCanPositionZIndex;	// 0x354a61dd
// declared property getter: - (int)loopingMode;	// 0x354a2de5
- (id)mainLayers;	// 0x354a3bd5
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x354a2125
- (id)navigatorKey;	// 0x354a09d9
- (BOOL)nearingEndWithOptions:(id)options;	// 0x354a8d19
- (BOOL)needsToRemoveFadeIn;	// 0x354aa0c9
// converted property getter: - (double)numberOfLoops;	// 0x354a3c9d
- (id)objectID;	// 0x354a61bd
- (id)objectInLayersAtIndex:(int)index;	// 0x354aaba5
- (id)observer;	// 0x354a61f9
// converted property getter: - (float)opacity;	// 0x354a4c4d
- (id)orderedVideoPaths;	// 0x354a3965
// converted property getter: - (id)parent;	// 0x354a2921
- (id)parentDocument;	// 0x354a6125
// converted property getter: - (double)phaseInDuration;	// 0x354a3ea5
// converted property getter: - (double)phaseOutDuration;	// 0x354a406d
// converted property getter: - (id)plug;	// 0x354a5909
- (id)plugID;	// 0x354a619d
// converted property getter: - (CGPoint)position;	// 0x354a4d5d
- (double)posterTime;	// 0x354a5e31
- (void)reconfigureLoopingMode;	// 0x354a7e1d
- (void)reconnectAll;	// 0x354a7c91
- (void)removeActionForKey:(id)key;	// 0x354a5845
- (void)removeAllAudioPaths;	// 0x354a3bb5
- (void)removeAllLayers;	// 0x354a1b31
- (void)removeAllVideoPaths;	// 0x354a3b95
- (void)removeAnimationPathForKey:(id)key;	// 0x354a4b75
- (double)removeFadeInIfNeeded;	// 0x354aa369
- (void)removeLayerForKey:(id)key;	// 0x354a4649
- (void)removeLayersAtIndices:(id)indices;	// 0x354a1c65
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x354aacc9
- (void)removePath:(id)path;	// 0x354a3779
- (void)removePaths:(id)paths;	// 0x354a38b9
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x354aad05
- (void)resetDuration;	// 0x354a7839
// converted property getter: - (float)rotationAngle;	// 0x354a4fa9
// converted property getter: - (float)scale;	// 0x354a5415
- (void)setAction:(id)action forKey:(id)key;	// 0x354a569d
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x354a4941
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x354a3af5
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x354a2941
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x354a8cf9
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x354a133d
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x354a14e9
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x354a426d
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x354a2f4d
- (void)setBackgroundColorString:(id)string;	// 0x354a2f11
// converted property setter: - (void)setContainer:(id)container;	// 0x354a6585
// converted property setter: - (void)setDuration:(double)duration;	// 0x354a2569
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x354a7c19
// declared property setter: - (void)setInitialState:(id)state;	// 0x354a3419
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x354aa85d
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x354a27b5
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x354aa759
- (void)setLayer:(id)layer forKey:(id)key;	// 0x354a43a1
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x354a2e05
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x354a3cbd
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x354a4c6d
// converted property setter: - (void)setParent:(id)parent;	// 0x354a6255
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x354a3ec5
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x354a408d
// converted property setter: - (void)setPlug:(id)plug;	// 0x354a66dd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x354a4d8d
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x354a4fc9
// converted property setter: - (void)setScale:(float)scale;	// 0x354a5435
// converted property setter: - (void)setSize:(CGSize)size;	// 0x354a50e9
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x354a287d
- (unsigned)setStyleID:(id)anId;	// 0x354a0a55
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x354a26d5
- (void)setUsedAllPaths:(BOOL)paths;	// 0x354aa739
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x354a3a45
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x354a5215
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x354a5325
// converted property setter: - (void)setZIndex:(int)index;	// 0x354a55a1
// converted property setter: - (void)setZPosition:(float)position;	// 0x354a4eb9
// converted property getter: - (CGSize)size;	// 0x354a50b9
// converted property getter: - (BOOL)startsPaused;	// 0x354a2859
- (id)styleID;	// 0x354a0a29
// converted property getter: - (double)timeIn;	// 0x354a26b5
// declared property getter: - (id)uuid;	// 0x354a33d9
- (id)valueInLayersWithName:(id)name;	// 0x354aabc5
- (double)videoDuration;	// 0x354a237d
// declared property getter: - (id)videoPaths;	// 0x354a3955
// converted property getter: - (float)xRotationAngle;	// 0x354a51f5
// converted property getter: - (float)yRotationAngle;	// 0x354a5305
// converted property getter: - (int)zIndex;	// 0x354a5525
// converted property getter: - (float)zPosition;	// 0x354a4e99
@end

