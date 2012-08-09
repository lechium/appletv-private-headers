/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUFlushable.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorksheet, NSMutableArray, EDCollection, NSRecursiveLock, NSString;

@interface EDRowBlocks : NSObject <TSUFlushable> {
	EDWorksheet *mWorksheet;	// 4 = 0x4
	NSMutableArray *mRowBlocks;	// 8 = 0x8
	EDCollection *mFormulas;	// 12 = 0xc
	unsigned mMaxPopulatedRow;	// 16 = 0x10
	unsigned mMaxPopulatedColumn;	// 20 = 0x14
	NSString *mFileName;	// 24 = 0x18
	int mLockCount;	// 28 = 0x1c
	NSRecursiveLock *mSaveLoadLock;	// 32 = 0x20
}
- (id)initWithWorksheet:(id)worksheet;	// 0x36fa5a0d
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x370c7449
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x37129099
- (void)dealloc;	// 0x36fbd389
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x36fa9695
- (id)fileNameForPersistingRowBlocks;	// 0x37128acd
- (void)flush;	// 0x3712901d
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x3712902d
- (id)formulas;	// 0x36faafc5
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x37128a81
- (void)load;	// 0x36fa6445
- (void)lock;	// 0x36fa5b91
- (unsigned)maxPopulatedColumn;	// 0x37128abd
- (unsigned)maxPopulatedRow;	// 0x36fb5181
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x37128a61
- (id)rowBlockAtIndex:(unsigned)index;	// 0x36fa9781
- (unsigned)rowBlockCount;	// 0x36fa9761
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x370c7499
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x36fa94b9
- (void)save;	// 0x37128c35
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x36faa67d
- (void)unlock;	// 0x36fab6e5
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x36faa439
@end
