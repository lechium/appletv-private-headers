/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x328e8885
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x328e88b5
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x32b18b3d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x32b18889
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x32898215
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x328e89d5
+ (void)readFromLimo:(CsPoint<long int>)limo toGeometry:(id)geometry;	// 0x328e8d71
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x328e7a4d
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x32897b65
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x328e8b51
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x32966bb1
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x32966d09
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x32966e11
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x32b1889d
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x32b188fd
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x32b190ad
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x32b19525
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x32b18a15
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x32b18b95
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x32b192e9
@end

