/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, ECColumnWidthConvertor, CMStyle;

@interface EMWorksheetMapper : EMSheetMapper {
	EDWorksheet *edWorksheet;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mMaxPopulatedColumn;	// 16 = 0x10
	int mMaxPopulatedRow;	// 20 = 0x14
	double *mColumnGrid;	// 24 = 0x18
	double *mRowGrid;	// 28 = 0x1c
	int mWidth;	// 32 = 0x20
	int mHeight;	// 36 = 0x24
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 40 = 0x28
}
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x36a81941
- (void)_initWithState:(id)state;	// 0x36a81ec9
- (int)columnCount;	// 0x36a833c5
- (double *)columnGrid;	// 0x36a82ce5
- (id)columnWidthConvertor;	// 0x36a825e1
- (void)countRowsAndColumnsWithState:(id)state;	// 0x36a81f69
- (void)dealloc;	// 0x36a89f39
- (double)defaultColumnWidth;	// 0x36a97a19
- (double)defaultRowHeight;	// 0x36b72571
- (int)height;	// 0x36a89d29
- (BOOL)isVisible;	// 0x36a838b1
- (void)mapAt:(id)at withState:(id)state;	// 0x36a834f1
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x36a83939
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x36a87e2d
- (void)mapGridAt:(id)at;	// 0x36a83ec9
- (void)mapTableAt:(id)at withState:(id)state;	// 0x36a835a5
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x36a87c6d
- (int)maxRowNumber;	// 0x36a833d9
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0x36a82a1d
- (int)preprocessHeightWithState:(id)state;	// 0x36a828c9
- (CGSize)preprocessSizeWithState:(id)state;	// 0x36a81a15
- (int)preprocessWidthWithState:(id)state;	// 0x36a81b99
- (double *)rowGrid;	// 0x36a82cd1
- (void)setRowGrid;	// 0x36a82391
- (int)width;	// 0x36a89d19
- (double)xlColumnWidthToPoints:(double)points;	// 0x36a97a59
@end
