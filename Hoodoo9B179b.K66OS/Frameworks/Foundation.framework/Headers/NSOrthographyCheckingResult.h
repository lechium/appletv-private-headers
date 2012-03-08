/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSOrthography;

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSOrthography *_orthography;	// 12 = 0xc
}
@property(readonly, retain) NSOrthography *orthography;	// G=0x310ec8bd; converted property
@property(readonly, assign) NSRange range;	// G=0x310ec6f9; converted property
- (id)initWithCoder:(id)coder;	// 0x310ec5c9
- (id)initWithRange:(NSRange)range orthography:(id)orthography;	// 0x310ec41d
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310ec821
- (void)dealloc;	// 0x310ec485
- (id)description;	// 0x310ec4d1
- (void)encodeWithCoder:(id)coder;	// 0x310ec541
// converted property getter: - (id)orthography;	// 0x310ec8bd
// converted property getter: - (NSRange)range;	// 0x310ec6f9
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310ec715
- (unsigned long long)resultType;	// 0x310ec6f1
@end

