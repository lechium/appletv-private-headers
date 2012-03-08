/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState {
@private
	XlBinaryReader *mXlReader;	// 36 = 0x24
	XlSheetInfoTable *mXlSheetInfoTable;	// 40 = 0x28
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 44 = 0x2c
	unsigned mTotalCellsWithContentCount;	// 48 = 0x30
	unsigned mTotalCellsWithFormulaCount;	// 52 = 0x34
	XlEshObjectFactory *mXlEshObjectFactory;	// 56 = 0x38
	BOOL m_shouldRestoreHostEshFactory;	// 60 = 0x3c
	OABReaderState *mOAState;	// 64 = 0x40
	BOOL mImportCSV;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL importCSV;	// G=0x328f4b11; S=0x328f43a5; @synthesize=mImportCSV
- (id)initWithXlReader:(XlBinaryReader *)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x328f404d
- (unsigned)cellsWithContentCount;	// 0x32a767b1
- (id)columnWidthConvertor;	// 0x329087f9
- (void)dealloc;	// 0x3292d1f9
// declared property getter: - (BOOL)importCSV;	// 0x328f4b11
- (void)incrementCellsWithContentCount;	// 0x3290ecd9
- (void)incrementCellsWithFormulaCount;	// 0x32a767c1
- (id)oaState;	// 0x328fe721
- (void)pauseReading;	// 0x329043b9
- (void)readGlobalXlObjects;	// 0x328fe7b5
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x329011d5
- (void)resumeReading;	// 0x329053a1
// declared property setter: - (void)setImportCSV:(BOOL)csv;	// 0x328f43a5
- (XlBinaryReader *)xlReader;	// 0x328f6149
- (XlSheetInfoTable *)xlSheetInfoTable;	// 0x32903c3d
@end

