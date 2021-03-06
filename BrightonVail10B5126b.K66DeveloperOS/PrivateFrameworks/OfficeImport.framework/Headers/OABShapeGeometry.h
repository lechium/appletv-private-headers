/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x34880fd5
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x3488100d
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x34a3b90d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x34a3b5f1
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x348677e9
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x3488112d
+ (void)readFromLimo:(CsPoint<long>)limo toGeometry:(id)geometry;	// 0x348814c5
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x3487ffd9
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x348670bd
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x34881251
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x3498a795
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x3498a91d
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x3498aa35
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x34a3b601
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShape:(EshShape *)shape;	// 0x34a3b659
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3bf7d
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x34a3c3e5
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3b875
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3ba15
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x34a3c101
@end

