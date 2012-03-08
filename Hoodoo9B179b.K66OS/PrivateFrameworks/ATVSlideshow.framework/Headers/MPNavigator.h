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
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"

@class MCContainerNavigator, NSString, MCPlug, NSMutableDictionary, MPNavigatorInternal;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x354afc59; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x354ae659; converted property
@property(assign) double duration;	// G=0x354af4e1; S=0x354af501; converted property
@property(copy, nonatomic) NSString *initialLayer;	// G=0x354ae535; S=0x354ae555; @dynamic
@property(assign) BOOL isTriggered;	// G=0x354afa85; S=0x354afaa9; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x354ae649; converted property
@property(assign) double numberOfLoops;	// G=0x354af90d; S=0x354af92d; converted property
@property(assign) float opacity;	// G=0x354ae9d9; S=0x354ae9f9; converted property
@property(retain) id parent;	// G=0x354adea1; S=0x354b01c9; converted property
@property(assign) double phaseInDuration;	// G=0x354af61d; S=0x354af63d; converted property
@property(assign) double phaseOutDuration;	// G=0x354af795; S=0x354af7b5; converted property
@property(retain) MCPlug *plug;	// G=0x354afef5; S=0x354b0459; converted property
@property(assign) CGPoint position;	// G=0x354aeae9; S=0x354aeb19; converted property
@property(assign) float rotationAngle;	// G=0x354aed35; S=0x354aed55; converted property
@property(assign) float scale;	// G=0x354af1a1; S=0x354af1c1; converted property
@property(assign) CGSize size;	// G=0x354aee45; S=0x354aee75; converted property
@property(assign) BOOL startsPaused;	// G=0x354afb91; S=0x354afbb5; converted property
@property(assign) double timeIn;	// G=0x354af3c5; S=0x354af3e5; converted property
@property(assign) float xRotationAngle;	// G=0x354aef81; S=0x354aefa1; converted property
@property(assign) float yRotationAngle;	// G=0x354af091; S=0x354af0b1; converted property
@property(assign) int zIndex;	// G=0x354af2b1; S=0x354af2f9; converted property
@property(assign) float zPosition;	// G=0x354aec25; S=0x354aec45; converted property
- (id)init;	// 0x354ac5cd
- (id)initWithCoder:(id)coder;	// 0x354ad00d
- (id)actionForKey:(id)key;	// 0x354afc69
- (id)actionableObjectForID:(id)anId;	// 0x354b190d
// converted property getter: - (id)actions;	// 0x354afc59
- (id)allSlides:(BOOL)slides;	// 0x354aff05
- (id)allSongs;	// 0x354afffd
- (id)animationPathForKey:(id)key;	// 0x354ae669
// converted property getter: - (id)animationPaths;	// 0x354ae659
- (void)cleanup;	// 0x354b0fad
- (void)configureActions;	// 0x354b0279
- (void)copyActions:(id)actions;	// 0x354b1779
- (void)copyAnimationPaths:(id)paths;	// 0x354b16a1
- (void)copyLayers:(id)layers;	// 0x354b150d
- (void)copyStruct:(id)aStruct;	// 0x354b11d1
- (id)copyWithZone:(NSZone *)zone;	// 0x354adc19
- (void)dealloc;	// 0x354add1d
// converted property getter: - (double)duration;	// 0x354af4e1
- (void)encodeWithCoder:(id)coder;	// 0x354ac8ad
- (void)finalize;	// 0x354adcdd
// declared property getter: - (id)initialLayer;	// 0x354ae535
// converted property getter: - (BOOL)isTriggered;	// 0x354afa85
- (id)layerForKey:(id)key;	// 0x354adf29
- (id)layerKey;	// 0x354adeb1
- (id)layerKeyDictionary;	// 0x354b1a19
// converted property getter: - (id)layers;	// 0x354ae649
- (id)navigatorKey;	// 0x354ade11
// converted property getter: - (double)numberOfLoops;	// 0x354af90d
- (id)objectID;	// 0x354b0189
// converted property getter: - (float)opacity;	// 0x354ae9d9
// converted property getter: - (id)parent;	// 0x354adea1
- (id)parentDocument;	// 0x354b00f1
// converted property getter: - (double)phaseInDuration;	// 0x354af61d
// converted property getter: - (double)phaseOutDuration;	// 0x354af795
// converted property getter: - (id)plug;	// 0x354afef5
- (id)plugID;	// 0x354b0169
// converted property getter: - (CGPoint)position;	// 0x354aeae9
- (void)reconnectAll;	// 0x354b1851
- (void)removeActionForKey:(id)key;	// 0x354afe31
- (void)removeAllLayers;	// 0x354ae469
- (void)removeAnimationPathForKey:(id)key;	// 0x354ae8bd
- (void)removeLayerForKey:(id)key;	// 0x354ae285
// converted property getter: - (float)rotationAngle;	// 0x354aed35
// converted property getter: - (float)scale;	// 0x354af1a1
- (void)setAction:(id)action forKey:(id)key;	// 0x354afc89
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x354ae689
- (void)setContainer:(id)container;	// 0x354b0411
// converted property setter: - (void)setDuration:(double)duration;	// 0x354af501
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x354ae555
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x354afaa9
- (void)setLayer:(id)layer forKey:(id)key;	// 0x354adf49
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x354af92d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x354ae9f9
// converted property setter: - (void)setParent:(id)parent;	// 0x354b01c9
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x354af63d
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x354af7b5
// converted property setter: - (void)setPlug:(id)plug;	// 0x354b0459
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x354aeb19
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x354aed55
// converted property setter: - (void)setScale:(float)scale;	// 0x354af1c1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x354aee75
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x354afbb5
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x354af3e5
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x354aefa1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x354af0b1
// converted property setter: - (void)setZIndex:(int)index;	// 0x354af2f9
// converted property setter: - (void)setZPosition:(float)position;	// 0x354aec45
// converted property getter: - (CGSize)size;	// 0x354aee45
// converted property getter: - (BOOL)startsPaused;	// 0x354afb91
// converted property getter: - (double)timeIn;	// 0x354af3c5
- (id)uuid;	// 0x354b01a9
// converted property getter: - (float)xRotationAngle;	// 0x354aef81
// converted property getter: - (float)yRotationAngle;	// 0x354af091
// converted property getter: - (int)zIndex;	// 0x354af2b1
// converted property getter: - (float)zPosition;	// 0x354aec25
@end

