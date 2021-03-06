/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPredicateOperator.h"


@interface NSEqualityPredicateOperator : NSPredicateOperator {
	BOOL _negate;	// 12 = 0xc
	unsigned _options;	// 16 = 0x10
}
@property(assign, getter=isNegation) BOOL negation;	// G=0x318fce39; S=0x31995921; converted property
@property(readonly, assign) unsigned options;	// G=0x318e7079; converted property
- (id)initWithCoder:(id)coder;	// 0x3199572d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate;	// 0x318e607d
- (id)initWithOperatorType:(unsigned)operatorType modifier:(unsigned)modifier negate:(BOOL)negate options:(unsigned)options;	// 0x318e6049
- (void)_setOptions:(unsigned)options;	// 0x31995931
- (id)copyWithZone:(NSZone *)zone;	// 0x318fcb55
- (void)encodeWithCoder:(id)coder;	// 0x31995659
- (BOOL)isEqual:(id)equal;	// 0x31995941
// converted property getter: - (BOOL)isNegation;	// 0x318fce39
// converted property getter: - (unsigned)options;	// 0x318e7079
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object2;	// 0x318e9d31
- (id)predicateFormat;	// 0x31995809
// converted property setter: - (void)setNegation:(BOOL)negation;	// 0x31995921
@end

