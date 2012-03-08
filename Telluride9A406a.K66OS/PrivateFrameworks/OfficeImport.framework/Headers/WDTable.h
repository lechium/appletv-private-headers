/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock {
@private
	WDTableProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x3295bd11
- (id)addRow;	// 0x3295c8b5
- (int)blockType;	// 0x32962425
- (id)cellIterator;	// 0x32ab2ba9
- (void)clearProperties;	// 0x32ab2ccd
- (void)clearRows;	// 0x32ab2ca1
- (void)dealloc;	// 0x328bfe71
- (int)nestingLevel;	// 0x3295e1fd
- (id)newCellIterator;	// 0x32ab2b4d
- (id)newRowIterator;	// 0x32ab2c09
- (id)newRunIterator;	// 0x32ab2a91
- (id)properties;	// 0x3295c1a9
- (id)rowAt:(int)at;	// 0x32962f11
- (int)rowCount;	// 0x3295cb3d
- (id)rowIterator;	// 0x32ab2c4d
- (id)runIterator;	// 0x32ab2aed
@end

