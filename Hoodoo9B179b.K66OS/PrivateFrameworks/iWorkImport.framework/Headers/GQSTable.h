/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDTCell, GQDTTable, GQDTOverlapCell;

__attribute__((visibility("hidden")))
@interface GQSTable : NSObject {
@private
	GQDTTable *mTable;	// 4 = 0x4
	GQDTOverlapCell *mCurrentOverlapCell;	// 8 = 0x8
	GQDTCell *mLastCellRead;	// 12 = 0xc
	BOOL mIsStreaming;	// 16 = 0x10
	BOOL mAlwaysPutReadCellsInArray;	// 17 = 0x11
	long mCellCount;	// 20 = 0x14
	BOOL mIsCounting;	// 24 = 0x18
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// G=0x359b1cbd; S=0x359b1ccd; converted property
@property(retain) id currentOverlapCell;	// G=0x359b1c7d; S=0x359b1e51; converted property
@property(retain) id lastCellRead;	// G=0x359b1c8d; S=0x359b1e1d; converted property
- (id)initWithStreaming:(BOOL)streaming table:(id)table;	// 0x359b1d7d
// converted property getter: - (BOOL)alwaysPutReadCellsInArray;	// 0x359b1cbd
- (long)column;	// 0x359b1cf5
// converted property getter: - (id)currentOverlapCell;	// 0x359b1c7d
- (void)dealloc;	// 0x359b1e91
- (void)incrementCellPosition;	// 0x359b1e09
- (BOOL)isCounting;	// 0x359b1d45
- (BOOL)isStreaming;	// 0x359b1c9d
// converted property getter: - (id)lastCellRead;	// 0x359b1c8d
- (long)row;	// 0x359b1cdd
// converted property setter: - (void)setAlwaysPutReadCellsInArray:(BOOL)array;	// 0x359b1ccd
// converted property setter: - (void)setCurrentOverlapCell:(id)cell;	// 0x359b1e51
- (void)setIsCountingCount:(BOOL)count;	// 0x359b1d35
// converted property setter: - (void)setLastCellRead:(id)read;	// 0x359b1e1d
- (void)skipCells:(long)cells;	// 0x359b1d11
- (id)table;	// 0x359b1cad
@end

