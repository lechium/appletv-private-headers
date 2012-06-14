/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	void *_impl;	// 4 = 0x4
	unsigned long _normalization;	// 8 = 0x8
	long _subdivisionSteps;	// 12 = 0xc
}
@property(readonly, assign) NSString *depthNormalization;	// G=0x32b06751; 
@property(readonly, assign) unsigned long faceCount;	// G=0x32b066f5; 
@property(readonly, assign) int subdivisionSteps;	// G=0x32b067b5; 
@property(readonly, assign) unsigned long vertexCount;	// G=0x32b066a9; 
+ (id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x32b062a9
- (id)init;	// 0x32b06341
- (id)initWithCoder:(id)coder;	// 0x32b06df1
- (id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex *)vertices faceCount:(unsigned long)count faces:(const CAMeshFace *)faces depthNormalization:(id)normalization;	// 0x32b063a9
- (Object *)CA_copyRenderValue;	// 0x32b067c5
- (float)CA_distanceToValue:(id)value;	// 0x32b071cd
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;	// 0x32b06ecd
- (id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator *)interpolator;	// 0x32b070c5
- (BOOL)_constructWithData:(id)data;	// 0x32b0682d
- (id)_data;	// 0x32b06ac1
- (id)_init;	// 0x32b06359
- (id)_initWithMeshTransform:(id)meshTransform;	// 0x32b06621
- (id)_subdivideToDepth:(int)depth;	// 0x32b06cb1
- (id)copyWithZone:(NSZone *)zone;	// 0x32b067e5
- (void)dealloc;	// 0x32b062fd
// declared property getter: - (id)depthNormalization;	// 0x32b06751
- (void)encodeWithCoder:(id)coder;	// 0x32b06d49
- (CAMeshFace)faceAtIndex:(unsigned long)index;	// 0x32b0670d
// declared property getter: - (unsigned long)faceCount;	// 0x32b066f5
- (id)meshTransformForLayer:(id)layer;	// 0x32b071f5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b067f5
// declared property getter: - (int)subdivisionSteps;	// 0x32b067b5
- (CAMeshVertex)vertexAtIndex:(unsigned long)index;	// 0x32b066c1
// declared property getter: - (unsigned long)vertexCount;	// 0x32b066a9
@end

