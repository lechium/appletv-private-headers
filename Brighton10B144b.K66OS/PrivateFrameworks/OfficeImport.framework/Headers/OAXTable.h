/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTable : NSObject {
}
+ (void)cacheTableStylesInPart:(id)part cache:(id)cache;	// 0x3493530d
+ (id)readCellBorderStyle:(xmlNode *)style drawingState:(id)state;	// 0x3493ac61
+ (void)readCellFromXmlNode:(xmlNode *)xmlNode toCell:(id)cell drawingState:(id)state;	// 0x349917b9
+ (id)readCellPropertiesFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x349919e9
+ (id)readCellStyle:(xmlNode *)style drawingState:(id)state;	// 0x3493ab95
+ (id)readDefaultTableStyleWithDrawingState:(id)drawingState;	// 0x34939ab5
+ (id)readFromXmlNode:(xmlNode *)xmlNode drawingState:(id)state;	// 0x34990e6d
+ (void)readGridFromXmlNode:(xmlNode *)xmlNode toGrid:(id)grid;	// 0x34991361
+ (int)readOnOffFlag:(id)flag;	// 0x3493ba21
+ (id)readPartStyle:(xmlNode *)style drawingState:(id)state;	// 0x3493aab5
+ (void)readPropertiesFromXmlNode:(xmlNode *)xmlNode toProperties:(id)properties drawingState:(id)state;	// 0x34990f99
+ (void)readRowFromXmlNode:(xmlNode *)xmlNode toRow:(id)row drawingState:(id)state;	// 0x349915e9
+ (void)readRowsFromTableXmlNode:(xmlNode *)tableXmlNode toTable:(id)table drawingState:(id)state;	// 0x3499148d
+ (id)readTableStyle:(xmlNode *)style drawingState:(id)state;	// 0x3493a67d
+ (id)readTextStyle:(xmlNode *)style drawingState:(id)state;	// 0x3493b285
+ (id)readThemableEffectsFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x349b0241
+ (id)readThemableFillFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x3493b0dd
+ (id)readThemableStrokeFromParent:(xmlNode *)parent drawingState:(id)state;	// 0x3493ae31
@end

