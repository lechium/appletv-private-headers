/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x312ceb09; converted property
+ (void)initialize;	// 0x312ce729
+ (id)regularExpressionWithString:(id)string;	// 0x312ce769
- (id)init;	// 0x312ce9c9
- (id)initWithCoder:(id)coder;	// 0x312ceda5
- (id)initWithExpressionString:(id)expressionString;	// 0x312ce81d
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x312ce831
- (id)copyWithZone:(NSZone *)zone;	// 0x312ce9e5
- (void)dealloc;	// 0x312ce7a5
- (void)encodeWithCoder:(id)coder;	// 0x312cee91
// converted property getter: - (id)expressionString;	// 0x312ceb09
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x312cee41
- (unsigned)hash;	// 0x312ceae9
- (BOOL)isEqual:(id)equal;	// 0x312cea61
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x312ceb19
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x312cec85
- (unsigned)numberOfSubexpressions;	// 0x312ce9b5
@end

