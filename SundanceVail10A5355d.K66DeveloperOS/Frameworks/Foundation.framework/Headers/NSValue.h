/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSValue : NSObject <NSCopying, NSSecureCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34677ae5
+ (void)initialize;	// 0x34658019
+ (BOOL)supportsSecureCoding;	// 0x346e3351
+ (id)value:(const void *)value withObjCType:(const char *)objCType;	// 0x346e2b85
+ (id)valueWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x3463d225
+ (id)valueWithNonretainedObject:(id)nonretainedObject;	// 0x34664b45
+ (id)valueWithPoint:(CGPoint)point;	// 0x3463d925
+ (id)valueWithPointer:(const void *)pointer;	// 0x34653779
+ (id)valueWithRange:(NSRange)range;	// 0x34678a25
+ (id)valueWithRect:(CGRect)rect;	// 0x346581bd
+ (id)valueWithSize:(CGSize)size;	// 0x346581fd
- (id)init;	// 0x3463d83d
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x346e3a19
- (id)initWithCoder:(id)coder;	// 0x346e3355
- (Class)classForCoder;	// 0x346e3135
- (id)copyWithZone:(NSZone *)zone;	// 0x346e2bc9
- (id)description;	// 0x346e2ff1
- (void)encodeWithCoder:(id)coder;	// 0x346e3145
- (void)getValue:(void *)value;	// 0x346e2b99
- (unsigned)hash;	// 0x346e2e79
- (BOOL)isEqual:(id)equal;	// 0x346708b9
- (BOOL)isEqualToValue:(id)value;	// 0x346e2cf1
- (BOOL)isNSValue__;	// 0x346d4081
- (id)nonretainedObjectValue;	// 0x34675d59
- (const char *)objCType;	// 0x346e2bad
- (CGPoint)pointValue;	// 0x3463db85
- (void *)pointerValue;	// 0x3464cd25
- (NSRange)rangeValue;	// 0x34678a61
- (CGRect)rectValue;	// 0x34660095
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3478c105
- (CGSize)sizeValue;	// 0x34687ee1
@end

