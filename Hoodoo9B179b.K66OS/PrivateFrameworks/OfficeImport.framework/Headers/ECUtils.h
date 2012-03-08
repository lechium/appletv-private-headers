/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECUtils : NSObject {
}
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x3298c9b9
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x3291c9f5
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x32825d09
+ (BOOL)isRenameFunction:(id)function;	// 0x3298cf89
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x3298ca41
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x3298c989
+ (id)renameFunction:(id)function;	// 0x3298cf51
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x3298caa5
@end

