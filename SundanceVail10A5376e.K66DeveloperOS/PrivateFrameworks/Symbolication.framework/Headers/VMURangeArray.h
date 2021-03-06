/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Symbolication-Structs.h"


@interface VMURangeArray : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	VMURange *_ranges;	// 8 = 0x8
	unsigned _max;	// 12 = 0xc
	BOOL _sorted;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x3223dd71; converted property
@property(readonly, assign) VMURange *ranges;	// G=0x3223dd61; converted property
- (id)init;	// 0x3223ce95
- (id)initWithRanges:(const VMURange *)ranges count:(unsigned)count;	// 0x3223cf0d
- (void)addRange:(VMURange)range;	// 0x3223d119
- (void)addRanges:(id)ranges;	// 0x3223d20d
- (id)copyWithZone:(NSZone *)zone;	// 0x3223cfdd
// converted property getter: - (unsigned)count;	// 0x3223dd71
- (void)dealloc;	// 0x3223cf99
- (id)description;	// 0x3223dd81
- (unsigned)indexForLocation:(unsigned long long)location;	// 0x3223d2b5
- (void)insertRange:(VMURange)range atIndex:(unsigned)index;	// 0x3223d405
- (BOOL)intersectsLocation:(unsigned long long)location;	// 0x3223d541
- (BOOL)intersectsRange:(VMURange)range;	// 0x3223d649
- (VMURange)largestRange;	// 0x3223dc71
- (VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned *)index;	// 0x3223d84d
- (VMURange)range;	// 0x3223db5d
- (VMURange)rangeAtIndex:(unsigned)index;	// 0x3223d26d
- (VMURange)rangeForLocation:(unsigned long long)location;	// 0x3223d3bd
// converted property getter: - (VMURange *)ranges;	// 0x3223dd61
- (void)removeAllRanges;	// 0x3223d52d
- (void)removeRangeAtIndex:(unsigned)index;	// 0x3223d4d9
- (void)setCapacity:(unsigned)capacity;	// 0x3223d045
- (void)sort;	// 0x3223d07d
- (VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;	// 0x3223d74d
- (unsigned long long)sumLengths;	// 0x3223dd15
@end

