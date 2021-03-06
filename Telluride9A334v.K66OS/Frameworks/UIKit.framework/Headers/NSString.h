/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (UISafeInstantiators)
- (id)_initWithUTF8String:(const char *)utf8String maxLength:(unsigned)length;	// 0x3009a681
@end

@interface NSString (UIStringDrawing)
+ (void)_popAscentRoundingEnabled;	// 0x3004c631
+ (void)_popWordRoundingAllowed;	// 0x3004fef9
+ (void)_pushAscentRoundingEnabled:(BOOL)enabled;	// 0x3004c5d9
+ (void)_pushWordRoundingAllowed:(BOOL)allowed;	// 0x3004f535
- (CGSize)_drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x300983f9
- (void)_makeNeededAdjustmentsToAttributes:(id)attributes andPoint:(CGPoint *)point forWidth:(float)width;	// 0x300b4155
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x300b4071
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x3005667d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x300566d5
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x3003a755
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x3004fd31
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x3003a7a5
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x300ca42d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x300ca489
- (CGSize)drawAtPoint:(CGPoint)point withFont:(id)font;	// 0x300ca3bd
- (CGSize)drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x301e4a51
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font;	// 0x301e49f5
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode;	// 0x300fb561
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment;	// 0x300dff59
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing;	// 0x3009833d
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji;	// 0x30098395
- (id)securedStringIncludingLastCharacter:(BOOL)character;	// 0x301e4a41
- (CGSize)sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x300b39a9
- (CGSize)sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x30100d09
- (CGSize)sizeWithFont:(id)font;	// 0x3002e265
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size;	// 0x300bd5dd
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode;	// 0x301c6575
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode lineSpacing:(int)spacing;	// 0x300520b1
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x3003a5f1
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x3003a629
- (CGSize)sizeWithFont:(id)font minFontSize:(float)size actualFontSize:(float *)size3 forWidth:(float)width lineBreakMode:(int)mode;	// 0x30056301
- (id)stringWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x300b1a15
@end

@interface NSString (UICalloutViewAdditions)
- (id)stringByStandardizingWhitespace;	// 0x301a2009
@end

@interface NSString (UIKBExtras)
+ (id)_stringWithUnichar:(unsigned long)unichar;	// 0x30046965
+ (id)stringWithUnichar:(unsigned long)unichar;	// 0x3024ee91
- (BOOL)_containsSubstring:(id)substring;	// 0x30136cbd
- (unsigned)_editDistanceFrom:(id)from;	// 0x3024ec19
- (BOOL)_endsSentence;	// 0x3024e861
- (BOOL)_endsWord;	// 0x30169995
- (BOOL)_isDelete;	// 0x30143fe1
- (BOOL)_isLeftAssociative;	// 0x3024e8dd
- (BOOL)_isNaturallyRTL;	// 0x3004665d
- (BOOL)_isNewlineOrReturn;	// 0x3014402d
- (BOOL)_isPlainSpace;	// 0x301699f9
- (BOOL)_isSpace;	// 0x3024e9f5
- (BOOL)_isSpaceOrReturn;	// 0x3024e9ad
- (BOOL)_isTripledPunctuation;	// 0x3024e941
- (BOOL)_looksLikeEmailAddress;	// 0x3024ea3d
- (BOOL)_looksLikeNumberInput;	// 0x3024ea91
- (BOOL)_looksLikeURL;	// 0x3024eb89
- (id)_stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x30046909
- (id)_stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x300a56c1
- (id)_stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x301561fd
- (id)_stringByTrimmingLastCharacter;	// 0x301102a5
- (BOOL)containsSubstring:(id)substring;	// 0x30192141
- (unsigned)editDistanceFrom:(id)from;	// 0x3024f015
- (BOOL)endsSentence;	// 0x3024eedd
- (BOOL)endsWord;	// 0x3024eef5
- (BOOL)isDelete;	// 0x3024ef85
- (BOOL)isLeftAssociative;	// 0x3024ef0d
- (BOOL)isNaturallyRTL;	// 0x3024effd
- (BOOL)isNewlineOrReturn;	// 0x3024ef6d
- (BOOL)isPlainSpace;	// 0x3024ef25
- (BOOL)isSpace;	// 0x3024ef3d
- (BOOL)isSpaceOrReturn;	// 0x3024ef55
- (BOOL)isTripledPunctuation;	// 0x3024ef9d
- (BOOL)looksLikeEmailAddress;	// 0x3024efb5
- (BOOL)looksLikeNumberInput;	// 0x3024efcd
- (BOOL)looksLikeURL;	// 0x3024efe5
- (id)stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x3024eecd
- (id)stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x300a56b1
- (id)stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x3024eead
- (id)stringByTrimmingLastCharacter;	// 0x3024eebd
@end

@interface NSString (UIKitAdditions)
- (id)queryKeysAndValues;	// 0x3017a319
- (id)unescapedQueryValue;	// 0x3025355d
@end

@interface NSString (UIFontPrivate)
- (id)stringByStrippingLeadingAndTrailingWhitespace;	// 0x302577e5
@end

@interface NSString (_UIKeyboardEmojiAdditions)
- (id)_asUnicodeHex;	// 0x302ba7b5
- (id)_stringWithPublicEmojiCodePoints;	// 0x302ba735
- (id)_stringWithSoftBankEmojiCodePoints;	// 0x302ba775
@end

@interface NSString (UIWebViewAdditions)
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;	// 0x302df4fd
- (id)_uikit_stringWithWritingDirection:(int)writingDirection asOverride:(BOOL)override;	// 0x302df599
@end

@interface NSString (UIKBCandidateViewAdditions)
- (unsigned)countOfComposedCharacterSequences;	// 0x30328ca5
@end

