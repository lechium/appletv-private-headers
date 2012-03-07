/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTextField.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSMutableString, NSTimer, NSDictionary;

@interface BRTextFieldControl : BRControl <BRTextField> {
@private
	id _delegate;	// 48 = 0x30
	id _characterDelegate;	// 52 = 0x34
	BRMarqueeTextControl *_displayString;	// 56 = 0x38
	NSMutableString *_clearString;	// 60 = 0x3c
	NSDictionary *_savedAttributes;	// 64 = 0x40
	BOOL _useSecureText;	// 68 = 0x44
	BOOL _processingDeleteChar;	// 69 = 0x45
	BOOL _showCursor;	// 70 = 0x46
	BOOL _cursorVisible;	// 71 = 0x47
	int _textLengthLimit;	// 72 = 0x48
	NSTimer *_textObscureTimer;	// 76 = 0x4c
	NSTimer *_cursorBlinkTimer;	// 80 = 0x50
}
@property(assign) id characterDelegate;	// G=0x33ace0b1; S=0x33ace0c1; converted property
@property(assign) id delegate;	// G=0x33ace091; S=0x33ace0a1; converted property
@property(assign) BOOL showCursor;	// G=0x33ace0d1; S=0x33ace0e1; converted property
@property(retain) id textAttributes;	// G=0x33ace1dd; S=0x33ace1ed; converted property
@property(assign) int textLengthLimit;	// G=0x33ace1bd; S=0x33ace1cd; converted property
@property(assign) BOOL useSecureText;	// G=0x33ace16d; S=0x33ace17d; converted property
- (id)init;	// 0x33acde8d
- (void)_blinkCursorTimerFired:(id)fired;	// 0x33acee35
- (id)_secureTextFromClearText;	// 0x33aceba1
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x33aced9d
- (void)_startSecureTextObscureTimer;	// 0x33acecb5
- (void)_stopBlinkCursorTimer;	// 0x33acee01
- (void)_stopSecureTextObscureTimer;	// 0x33aced69
- (id)accessibilityTraits;	// 0x33ace4f1
- (id)accessibilityValue;	// 0x33ace4d1
- (BOOL)brKeyEvent:(id)event;	// 0x33ace5b9
// converted property getter: - (id)characterDelegate;	// 0x33ace0b1
- (void)controlWasDeactivated;	// 0x33ace051
- (void)dealloc;	// 0x33acdfc9
// converted property getter: - (id)delegate;	// 0x33ace091
- (float)maxScrollPosition;	// 0x33ace491
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x33ace455
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x33ace0c1
- (void)setClearString:(id)string;	// 0x33ace329
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33ace0a1
- (void)setDisplayString:(id)string;	// 0x33ace275
- (void)setScrollPosition:(float)position;	// 0x33ace4b1
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x33ace0e1
- (void)setString:(id)string;	// 0x33ace555
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x33ace1ed
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x33ace1cd
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x33ace17d
// converted property getter: - (BOOL)showCursor;	// 0x33ace0d1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33ace385
- (id)stringValue;	// 0x33ace51d
// converted property getter: - (id)textAttributes;	// 0x33ace1dd
// converted property getter: - (int)textLengthLimit;	// 0x33ace1bd
// converted property getter: - (BOOL)useSecureText;	// 0x33ace16d
@end
