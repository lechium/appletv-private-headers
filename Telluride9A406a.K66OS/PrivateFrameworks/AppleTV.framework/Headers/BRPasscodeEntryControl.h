/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRDeviceKeyboardMessage, BRPasscodeSelectionLayer;
@protocol BRTextFieldDelegate;

@interface BRPasscodeEntryControl : BRControl <BRTextField> {
@private
	BRPasscodeSelectionLayer *_passcodeLayer;	// 48 = 0x30
	unsigned _numDigits;	// 52 = 0x34
	BOOL _isUserEditable;	// 56 = 0x38
	CGSize _passcodeLayerSize;	// 60 = 0x3c
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 68 = 0x44
	id<BRTextFieldDelegate> _textFieldDelegate;	// 72 = 0x48
}
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x330cdc85
- (void)_handlePlayPauseButton:(id)button;	// 0x330ce669
- (void)_layoutUI;	// 0x330ce6d9
- (void)_shakeAnimationCompleted:(id)completed;	// 0x330ce1ed
- (id)accessibilityLabel;	// 0x330ced31
- (id)accessibilityTraits;	// 0x330cecad
- (BOOL)brEventAction:(id)action;	// 0x330ce245
- (void)controlWasFocused;	// 0x330ce529
- (void)controlWasUnfocused;	// 0x330ce5ad
- (void)dealloc;	// 0x330cdded
- (void)deviceKeyboardClose;	// 0x330ce71d
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x330ce8b9
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x330ce79d
- (BOOL)isAccessibilityElement;	// 0x330ceca9
- (CGSize)preferredSizeFromScreenSize:(CGSize)screenSize;	// 0x330cde7d
- (void)reset;	// 0x330cdf4d
- (void)setDelegate:(id)delegate;	// 0x330cdf1d
- (void)setFrame:(CGRect)frame;	// 0x330ce1fd
- (void)setInitialPasscode:(id)passcode;	// 0x330cdf2d
- (void)setKeyboardTitle:(id)title;	// 0x330ce5ed
- (void)setString:(id)string;	// 0x330ce649
- (void)shake;	// 0x330cdfed
- (id)stringValue;	// 0x330ce629
- (float)widthOfDigitsFromScreenSize:(CGSize)screenSize;	// 0x330cdefd
@end

