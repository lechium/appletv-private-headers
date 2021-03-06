/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMURangeArray, NSMutableArray;

@interface VMUNonOverlappingRangeValueTable : NSObject {
	VMURangeArray *_ranges;	// 4 = 0x4
	NSMutableArray *_values;	// 8 = 0x8
}
- (id)init;	// 0x34d33e79
- (unsigned)_indexForLocation:(unsigned long long)location;	// 0x34d32bf5
- (NSRange)_indexNSRangeForOverlappingRangesForVMURange:(VMURange)vmurange;	// 0x34d3430d
- (NSRange)_indexNSRangeInCandidateNSRange:(NSRange)candidateNSRange forVMURange:(VMURange)vmurange;	// 0x34d34361
- (void)setValue:(id)value forNonOverlappingRange:(VMURange)nonOverlappingRange;	// 0x34d3419d
- (void)setValue:(id)value forRange:(VMURange)range;	// 0x34d33f15
- (id)valueForLocation:(unsigned long long)location;	// 0x34d344c1
@end

