/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "TSUFlushable.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, EDCollection, NSRecursiveLock, NSMutableArray, NSString;

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
- (id)initWithWorksheet:(id)worksheet;	// 0x3179be29
- (EDCellHeader *)cellWithRowNumber:(unsigned)rowNumber columnNumber:(int)number;	// 0x31805341
- (Class)classForFormulaType:(unsigned char)formulaType;	// 0x318d6705
- (void)dealloc;	// 0x317ad3f5
- (unsigned)expectedIndexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x3179eebd
- (id)fileNameForPersistingRowBlocks;	// 0x318d615d
- (void)flush;	// 0x318d6689
- (unsigned char)formulaTypeForFormula:(id)formula;	// 0x318d6699
- (id)formulas;	// 0x317a5569
- (unsigned)indexOfRowBlockForRowNumber:(unsigned)rowNumber;	// 0x318d6111
- (void)load;	// 0x3179c931
- (void)lock;	// 0x3179c08d
- (unsigned)maxPopulatedColumn;	// 0x318d614d
- (unsigned)maxPopulatedRow;	// 0x317a6711
- (void)removeRowBlockAtIndex:(unsigned)index;	// 0x318d60f1
- (id)rowBlockAtIndex:(unsigned)index;	// 0x3179efb9
- (unsigned)rowBlockCount;	// 0x3179ef99
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block;	// 0x31805395
- (id)rowBlockForRowNumber:(unsigned)rowNumber currentRowBlock:(id)block createIfNil:(bool)aNil;	// 0x3179ece1
- (void)save;	// 0x318d62c5
- (bool)spaceForRowNumber:(unsigned)rowNumber rowBlock:(id)block;	// 0x317a0019
- (void)unlock;	// 0x317a06bd
- (void)updateMaxPopulatedRow:(unsigned)row column:(unsigned)column;	// 0x3179febd
@end

