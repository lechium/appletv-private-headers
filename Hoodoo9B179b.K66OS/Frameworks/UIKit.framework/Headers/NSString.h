/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (UISafeInstantiators)
- (id)_initWithUTF8String:(const char *)utf8String maxLength:(unsigned)length;	// 0x32f29bf9
@end

@interface NSString (UIStringDrawing)
+ (void)_popAscentRoundingEnabled;	// 0x32edcd09
+ (void)_popWordRoundingAllowed;	// 0x32ee05e1
+ (void)_pushAscentRoundingEnabled:(BOOL)enabled;	// 0x32edccb1
+ (void)_pushWordRoundingAllowed:(BOOL)allowed;	// 0x32edfc0d
- (CGSize)_drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x32f28aa5
- (void)_makeNeededAdjustmentsToAttributes:(id)attributes andPoint:(CGPoint *)point forWidth:(float)width;	// 0x32f43341
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x32f4325d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x32ee6d89
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font fontSize:(float)size lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x32ee6de1
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;	// 0x32ecab8d
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x32ee0419
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x32ecabdd
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment;	// 0x32f59869
- (CGSize)drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(id)font minFontSize:(float)size actualFontSize:(float *)size5 lineBreakMode:(int)mode baselineAdjustment:(int)adjustment includeEmoji:(BOOL)emoji;	// 0x32f598c5
- (CGSize)drawAtPoint:(CGPoint)point withFont:(id)font;	// 0x32f597f9
- (CGSize)drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x330756d5
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font;	// 0x33075679
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode;	// 0x32f8b30d
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment;	// 0x32f6f565
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing;	// 0x32f289e9
- (CGSize)drawInRect:(CGRect)rect withFont:(id)font lineBreakMode:(int)mode alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji;	// 0x32f28a41
- (id)securedStringIncludingLastCharacter:(BOOL)character;	// 0x330756c5
- (CGSize)sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x32f42b95
- (CGSize)sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x32f90b55
- (CGSize)sizeWithFont:(id)font;	// 0x32ebe5f9
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size;	// 0x32f4c8cd
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode;	// 0x33056f65
- (CGSize)sizeWithFont:(id)font constrainedToSize:(CGSize)size lineBreakMode:(int)mode lineSpacing:(int)spacing;	// 0x32ee2799
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x32ecaa29
- (CGSize)sizeWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode letterSpacing:(float)spacing;	// 0x32ecaa61
- (CGSize)sizeWithFont:(id)font minFontSize:(float)size actualFontSize:(float *)size3 forWidth:(float)width lineBreakMode:(int)mode;	// 0x32ee6a0d
- (id)stringWithFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;	// 0x32f40c01
@end

@interface NSString (UICalloutViewAdditions)
- (id)stringByStandardizingWhitespace;	// 0x33032be9
@end

@interface NSString (UIKBExtras)
+ (id)_stringWithUnichar:(unsigned long)unichar;	// 0x32ed6f29
+ (id)stringWithUnichar:(unsigned long)unichar;	// 0x330e2415
- (BOOL)_containsSubstring:(id)substring;	// 0x32fc75c5
- (unsigned)_editDistanceFrom:(id)from;	// 0x330e219d
- (BOOL)_endsSentence;	// 0x330e1de5
- (BOOL)_endsWord;	// 0x32ffa409
- (BOOL)_isDelete;	// 0x32fd4b29
- (BOOL)_isLeftAssociative;	// 0x330e1e61
- (BOOL)_isNaturallyRTL;	// 0x32ed6c21
- (BOOL)_isNewlineOrReturn;	// 0x32fd4b75
- (BOOL)_isPlainSpace;	// 0x32ffa46d
- (BOOL)_isSpace;	// 0x330e1f79
- (BOOL)_isSpaceOrReturn;	// 0x330e1f31
- (BOOL)_isTripledPunctuation;	// 0x330e1ec5
- (BOOL)_looksLikeEmailAddress;	// 0x330e1fc1
- (BOOL)_looksLikeNumberInput;	// 0x330e2015
- (BOOL)_looksLikeURL;	// 0x330e210d
- (id)_stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x32ed6ecd
- (id)_stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x32f34c09
- (id)_stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x32fe6cc1
- (id)_stringByTrimmingLastCharacter;	// 0x32fa069d
- (BOOL)containsSubstring:(id)substring;	// 0x33022c09
- (unsigned)editDistanceFrom:(id)from;	// 0x330e2599
- (BOOL)endsSentence;	// 0x330e2461
- (BOOL)endsWord;	// 0x330e2479
- (BOOL)isDelete;	// 0x330e2509
- (BOOL)isLeftAssociative;	// 0x330e2491
- (BOOL)isNaturallyRTL;	// 0x330e2581
- (BOOL)isNewlineOrReturn;	// 0x330e24f1
- (BOOL)isPlainSpace;	// 0x330e24a9
- (BOOL)isSpace;	// 0x330e24c1
- (BOOL)isSpaceOrReturn;	// 0x330e24d9
- (BOOL)isTripledPunctuation;	// 0x330e2521
- (BOOL)looksLikeEmailAddress;	// 0x330e2539
- (BOOL)looksLikeNumberInput;	// 0x330e2551
- (BOOL)looksLikeURL;	// 0x330e2569
- (id)stringByReplacingCharacter:(unsigned long)character withCharacter:(unsigned long)character2;	// 0x330e2451
- (id)stringByReplacingCharactersInSet:(CFCharacterSetRef)set withCharacter:(unsigned long)character;	// 0x32f34bf9
- (id)stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)cfcharacterSet;	// 0x330e2431
- (id)stringByTrimmingLastCharacter;	// 0x330e2441
@end

@interface NSString (UIKitAdditions)
- (id)queryKeysAndValues;	// 0x3300add1
- (id)unescapedQueryValue;	// 0x330e6b7d
@end

@interface NSString (UIFontPrivate)
- (id)stringByStrippingLeadingAndTrailingWhitespace;	// 0x330eae05
@end

@interface NSString (UIWebViewAdditions)
- (id)_uikit_stringByTrimmingWhitespaceAndNewlines;	// 0x33173559
- (id)_uikit_stringWithWritingDirection:(int)writingDirection asOverride:(BOOL)override;	// 0x331735f5
@end

@interface NSString (UIKBCandidateViewAdditions)
- (unsigned)countOfComposedCharacterSequences;	// 0x331beffd
@end

