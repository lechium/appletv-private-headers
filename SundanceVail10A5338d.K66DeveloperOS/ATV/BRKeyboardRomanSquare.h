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
- (id)_keyboardDataFileName;	// 0x2def81
- (float)_mainKeysVerticalSpacing;	// 0x2defb1
- (int)_numberOfMainKeyRows;	// 0x2defad
- (float)_preferredGlyphHeight:(id)height;	// 0x2defa5
- (float)_preferredGlyphWidth:(id)width;	// 0x2def9d
- (id)_spinner;	// 0x2df3d5
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x2df3d1
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x2dee8d
- (id)attributesForTextFieldLabel;	// 0x2dee65
- (BOOL)canShowLanguageSwitchButton;	// 0x2dee89
- (id)customizedTextEntryFieldControls;	// 0x2dede5
- (void)customizedTextFieldControlsWereRemoved;	// 0x2dee39
- (void)dealloc;	// 0x2ded19
- (CGRect)spinnerFrame;	// 0x2df2c1
- (void)startSpinning;	// 0x2ded65
- (void)stopSpinning;	// 0x2deda5
- (CGRect)tabControlFrame;	// 0x2df185
- (CGRect)textFieldFrame;	// 0x2defb9
@end

