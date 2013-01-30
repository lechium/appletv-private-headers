/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDPivotTable;

@interface EPPivotTableStyleFlattener : EPStyleFlattener {
	EDPivotTable *mPivotTable;	// 72 = 0x48
	int mFirstHeaderRow;	// 76 = 0x4c
	int mFirstDataRow;	// 80 = 0x50
	int mFirstDataColumn;	// 84 = 0x54
	unsigned mRowFieldsCount;	// 88 = 0x58
	unsigned mColumnFieldsCount;	// 92 = 0x5c
	unsigned mPageFieldsCount;	// 96 = 0x60
}
- (void)addColumnSubheadingLevel:(unsigned)level to:(id)to;	// 0x34b990a5
- (void)addRowSubheadingLevel:(unsigned)level to:(id)to;	// 0x34b99149
- (void)addSubtotalColumnLevel:(unsigned)level to:(id)to;	// 0x34c0ca1d
- (void)addSubtotalRowLevel:(unsigned)level to:(id)to;	// 0x34c0c989
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x34b98a45
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x34b980b1
- (void)clearCache;	// 0x34b99001
- (id)collectionFromWorksheet:(id)worksheet;	// 0x34aec6fd
- (unsigned)constrainLevel:(unsigned)level;	// 0x34b99139
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x34b984a5
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x34b98329
- (bool)isObjectSupported:(id)supported;	// 0x34aea409
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x34aec501
- (int)stripeOffset:(int)offset row:(bool)row;	// 0x34c0c91d
- (id)styleFromObject:(id)object;	// 0x34b9803d
@end
