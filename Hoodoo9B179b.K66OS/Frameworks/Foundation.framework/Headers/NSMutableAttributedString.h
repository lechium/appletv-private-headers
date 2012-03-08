/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSAttributedString.h"


@interface NSMutableAttributedString : NSAttributedString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x310259b1
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x310e45a9
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x310e46d5
- (void)addAttributesWeakly:(id)weakly range:(NSRange)range;	// 0x310e4805
- (void)appendAttributedString:(id)string;	// 0x310e4aad
- (void)beginEditing;	// 0x310e4bb1
- (void)deleteCharactersInRange:(NSRange)range;	// 0x310e4af5
- (void)endEditing;	// 0x310e4bb5
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x310e4a8d
- (id)mutableString;	// 0x310e455d
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x310e48e1
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x310e49ad
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x310e4515
- (void)setAttributedString:(id)string;	// 0x310e4b69
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x310e4539
@end

