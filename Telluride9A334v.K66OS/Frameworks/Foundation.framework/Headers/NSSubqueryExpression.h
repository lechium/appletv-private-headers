/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSSubqueryExpression : NSExpression {
@private
	NSExpression *_collection;	// 12 = 0xc
	NSExpression *_variableExpression;	// 16 = 0x10
	NSPredicate *_subpredicate;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *collection;	// G=0x306d2231; converted property
@property(readonly, retain) NSExpression *variableExpression;	// G=0x306d2241; converted property
- (id)initWithCoder:(id)coder;	// 0x306d1f95
- (id)initWithExpression:(id)expression usingIteratorExpression:(id)expression2 predicate:(id)predicate;	// 0x306d1db1
- (id)initWithExpression:(id)expression usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x306d1cdd
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x306d25e5
- (BOOL)_shouldUseParensWithDescription;	// 0x306d26ed
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x306d26f1
// converted property getter: - (id)collection;	// 0x306d2231
- (id)copyWithZone:(NSZone *)zone;	// 0x306d20e1
- (void)dealloc;	// 0x306d1c69
- (void)encodeWithCoder:(id)coder;	// 0x306d1e99
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x306d2389
- (unsigned)hash;	// 0x306d2341
- (BOOL)isEqual:(id)equal;	// 0x306d2289
- (id)predicate;	// 0x306d2279
- (id)predicateFormat;	// 0x306d2195
- (id)variable;	// 0x306d2251
// converted property getter: - (id)variableExpression;	// 0x306d2241
@end

