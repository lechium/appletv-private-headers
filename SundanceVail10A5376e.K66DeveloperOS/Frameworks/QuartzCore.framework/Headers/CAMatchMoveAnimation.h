/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, CALayer, NSArray;

@interface CAMatchMoveAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;	// G=0x33d5d4d5; S=0x33d5d4ed; 
@property(assign) BOOL appliesRotation;	// G=0x33d5d4a5; S=0x33d5d4bd; 
@property(assign) BOOL appliesScale;	// G=0x33d5d475; S=0x33d5d48d; 
@property(assign) BOOL appliesX;	// G=0x33d5d415; S=0x33d5d42d; 
@property(assign) BOOL appliesY;	// G=0x33d5d445; S=0x33d5d45d; 
@property(copy) NSString *keyPath;	// G=0x33d5d3ad; S=0x33d5d3c5; 
@property(retain) CALayer *sourceLayer;	// G=0x33d5d34d; S=0x33d5d365; 
@property(copy) NSArray *sourcePoints;	// G=0x33d5d37d; S=0x33d5d395; 
@property(assign) BOOL targetsSuperlayer;	// G=0x33d5d3dd; S=0x33d5d3f9; 
+ (id)defaultValueForKey:(id)key;	// 0x33d5c925
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x33d5d2ed
- (unsigned)_propertyFlagsForLayer:(id)layer;	// 0x33d5d32d
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x33d5d041
// declared property getter: - (BOOL)appliesRotation;	// 0x33d5d4a5
// declared property getter: - (BOOL)appliesScale;	// 0x33d5d475
// declared property getter: - (BOOL)appliesX;	// 0x33d5d415
// declared property getter: - (BOOL)appliesY;	// 0x33d5d445
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33d5c989
// declared property getter: - (BOOL)isAdditive;	// 0x33d5d4d5
// declared property getter: - (id)keyPath;	// 0x33d5d3ad
// declared property setter: - (void)setAdditive:(BOOL)additive;	// 0x33d5d4ed
// declared property setter: - (void)setAppliesRotation:(BOOL)rotation;	// 0x33d5d4bd
// declared property setter: - (void)setAppliesScale:(BOOL)scale;	// 0x33d5d48d
// declared property setter: - (void)setAppliesX:(BOOL)x;	// 0x33d5d42d
// declared property setter: - (void)setAppliesY:(BOOL)y;	// 0x33d5d45d
// declared property setter: - (void)setKeyPath:(id)path;	// 0x33d5d3c5
// declared property setter: - (void)setSourceLayer:(id)layer;	// 0x33d5d365
// declared property setter: - (void)setSourcePoints:(id)points;	// 0x33d5d395
// declared property setter: - (void)setTargetsSuperlayer:(BOOL)superlayer;	// 0x33d5d3f9
// declared property getter: - (id)sourceLayer;	// 0x33d5d34d
// declared property getter: - (id)sourcePoints;	// 0x33d5d37d
// declared property getter: - (BOOL)targetsSuperlayer;	// 0x33d5d3dd
@end
