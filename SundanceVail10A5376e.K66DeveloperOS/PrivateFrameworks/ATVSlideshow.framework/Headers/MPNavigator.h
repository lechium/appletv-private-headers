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
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import <NSObject.h> // Unknown library
#import "MPNavigatorSupport.h"

@class MCContainerNavigator, NSString, NSMutableDictionary, MPNavigatorInternal, MCPlug;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {
	MPNavigatorInternal *_internal;	// 4 = 0x4
	NSMutableDictionary *_layers;	// 8 = 0x8
	NSMutableDictionary *_actions;	// 12 = 0xc
	MCPlug *_plug;	// 16 = 0x10
	MCContainerNavigator *_navigator;	// 20 = 0x14
	id _parent;	// 24 = 0x18
	NSMutableDictionary *_animationPaths;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x36215ef5; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x36215011; converted property
@property(assign) double duration;	// G=0x362159bd; S=0x362159e1; converted property
@property(copy, nonatomic) NSString *initialLayer;	// G=0x36214f45; S=0x36214f65; @dynamic
@property(assign) BOOL isTriggered;	// G=0x36215dd9; S=0x36215dfd; converted property
@property(readonly, retain) NSMutableDictionary *layers;	// G=0x36215001; converted property
@property(assign) double numberOfLoops;	// G=0x36215cc9; S=0x36215ce9; converted property
@property(assign) float opacity;	// G=0x36215295; S=0x362152b5; converted property
@property(retain) id parent;	// G=0x362149b9; S=0x362163c5; converted property
@property(assign) double phaseInDuration;	// G=0x36215aa9; S=0x36215ac9; converted property
@property(assign) double phaseOutDuration;	// G=0x36215bb9; S=0x36215bd9; converted property
@property(retain) MCPlug *plug;	// G=0x362160a9; S=0x36216691; converted property
@property(assign) CGPoint position;	// G=0x36215349; S=0x36215379; converted property
@property(assign) float rotationAngle;	// G=0x362154bd; S=0x362154dd; converted property
@property(assign) float scale;	// G=0x36215799; S=0x362157b9; converted property
@property(assign) CGSize size;	// G=0x36215571; S=0x362155a1; converted property
@property(assign) BOOL startsPaused;	// G=0x36215e89; S=0x36215ead; converted property
@property(assign) double timeIn;	// G=0x36215909; S=0x36215929; converted property
@property(assign) float xRotationAngle;	// G=0x36215631; S=0x36215651; converted property
@property(assign) float yRotationAngle;	// G=0x362156e5; S=0x36215705; converted property
@property(assign) int zIndex;	// G=0x3621584d; S=0x36215899; converted property
@property(assign) float zPosition;	// G=0x36215409; S=0x36215429; converted property
- (id)init;	// 0x36213251
- (id)initWithCoder:(id)coder;	// 0x36213bd1
- (id)actionForKey:(id)key;	// 0x36215f05
- (id)actionableObjectForID:(id)anId;	// 0x36217b25
// converted property getter: - (id)actions;	// 0x36215ef5
- (id)allSlides:(BOOL)slides;	// 0x362160b9
- (id)allSongs;	// 0x362161d1
- (id)animationPathForKey:(id)key;	// 0x36215021
// converted property getter: - (id)animationPaths;	// 0x36215011
- (void)cleanup;	// 0x36217119
- (void)configureActions;	// 0x3621647d
- (void)copyActions:(id)actions;	// 0x36217945
- (void)copyAnimationPaths:(id)paths;	// 0x36217841
- (void)copyLayers:(id)layers;	// 0x36217675
- (void)copyStruct:(id)aStruct;	// 0x36217345
- (id)copyWithZone:(NSZone *)zone;	// 0x36214741
- (void)dealloc;	// 0x36214845
// converted property getter: - (double)duration;	// 0x362159bd
- (void)encodeWithCoder:(id)coder;	// 0x362134f9
- (void)finalize;	// 0x36214805
// declared property getter: - (id)initialLayer;	// 0x36214f45
// converted property getter: - (BOOL)isTriggered;	// 0x36215dd9
- (id)layerForKey:(id)key;	// 0x36214a41
- (id)layerKey;	// 0x362149c9
- (id)layerKeyDictionary;	// 0x36217c49
// converted property getter: - (id)layers;	// 0x36215001
- (id)navigatorKey;	// 0x3621492d
// converted property getter: - (double)numberOfLoops;	// 0x36215cc9
- (id)objectID;	// 0x36216385
// converted property getter: - (float)opacity;	// 0x36215295
// converted property getter: - (id)parent;	// 0x362149b9
- (id)parentDocument;	// 0x362162e5
// converted property getter: - (double)phaseInDuration;	// 0x36215aa9
// converted property getter: - (double)phaseOutDuration;	// 0x36215bb9
// converted property getter: - (id)plug;	// 0x362160a9
- (id)plugID;	// 0x36216365
// converted property getter: - (CGPoint)position;	// 0x36215349
- (void)reconnectAll;	// 0x36217a49
- (void)removeActionForKey:(id)key;	// 0x36216031
- (void)removeAllLayers;	// 0x36214e5d
- (void)removeAnimationPathForKey:(id)key;	// 0x362151c9
- (void)removeLayerForKey:(id)key;	// 0x36214cc5
// converted property getter: - (float)rotationAngle;	// 0x362154bd
// converted property getter: - (float)scale;	// 0x36215799
- (void)setAction:(id)action forKey:(id)key;	// 0x36215f25
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x36215041
- (void)setContainer:(id)container;	// 0x3621664d
// converted property setter: - (void)setDuration:(double)duration;	// 0x362159e1
// declared property setter: - (void)setInitialLayer:(id)layer;	// 0x36214f65
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x36215dfd
- (void)setLayer:(id)layer forKey:(id)key;	// 0x36214a61
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x36215ce9
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x362152b5
// converted property setter: - (void)setParent:(id)parent;	// 0x362163c5
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x36215ac9
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x36215bd9
// converted property setter: - (void)setPlug:(id)plug;	// 0x36216691
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x36215379
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x362154dd
// converted property setter: - (void)setScale:(float)scale;	// 0x362157b9
// converted property setter: - (void)setSize:(CGSize)size;	// 0x362155a1
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x36215ead
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x36215929
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x36215651
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x36215705
// converted property setter: - (void)setZIndex:(int)index;	// 0x36215899
// converted property setter: - (void)setZPosition:(float)position;	// 0x36215429
// converted property getter: - (CGSize)size;	// 0x36215571
// converted property getter: - (BOOL)startsPaused;	// 0x36215e89
// converted property getter: - (double)timeIn;	// 0x36215909
- (id)uuid;	// 0x362163a5
// converted property getter: - (float)xRotationAngle;	// 0x36215631
// converted property getter: - (float)yRotationAngle;	// 0x362156e5
// converted property getter: - (int)zIndex;	// 0x3621584d
// converted property getter: - (float)zPosition;	// 0x36215409
@end

