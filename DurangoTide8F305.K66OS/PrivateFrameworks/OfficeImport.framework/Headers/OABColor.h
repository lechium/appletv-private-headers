/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABColor : NSObject {
}
+ (float)applyAlphaTransform:(id)transform toAlpha:(float)alpha;	// 0x345e54a1
+ (id)applyExpTransformWithValue:(float)value toRgbColor:(id)rgbColor;	// 0x345e5a11
+ (id)applyHSLTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x345e5535
+ (id)applyRGBTransform:(id)transform toRgbColor:(id)rgbColor;	// 0x345e5331
+ (id)applyTransforms:(id)transforms toRgbColor:(id)rgbColor;	// 0x345e572d
+ (unsigned short)eshSchemeColorIndexWithOADMapColorIndex:(int)oadmapColorIndex;	// 0x345e5285
+ (int)oadMapColorIndexWithEshSchemeColorIndex:(unsigned short)eshSchemeColorIndex;	// 0x3443dbd5
+ (EshColor)propertyColor:(int)color colorPropertiesManager:(id)manager;	// 0x34455d29
+ (id)readColor:(const EshColor *)color colorPropertiesManager:(id)manager colorPalette:(id)palette;	// 0x3443d859
+ (int)readColorAdjustmentType:(int)type;	// 0x34455de5
+ (int)readSystemColorID:(int)anId;	// 0x345e52a9
@end

