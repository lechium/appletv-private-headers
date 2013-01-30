/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray, OADTableProperties, OADTableGrid;

@interface OADTable : OADDrawable {
	OADTableProperties *mProperties;	// 24 = 0x18
	OADTableGrid *mGrid;	// 28 = 0x1c
	NSMutableArray *mRows;	// 32 = 0x20
}
- (id)init;	// 0x3498d5e5
- (id)addRow;	// 0x34991515
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x34a53579
- (void)dealloc;	// 0x3498e68d
- (id)grid;	// 0x3499134d
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x34a53635
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x34a535a5
- (id)rowAtIndex:(unsigned)index;	// 0x349920a1
- (unsigned)rowCount;	// 0x34992081
- (void)setParentTextListStyle:(id)style;	// 0x34991fc5
- (id)tableProperties;	// 0x3498d8c1
@end
