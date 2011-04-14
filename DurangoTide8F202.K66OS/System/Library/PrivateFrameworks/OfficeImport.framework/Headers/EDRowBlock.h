/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDRowBlock : NSObject {
@private
	CFDataRef mPackedData;	// 4 = 0x4
	CFDataRef mCellOffsets;	// 8 = 0x8
}
@property(assign) unsigned index;	// G=0x318d2561; S=0x318d1349; converted property
+ (id)rowBlock;	// 0x318d1281
- (id)init;	// 0x318d12c1
- (EDCellHeader *)addCellWithColumnNumber:(unsigned)columnNumber type:(int)type isFormulaCell:(bool)cell rowInfo:(EDRowInfo **)info rowBlocks:(id)blocks;	// 0x318d19c9
- (EDRowInfo *)addRowInfoWithRowNumber:(unsigned)rowNumber cellCountHint:(unsigned)hint;	// 0x318d15f1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x31aef1c9
- (EDCellHeader *)cellAtIndex:(unsigned)index rowInfo:(EDRowInfo *)info;	// 0x318e7ccd
- (EDCellHeader *)cellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x318ec63d
- (void)dealloc;	// 0x318f0f61
- (void)doneWithContent;	// 0x318f0f9d
- (unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x318ec6bd
- (unsigned)firstRowNumber;	// 0x318d1e85
- (void)incrementIndex;	// 0x31aef16d
// converted property getter: - (unsigned)index;	// 0x318d2561
- (unsigned)indexOfCellWithColumnNumber:(unsigned)columnNumber rowInfo:(EDRowInfo *)info;	// 0x318ec675
- (unsigned)indexOfRowInfoWithRowNumber:(unsigned)rowNumber;	// 0x318d1571
- (unsigned)lastRowNumber;	// 0x318e66b9
- (void)removeCellAtIndex:(unsigned)index rowInfo:(EDRowInfo **)info;	// 0x31aef2ad
- (unsigned)rowCount;	// 0x318e6715
- (EDRowInfo *)rowInfoAtIndex:(unsigned)index;	// 0x318d1ea5
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber;	// 0x318d1509
- (EDRowInfo *)rowInfoWithRowNumber:(unsigned)rowNumber createIfNil:(bool)aNil;	// 0x318d1521
// converted property setter: - (void)setIndex:(unsigned)index;	// 0x318d1349
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x31aef22d
@end

