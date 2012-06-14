/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMURangeArray.h"


@interface VMUNonOverlappingRangeArray : VMURangeArray {
}
- (void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;	// 0x313e0311
- (void)addRange:(VMURange)range;	// 0x313dfe89
- (VMURange)largestUnusedWithInUse:(id)use;	// 0x313e0505
- (void)mergeRange:(VMURange)range;	// 0x313e0065
- (void)mergeRange:(VMURange)range excludingRanges:(id)ranges;	// 0x313e0235
- (void)mergeRanges:(id)ranges;	// 0x313e01c9
- (void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;	// 0x313e0299
- (void)sortAndMergeRanges;	// 0x313dffa1
- (id)subtract:(id)subtract mergeRanges:(BOOL)ranges;	// 0x313e0441
@end

