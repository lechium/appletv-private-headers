/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSSelfExpression : NSExpression {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3464f275
+ (id)defaultInstance;	// 0x34716f25
+ (void)initialize;	// 0x346718b5
- (id)init;	// 0x3464f285
- (id)initWithCoder:(id)coder;	// 0x34671aa1
- (id)_initPrivate;	// 0x346718e9
- (BOOL)_isDeallocating;	// 0x34716f3d
- (BOOL)_tryRetain;	// 0x34716f41
- (id)autorelease;	// 0x3467191d
- (id)copyWithZone:(NSZone *)zone;	// 0x34675859
- (void)encodeWithCoder:(id)coder;	// 0x34716f45
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x346745b1
- (unsigned)hash;	// 0x34716fc5
- (BOOL)isEqual:(id)equal;	// 0x34671e0d
- (id)predicateFormat;	// 0x34716fcd
- (oneway void)release;	// 0x3464f319
- (id)retain;	// 0x3464f315
- (unsigned)retainCount;	// 0x34716f35
@end
