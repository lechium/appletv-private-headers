/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMenuController.h"

@class BRTextFieldControl, BRCursorControl, BRTextControlWithWiderFocusFrame, BRTextEntryControl, BRTextFieldBackgroundLayer, BRTextControl, BRImageControl;

@interface BRTextEntryController : BRMenuController {
@private
	BRTextEntryControl *_editor;	// 128 = 0x80
	BRTextFieldControl *_textField;	// 132 = 0x84
	BRImageControl *_verticalDividerImage;	// 136 = 0x88
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 140 = 0x8c
	BRTextControl *_textFieldLabel;	// 144 = 0x90
	BRTextControlWithWiderFocusFrame *_submitButton;	// 148 = 0x94
	BRTextControl *_footnoteText;	// 152 = 0x98
	BRCursorControl *_cursor;	// 156 = 0x9c
	BOOL _cursorNavigatedFromEditor;	// 160 = 0xa0
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 164 = 0xa4
}
@property(readonly, retain) BRTextEntryControl *editor;	// G=0x32a3c899; converted property
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x32a3d7ed; S=0x32a3d809; @synthesize=_maxFootnoteTextHeight
- (id)init;	// 0x32a3c221
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x32a3c235
- (void)_addCursor;	// 0x32a3d8b9
- (void)_historyItemSelected:(id)selected;	// 0x32a3d819
- (void)_removeCursor;	// 0x32a3d931
- (void)_submitButtonClick:(id)click;	// 0x32a3d899
- (void)_switchFocusToSubmitButton;	// 0x32a3d829
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x32a3d68d
- (id)accessibilityScreenContent;	// 0x32a3d66d
- (BOOL)brEventAction:(id)action;	// 0x32a3c8ad
- (void)dealloc;	// 0x32a3c731
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x32a3c859
// converted property getter: - (id)editor;	// 0x32a3c899
- (BOOL)isValidAfterDataUpdate;	// 0x32a3c8a9
- (void)layoutSubcontrols;	// 0x32a3caad
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x32a3d7ed
- (void)reset;	// 0x32a3d64d
- (void)setDisplayTextEntryHistory:(BOOL)history;	// 0x32a3c839
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x32a3d5c9
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x32a3d691
- (void)setInitialTextEntryText:(id)text;	// 0x32a3d575
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x32a3d809
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x32a3d331
- (void)setShowUserEnteredText:(BOOL)text;	// 0x32a3d62d
- (void)setSupplementaryText:(id)text;	// 0x32a3d3f9
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x32a3c879
- (void)setTextEntryStyle:(int)style;	// 0x32a3d2f1
- (void)setTextEntryTextFieldLabel:(id)label;	// 0x32a3d409
- (void)setTextFieldDelegate:(id)delegate;	// 0x32a3d555
@end

