/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WMBordersProperty, WMTableStyle, WDTable, WMTableColumnInfo;

__attribute__((visibility("hidden")))
@interface WMTableMapper : CMMapper {
@private
	WDTable *mWdTable;	// 8 = 0x8
	WMBordersProperty *mInsideBorders;	// 12 = 0xc
	WMTableStyle *mStyle;	// 16 = 0x10
	WMTableColumnInfo *mColumnInfo;	// 20 = 0x14
}
@property(retain) id insideBorders;	// G=0x31992ed5; S=0x31aa058d; converted property
+ (BOOL)isTableDeleted:(id)deleted;	// 0x31991745
- (id)initWithWDTable:(id)wdtable parent:(id)parent;	// 0x3198ff95
- (id)columnInfo;	// 0x31991e71
- (id)createColumnInfo;	// 0x31990e29
- (id)createStopArrayForRow:(unsigned)row;	// 0x31990f11
- (void)dealloc;	// 0x31993159
// converted property getter: - (id)insideBorders;	// 0x31992ed5
- (void)mapAt:(id)at withState:(id)state;	// 0x3199144d
// converted property setter: - (void)setInsideBorders:(id)borders;	// 0x31aa058d
@end

