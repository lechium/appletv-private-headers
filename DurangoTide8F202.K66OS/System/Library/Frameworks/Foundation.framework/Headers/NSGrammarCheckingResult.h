/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSArray *_details;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x324e244d; converted property
- (id)initWithCoder:(id)coder;	// 0x324e6545
- (id)initWithRange:(NSRange)range details:(id)details;	// 0x324e3d8d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x324e5335
- (void)dealloc;	// 0x324e3d45
- (void)encodeWithCoder:(id)coder;	// 0x324e6251
- (id)grammarDetails;	// 0x324e2465
// converted property getter: - (NSRange)range;	// 0x324e244d
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x324e53d9
- (unsigned long long)resultType;	// 0x324e2445
@end

