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
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x327fe19d
+ (id)allocWithZone:(NSZone *)zone;	// 0x327ff845
- (id)initWithCoder:(id)coder;	// 0x327ff2b5
- (unsigned long)_cfTypeID;	// 0x32810995
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x328107b9
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x327febad
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x32801fb5
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x32800d29
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x32800bad
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x32801dc1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x327fe3c5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x32801edd
- (Class)classForCoder;	// 0x327fe999
- (id)copyWithZone:(NSZone *)zone;	// 0x327fe9b9
- (id)description;	// 0x32800db5
- (void)encodeWithCoder:(id)coder;	// 0x32800eb9
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x328021cd
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x328020a1
- (unsigned)hash;	// 0x327feb65
- (BOOL)isEqual:(id)equal;	// 0x327feb15
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x327fea19
- (unsigned)length;	// 0x327feb89
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x327fe9e9
- (id)string;	// 0x327fe3e9
@end

