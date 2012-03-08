/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSCompoundPredicateOperator : NSPredicateOperator {
}
+ (id)andPredicateOperator;	// 0x35e0debd
+ (id)notPredicateOperator;	// 0x35eaf645
+ (id)orPredicateOperator;	// 0x35e0f8ed
- (id)initWithCoder:(id)coder;	// 0x35eaf70d
- (id)copyWithZone:(NSZone *)zone;	// 0x35eaf78d
- (void)encodeWithCoder:(id)coder;	// 0x35eaf68d
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x35eaf831
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x35e0f935
- (id)predicateFormat;	// 0x35eaf79d
- (id)symbol;	// 0x35eaf7ad
@end

