/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression {
	NSString *_token;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x34e129e1
- (id)initWithString:(id)string;	// 0x34e1288d
- (id)constantValue;	// 0x34e12b2d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e12a95
- (void)dealloc;	// 0x34e12ad1
- (void)encodeWithCoder:(id)coder;	// 0x34e12939
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x34e12bc5
- (unsigned)hash;	// 0x34e12ba5
- (BOOL)isEqual:(id)equal;	// 0x34e12b3d
- (id)predicateFormat;	// 0x34e12b1d
@end

