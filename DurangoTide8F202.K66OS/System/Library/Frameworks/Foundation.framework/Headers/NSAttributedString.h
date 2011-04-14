/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x324d819d
+ (id)allocWithZone:(NSZone *)zone;	// 0x324d9845
- (id)initWithCoder:(id)coder;	// 0x324d92b5
- (unsigned long)_cfTypeID;	// 0x324ea995
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x324ea7b9
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x324d8bad
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x324dbfb5
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x324dad29
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x324dabad
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x324dbdc1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x324d83c5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x324dbedd
- (Class)classForCoder;	// 0x324d8999
- (id)copyWithZone:(NSZone *)zone;	// 0x324d89b9
- (id)description;	// 0x324dadb5
- (void)encodeWithCoder:(id)coder;	// 0x324daeb9
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x324dc1cd
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x324dc0a1
- (unsigned)hash;	// 0x324d8b65
- (BOOL)isEqual:(id)equal;	// 0x324d8b15
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x324d8a19
- (unsigned)length;	// 0x324d8b89
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324d89e9
- (id)string;	// 0x324d83e9
@end

