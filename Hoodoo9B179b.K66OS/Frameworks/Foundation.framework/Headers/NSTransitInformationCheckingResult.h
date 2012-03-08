/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSTextCheckingResult.h"

@class NSDictionary;

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;	// 4 = 0x4
	NSDictionary *_components;	// 12 = 0xc
	id _underlyingResult;	// 16 = 0x10
}
@property(readonly, retain) NSDictionary *components;	// G=0x310f0751; converted property
@property(readonly, assign) NSRange range;	// G=0x310f0575; converted property
@property(readonly, assign) void *underlyingResult;	// G=0x310f0761; 
- (id)initWithCoder:(id)coder;	// 0x310f0445
- (id)initWithRange:(NSRange)range components:(id)components;	// 0x310f0339
- (id)initWithRange:(NSRange)range components:(id)components underlyingResult:(void *)result;	// 0x310f02a5
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x310f06b5
// converted property getter: - (id)components;	// 0x310f0751
- (void)dealloc;	// 0x310f035d
- (void)encodeWithCoder:(id)coder;	// 0x310f03bd
// converted property getter: - (NSRange)range;	// 0x310f0575
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x310f0591
- (unsigned long long)resultType;	// 0x310f056d
// declared property getter: - (void *)underlyingResult;	// 0x310f0761
@end

