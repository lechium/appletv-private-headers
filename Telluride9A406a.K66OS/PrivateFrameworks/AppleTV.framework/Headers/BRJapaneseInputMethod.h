/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
@private
	NSString *_mostRecentCandidateBaseCharacter;	// 32 = 0x20
}
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x330a39a9
- (id)candidates;	// 0x330a39a5
- (void)dealloc;	// 0x330a3905
- (BOOL)inputText:(id)text;	// 0x330a39a1
- (id)isoLanguageCode;	// 0x330a395d
- (id)name;	// 0x330a3951
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x330a3969
@end

