/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTable : NSObject {
}
+ (void)cacheTableStylesInPart:(id)part cache:(id)cache;	// 0x328df121
+ (id)readCellBorderStyle:(xmlNode *)style drawingState:(id)state;	// 0x328e4699
+ (void)readCellFromXmlNode:(xmlNode *)xmlNode toCell:(id)cell drawingState:(id)state;	// 0x3290df1d
+ (id)readCellPropertiesFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x3290e151
+ (id)readCellStyle:(xmlNode *)style drawingState:(id)state;	// 0x328e45c9
+ (id)readDefaultTableStyleWithDrawingState:(id)drawingState;	// 0x328e341d
+ (id)readFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x3290d5c9
+ (void)readGridFromXmlNode:(xmlNode *)xmlNode toGrid:(id)grid;	// 0x3290dadd
+ (int)readOnOffFlag:(id)flag;	// 0x328e5491
+ (id)readPartStyle:(xmlNode *)style drawingState:(id)state;	// 0x328e44e1
+ (void)readPropertiesFromXmlNode:(xmlNode *)xmlNode toProperties:(id)properties drawingState:(id)state;	// 0x3290d705
+ (void)readRowFromXmlNode:(xmlNode *)xmlNode toRow:(id)row drawingState:(id)state;	// 0x3290dd4d
+ (void)readRowsFromTableXmlNode:(xmlNode *)tableXmlNode toTable:(id)table drawingState:(id)state;	// 0x3290dbf9
+ (id)readTableStyle:(xmlNode *)style drawingState:(id)state;	// 0x328e40d1
+ (id)readTextStyle:(xmlNode *)style drawingState:(id)state;	// 0x328e4cd5
+ (id)readThemableEffectsFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x32922c3d
+ (id)readThemableFillFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x328e4b1d
+ (id)readThemableStrokeFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x328e4841
@end

