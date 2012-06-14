/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface PMTableMapper : CMMapper {
@private
	OADTable *mTable;	// 8 = 0x8
	CMDrawableStyle *mStyle;	// 12 = 0xc
	CMTableGridInfo *mGrid;	// 16 = 0x10
	OADOrientedBounds *mBounds;	// 20 = 0x14
}
- (id)initWithOadTable:(id)oadTable bounds:(id)bounds parent:(id)parent;	// 0x311957d1
- (id)cellStyle;	// 0x311eb9d5
- (float)columnWidthAtIndex:(int)index state:(id)state;	// 0x31195d21
- (void)dealloc;	// 0x31197179
- (id)defaultCellFillForRow:(unsigned)row withState:(id)state;	// 0x31196dcd
- (id)defaultCellFillWithState:(id)state;	// 0x311eb981
- (id)grid;	// 0x311eb971
- (void)mapAt:(id)at withState:(id)state;	// 0x31195899
- (void)mapColumnGridAt:(id)at withState:(id)state;	// 0x31195b91
- (void)mapTablePropertiesWithState:(id)state;	// 0x31195a41
- (unsigned)rowCount;	// 0x31196859
- (id)tableBorderStyle;	// 0x311968ed
@end

