/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpressionCheckingResult.h"

@class NSArray, NSRegularExpression;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
@private
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSArray *_rangeArray;	// 8 = 0x8
}
@property(readonly, retain) NSArray *rangeArray;	// G=0x324e2671; converted property
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x324e2661; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x324e4795
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x324e2881
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x324e4645
- (void)dealloc;	// 0x324e367d
- (unsigned)numberOfRanges;	// 0x324e2861
- (NSRange)range;	// 0x324e3f8d
// converted property getter: - (id)rangeArray;	// 0x324e2671
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x324e3f55
// converted property getter: - (id)regularExpression;	// 0x324e2661
@end

