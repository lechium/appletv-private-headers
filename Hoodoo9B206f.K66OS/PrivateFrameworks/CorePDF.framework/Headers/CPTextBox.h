/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPTextBox : CPRegion {
	float rotationAngle;	// 68 = 0x44
}
@property(assign) float rotationAngle;	// G=0x3260dae9; S=0x3260dcad; converted property
- (id)init;	// 0x3260db51
- (void)accept:(id)accept;	// 0x3260dcd1
- (CGRect)bounds;	// 0x3260dbd1
- (id)copyWithZone:(NSZone *)zone;	// 0x3260dce9
- (id)description;	// 0x3260db7d
- (BOOL)isBoxRegion;	// 0x3260dae5
- (BOOL)isRotated;	// 0x3260daf9
// converted property getter: - (float)rotationAngle;	// 0x3260dae9
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x3260dcad
@end

