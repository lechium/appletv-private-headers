/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRKeyboardRomanLogIn.h"
#import "AppleTV-Structs.h"

@class BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSearch : BRKeyboardRomanLogIn {
	BRWaitSpinnerControl *_spinner;	// 52 = 0x34
}
- (float)_mainKeysHorizontalSpacing;	// 0x3bcc8d
- (float)_mainKeysVerticalSpacing;	// 0x3bcc85
- (int)_numberOfMainKeyRows;	// 0x3bcc81
- (float)_preferredTextEntryControlWidth;	// 0x3bcc95
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3bcca1
- (id)attributesForTextFieldLabel;	// 0x3bcc3d
- (id)customizedTextEntryFieldControls;	// 0x3bcb4d
- (void)customizedTextFieldControlsWereRemoved;	// 0x3bcc11
- (void)dealloc;	// 0x3bca81
- (CGRect)keyboardControlFrame;	// 0x3bcca9
- (id)name;	// 0x3bcc71
- (BOOL)requiresTextFieldLabel;	// 0x3bcc7d
- (CGRect)spinnerFrame;	// 0x3bcdad
- (void)startSpinning;	// 0x3bcacd
- (void)stopSpinning;	// 0x3bcb0d
- (CGRect)tabControlFrame;	// 0x3bced5
- (CGRect)textFieldBackgroundFrame;	// 0x3bccf9
- (CGRect)textFieldFrame;	// 0x3bcd25
- (CGRect)textFieldLabelFrame;	// 0x3bcccd
@end

