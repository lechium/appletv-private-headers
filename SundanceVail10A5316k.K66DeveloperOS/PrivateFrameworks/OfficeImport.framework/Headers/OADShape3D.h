/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADColor, OADBevel;

__attribute__((visibility("hidden")))
@interface OADShape3D : NSObject <NSCopying> {
@private
	OADBevel *mTopBevel;	// 4 = 0x4
	OADBevel *mBottomBevel;	// 8 = 0x8
	OADColor *mExtrusionColor;	// 12 = 0xc
	float mExtrusionHeight;	// 16 = 0x10
	OADColor *mContourColor;	// 20 = 0x14
	float mContourWidth;	// 24 = 0x18
	float mShapeDepth;	// 28 = 0x1c
	int mMaterial;	// 32 = 0x20
}
@property(retain) id bottomBevel;	// G=0x312545bd; S=0x311b6a6d; converted property
@property(retain) id contourColor;	// G=0x312545ed; S=0x311973bd; converted property
@property(assign) float contourWidth;	// G=0x312545fd; S=0x311973f9; converted property
@property(retain) id extrusionColor;	// G=0x312545cd; S=0x311b6aa9; converted property
@property(assign) float extrusionHeight;	// G=0x312545dd; S=0x311b6ae5; converted property
@property(assign) int material;	// G=0x3125462d; S=0x3101cfb1; converted property
@property(assign) float shapeDepth;	// G=0x3125460d; S=0x3125461d; converted property
@property(retain) id topBevel;	// G=0x312545ad; S=0x31165311; converted property
+ (id)nullShape3D;	// 0x3101ceb1
- (id)init;	// 0x3101cf0d
// converted property getter: - (id)bottomBevel;	// 0x312545bd
// converted property getter: - (id)contourColor;	// 0x312545ed
// converted property getter: - (float)contourWidth;	// 0x312545fd
- (id)copyWithZone:(NSZone *)zone;	// 0x31254495
- (void)dealloc;	// 0x3116a195
// converted property getter: - (id)extrusionColor;	// 0x312545cd
// converted property getter: - (float)extrusionHeight;	// 0x312545dd
- (unsigned)hash;	// 0x3125463d
- (BOOL)isEqual:(id)equal;	// 0x3125471d
// converted property getter: - (int)material;	// 0x3125462d
// converted property setter: - (void)setBottomBevel:(id)bevel;	// 0x311b6a6d
// converted property setter: - (void)setContourColor:(id)color;	// 0x311973bd
// converted property setter: - (void)setContourWidth:(float)width;	// 0x311973f9
// converted property setter: - (void)setExtrusionColor:(id)color;	// 0x311b6aa9
// converted property setter: - (void)setExtrusionHeight:(float)height;	// 0x311b6ae5
// converted property setter: - (void)setMaterial:(int)material;	// 0x3101cfb1
// converted property setter: - (void)setShapeDepth:(float)depth;	// 0x3125461d
// converted property setter: - (void)setTopBevel:(id)bevel;	// 0x31165311
// converted property getter: - (float)shapeDepth;	// 0x3125460d
// converted property getter: - (id)topBevel;	// 0x312545ad
@end

