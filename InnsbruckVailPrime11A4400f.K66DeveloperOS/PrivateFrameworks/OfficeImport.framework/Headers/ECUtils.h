/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>


@interface ECUtils : NSObject {
}
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x318cf729
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x317c2a79
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x3179ff89
+ (BOOL)isRenameFunction:(id)function;	// 0x318cf259
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x318cf7b1
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x318cf6f9
+ (id)renameFunction:(id)function;	// 0x318cf6c1
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x318cf809
@end
