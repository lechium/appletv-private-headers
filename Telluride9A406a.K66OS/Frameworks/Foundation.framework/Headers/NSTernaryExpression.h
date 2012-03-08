/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSPredicate;

@interface NSTernaryExpression : NSExpression {
@private
	NSPredicate *_predicate;	// 12 = 0xc
	NSExpression *_trueExpression;	// 16 = 0x10
	NSExpression *_falseExpression;	// 20 = 0x14
}
@property(readonly, retain) NSExpression *falseExpression;	// G=0x35eae0a5; converted property
@property(readonly, retain) NSPredicate *predicate;	// G=0x35eae085; converted property
@property(readonly, retain) NSExpression *trueExpression;	// G=0x35eae095; converted property
- (id)initWithCoder:(id)coder;	// 0x35eadd05
- (id)initWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x35eadae5
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x35eae169
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x35eae0b5
- (id)copyWithZone:(NSZone *)zone;	// 0x35eade21
- (void)dealloc;	// 0x35eadb75
- (void)encodeWithCoder:(id)coder;	// 0x35eadc09
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x35eae269
// converted property getter: - (id)falseExpression;	// 0x35eae0a5
- (BOOL)isEqual:(id)equal;	// 0x35eadee1
// converted property getter: - (id)predicate;	// 0x35eae085
- (id)predicateFormat;	// 0x35eadfe9
// converted property getter: - (id)trueExpression;	// 0x35eae095
@end

