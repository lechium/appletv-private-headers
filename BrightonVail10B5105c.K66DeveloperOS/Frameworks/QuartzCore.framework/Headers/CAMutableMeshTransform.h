/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAMeshTransform.h"

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform {
}
@property(copy) NSString *depthNormalization;	// G=0x3526f46d; S=0x3526ee35; 
@property(assign) int subdivisionSteps;	// G=0x3526f499; S=0x3526ee3d; 
+ (id)meshTransform;	// 0x3526ed69
- (id)init;	// 0x3526eda1
- (void)addFace:(CAMeshFace)face;	// 0x3526f205
- (void)addVertex:(CAMeshVertex)vertex;	// 0x3526ef1d
- (id)copyWithZone:(NSZone *)zone;	// 0x3526f435
// declared property getter: - (id)depthNormalization;	// 0x3526f46d
- (void)removeFaceAtIndex:(unsigned long)index;	// 0x3526f31d
- (void)removeVertexAtIndex:(unsigned long)index;	// 0x3526effd
- (void)replaceFaceAtIndex:(unsigned long)index withFace:(CAMeshFace)face;	// 0x3526f125
- (void)replaceVertexAtIndex:(unsigned long)index withVertex:(CAMeshVertex)vertex;	// 0x3526ee75
// declared property setter: - (void)setDepthNormalization:(id)normalization;	// 0x3526ee35
// declared property setter: - (void)setSubdivisionSteps:(int)steps;	// 0x3526ee3d
// declared property getter: - (int)subdivisionSteps;	// 0x3526f499
@end
