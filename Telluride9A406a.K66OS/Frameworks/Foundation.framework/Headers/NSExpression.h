/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSExpression : NSObject <NSCoding, NSCopying> {
@private
	void *_reserved;	// 4 = 0x4
	unsigned _expressionType;	// 8 = 0x8
}
@property(readonly, assign) unsigned expressionType;	// G=0x35df2afd; converted property
+ (id)_newKeyPathExpressionForString:(id)string;	// 0x35df2aa5
+ (id)expressionForAggregate:(id)aggregate;	// 0x35eaaa6d
+ (id)expressionForBlock:(id)block arguments:(id)arguments;	// 0x35eaacf9
+ (id)expressionForConstantValue:(id)constantValue;	// 0x35e10b61
+ (id)expressionForEvaluatedObject;	// 0x35e0d471
+ (id)expressionForFunction:(id)function arguments:(id)arguments;	// 0x35e0f419
+ (id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;	// 0x35eaab09
+ (id)expressionForIntersectSet:(id)intersectSet with:(id)with;	// 0x35eaac51
+ (id)expressionForKeyPath:(id)keyPath;	// 0x35df2a39
+ (id)expressionForMinusSet:(id)minusSet with:(id)with;	// 0x35eaaca5
+ (id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;	// 0x35eaaab5
+ (id)expressionForSymbolicString:(id)symbolicString;	// 0x35eaaa25
+ (id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;	// 0x35eaaba9
+ (id)expressionForUnionSet:(id)unionSet with:(id)with;	// 0x35eaabfd
+ (id)expressionForVariable:(id)variable;	// 0x35eaa9dd
+ (id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;	// 0x35eaab5d
+ (id)expressionWithFormat:(id)format;	// 0x35eaa94d
+ (id)expressionWithFormat:(id)format argumentArray:(id)array;	// 0x35eaa8e9
+ (id)expressionWithFormat:(id)format arguments:(void *)arguments;	// 0x35eaa979
- (id)initWithCoder:(id)coder;	// 0x35e0d7f5
- (id)initWithExpressionType:(unsigned)expressionType;	// 0x35deab19
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x35eab071
- (BOOL)_shouldUseParensWithDescription;	// 0x35eab06d
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x35e0e2b5
- (id)arguments;	// 0x35eaaf29
- (id)collection;	// 0x35eaafb9
- (id)constantValue;	// 0x35eaae75
- (id)copyWithZone:(NSZone *)zone;	// 0x35eaadd5
- (id)description;	// 0x35eaae1d
- (void)encodeWithCoder:(id)coder;	// 0x35eaad4d
- (id)expressionBlock;	// 0x35eab049
// converted property getter: - (unsigned)expressionType;	// 0x35df2afd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x35eaadf9
- (id)falseExpression;	// 0x35eab025
- (id)function;	// 0x35eaaebd
- (id)keyPath;	// 0x35eaae51
- (id)leftExpression;	// 0x35eaaf4d
- (id)operand;	// 0x35eaaee1
- (id)predicate;	// 0x35eaaf95
- (id)predicateFormat;	// 0x35eaae2d
- (id)rightExpression;	// 0x35eaaf71
- (SEL)selector;	// 0x35eaaf05
- (id)subexpression;	// 0x35eaafdd
- (id)trueExpression;	// 0x35eab001
- (id)variable;	// 0x35eaae99
@end
