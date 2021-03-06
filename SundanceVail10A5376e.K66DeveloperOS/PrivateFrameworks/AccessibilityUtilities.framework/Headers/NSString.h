/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (AXPriv)
+ (USet *)_characterSetWithPattern:(id)pattern;	// 0x341b3259
+ (USet *)_ideographSet;	// 0x341b332d
+ (USet *)_japaneseLetterSet;	// 0x341b3479
- (BOOL)_contentsExclusivelyInCharacterSet:(USet *)characterSet;	// 0x341b33c9
- (BOOL)_isJapanesePhrase;	// 0x341b3559
- (BOOL)_isOnlyIdeographs;	// 0x341b3519
@end

