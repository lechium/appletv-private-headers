/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper {
@private
	WDTableRow *mWdTableRow;	// 8 = 0x8
	double mHeight;	// 12 = 0xc
}
+ (BOOL)isTableRowDeleted:(id)deleted;	// 0x3122a799
- (id)initWithWDTableRow:(id)wdtableRow parent:(id)parent;	// 0x3122a91d
- (double)height;	// 0x3122ae71
- (void)mapAt:(id)at withState:(id)state;	// 0x3122ab29
- (void)setRowProperties:(id)properties;	// 0x3122a99d
@end
