/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSValue.h"
#import "Foundation-Structs.h"


@interface NSConcreteValue : NSValue {
	unsigned _specialFlags;	// 4 = 0x4
	void *typeInfo;	// 8 = 0x8
}
+ (void)initialize;	// 0x3551a4c9
+ (BOOL)supportsSecureCoding;	// 0x355ae905
- (const void *)_value;	// 0x3550776d
- (id)copyWithZone:(NSZone *)zone;	// 0x355353e1
- (id)description;	// 0x355ae429
- (void)encodeWithCoder:(id)coder;	// 0x35510431
- (void)getValue:(void *)value;	// 0x35502e89
- (unsigned)hash;	// 0x35504a61
- (BOOL)isEqualToValue:(id)value;	// 0x35507639
- (const char *)objCType;	// 0x35502e71
@end

