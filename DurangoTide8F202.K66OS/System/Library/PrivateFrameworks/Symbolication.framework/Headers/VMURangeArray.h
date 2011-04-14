/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library


@interface VMURangeArray : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	VMURange *_ranges;	// 8 = 0x8
	unsigned _max;	// 12 = 0xc
	BOOL _sorted;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x3018a535; converted property
@property(readonly, assign) VMURange *ranges;	// G=0x3018a525; converted property
- (id)init;	// 0x3018a581
- (id)initWithRanges:(const VMURange *)ranges count:(unsigned)count;	// 0x3018a651
- (void)addRange:(VMURange)range;	// 0x3018b07d
- (void)addRanges:(id)ranges;	// 0x3018a9f5
- (id)copyWithZone:(NSZone *)zone;	// 0x3018aa55
// converted property getter: - (unsigned)count;	// 0x3018a535
- (void)dealloc;	// 0x3018a6f1
- (id)description;	// 0x3018a955
- (unsigned)indexForLocation:(unsigned long long)location;	// 0x3018b311
- (void)insertRange:(VMURange)range atIndex:(unsigned)index;	// 0x3018ab95
- (BOOL)intersectsLocation:(unsigned long long)location;	// 0x3018b215
- (BOOL)intersectsRange:(VMURange)range;	// 0x3018aded
- (VMURange)largestRange;	// 0x3018a455
- (VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned *)index;	// 0x3018b59d
- (VMURange)range;	// 0x3018bf65
- (VMURange)rangeAtIndex:(unsigned)index;	// 0x3018b92d
- (VMURange)rangeForLocation:(unsigned long long)location;	// 0x3018adad
// converted property getter: - (VMURange *)ranges;	// 0x3018a525
- (void)removeAllRanges;	// 0x3018a445
- (void)removeRangeAtIndex:(unsigned)index;	// 0x3018a645
- (void)setCapacity:(unsigned)capacity;	// 0x3018aaad
- (void)sort;	// 0x3018abbd
- (VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;	// 0x3018b821
- (unsigned long long)sumLengths;	// 0x3018a4dd
@end

