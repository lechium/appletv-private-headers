/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class OADBevel, OADColor;

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
@property(retain) id bottomBevel;	// G=0x32acb239; S=0x329f9515; converted property
@property(retain) id contourColor;	// G=0x32acb269; S=0x329efe8d; converted property
@property(assign) float contourWidth;	// G=0x32acb279; S=0x329efecd; converted property
@property(retain) id extrusionColor;	// G=0x32acb249; S=0x32a0ffc9; converted property
@property(assign) float extrusionHeight;	// G=0x32acb259; S=0x329f9555; converted property
@property(assign) int material;	// G=0x32acb299; S=0x328db3e1; converted property
@property(assign) float shapeDepth;	// G=0x32acb289; S=0x329f9695; converted property
@property(retain) id topBevel;	// G=0x32acb229; S=0x329e8f9d; converted property
+ (id)nullShape3D;	// 0x328db2e1
- (id)init;	// 0x328db33d
// converted property getter: - (id)bottomBevel;	// 0x32acb239
// converted property getter: - (id)contourColor;	// 0x32acb269
// converted property getter: - (float)contourWidth;	// 0x32acb279
- (id)copyWithZone:(NSZone *)zone;	// 0x32acb6f5
- (void)dealloc;	// 0x329ed98d
// converted property getter: - (id)extrusionColor;	// 0x32acb249
// converted property getter: - (float)extrusionHeight;	// 0x32acb259
- (unsigned)hash;	// 0x32acb611
- (BOOL)isEqual:(id)equal;	// 0x32acb40d
// converted property getter: - (int)material;	// 0x32acb299
// converted property setter: - (void)setBottomBevel:(id)bevel;	// 0x329f9515
// converted property setter: - (void)setContourColor:(id)color;	// 0x329efe8d
// converted property setter: - (void)setContourWidth:(float)width;	// 0x329efecd
// converted property setter: - (void)setExtrusionColor:(id)color;	// 0x32a0ffc9
// converted property setter: - (void)setExtrusionHeight:(float)height;	// 0x329f9555
// converted property setter: - (void)setMaterial:(int)material;	// 0x328db3e1
// converted property setter: - (void)setShapeDepth:(float)depth;	// 0x329f9695
// converted property setter: - (void)setTopBevel:(id)bevel;	// 0x329e8f9d
// converted property getter: - (float)shapeDepth;	// 0x32acb289
// converted property getter: - (id)topBevel;	// 0x32acb229
@end

