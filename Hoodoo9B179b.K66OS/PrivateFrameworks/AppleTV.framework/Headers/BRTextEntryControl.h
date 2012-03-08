/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTextFieldCharacterInputDelegate.h"
#import "BRControl.h"
#import "BRTabControlDelegate.h"

@class BRCursorControl, BRScrollControl, BRDeviceKeyboardMessage, BRTextEntryPlayPauseMessage, NSString, BRTextFieldBackgroundLayer, NSAttributedString, BRTabControl, BRKeyboardControl, NSArray, BRTextControl, BRInputMethod, NSMutableSet, BRKeyboard, BRTextFieldControl;

@interface BRTextEntryControl : BRControl <BRTabControlDelegate, BRTextFieldCharacterInputDelegate> {
@private
	int _textEntryStyle;	// 48 = 0x30
	BRInputMethod *_inputMethod;	// 52 = 0x34
	BRKeyboard *_activeKeyboard;	// 56 = 0x38
	NSMutableSet *_validInputCharacterSet;	// 60 = 0x3c
	BOOL _displayTextEntryHistory;	// 64 = 0x40
	NSString *_textEntryHistoryClient;	// 68 = 0x44
	NSString *_textEntryHistoryBehavior;	// 72 = 0x48
	BRTextEntryPlayPauseMessage *_playPauseMessage;	// 76 = 0x4c
	BRControl *_candidatesBackground;	// 80 = 0x50
	BRScrollControl *_candidatesKeysContainer;	// 84 = 0x54
	BRKeyboardControl *_keyboardControl;	// 88 = 0x58
	BRScrollControl *_keyboardContainer;	// 92 = 0x5c
	BRControl *_actionKeysContainer;	// 96 = 0x60
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 100 = 0x64
	BRTextControl *_textFieldLabel;	// 104 = 0x68
	NSAttributedString *_textFieldLabelString;	// 108 = 0x6c
	BRTextFieldControl *_textField;	// 112 = 0x70
	BRTabControl *_tabControl;	// 116 = 0x74
	BRCursorControl *_cursor;	// 120 = 0x78
	BOOL _providesOwnCursor;	// 124 = 0x7c
	NSArray *_customizedTextFieldControls;	// 128 = 0x80
	BRDeviceKeyboardMessage *_deviceKeyboardMessage;	// 132 = 0x84
	BRKeyboard *_popupKeyboard;	// 136 = 0x88
	CGPoint _focusedMainKeyRemembery;	// 140 = 0x8c
	BOOL _displayPopupKeyboardAfterKeyboardSwitch;	// 148 = 0x94
	CGColorRef _popupBackgroundColor;	// 152 = 0x98
	CGColorRef _popupBorderColor;	// 156 = 0x9c
	int _popupShadowStyle;	// 160 = 0xa0
	BOOL _constrainCursorToPopupKeyboard;	// 164 = 0xa4
	BRKeyboardControl *_popupKeyboardControl;	// 168 = 0xa8
	CGPoint _previousKeyboardFocus;	// 172 = 0xac
	int _textLengthLimit;	// 180 = 0xb4
	BOOL _showUserEnteredText;	// 184 = 0xb8
	BOOL _textFieldIsInternal;	// 185 = 0xb9
	BOOL _shouldRestoreTextFieldCursor;	// 186 = 0xba
	BOOL _shouldWrapHorizontally;	// 187 = 0xbb
	BOOL _shouldWrapVertically;	// 188 = 0xbc
	BOOL _clientHasSpecifiedHorizontalWrapping;	// 189 = 0xbd
	BOOL _clientHasSpecifiedVerticalWrapping;	// 190 = 0xbe
	BOOL _displayPlayPauseMessage;	// 191 = 0xbf
	NSString *_uniqueIDForPlayPauseRegistration;	// 192 = 0xc0
	NSString *_lastStringSetIntoTextField;	// 196 = 0xc4
}
@property(assign) BOOL canWrapHorizontally;	// G=0x302ce115; S=0x302ce139; converted property
@property(assign) BOOL canWrapVertically;	// G=0x302ce185; S=0x302ce1a9; converted property
@property(assign) CGPoint keyboardFocus;	// G=0x302ce685; S=0x302ce6b5; converted property
@property(assign) BOOL providesOwnFocusCursor;	// G=0x302ce4c5; S=0x302ce4d5; converted property
@property(retain) BRTabControl *tabControl;	// G=0x302ce885; S=0x302ce895; converted property
@property(assign) int textEntryStyle;	// G=0x302cdb85; S=0x302cd719; converted property
@property(retain) BRTextFieldControl *textField;	// G=0x302cdf11; S=0x302cdf21; converted property
@property(assign) id textFieldDelegate;	// G=0x302ce271; S=0x302ce251; converted property
@property(assign) int textLengthLimit;	// G=0x302cdec9; S=0x302cded9; converted property
- (id)init;	// 0x302cc471
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x302cc7f9
- (void)_addCursor;	// 0x302ced95
- (void)_addCustomizedTextFieldControls;	// 0x302cf67d
- (void)_addMainKeyboardContainerForKeyboard:(id)keyboard;	// 0x302cf2b5
- (void)_addOrRemoveCandidatesContainer:(id)container;	// 0x302cf3c5
- (void)_addOrRemoveTabControl;	// 0x302cee85
- (id)_bestKeyboardLanguage:(int)language;	// 0x302cf79d
- (id)_currentTextEntryStyleName;	// 0x302d11c9
- (void)_customizeTextEntryControls;	// 0x302cf3c9
- (void)_finalizeControlWasFocused;	// 0x302cf935
- (void)_generateKeyEventWithCharacters:(id)characters immediatelyObscureCharacters:(BOOL)characters2;	// 0x302d08b5
- (void)_handleDisplayPopupKeyboardEvent:(BOOL)event;	// 0x302d0a01
- (void)_inputActionAppendCandidate:(id)candidate;	// 0x302cfcb1
- (void)_inputActionAppendText:(id)text;	// 0x302cfaad
- (void)_inputActionClearText:(id)text;	// 0x302cfd1d
- (void)_inputActionDeleteText:(id)text;	// 0x302cfda9
- (void)_inputActionEscape:(id)escape;	// 0x302d0819
- (void)_inputActionSwitchInputMethod:(id)method;	// 0x302d0609
- (void)_inputActionSwitchKeyboard:(id)keyboard;	// 0x302cfe91
- (void)_invokeInputActionWithDictionary:(id)dictionary;	// 0x302cf995
- (id)_keyboardMappingData;	// 0x302cec51
- (void)_registerAsTextFieldCharacterInputDelegate;	// 0x302d0fa1
- (void)_removeActionKeysRow;	// 0x302cf385
- (void)_removeCursor;	// 0x302cee45
- (void)_removeCustomizedTextFieldControls;	// 0x302cf72d
- (void)_removePopupKeyboard;	// 0x302d0d8d
- (void)_saveTextEntryHistory;	// 0x302d0ea5
- (void)_setActiveKeyboard:(id)keyboard;	// 0x302cf255
- (BOOL)_shouldIgnoreKey:(id)key forTextField:(id)textField;	// 0x302cebb9
- (id)_stringFromRect:(CGRect)rect;	// 0x302d1161
- (void)_stripTrailingDotIfNecessary:(id)necessary;	// 0x302cfb85
- (void)_swapPopupkeyboard;	// 0x302d09c1
- (void)_textDidChangeNotification:(id)_text;	// 0x302d1219
- (void)_textDidEndEditingNotification:(id)_text;	// 0x302d12a1
- (void)_unregisterAsTextFieldCharacterInputDelegate;	// 0x302d1115
- (void)_wrapAroundEdge:(int)edge;	// 0x302cf799
- (id)accessibilityLabel;	// 0x302cca95
- (id)accessibilityScreenContent;	// 0x302ccad5
- (id)accessibilityTraits;	// 0x302cca69
- (id)accessibilityValue;	// 0x302ccab5
- (BOOL)brEventAction:(id)action;	// 0x302cd179
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x302ce115
// converted property getter: - (BOOL)canWrapVertically;	// 0x302ce185
- (void)completeTextEntry;	// 0x302ce0c1
- (void)controlWasActivated;	// 0x302ccce1
- (void)controlWasDeactivated;	// 0x302ccd6d
- (void)controlWasFocused;	// 0x302cd05d
- (void)controlWasUnfocused;	// 0x302cd0f5
- (void)dealloc;	// 0x302cc831
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x302cde5d
- (void)deleteTextEntryHistoryItem:(id)item forTextEntryHistoryClients:(id)textEntryHistoryClients textEntryBehaviors:(id)behaviors;	// 0x302cdda9
- (void)deviceKeyboardClose;	// 0x302d12b1
- (void)deviceKeyboardMessageHandler:(id)handler;	// 0x302d14ad
- (void)deviceKeyboardUpdate:(BOOL)update;	// 0x302d1331
- (void)dismissPopupKeyboard;	// 0x302ce9cd
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x302cdbf1
- (BOOL)focusIsAtRightEdge;	// 0x302ce5cd
- (void)invokeInputActionWithDictionary:(id)dictionary;	// 0x302ceba9
// converted property getter: - (CGPoint)keyboardFocus;	// 0x302ce685
- (void)layoutSubcontrols;	// 0x302ccde5
// converted property getter: - (BOOL)providesOwnFocusCursor;	// 0x302ce4c5
- (void)reset;	// 0x302ce371
- (void)saveTextEntryHistory;	// 0x302cdd7d
- (void)saveTextEntryHistoryUsingClient:(id)client textEntryBehavior:(id)behavior;	// 0x302cdd3d
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x302ce139
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x302ce1a9
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x302ce9bd
- (void)setDeviceKeyboardTitle:(id)title subText:(id)text;	// 0x302ce831
- (void)setDisplayPlayPauseMessage:(BOOL)message;	// 0x302ce9ed
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x302cdb95
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x302ce51d
- (void)setInitialText:(id)text;	// 0x302ce291
// converted property setter: - (void)setKeyboardFocus:(CGPoint)focus;	// 0x302ce6b5
- (void)setPopupBackgroundColor:(CGColorRef)color;	// 0x302ce95d
- (void)setPopupOutlineColor:(CGColorRef)color;	// 0x302ce995
- (void)setPopupShadowStyle:(int)style;	// 0x302ce985
// converted property setter: - (void)setProvidesOwnFocusCursor:(BOOL)cursor;	// 0x302ce4d5
- (void)setShowUserEnteredText:(BOOL)text;	// 0x302ce1f5
// converted property setter: - (void)setTabControl:(id)control;	// 0x302ce895
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x302cdcc9
// converted property setter: - (void)setTextEntryStyle:(int)style;	// 0x302cd719
// converted property setter: - (void)setTextField:(id)field;	// 0x302cdf21
// converted property setter: - (void)setTextFieldDelegate:(id)delegate;	// 0x302ce251
- (void)setTextFieldLabel:(id)label;	// 0x302ce3f5
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x302cded9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302ccaf5
- (void)startSpinning;	// 0x302ce0d5
- (void)stopSpinning;	// 0x302ce0f5
- (void)switchToKeyboardNamed:(id)keyboardNamed focusOnKeyboardAfterSwitch:(BOOL)aSwitch;	// 0x302ce769
// converted property getter: - (id)tabControl;	// 0x302ce885
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x302cebe9
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x302cec49
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x302cec4d
// converted property getter: - (int)textEntryStyle;	// 0x302cdb85
// converted property getter: - (id)textField;	// 0x302cdf11
// converted property getter: - (id)textFieldDelegate;	// 0x302ce271
// converted property getter: - (int)textLengthLimit;	// 0x302cdec9
@end

