/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
	NSString *_value;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x31991849
- (id)initWithObject:(id)object;	// 0x318e5ab5
- (id)constantValue;	// 0x318e7089
- (id)copyWithZone:(NSZone *)zone;	// 0x318fcdb1
- (void)dealloc;	// 0x318e7245
- (void)encodeWithCoder:(id)coder;	// 0x319917a1
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x318e96e9
- (unsigned)hash;	// 0x31991989
- (BOOL)isEqual:(id)equal;	// 0x31991909
- (id)keyPath;	// 0x318e5c5d
- (id)predicateFormat;	// 0x318e7bc5
@end
