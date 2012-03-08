/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSString *_phoneNumber;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSString *phoneNumber;	// G=0x310f0285; converted property
@property(readonly, assign) NSRange range;	// G=0x310f00c1; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x310f0295; 
- (id)initWithCoder:(id)coder;	// 0x310eff91
- (id)initWithRange:(NSRange)range phoneNumber:(id)number;	// 0x310efe15
- (id)initWithRange:(NSRange)range phoneNumber:(id)number underlyingResult:(void *)result;	// 0x310efd81
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310f01e9
- (void)dealloc;	// 0x310efe39
- (id)description;	// 0x310efe99
- (void)encodeWithCoder:(id)coder;	// 0x310eff09
// converted property getter: - (id)phoneNumber;	// 0x310f0285
// converted property getter: - (NSRange)range;	// 0x310f00c1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310f00dd
- (unsigned long long)resultType;	// 0x310f00b9
// declared property getter: - (void *)underlyingResult;	// 0x310f0295
@end

