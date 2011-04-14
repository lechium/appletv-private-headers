/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODIDrawable : NSObject {
}
+ (void)addArrowHeadToShapeProperties:(id)shapeProperties;	// 0x31ac3fb1
+ (id)addShapeWithBounds:(CGRect)bounds rotation:(float)rotation geometry:(id)geometry state:(id)state;	// 0x31ac48fd
+ (void)map1dArrowStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31ac4505
+ (void)map1dArrowStyleToShape:(id)shape state:(id)state;	// 0x31ac440d
+ (void)mapShapeProperties:(id)properties shape:(id)shape state:(id)state;	// 0x31ac4041
+ (void)mapShapeProperties:(id)properties shapeStyle:(id)style shape:(id)shape state:(id)state;	// 0x31ac40c5
+ (void)mapStyleAndTextFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31ac4375
+ (void)mapStyleForLabelName:(id)labelName point:(id)point shape:(id)shape state:(id)state;	// 0x31ac45f9
+ (void)mapStyleForLabelName:(id)labelName shape:(id)shape state:(id)state;	// 0x31ac4691
+ (void)mapStyleForPresentationName:(id)presentationName point:(id)point shape:(id)shape state:(id)state;	// 0x31ac473d
+ (void)mapStyleFromPoint:(id)point shape:(id)shape state:(id)state;	// 0x31ac47e5
+ (id)presentationWithName:(id)name point:(id)point;	// 0x31ac42b5
+ (id)shapeGeometryForBezierPath:(CGPathRef)bezierPath gSpace:(CGRect)space;	// 0x31ac4dd5
+ (id)shapeGeometryForDoubleArrowWithControlPoint:(CGPoint)controlPoint;	// 0x31ac4acd
+ (id)shapeGeometryForEllipse;	// 0x31ac4cf1
+ (id)shapeGeometryForRectangle;	// 0x31ac4d41
+ (id)shapeGeometryForRightArrowWithControlPoint:(CGPoint)controlPoint;	// 0x31ac4b85
+ (id)shapeGeometryForRoundedRectangleWithRadius:(float)radius;	// 0x31ac4c55
+ (id)shapeGeometryWithShapeType:(int)shapeType adjustValues:(const int *)values;	// 0x31ac4a49
+ (CGSize)sizeOfDiagram:(id)diagram;	// 0x31ac4d91
+ (id)styleForLabelName:(id)labelName styleCount:(int)count styleIndex:(int)index state:(id)state;	// 0x31ac4131
+ (id)styleForPresentation:(id)presentation point:(id)point state:(id)state;	// 0x31ac41ed
@end

