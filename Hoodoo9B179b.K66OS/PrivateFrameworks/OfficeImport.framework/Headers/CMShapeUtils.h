/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CMShapeUtils : NSObject {
}
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x32a2a225
+ (double)fixedPointDegToRad:(long)rad;	// 0x32a2a195
+ (double)fixedPointDegToRad:(long)rad;	// 0x32a2a1b5
+ (float)fontSizeForText:(id)text insideRectangle:(CGSize)rectangle;	// 0x32902175
+ (double)getFormulaResultFromCustomGeometry:(id)customGeometry atIndex:(unsigned)index;	// 0x32880805
+ (id)inscribedBoundsWithBounds:(id)bounds logicalBounds:(CGRect)bounds2;	// 0x32900dd9
+ (id)internalBoundsWithBounds:(id)bounds scaleBounds:(CGRect)bounds2;	// 0x329021e9
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after nodeSize:(CGSize)size;	// 0x32926685
+ (BOOL)isShapeALine:(id)line;	// 0x3287df15
+ (double)mapAdjustCoord:(OADAdjustCoord)coord geometry:(id)geometry;	// 0x328807a9
+ (long)mapFormulaKeywordValue:(int)value geometry:(id)geometry;	// 0x328809e5
+ (double)mapFormulaOfType:(int)type argValues:(double *)values isEscher:(BOOL)escher;	// 0x32880a89
+ (double)milliMinutesToRad:(long)rad;	// 0x32a2a1d5
+ (double)nativeAngleToRad:(long)rad isEscher:(BOOL)escher;	// 0x32a2a445
+ (float)normalizedAngle:(float)angle;	// 0x329269c1
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x32a2a4ad
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x32a2a1f5
+ (long)radToMilliMinutes:(double)milliMinutes;	// 0x32a2a4dd
+ (long)radToNativeAngle:(double)nativeAngle isEscher:(BOOL)escher;	// 0x32a2a475
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)absoluteInnerBounds parentBounds:(id)bounds;	// 0x3290100d
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x32803131
+ (void)setCoordSpaceForCustomeGeometry:(id)customeGeometry fromSize:(CGSize)size;	// 0x32904e21
+ (id)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x32802dd1
+ (CGRect)transformRect:(CGRect)rect scale:(float)scale offsetX:(float)x offsetY:(float)y;	// 0x32924115
+ (id)transformedBoundsWithBounds:(id)bounds transform:(id)transform;	// 0x329288d5
@end

