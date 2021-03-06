/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {
	NSRange _range;	// 4 = 0x4
	NSURL *_url;	// 12 = 0xc
}
@property(readonly, assign) NSRange range;	// G=0x373f81f5; converted property
- (id)initWithCoder:(id)coder;	// 0x373f80c1
- (id)initWithRange:(NSRange)range URL:(id)url;	// 0x373f7f0d
- (id)URL;	// 0x373f83a9
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x373f830d
- (void)dealloc;	// 0x373f7f75
- (id)description;	// 0x373f7fc1
- (void)encodeWithCoder:(id)coder;	// 0x373f8031
// converted property getter: - (NSRange)range;	// 0x373f81f5
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x373f820d
- (unsigned long long)resultType;	// 0x373f81ed
@end

