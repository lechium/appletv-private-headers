/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
@private
	NSString *_value;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x35eac041
- (id)initWithObject:(id)object;	// 0x35deaac5
- (id)constantValue;	// 0x35df2aed
- (id)copyWithZone:(NSZone *)zone;	// 0x35e11361
- (void)dealloc;	// 0x35dec481
- (void)encodeWithCoder:(id)coder;	// 0x35eabf99
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x35e100dd
- (unsigned)hash;	// 0x35eac185
- (BOOL)isEqual:(id)equal;	// 0x35eac101
- (id)keyPath;	// 0x35deacbd
- (id)predicateFormat;	// 0x35e0e441
@end

