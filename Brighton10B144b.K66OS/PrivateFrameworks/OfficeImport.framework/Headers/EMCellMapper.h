/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDReference;

@interface EMCellMapper : CMMapper {
	EDCellHeader *edCell;	// 8 = 0x8
	EDReference *edMergedCellReference;	// 12 = 0xc
	int rowNumber;	// 16 = 0x10
	int firstColumn;	// 20 = 0x14
	int lastColumn;	// 24 = 0x18
	int columnSpan;	// 28 = 0x1c
	BOOL firstCellFlag;	// 32 = 0x20
	BOOL spreadLeftFlag;	// 33 = 0x21
	double columnWidth;	// 36 = 0x24
}
@property(readonly, assign) int columnSpan;	// G=0x349e5885; converted property
@property(readonly, assign) double columnWidth;	// G=0x349e585d; converted property
@property(assign) int firstColumn;	// G=0x349e583d; S=0x349e584d; converted property
@property(assign) int lastColumn;	// G=0x348bb71d; S=0x348bb97d; converted property
- (id)initWithEDCell:(EDCellHeader *)edcell rowInfo:(EDRowInfo *)info parent:(id)parent state:(id)state;	// 0x348bb549
- (id)initWithParent:(id)parent;	// 0x348bb651
- (void)adjustColumnSpanForGrid:(double *)grid columnCount:(unsigned)count nextCell:(EDCellHeader *)cell withState:(id)state;	// 0x348bb991
// converted property getter: - (int)columnSpan;	// 0x349e5885
// converted property getter: - (double)columnWidth;	// 0x349e585d
// converted property getter: - (int)firstColumn;	// 0x349e583d
- (BOOL)isCellEmpty;	// 0x348bb94d
- (BOOL)isCellMerged;	// 0x348bb731
- (BOOL)isCellSpreading:(id)spreading;	// 0x348bb7c5
- (BOOL)isFirstCell;	// 0x349e5895
// converted property getter: - (int)lastColumn;	// 0x348bb71d
- (void)mapAt:(id)at withState:(id)state;	// 0x349e58a5
- (void)mapAt:(id)at withState:(id)state height:(double)height;	// 0x348bba99
- (id)mapHyperlinkAt:(id)at;	// 0x349e58d1
- (void)mapRowColSpansAt:(id)at withState:(id)state;	// 0x348bbe81
- (void)resetColumnSpan:(int)span;	// 0x349e5875
- (void)setFirstCellFlag;	// 0x348bb709
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x349e584d
// converted property setter: - (void)setLastColumn:(int)column;	// 0x348bb97d
@end

