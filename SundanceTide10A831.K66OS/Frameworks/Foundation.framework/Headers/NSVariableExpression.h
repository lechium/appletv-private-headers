/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString *_variable;	// 12 = 0xc
}
@property(readonly, retain) NSString *variable;	// G=0x325e8e69; converted property
- (id)initWithCoder:(id)coder;	// 0x325e8ce9
- (id)initWithObject:(id)object;	// 0x325e8bed
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x325e903d
- (id)copyWithZone:(NSZone *)zone;	// 0x325e8da9
- (void)dealloc;	// 0x325e8ba1
- (void)encodeWithCoder:(id)coder;	// 0x325e8c41
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x325e8f21
- (unsigned)hash;	// 0x325e8ef9
- (BOOL)isEqual:(id)equal;	// 0x325e8e79
- (id)predicateFormat;	// 0x325e8de5
// converted property getter: - (id)variable;	// 0x325e8e69
@end
