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
+ (id)allocWithZone:(NSZone *)zone;	// 0x319f8ed5
+ (id)defaultInstance;	// 0x31ac0625
+ (void)initialize;	// 0x31a1b4b5
- (id)init;	// 0x319f8ee5
- (id)initWithCoder:(id)coder;	// 0x31a1b6a1
- (id)_initPrivate;	// 0x31a1b4e9
- (BOOL)_isDeallocating;	// 0x31ac063d
- (BOOL)_tryRetain;	// 0x31ac0641
- (id)autorelease;	// 0x31a1b51d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a1f459
- (void)encodeWithCoder:(id)coder;	// 0x31ac0645
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x31a1e1b1
- (unsigned)hash;	// 0x31ac06c5
- (BOOL)isEqual:(id)equal;	// 0x31a1ba0d
- (id)predicateFormat;	// 0x31ac06cd
- (oneway void)release;	// 0x319f8f79
- (id)retain;	// 0x319f8f75
- (unsigned)retainCount;	// 0x31ac0635
@end
