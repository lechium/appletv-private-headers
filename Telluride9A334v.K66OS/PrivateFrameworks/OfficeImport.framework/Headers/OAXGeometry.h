/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3569aee9
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x356acfdd
+ (id)formulaKeywordEnumMap;	// 0x3569b639
+ (id)formulaTypeEnumMap;	// 0x3569b5e1
+ (id)pathFillModeEnumMap;	// 0x356d1ed9
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x3569b811
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x3569adfd
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x3569ac89
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x3569b05d
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x35676991
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x3578adc9
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3569b875
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x35676a01
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x3569b6d5
+ (id)shapeTypeEnumMap;	// 0x35676b4d
+ (int)shapeTypeForString:(id)string;	// 0x35676b21
+ (id)stringForShapeType:(int)shapeType;	// 0x356b1dd5
@end
