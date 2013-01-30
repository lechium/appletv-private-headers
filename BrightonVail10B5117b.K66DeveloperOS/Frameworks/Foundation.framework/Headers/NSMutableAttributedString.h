/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSAttributedString.h"
#import "Foundation-Structs.h"


@interface NSMutableAttributedString : NSAttributedString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3194f95d
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x319992b5
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x319720c5
- (void)addAttributesWeakly:(id)weakly range:(NSRange)range;	// 0x31a3a231
- (void)appendAttributedString:(id)string;	// 0x31a3a40d
- (void)beginEditing;	// 0x3197220d
- (void)deleteCharactersInRange:(NSRange)range;	// 0x31a3a455
- (void)endEditing;	// 0x31972211
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x31a3a3ed
- (id)mutableString;	// 0x31a3a1e5
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x31999149
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x31a3a321
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x31a3a19d
- (void)setAttributedString:(id)string;	// 0x31a3a4c9
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x31a3a1c1
@end
