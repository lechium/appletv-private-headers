/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQTableGenerator.h"
#import "GQHGraphicStyle.h"
#import "iWorkImport-Structs.h"


@interface GQHTable : GQHGraphicStyle <GQTableGenerator> {
}
+ (void)addMissingCellWithRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state;	// 0x34c0ece5
+ (void)addMissingCellsUpToRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state;	// 0x34c0f071
+ (int)beginCells:(id)cells state:(id)state;	// 0x34c0fac9
+ (void)beginRowWithIndex:(unsigned short)index state:(id)state;	// 0x34c0eb21
+ (int)beginTable:(id)table state:(id)state;	// 0x34c0f309
+ (CFStringRef)createTableAttachmentIdWithNumber:(long)number;	// 0x34c10ff5
+ (int)endCells:(id)cells state:(id)state;	// 0x34c10161
+ (int)endTable:(id)table state:(id)state;	// 0x34c0f441
+ (void)getVectorStylesForRowIndex:(unsigned short)rowIndex rowSpan:(unsigned short)span columnIndex:(unsigned short)index columnSpan:(unsigned short)span4 vectorStyles:(id *)styles state:(id)state;	// 0x34c10bdd
+ (int)handleCell:(id)cell state:(id)state;	// 0x34c10165
+ (id)mapBaseFillStyleForRowIndex:(unsigned short)rowIndex columnIndex:(unsigned short)index state:(id)state isGroupingCell:(BOOL)cell;	// 0x34c104c9
+ (int)mapCellContent:(id)content xml:(id)xml state:(id)state;	// 0x34c0e469
+ (void)mapCellStyle:(id)style rowIndex:(unsigned short)index rowSpan:(unsigned short)span columnIndex:(unsigned short)index4 columnSpan:(unsigned short)span5 state:(id)state cell:(id)cell level:(unsigned short)level;	// 0x34c105f1
+ (void)mapVectorStyles:(id *)styles toCellStyle:(id)cellStyle state:(id)state;	// 0x34c10cf1
+ (const char *)name;	// 0x34c104bd
+ (unsigned short)resolveGroupLevel:(id)level model:(id)model columnIndex:(int)index tableState:(id)state;	// 0x34c10dd1
+ (void)splitTable:(id)table;	// 0x34c10e6d
+ (void)startTableWithTableAnchor:(CFStringRef)tableAnchor tableHeight:(float)height state:(id)state;	// 0x34c0f60d
@end
