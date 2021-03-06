/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class EDWorkbook, EDWorksheet, EDRowBlocks, EDCollection, EDRowBlock, EDReference;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject {
@private
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mCurrentSheet;	// 8 = 0x8
	EDCollection *mReferences;	// 12 = 0xc
	EDReference *mReference;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mRowBlock;	// 24 = 0x18
	unsigned mRowBlockIndex;	// 28 = 0x1c
	EDRowInfo *mRowInfo;	// 32 = 0x20
	unsigned mRowInfoIndex;	// 36 = 0x24
	unsigned mCellIndex;	// 40 = 0x28
	unsigned mNextArrayIndex;	// 44 = 0x2c
	int mCurrentCellIndex;	// 48 = 0x30
	unsigned mPreviousColumnNumber;	// 52 = 0x34
}
+ (id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;	// 0x31ae0061
+ (id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x31a1981d
- (id)initWithReference:(id)reference workbook:(id)workbook;	// 0x31ae00a9
- (id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;	// 0x31a198b1
- (id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;	// 0x31a19865
- (unsigned)currentCellIndex;	// 0x31a67aa5
- (void)dealloc;	// 0x31a1a0c5
- (EDCellHeader *)nextCell;	// 0x31a19cbd
- (bool)nextReference;	// 0x31a72771
- (bool)nextRow;	// 0x31a19f15
- (void)setCurrentSheet:(id)sheet;	// 0x31ae0025
- (void)setReference:(id)reference;	// 0x31a19991
@end

