/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSRegularExpressionCheckingResult.h"

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
@private
	NSRegularExpression *_regularExpression;	// 4 = 0x4
	NSRange _ranges[7];	// 8 = 0x8
}
@property(readonly, retain) NSRegularExpression *regularExpression;	// G=0x35ec0735; converted property
- (id)initWithRangeArray:(id)rangeArray regularExpression:(id)expression;	// 0x35ec0645
- (id)initWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x35ec0535
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x35ec0761
- (void)dealloc;	// 0x35ec06e9
- (unsigned)numberOfRanges;	// 0x35ec0829
- (NSRange)range;	// 0x35ec0745
- (id)rangeArray;	// 0x35ec08e5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x35ec085d
// converted property getter: - (id)regularExpression;	// 0x35ec0735
@end

