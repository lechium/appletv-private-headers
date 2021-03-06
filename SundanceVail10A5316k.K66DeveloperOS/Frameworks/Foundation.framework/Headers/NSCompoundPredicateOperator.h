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
+ (id)andPredicateOperator;	// 0x31a1be79
+ (id)notPredicateOperator;	// 0x31ac39f5
+ (id)orPredicateOperator;	// 0x31a1d959
- (id)initWithCoder:(id)coder;	// 0x31ac3abd
- (id)copyWithZone:(NSZone *)zone;	// 0x31ac3b3d
- (void)encodeWithCoder:(id)coder;	// 0x31ac3a3d
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object;	// 0x31ac3be5
- (BOOL)evaluatePredicates:(id)predicates withObject:(id)object substitutionVariables:(id)variables;	// 0x31a1d9a1
- (id)predicateFormat;	// 0x31ac3b4d
- (id)symbol;	// 0x31ac3b5d
@end

