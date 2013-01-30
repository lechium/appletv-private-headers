/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class BRImageControl, BRTextFieldControl, BRCursorControl, BRTextFieldBackgroundLayer, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRTextEntryController : BRMenuController {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRTextFieldControl *_textField;	// 148 = 0x94
	BRImageControl *_verticalDividerImage;	// 152 = 0x98
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 156 = 0x9c
	BRTextControl *_textFieldLabel;	// 160 = 0xa0
	BRTextControlWithWiderFocusFrame *_submitButton;	// 164 = 0xa4
	BRTextControl *_footnoteText;	// 168 = 0xa8
	BRCursorControl *_cursor;	// 172 = 0xac
	BOOL _cursorNavigatedFromEditor;	// 176 = 0xb0
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 180 = 0xb4
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x33227d; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x333171; S=0x33318d; @synthesize=_maxFootnoteTextHeight
- (id)init;	// 0x331c31
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x331c45
- (void)_addCursor;	// 0x33323d
- (void)_historyItemSelected:(id)selected;	// 0x33319d
- (void)_removeCursor;	// 0x3332b1
- (void)_submitButtonClick:(id)click;	// 0x33321d
- (void)_switchFocusToSubmitButton;	// 0x3331ad
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x333015
- (id)accessibilityScreenContent;	// 0x332ff5
- (BOOL)brEventAction:(id)action;	// 0x332291
- (void)dealloc;	// 0x332115
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x33223d
// converted property getter: - (id)editor;	// 0x33227d
- (BOOL)isValidAfterDataUpdate;	// 0x33228d
- (void)layoutSubcontrols;	// 0x332519
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x333171
- (void)reset;	// 0x332fd5
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x33221d
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x332f4d
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x333019
- (void)setInitialTextEntryText:(id)text;	// 0x332ef9
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x33318d
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x332cc5
- (void)setShowUserEnteredText:(BOOL)text;	// 0x332fb5
- (void)setSupplementaryText:(id)text;	// 0x332d8d
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x33225d
- (void)setTextEntryStyle:(int)style;	// 0x332c89
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x332d9d
- (void)setTextFieldDelegate:(id)delegate;	// 0x332ed9
@end
