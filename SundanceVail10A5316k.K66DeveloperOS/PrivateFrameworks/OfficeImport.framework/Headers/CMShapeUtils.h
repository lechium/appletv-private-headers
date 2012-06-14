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
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)relativeOrientedBounds parentOrientedBounds:(id)bounds parentLogicalBounds:(CGRect)bounds3;	// 0x311e8061
+ (double)fixedPointDegToRad:(long)rad;	// 0x311e8741
+ (float)fontSizeForText:(id)text insideRectangle:(CGSize)rectangle;	// 0x3116768d
+ (double)getFormulaResultFromCustomGeometry:(id)customGeometry atIndex:(unsigned)index;	// 0x3118d8f9
+ (id)inscribedBoundsWithBounds:(id)bounds logicalBounds:(CGRect)bounds2;	// 0x3116626d
+ (id)internalBoundsWithBounds:(id)bounds scaleBounds:(CGRect)bounds2;	// 0x31167705
+ (float)intersectionAngleNextToAngle:(float)angle isAfter:(BOOL)after nodeSize:(CGSize)size;	// 0x311e8481
+ (BOOL)isShapeALine:(id)line;	// 0x31143b89
+ (double)mapAdjustCoord:(OADAdjustCoord)coord geometry:(id)geometry;	// 0x310caf39
+ (long)mapFormulaKeywordValue:(int)value geometry:(id)geometry;	// 0x3118db1d
+ (double)mapFormulaOfType:(int)type argValues:(double *)values isEscher:(BOOL)escher;	// 0x3118dbe1
+ (double)milliMinutesToRad:(long)rad;	// 0x31199429
+ (double)nativeAngleToRad:(long)rad isEscher:(BOOL)escher;	// 0x31199401
+ (float)normalizedAngle:(float)angle;	// 0x311e87f1
+ (long)radToFixedPointDeg:(double)fixedPointDeg;	// 0x311e8761
+ (long)radToMilliMinutes:(double)milliMinutes;	// 0x311e87c1
+ (long)radToNativeAngle:(double)nativeAngle isEscher:(BOOL)escher;	// 0x311e8791
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)absoluteInnerBounds parentBounds:(id)bounds;	// 0x311664b9
+ (float)scaleFactorFromLength:(float)length toLength:(float)length2;	// 0x310892a9
+ (void)setCoordSpaceForCustomeGeometry:(id)customeGeometry fromSize:(CGSize)size;	// 0x3118d8b5
+ (id)transformFromBounds:(CGRect)bounds toOrientedBounds:(id)orientedBounds;	// 0x31088fa9
+ (CGRect)transformRect:(CGRect)rect scale:(float)scale offsetX:(float)x offsetY:(float)y;	// 0x311c8cb9
+ (id)transformedBoundsWithBounds:(id)bounds transform:(id)transform;	// 0x311e82dd
@end

