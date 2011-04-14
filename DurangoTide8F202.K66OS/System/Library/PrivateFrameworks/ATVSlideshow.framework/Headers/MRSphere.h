/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"


@interface MRSphere : NSObject {
	float *mVertices;	// 4 = 0x4
	float *mTextureCoordinates;	// 8 = 0x8
	float *mNormals;	// 12 = 0xc
	unsigned long mLongitudeResolution;	// 16 = 0x10
	unsigned long mLatitudeResolution;	// 20 = 0x14
	float mHalfLongitudeAngle;	// 24 = 0x18
	float mHalfLatitudeAngle;	// 28 = 0x1c
	float mRadius;	// 32 = 0x20
}
@property(assign) float halfLatitudeAngle;	// G=0x3151b649; S=0x3151b659; @synthesize=mHalfLatitudeAngle
@property(assign) float halfLongitudeAngle;	// G=0x3151b629; S=0x3151b639; @synthesize=mHalfLongitudeAngle
@property(assign) unsigned long latitudeResolution;	// G=0x3151b609; S=0x3151b619; @synthesize=mLatitudeResolution
@property(assign) unsigned long longitudeResolution;	// G=0x3151b5e9; S=0x3151b5f9; @synthesize=mLongitudeResolution
@property(assign) float radius;	// G=0x3151b669; S=0x3151b679; @synthesize=mRadius
- (id)init;	// 0x3151ae39
- (void)dealloc;	// 0x3151aebd
// declared property getter: - (float)halfLatitudeAngle;	// 0x3151b649
// declared property getter: - (float)halfLongitudeAngle;	// 0x3151b629
// declared property getter: - (unsigned long)latitudeResolution;	// 0x3151b609
// declared property getter: - (unsigned long)longitudeResolution;	// 0x3151b5e9
// declared property getter: - (float)radius;	// 0x3151b669
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x3151af49
// declared property setter: - (void)setHalfLatitudeAngle:(float)angle;	// 0x3151b659
// declared property setter: - (void)setHalfLongitudeAngle:(float)angle;	// 0x3151b639
// declared property setter: - (void)setLatitudeResolution:(unsigned long)resolution;	// 0x3151b619
// declared property setter: - (void)setLongitudeResolution:(unsigned long)resolution;	// 0x3151b5f9
// declared property setter: - (void)setRadius:(float)radius;	// 0x3151b679
@end

