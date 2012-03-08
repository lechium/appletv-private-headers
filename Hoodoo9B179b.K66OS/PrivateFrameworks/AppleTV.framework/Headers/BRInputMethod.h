/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableString, NSString, BRKeyboard, BRKeyboardCandidates, NSArray;

__attribute__((visibility("hidden")))
@interface BRInputMethod : NSObject {
@private
	int _textEntryStyle;	// 4 = 0x4
	NSArray *_keyboards;	// 8 = 0x8
	BOOL _includeHistoryKeyboard;	// 12 = 0xc
	NSString *_mostRecentCandidateCharacter;	// 16 = 0x10
	NSMutableString *_candidatesBuffer;	// 20 = 0x14
	BRKeyboard *_activeKeyboard;	// 24 = 0x18
	BRKeyboardCandidates *_candidatesKeyboard;	// 28 = 0x1c
}
@property(readonly, retain) BRKeyboardCandidates *candidatesKeyboard;	// G=0x302c6505; converted property
@property(assign) BOOL includeHistoryKeyboard;	// G=0x302c67dd; S=0x302c6439; converted property
@property(readonly, retain) NSArray *keyboards;	// G=0x302c64c5; converted property
@property(readonly, assign) int textEntryStyle;	// G=0x302c6429; converted property
- (id)init;	// 0x302c6281
- (id)_addHistoryKeyboard:(id)keyboard;	// 0x302c67f1
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x302c67ed
- (id)_removeHistoryKeyboard:(id)keyboard;	// 0x302c68ad
- (id)candidates;	// 0x302c67d9
// converted property getter: - (id)candidatesKeyboard;	// 0x302c6505
- (void)dealloc;	// 0x302c62e5
- (BOOL)deleteText;	// 0x302c6699
- (void)flushText;	// 0x302c6765
// converted property getter: - (BOOL)includeHistoryKeyboard;	// 0x302c67dd
- (BOOL)inputText:(id)text;	// 0x302c6595
- (id)isoLanguageCode;	// 0x302c6379
// converted property getter: - (id)keyboards;	// 0x302c64c5
- (id)mostRecentCharacter;	// 0x302c6689
- (id)name;	// 0x302c636d
- (void)removeCandidatesKeyboard;	// 0x302c6555
- (void)setActiveKeyboard:(id)keyboard;	// 0x302c64f1
// converted property setter: - (void)setIncludeHistoryKeyboard:(BOOL)keyboard;	// 0x302c6439
- (BOOL)setTextEntryStyle:(int)style displayTextEntryHistory:(BOOL)history;	// 0x302c637d
// converted property getter: - (int)textEntryStyle;	// 0x302c6429
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x302c6501
@end

