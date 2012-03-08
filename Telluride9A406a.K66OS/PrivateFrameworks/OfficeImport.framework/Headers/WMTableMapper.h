/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTable, WMTableColumnInfo, WMBordersProperty, WMTableStyle;

__attribute__((visibility("hidden")))
@interface WMTableMapper : CMMapper {
@private
	WDTable *mWdTable;	// 8 = 0x8
	WMBordersProperty *mInsideBorders;	// 12 = 0xc
	WMTableStyle *mStyle;	// 16 = 0x10
	WMTableColumnInfo *mColumnInfo;	// 20 = 0x14
}
@property(retain) id insideBorders;	// G=0x32964f2d; S=0x32b0de51; converted property
+ (BOOL)isTableDeleted:(id)deleted;	// 0x32963725
- (id)initWithWDTable:(id)wdtable parent:(id)parent;	// 0x32962429
- (id)columnInfo;	// 0x32963efd
- (id)createColumnInfo;	// 0x32962d19
- (id)createStopArrayForRow:(unsigned)row;	// 0x32962df9
- (void)dealloc;	// 0x32964f4d
// converted property getter: - (id)insideBorders;	// 0x32964f2d
- (void)mapAt:(id)at withState:(id)state;	// 0x329633c5
// converted property setter: - (void)setInsideBorders:(id)borders;	// 0x32b0de51
@end

