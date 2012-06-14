/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;	// 12 = 0xc
	NSArray *_arguments;	// 16 = 0x10
}
@property(readonly, retain) NSArray *arguments;	// G=0x310e3065; converted property
- (id)initWithCoder:(id)coder;	// 0x310e3019
- (id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;	// 0x310e2e7d
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x310e3305
- (void)acceptVisitor:(id)visitor flags:(unsigned)flags;	// 0x310e34a1
// converted property getter: - (id)arguments;	// 0x310e3065
- (id)copyWithZone:(NSZone *)zone;	// 0x310e2f6d
- (void)dealloc;	// 0x310e2ef5
- (void)encodeWithCoder:(id)coder;	// 0x310e2fdd
- (id)expressionBlock;	// 0x310e3055
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x310e3075
- (id)predicateFormat;	// 0x310e32ad
@end
