/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"


@interface NSValue : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e1361d
+ (void)initialize;	// 0x35df3cc5
+ (id)value:(const void *)value withObjCType:(const char *)objCType;	// 0x35e78b79
+ (id)valueWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x35dd90fd
+ (id)valueWithNonretainedObject:(id)nonretainedObject;	// 0x35e00901
+ (id)valueWithPoint:(CGPoint)point;	// 0x35dd97e9
+ (id)valueWithPointer:(const void *)pointer;	// 0x35def5c1
+ (id)valueWithRange:(NSRange)range;	// 0x35e144e5
+ (id)valueWithRect:(CGRect)rect;	// 0x35df3e69
+ (id)valueWithSize:(CGSize)size;	// 0x35df3ea9
- (id)init;	// 0x35dd96fd
- (id)initWithBytes:(const void *)bytes objCType:(const char *)type;	// 0x35e79a0d
- (id)initWithCoder:(id)coder;	// 0x35e7930d
- (Class)classForCoder;	// 0x35e790d5
- (id)copyWithZone:(NSZone *)zone;	// 0x35e78bb9
- (id)description;	// 0x35e78fa1
- (void)encodeWithCoder:(id)coder;	// 0x35e790e5
- (void)getValue:(void *)value;	// 0x35e78b89
- (unsigned)hash;	// 0x35e78e35
- (BOOL)isEqual:(id)equal;	// 0x35e0c575
- (BOOL)isEqualToValue:(id)value;	// 0x35e78cd1
- (BOOL)isNSValue__;	// 0x35e6a879
- (id)nonretainedObjectValue;	// 0x35e1185d
- (const char *)objCType;	// 0x35e78b9d
- (CGPoint)pointValue;	// 0x35dd9a51
- (void *)pointerValue;	// 0x35de816d
- (NSRange)rangeValue;	// 0x35e1451d
- (CGRect)rectValue;	// 0x35dfbdb5
- (CGSize)sizeValue;	// 0x35e23b19
@end

