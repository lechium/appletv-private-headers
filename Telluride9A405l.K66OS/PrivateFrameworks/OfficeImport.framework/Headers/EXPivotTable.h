/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXPivotTable : NSObject {
}
+ (int)edPivotAreaTypeFrom:(id)from;	// 0x30e366b1
+ (int)edPivotConditionalFormatScopeFrom:(id)from;	// 0x30e36645
+ (int)edPivotConditionalFormatTypeFrom:(id)from;	// 0x30e365bd
+ (int)edPivotDatFieldFormatFrom:(id)from;	// 0x30dee451
+ (int)edPivotFieldAxisFrom:(id)from;	// 0x30ded5f9
+ (int)edPivotItemTypeFrom:(id)from;	// 0x30dedab5
+ (id)edPivotTableFromXmlPivotTableElement:(xmlNode *)xmlPivotTableElement state:(id)state;	// 0x30debdf5
+ (void)readConditionalFormatsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dee57d
+ (void)readDataFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dee149
+ (void)readFieldItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30ded6f5
+ (void)readFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dedc89
+ (void)readItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dedd55
+ (void)readLocationFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x30decda1
+ (void)readPageFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dee019
+ (void)readPivotAreaReferencesFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30e3676d
+ (void)readPivotAreasFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30dee72d
+ (void)readPivotFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x30ded1d9
+ (void)readStyleInfoFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x30decf99
@end

