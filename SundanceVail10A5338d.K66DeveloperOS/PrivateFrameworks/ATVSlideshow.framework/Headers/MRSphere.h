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
@property(assign, nonatomic) float halfLatitudeAngle;	// G=0x33495f69; S=0x33495f79; @synthesize=mHalfLatitudeAngle
@property(assign, nonatomic) float halfLongitudeAngle;	// G=0x33495f49; S=0x33495f59; @synthesize=mHalfLongitudeAngle
@property(assign, nonatomic) unsigned long latitudeResolution;	// G=0x33495f29; S=0x33495f39; @synthesize=mLatitudeResolution
@property(assign, nonatomic) unsigned long longitudeResolution;	// G=0x33495f09; S=0x33495f19; @synthesize=mLongitudeResolution
@property(assign, nonatomic) float radius;	// G=0x33495f89; S=0x33495f99; @synthesize=mRadius
- (id)init;	// 0x33495811
- (void)dealloc;	// 0x3349589d
// declared property getter: - (float)halfLatitudeAngle;	// 0x33495f69
// declared property getter: - (float)halfLongitudeAngle;	// 0x33495f49
// declared property getter: - (unsigned long)latitudeResolution;	// 0x33495f29
// declared property getter: - (unsigned long)longitudeResolution;	// 0x33495f09
// declared property getter: - (float)radius;	// 0x33495f89
- (void)renderDumbImage:(id)image inContext:(id)context atPosition:(CGPoint)position andSize:(CGSize)size;	// 0x33495911
// declared property setter: - (void)setHalfLatitudeAngle:(float)angle;	// 0x33495f79
// declared property setter: - (void)setHalfLongitudeAngle:(float)angle;	// 0x33495f59
// declared property setter: - (void)setLatitudeResolution:(unsigned long)resolution;	// 0x33495f39
// declared property setter: - (void)setLongitudeResolution:(unsigned long)resolution;	// 0x33495f19
// declared property setter: - (void)setRadius:(float)radius;	// 0x33495f99
@end

