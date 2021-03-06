/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRKeyboard.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSquare : BRKeyboard {
	BRWaitSpinnerControl *_spinner;	// 48 = 0x30
}
- (id)_keyboardDataFileName;	// 0x316731
- (float)_mainKeysVerticalSpacing;	// 0x316761
- (int)_numberOfMainKeyRows;	// 0x31675d
- (float)_preferredGlyphHeight:(id)height;	// 0x316755
- (float)_preferredGlyphWidth:(id)width;	// 0x31674d
- (id)_spinner;	// 0x316b85
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x316b81
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x31663d
- (id)attributesForTextFieldLabel;	// 0x316615
- (BOOL)canShowLanguageSwitchButton;	// 0x316639
- (id)customizedTextEntryFieldControls;	// 0x316595
- (void)customizedTextFieldControlsWereRemoved;	// 0x3165e9
- (void)dealloc;	// 0x3164c9
- (CGRect)spinnerFrame;	// 0x316a71
- (void)startSpinning;	// 0x316515
- (void)stopSpinning;	// 0x316555
- (CGRect)tabControlFrame;	// 0x316935
- (CGRect)textFieldFrame;	// 0x316769
@end

