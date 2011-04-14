/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableCell;

__attribute__((visibility("hidden")))
@interface WMTableCellMapper : CMMapper {
@private
	WDTableCell *mWdTableCell;	// 8 = 0x8
	unsigned mColSpan;	// 12 = 0xc
	double mHeight;	// 16 = 0x10
	double mWidth;	// 24 = 0x18
	double mLeftPadding;	// 32 = 0x20
	double mRightPadding;	// 40 = 0x28
}
- (id)initWithWDTableCell:(id)wdtableCell atIndex:(unsigned)index parent:(id)parent;	// 0x31991cc9
- (unsigned)colSpan;	// 0x31993149
- (void)mapAt:(id)at withState:(id)state;	// 0x31991f21
- (void)mapCellStyleAt:(id)at;	// 0x31992171
- (id)tableMapper;	// 0x31991e05
@end

