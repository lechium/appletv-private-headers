/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSRunStorage : NSObject <NSCopying> {
@private
	unsigned _count;	// 4 = 0x4
	unsigned _elementSize;	// 8 = 0x8
	unsigned _numBlocks;	// 12 = 0xc
	unsigned _maxBlocks;	// 16 = 0x10
	unsigned _indexDeltaStartBlock;	// 20 = 0x14
	int _indexDelta;	// 24 = 0x18
	NSRunBlock *_runs;	// 28 = 0x1c
	unsigned _cachedBlock;	// 32 = 0x20
	NSRange _cachedBlockRange;	// 36 = 0x24
	unsigned _gapBlockIndex;	// 44 = 0x2c
}
@property(readonly, assign) unsigned count;	// G=0x35ef115d; converted property
@property(readonly, assign) unsigned elementSize;	// G=0x35ef116d; converted property
+ (void)_setConsistencyCheckingEnabled:(BOOL)enabled superCheckEnabled:(BOOL)enabled2;	// 0x35ef29e9
+ (void)initialize;	// 0x35ef0e5d
- (id)init;	// 0x35ef1001
- (id)initWithElementSize:(unsigned)elementSize capacity:(unsigned)capacity;	// 0x35ef0efd
- (id)initWithRunStorage:(id)runStorage;	// 0x35ef1015
- (void)_allocData:(unsigned long)data;	// 0x35ef0e9d
- (void)_consistencyCheck:(int)check;	// 0x35ef2a39
- (void)_consistencyError:(int)error startAtZeroError:(BOOL)zeroError cacheError:(BOOL)error3 inconsistentBlockError:(BOOL)error4;	// 0x35ef2c3d
- (void)_deallocData;	// 0x35ef0edd
- (void)_ensureCapacity:(unsigned)capacity;	// 0x35ef27f5
- (void)_moveGapAndMergeWithBlockRange:(NSRange)blockRange;	// 0x35ef2991
- (void)_moveGapToBlockIndex:(unsigned)blockIndex;	// 0x35ef28d1
- (void)_reallocData:(unsigned long)data;	// 0x35ef0ebd
- (id)copyWithZone:(NSZone *)zone;	// 0x35ef1119
// converted property getter: - (unsigned)count;	// 0x35ef115d
- (void)dealloc;	// 0x35ef10c9
- (id)description;	// 0x35ef25cd
- (void *)elementAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35ef117d
// converted property getter: - (unsigned)elementSize;	// 0x35ef116d
- (void)insertElement:(void *)element range:(NSRange)range coalesceRuns:(BOOL)runs;	// 0x35ef258d
- (void)removeElementsInRange:(NSRange)range coalesceRuns:(BOOL)runs;	// 0x35ef25b1
- (void)replaceElementsInRange:(NSRange)range withElement:(void *)element coalesceRuns:(BOOL)runs;	// 0x35ef1525
@end

