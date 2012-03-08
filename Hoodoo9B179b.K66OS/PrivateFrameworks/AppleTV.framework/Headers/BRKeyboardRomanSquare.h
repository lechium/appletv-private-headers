/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSquare : BRKeyboard {
@private
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
}
- (id)_keyboardDataFileName;	// 0x302cbcd1
- (float)_mainKeysVerticalSpacing;	// 0x302cbd01
- (int)_numberOfMainKeyRows;	// 0x302cbcfd
- (float)_preferredGlyphHeight:(id)height;	// 0x302cbcf5
- (float)_preferredGlyphWidth:(id)width;	// 0x302cbced
- (id)_spinner;	// 0x302cc109
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x302cc105
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x302cbbe1
- (id)attributesForTextFieldLabel;	// 0x302cbbb9
- (BOOL)canShowLanguageSwitchButton;	// 0x302cbbdd
- (id)customizedTextEntryFieldControls;	// 0x302cbb39
- (void)customizedTextFieldControlsWereRemoved;	// 0x302cbb8d
- (void)dealloc;	// 0x302cba6d
- (CGRect)spinnerFrame;	// 0x302cc005
- (void)startSpinning;	// 0x302cbab9
- (void)stopSpinning;	// 0x302cbaf9
- (CGRect)tabControlFrame;	// 0x302cbecd
- (CGRect)textFieldFrame;	// 0x302cbd09
@end

