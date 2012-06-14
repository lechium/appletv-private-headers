/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSetExpression : NSExpression {
@private
	NSExpression *_left;	// 12 = 0xc
	NSExpression *_right;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x31ac08a1
- (id)initWithType:(unsigned)type leftExpression:(id)expression rightExpression:(id)expression3;	// 0x31ac06d9
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x31ac0cb5
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x31ac0c11
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac0995
- (void)dealloc;	// 0x31ac0751
- (void)encodeWithCoder:(id)coder;	// 0x31ac07c9
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31ac0da9
- (BOOL)isEqual:(id)equal;	// 0x31ac0a51
- (id)leftExpression;	// 0x31ac0bf1
- (id)predicateFormat;	// 0x31ac0b31
- (id)rightExpression;	// 0x31ac0c01
@end

