/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


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
- (id)init;	// 0x31227ec1
- (void)dealloc;	// 0x31227f45
- (void)setupWithWorkbook:(id)workbook;	// 0x31228109
- (XlFormulaProcessor *)setupWithWorkbook:(id)workbook xlNameTable:(XlNameTable *)table sheetNames:(ChVector<OcText> *)names xlLinkTable:(XlLinkTable *)table4 lassoSyntax:(bool)syntax;	// 0x31228299
- (ChVector<OcText> *)sheetNamesFromWorkbook:(id)workbook;	// 0x31228361
- (XlFormulaProcessor *)xlFormulaProcessorLasso;	// 0x31228279
- (XlFormulaProcessor *)xlFormulaProcessorXl;	// 0x31228289
@end

