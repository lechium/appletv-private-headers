/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface ECUtils : NSObject {
}
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x37121c55
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x36fab001
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x36faa559
+ (BOOL)isRenameFunction:(id)function;	// 0x37121781
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x37121ce1
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x37121c25
+ (id)renameFunction:(id)function;	// 0x37121bed
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x37121d39
@end
