/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x3472268d; converted property
+ (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x347227cd
+ (void)initialize;	// 0x34722859
+ (id)regularExpressionWithString:(id)string;	// 0x3472281d
- (id)init;	// 0x347226b1
- (id)initWithCoder:(id)coder;	// 0x347228c1
- (id)initWithExpressionString:(id)expressionString;	// 0x3472269d
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x34722b3d
- (id)copyWithZone:(NSZone *)zone;	// 0x347226cd
- (void)dealloc;	// 0x34722ca1
- (void)encodeWithCoder:(id)coder;	// 0x34722899
// converted property getter: - (id)expressionString;	// 0x3472268d
- (unsigned)hash;	// 0x34722b1d
- (BOOL)isEqual:(id)equal;	// 0x34722741
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x347229b9
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x34722931
- (unsigned)numberOfSubexpressions;	// 0x34722679
@end

