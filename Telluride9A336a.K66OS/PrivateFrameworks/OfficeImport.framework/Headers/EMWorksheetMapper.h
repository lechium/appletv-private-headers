/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class ECColumnWidthConvertor, EDWorksheet, CMStyle;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
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
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x34c762a1
- (void)_initWithState:(id)state;	// 0x34c76849
- (int)columnCount;	// 0x34c782bd
- (double *)columnGrid;	// 0x34c782ad
- (id)columnWidthConvertor;	// 0x34c76ff9
- (void)countRowsAndColumnsWithState:(id)state;	// 0x34c768d9
- (void)dealloc;	// 0x34c7dcd5
- (double)defaultColumnWidth;	// 0x34cf4b15
- (double)defaultRowHeight;	// 0x34cf4b71
- (int)height;	// 0x34c7daa5
- (BOOL)isVisible;	// 0x34c77a9d
- (void)mapAt:(id)at withState:(id)state;	// 0x34c77731
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x34c77b21
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x34c7d96d
- (void)mapGridAt:(id)at;	// 0x34c78141
- (void)mapTableAt:(id)at withState:(id)state;	// 0x34c777d5
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x34c7d78d
- (int)maxRowNumber;	// 0x34c84a91
- (CGSize)preprocessDrawableSizeWithState:(id)state;	// 0x34c772dd
- (int)preprocessHeightWithState:(id)state;	// 0x34c771bd
- (CGSize)preprocessSizeWithState:(id)state;	// 0x34c7636d
- (int)preprocessWidthWithState:(id)state;	// 0x34c764b9
- (double *)rowGrid;	// 0x34c8409d
- (void)setRowGrid;	// 0x34c76d51
- (int)width;	// 0x34c7da95
- (double)xlColumnWidthToPoints:(double)points;	// 0x34cf4b55
@end
