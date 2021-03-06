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
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x345b45f5
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x345b452d
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x343a9e45
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x345b4599
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x345b4675
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x345b4531
@end

