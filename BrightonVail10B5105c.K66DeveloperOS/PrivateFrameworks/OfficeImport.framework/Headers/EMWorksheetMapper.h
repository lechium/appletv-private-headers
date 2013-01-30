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
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x3795d941
- (void)_initWithState:(id)state;	// 0x3795dec9
- (int)columnCount;	// 0x3795f3c5
- (double *)columnGrid;	// 0x3795ece5
- (id)columnWidthConvertor;	// 0x3795e5e1
- (void)countRowsAndColumnsWithState:(id)state;	// 0x3795df69
- (void)dealloc;	// 0x37965f39
- (double)defaultColumnWidth;	// 0x37973a19
- (double)defaultRowHeight;	// 0x37a4e571
- (int)height;	// 0x37965d29
- (BOOL)isVisible;	// 0x3795f8b1
- (void)mapAt:(id)at withState:(id)state;	// 0x3795f4f1
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x3795f939
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x37963e2d
- (void)mapGridAt:(id)at;	// 0x3795fec9
- (void)mapTableAt:(id)at withState:(id)state;	// 0x3795f5a5
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x37963c6d
- (int)maxRowNumber;	// 0x3795f3d9
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0x3795ea1d
- (int)preprocessHeightWithState:(id)state;	// 0x3795e8c9
- (CGSize)preprocessSizeWithState:(id)state;	// 0x3795da15
- (int)preprocessWidthWithState:(id)state;	// 0x3795db99
- (double *)rowGrid;	// 0x3795ecd1
- (void)setRowGrid;	// 0x3795e391
- (int)width;	// 0x37965d19
- (double)xlColumnWidthToPoints:(double)points;	// 0x37973a59
@end
