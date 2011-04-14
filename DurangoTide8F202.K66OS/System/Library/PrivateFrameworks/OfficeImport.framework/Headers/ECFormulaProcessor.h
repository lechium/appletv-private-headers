/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ECFormulaProcessor : NSObject {
@private
	XlFormulaProcessor *mXlFormulaProcessorLasso;	// 4 = 0x4
	XlFormulaProcessor *mXlFormulaProcessorXl;	// 8 = 0x8
	XlNameTable *mXlNameTable;	// 12 = 0xc
	ChVector<OcText> *mLassoSheetNames;	// 16 = 0x10
	ChVector<OcText> *mXlSheetNames;	// 20 = 0x14
	XlLinkTable *mXlLinkTable;	// 24 = 0x18
}
- (id)init;	// 0x31aef3ed
- (void)dealloc;	// 0x31aef7b9
- (void)setupWithWorkbook:(id)workbook;	// 0x31aef465
- (XlFormulaProcessor *)setupWithWorkbook:(id)workbook xlNameTable:(XlNameTable *)table sheetNames:(ChVector<OcText> *)names xlLinkTable:(XlLinkTable *)table4 lassoSyntax:(bool)syntax;	// 0x31aef5cd
- (ChVector<OcText> *)sheetNamesFromWorkbook:(id)workbook;	// 0x31aef67d
- (XlFormulaProcessor *)xlFormulaProcessorLasso;	// 0x31aef3cd
- (XlFormulaProcessor *)xlFormulaProcessorXl;	// 0x31aef3dd
@end

