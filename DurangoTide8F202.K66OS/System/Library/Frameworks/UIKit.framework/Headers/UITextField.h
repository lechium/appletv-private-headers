/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UITextInputTraits.h"
#import "UIControl.h"

@class UITextFieldLabel, UILabel, NSString, UITextFieldBackgroundView, UIButton, UIFont, UIImageView, UITextInputTraits, UITextInteractionAssistant, UITextSelectionView, UIImage, UIColor, UITextFieldAtomBackgroundView, UITextFieldBorderView;
@protocol UITextFieldDelegate;

@interface UITextField : UIControl <UITextInputTraits, NSCoding> {
@private
	NSString *_text;	// 68 = 0x44
	UIColor *_textColor;	// 72 = 0x48
	int _borderStyle;	// 76 = 0x4c
	float _minimumFontSize;	// 80 = 0x50
	id _delegate;	// 84 = 0x54
	UIImage *_background;	// 88 = 0x58
	UIImage *_disabledBackground;	// 92 = 0x5c
	int _clearButtonMode;	// 96 = 0x60
	UIView *_leftView;	// 100 = 0x64
	int _leftViewMode;	// 104 = 0x68
	UIView *_rightView;	// 108 = 0x6c
	int _rightViewMode;	// 112 = 0x70
	UITextInputTraits *_traits;	// 116 = 0x74
	UITextInputTraits *_nonAtomTraits;	// 120 = 0x78
	float _fullFontSize;	// 124 = 0x7c
	float _paddingLeft;	// 128 = 0x80
	float _paddingTop;	// 132 = 0x84
	float _paddingRight;	// 136 = 0x88
	float _paddingBottom;	// 140 = 0x8c
	NSString *_textFont;	// 144 = 0x90
	UIColor *_caretColor;	// 148 = 0x94
	NSRange _selectionRange;	// 152 = 0x98
	int _scrollXOffset;	// 160 = 0xa0
	int _scrollYOffset;	// 164 = 0xa4
	float _progress;	// 168 = 0xa8
	NSString *_style;	// 172 = 0xac
	double _mouseDownTime;	// 176 = 0xb0
	UIButton *_clearButton;	// 184 = 0xb8
	CGSize _clearButtonOffset;	// 188 = 0xbc
	CGSize _leftViewOffset;	// 196 = 0xc4
	CGSize _rightViewOffset;	// 204 = 0xcc
	UITextFieldBorderView *_backgroundView;	// 212 = 0xd4
	UITextFieldBorderView *_disabledBackgroundView;	// 216 = 0xd8
	UITextFieldBackgroundView *_systemBackgroundView;	// 220 = 0xdc
	UITextFieldLabel *_textLabel;	// 224 = 0xe0
	UITextFieldLabel *_placeholderLabel;	// 228 = 0xe4
	UIImageView *_iconView;	// 232 = 0xe8
	UILabel *_label;	// 236 = 0xec
	float _labelOffset;	// 240 = 0xf0
	UITextInteractionAssistant *_interactionAssistant;	// 244 = 0xf4
	UITextSelectionView *_selectionView;	// 248 = 0xf8
	UIView *_inputView;	// 252 = 0xfc
	UIView *_inputAccessoryView;	// 256 = 0x100
	UITextFieldAtomBackgroundView *_atomBackgroundView;	// 260 = 0x104
	struct {
		unsigned secureTextChanged : 1;
		unsigned guard : 1;
		unsigned delegateRespondsToHandleKeyDown : 1;
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned contentsRTL : 1;
		unsigned explicitAlignment : 1;
	} _textFieldFlags;	// 264 = 0x108
}
@property(assign, nonatomic) BOOL adjustsFontSizeToFitWidth;	// G=0x305ace85; S=0x306e0055; 
@property(assign) int atomStyle;	// G=0x306e1b71; S=0x306e1b91; converted property
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(retain, nonatomic) UIImage *background;	// G=0x30709291; S=0x30605019; @synthesize=_background
@property(assign, nonatomic) int borderStyle;	// G=0x307092b1; S=0x30611e59; @synthesize=_borderStyle
@property(assign) BOOL caretBlinks;	// G=0x3070926d; S=0x30709269; converted property
@property(readonly, retain) UIButton *clearButton;	// G=0x3060a765; converted property
@property(assign, nonatomic) int clearButtonMode;	// G=0x305ad425; S=0x30604ee1; @synthesize=_clearButtonMode
@property(assign) CGSize clearButtonOffset;	// G=0x30709209; S=0x3070bd39; converted property
@property(assign, nonatomic) BOOL clearsOnBeginEditing;	// G=0x30667e1d; S=0x307091ad; 
@property(assign, nonatomic) id<UITextFieldDelegate> delegate;	// G=0x306b2419; S=0x306048a5; @synthesize=_delegate
@property(retain, nonatomic) UIImage *disabledBackground;	// G=0x30709281; S=0x30605065; @synthesize=_disabledBackground
@property(assign) BOOL drawsAsAtom;	// G=0x30603e49; S=0x3062d7c5; converted property
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x305ad195; 
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x3060af9d; S=0x306048b5; 
@property(retain) UIView *inputAccessoryView;	// G=0x3066b285; S=0x306bb391; 
@property(retain) UIView *inputView;	// G=0x3066b26d; S=0x306bb365; @synthesize=_inputView
@property(readonly, retain) UITextInteractionAssistant *interactionAssistant;	// G=0x3066aad5; converted property
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(retain, nonatomic) UIView *leftView;	// G=0x30709271; S=0x306049b1; @synthesize=_leftView
@property(assign, nonatomic) int leftViewMode;	// G=0x3060a9d5; S=0x30604a11; @synthesize=_leftViewMode
@property(assign, nonatomic) float minimumFontSize;	// G=0x307092a1; S=0x306de38d; @synthesize=_minimumFontSize
@property(assign) float paddingBottom;	// G=0x307091e9; S=0x306b1e45; converted property
@property(assign) float paddingLeft;	// G=0x307091c9; S=0x30617319; converted property
@property(assign) float paddingRight;	// G=0x307091f9; S=0x30709821; converted property
@property(assign) float paddingTop;	// G=0x307091d9; S=0x306172e5; converted property
@property(copy, nonatomic) NSString *placeholder;	// G=0x306060b1; S=0x3060526d; 
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(retain, nonatomic) UIView *rightView;	// G=0x3062d95d; S=0x30604e81; @synthesize=_rightView
@property(assign, nonatomic) int rightViewMode;	// G=0x3060a9c1; S=0x30604c85; @synthesize=_rightViewMode
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// S=0x30709a89; @dynamic
@property(assign) NSRange selectionRange;	// G=0x3070a5b9; S=0x307095ed; converted property
@property(readonly, retain) UITextSelectionView *selectionView;	// G=0x30665065; converted property
@property(assign) BOOL selectionVisible;	// G=0x30709265; S=0x30709261; converted property
@property(copy, nonatomic) NSString *text;	// G=0x305ad369; S=0x305ab881; 
@property(assign, nonatomic) int textAlignment;	// G=0x3060b0a9; S=0x30709975; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x3070919d; S=0x306126ad; 
@property(readonly, retain) UITextFieldLabel *textLabel;	// G=0x306dbfd1; converted property
@property(assign, getter=isUndoEnabled) BOOL undoEnabled;	// G=0x30709249; S=0x30709221; converted property
- (id)initWithCoder:(id)coder;	// 0x3070a7cd
- (id)initWithFrame:(CGRect)frame;	// 0x306030d9
- (CGRect)_atomBackgroundViewFrame;	// 0x306e36d5
- (void)_becomeFirstResponder;	// 0x30666f01
- (void)_becomeFirstResponderAndMakeVisible;	// 0x3070a729
- (void)_clearBackgroundViews;	// 0x305ad7ad
- (id)_clearButton;	// 0x306176d1
- (void)_clearButtonClicked:(id)clicked;	// 0x306c777d
- (void)_clearSelectionUI;	// 0x307096c5
- (void)_clearStyle;	// 0x30603421
- (id)_copyFont:(id)font newSize:(float)size maxSize:(float)size3;	// 0x306e00d5
- (id)_createCSSStyleDeclarationForWebView:(id)webView;	// 0x30668509
- (void)_drawTextInRect:(CGRect)rect forLabel:(id)label;	// 0x305aef91
- (void)_endedEditing;	// 0x30685175
- (id)_fieldEditor;	// 0x30603e15
- (BOOL)_fieldEditorAttached;	// 0x30617699
- (CGSize)_fontMetrics:(id)metrics;	// 0x305ade41
- (CGRect)_frameForLabel:(id)label inTextRect:(CGRect)textRect;	// 0x305adb1d
- (id)_keyboardResponder;	// 0x3066b2c1
- (CGSize)_leftViewOffset;	// 0x3070915d
- (float)_marginTopForText:(id)text;	// 0x305adc41
- (id)_placeholderColor;	// 0x306054b5
- (id)_placeholderLabel;	// 0x3070918d
- (id)_placeholderView;	// 0x306176b1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3070a1dd
- (BOOL)_requiresKeyboardResetOnReload;	// 0x3066b269
- (void)_resetSelectionUI;	// 0x30709681
- (void)_resignFirstResponder;	// 0x30684f1d
- (CGSize)_rightViewOffset;	// 0x30709175
- (id)_scriptingInfo;	// 0x306958fd
- (CGPoint)_scrollOffset;	// 0x30709129
- (BOOL)_sendInitialMouseEvents;	// 0x30709c19
- (void)_setImplicitAlignment;	// 0x305abe29
- (void)_setLeftViewOffset:(CGSize)offset;	// 0x30709b25
- (void)_setLtoRTextDirection:(id)direction;	// 0x30709321
- (void)_setNeedsStyleRecalc;	// 0x306033f9
- (void)_setRightViewOffset:(CGSize)offset;	// 0x3062d96d
- (void)_setRtoLTextDirection:(id)direction;	// 0x30709351
- (void)_setSystemBackgroundViewActive:(BOOL)active;	// 0x3061734d
- (BOOL)_shouldEndEditing;	// 0x30684e71
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;	// 0x306b2a59
- (BOOL)_showsAtomBackground;	// 0x306e3511
- (BOOL)_showsClearButton:(BOOL)button;	// 0x305ad1cd
- (BOOL)_showsClearButtonWhenEmpty;	// 0x3060a9d1
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)empty;	// 0x305ad229
- (BOOL)_showsLeftView;	// 0x305ad435
- (BOOL)_showsRightView;	// 0x305ad2dd
- (void)_sizeChanged:(BOOL)changed;	// 0x3060a705
- (id)_style;	// 0x30667fdd
- (Class)_systemBackgroundViewClass;	// 0x306dbab9
- (id)_text;	// 0x305ad3d5
- (id)_textLabelView;	// 0x306176c1
- (CGRect)_textRectExcludingButtonsForBounds:(CGRect)bounds;	// 0x305ada89
- (CGRect)_textRectForBounds:(CGRect)bounds forEditing:(BOOL)editing;	// 0x305ad881
- (CGSize)_textSize;	// 0x306dab8d
- (void)_updateAtomBackground;	// 0x305acb15
- (void)_updateAutosizeStyleIfNeeded;	// 0x305acbb9
- (void)_updateBackgroundViews;	// 0x305ad4c1
- (void)_updateButtons;	// 0x305ace9d
- (void)_updateLabel;	// 0x305aca05
- (void)_updateTextColor;	// 0x306dfd11
- (void)_updateTextLabel;	// 0x305abcd9
- (void)_windowBecameKey;	// 0x306b9bd5
- (id)actualFont;	// 0x30709b71
- (float)actualMinimumFontSize;	// 0x306e0095
- (CGRect)adjustedCaretRectForCaretRect:(CGRect)caretRect;	// 0x3066a355
// declared property getter: - (BOOL)adjustsFontSizeToFitWidth;	// 0x305ace85
// converted property getter: - (int)atomStyle;	// 0x306e1b71
- (void)attachFieldEditor:(id)editor;	// 0x30669db9
// declared property getter: - (id)background;	// 0x30709291
- (void)beginSelectionChange;	// 0x306e037d
- (CGRect)borderRectForBounds:(CGRect)bounds;	// 0x3060ab39
// declared property getter: - (int)borderStyle;	// 0x307092b1
- (BOOL)canBecomeFirstResponder;	// 0x30666d4d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x306e03c5
- (BOOL)canResignFirstResponder;	// 0x30684e59
- (void)cancelAutoscroll;	// 0x30709459
// converted property getter: - (BOOL)caretBlinks;	// 0x3070926d
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x30709585
// converted property getter: - (id)clearButton;	// 0x3060a765
// declared property getter: - (int)clearButtonMode;	// 0x305ad425
// converted property getter: - (CGSize)clearButtonOffset;	// 0x30709209
- (CGRect)clearButtonRect;	// 0x3060ae81
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0x3060aec1
- (void)clearText;	// 0x3070b389
// declared property getter: - (BOOL)clearsOnBeginEditing;	// 0x30667e1d
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x3070a4b1
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x3070a415
- (id)content;	// 0x30603e01
- (void)copy:(id)copy;	// 0x30709381
- (id)createPlaceholderLabelWithFont:(id)font andTextAlignment:(int)alignment;	// 0x30605391
- (id)createTextLabelWithTextColor:(id)textColor;	// 0x30603449
- (id)customOverlayContainer;	// 0x30709931
- (void)cut:(id)cut;	// 0x3070b281
- (void)dealloc;	// 0x306baa91
// declared property getter: - (id)delegate;	// 0x306b2419
// declared property getter: - (id)disabledBackground;	// 0x30709281
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x3070986d
- (void)drawBorder:(CGRect)border;	// 0x3060cad1
- (void)drawPlaceholderInRect:(CGRect)rect;	// 0x3060cbcd
- (void)drawRect:(CGRect)rect;	// 0x3060ca91
- (void)drawTextInRect:(CGRect)rect;	// 0x305aeffd
// converted property getter: - (BOOL)drawsAsAtom;	// 0x30603e49
- (CGRect)editRect;	// 0x30668e9d
- (CGRect)editingRectForBounds:(CGRect)bounds;	// 0x30668e59
- (void)encodeWithCoder:(id)coder;	// 0x30709c5d
- (void)endSelectionChange;	// 0x306e03a1
- (BOOL)fieldEditor:(id)editor shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x30680e2d
- (BOOL)fieldEditor:(id)editor shouldReplaceWithText:(id)text;	// 0x30680e91
- (NSRange)fieldEditor:(id)editor willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;	// 0x30680fb9
- (void)fieldEditorDidChange:(id)fieldEditor;	// 0x30681095
- (void)fieldEditorDidChangeSelection:(id)fieldEditor;	// 0x3066a19d
// declared property getter: - (id)font;	// 0x3060af9d
- (void)forwardInvocation:(id)invocation;	// 0x305abd81
- (BOOL)hasMarkedText;	// 0x306811c1
- (BOOL)hasSelection;	// 0x3070947d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3070b945
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30664bdd
- (CGRect)iconRect;	// 0x30611e09
// declared property getter: - (id)inputAccessoryView;	// 0x3066b285
// declared property getter: - (id)inputView;	// 0x3066b26d
- (void)insertText:(id)text;	// 0x30709431
// converted property getter: - (id)interactionAssistant;	// 0x3066aad5
- (BOOL)isAccessibilityElementByDefault;	// 0x307a640d
- (BOOL)isEditable;	// 0x30603bc9
// declared property getter: - (BOOL)isEditing;	// 0x305ad195
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x307a6411
// converted property getter: - (BOOL)isUndoEnabled;	// 0x30709249
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x306808fd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x3068218d
- (void)keyboardInputChangedSelection:(id)selection;	// 0x3066eebd
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x3070a61d
- (void)layoutSubviews;	// 0x305ac639
- (void)layoutTilesNow;	// 0x30709649
// declared property getter: - (id)leftView;	// 0x30709271
// declared property getter: - (int)leftViewMode;	// 0x3060a9d5
- (CGRect)leftViewRectForBounds:(CGRect)bounds;	// 0x3060aa61
- (id)methodSignatureForSelector:(SEL)selector;	// 0x305abd3d
// declared property getter: - (float)minimumFontSize;	// 0x307092a1
- (void)mouseDown:(GSEventRef)down;	// 0x3070b091
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3070af4d
- (void)mouseUp:(GSEventRef)up;	// 0x30709b91
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x30709401
// converted property getter: - (float)paddingBottom;	// 0x307091e9
// converted property getter: - (float)paddingLeft;	// 0x307091c9
// converted property getter: - (float)paddingRight;	// 0x307091f9
// converted property getter: - (float)paddingTop;	// 0x307091d9
- (void)paste:(id)paste;	// 0x3070b0e1
// declared property getter: - (id)placeholder;	// 0x306060b1
- (CGRect)placeholderRectForBounds:(CGRect)bounds;	// 0x3060aca1
- (void)promptForReplace:(id)replace;	// 0x307092c1
- (void)replace:(id)replace;	// 0x307092f1
- (BOOL)resignFirstResponder;	// 0x3062a901
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3060325d
// declared property getter: - (id)rightView;	// 0x3062d95d
// declared property getter: - (int)rightViewMode;	// 0x3060a9c1
- (CGRect)rightViewRectForBounds:(CGRect)bounds;	// 0x3062da1d
- (id)searchText;	// 0x306812a1
- (void)select:(id)select;	// 0x3070a3ad
- (void)selectAll;	// 0x3070b8fd
- (void)selectAll:(id)all;	// 0x3070a345
- (void)selectAllFromFieldEditor:(id)fieldEditor;	// 0x3070991d
- (id)selectedText;	// 0x306e0731
- (void)selectionChanged;	// 0x3066a0a1
- (CGRect)selectionClipRect;	// 0x3066ac61
// converted property getter: - (NSRange)selectionRange;	// 0x3070a5b9
- (id)selectionRectsForRange:(id)range;	// 0x3070b73d
// converted property getter: - (id)selectionView;	// 0x30665065
// converted property getter: - (BOOL)selectionVisible;	// 0x30709265
// declared property setter: - (void)setAdjustsFontSizeToFitWidth:(BOOL)fitWidth;	// 0x306e0055
- (void)setAnimating:(BOOL)animating;	// 0x306dac15
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x306e1b91
- (void)setAutoresizesTextToFit:(BOOL)fit;	// 0x306e003d
// declared property setter: - (void)setBackground:(id)background;	// 0x30605019
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)tap;	// 0x3062d799
// declared property setter: - (void)setBorderStyle:(int)style;	// 0x30611e59
- (void)setBounds:(CGRect)bounds;	// 0x3070bc69
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x30709269
// declared property setter: - (void)setClearButtonMode:(int)mode;	// 0x30604ee1
// converted property setter: - (void)setClearButtonOffset:(CGSize)offset;	// 0x3070bd39
- (void)setClearButtonStyle:(int)style;	// 0x306127ed
// declared property setter: - (void)setClearsOnBeginEditing:(BOOL)editing;	// 0x307091ad
- (void)setContentVerticalAlignment:(int)alignment;	// 0x306033a5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x306048a5
// declared property setter: - (void)setDisabledBackground:(id)background;	// 0x30605065
// converted property setter: - (void)setDrawsAsAtom:(BOOL)atom;	// 0x3062d7c5
- (void)setEnabled:(BOOL)enabled;	// 0x30709709
// declared property setter: - (void)setFont:(id)font;	// 0x306048b5
- (void)setFont:(id)font fullFontSize:(float)size;	// 0x30604949
- (void)setFrame:(CGRect)frame;	// 0x306032b9
- (void)setIcon:(id)icon;	// 0x30611c85
- (void)setInactiveHasDimAppearance:(BOOL)appearance;	// 0x307097b5
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x306bb391
// declared property setter: - (void)setInputView:(id)view;	// 0x306bb365
- (void)setLabel:(id)label;	// 0x306dbe01
- (void)setLabelOffset:(float)offset;	// 0x306dbff9
// declared property setter: - (void)setLeftView:(id)view;	// 0x306049b1
// declared property setter: - (void)setLeftViewMode:(int)mode;	// 0x30604a11
// declared property setter: - (void)setMinimumFontSize:(float)size;	// 0x306de38d
// converted property setter: - (void)setPaddingBottom:(float)bottom;	// 0x306b1e45
// converted property setter: - (void)setPaddingLeft:(float)left;	// 0x30617319
// converted property setter: - (void)setPaddingRight:(float)right;	// 0x30709821
// converted property setter: - (void)setPaddingTop:(float)top;	// 0x306172e5
- (void)setPaddingTop:(float)top paddingLeft:(float)left;	// 0x30612645
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3060526d
- (void)setProgress:(float)progress;	// 0x30709541
// declared property setter: - (void)setRightView:(id)view;	// 0x30604e81
// declared property setter: - (void)setRightViewMode:(int)mode;	// 0x30604c85
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x30709a89
// converted property setter: - (void)setSelectionRange:(NSRange)range;	// 0x307095ed
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x30709261
// declared property setter: - (void)setText:(id)text;	// 0x305ab881
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30709975
- (void)setTextAutorresizesToFit:(BOOL)fit;	// 0x30709855
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x30709521
- (void)setTextCentersVertically:(BOOL)vertically;	// 0x307094e1
// declared property setter: - (void)setTextColor:(id)color;	// 0x306126ad
- (void)setTextFont:(id)font;	// 0x3070b3d9
// converted property setter: - (void)setUndoEnabled:(BOOL)enabled;	// 0x30709221
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3070bd85
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x3070a555
- (id)supportedPasteboardTypes;	// 0x306e077d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x307098b9
// declared property getter: - (id)text;	// 0x305ad369
// declared property getter: - (int)textAlignment;	// 0x3060b0a9
// declared property getter: - (id)textColor;	// 0x3070919d
- (id)textInputTraits;	// 0x305abac1
// converted property getter: - (id)textLabel;	// 0x306dbfd1
- (CGRect)textRect;	// 0x306b1e85
- (CGRect)textRectForBounds:(CGRect)bounds;	// 0x305ad83d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x306e39a9
- (id)undoManager;	// 0x307094a1
- (id)webView;	// 0x307093e1
- (void)willAttachFieldEditor:(id)editor;	// 0x30667c99
- (void)willDetachFieldEditor:(id)editor;	// 0x30685105
@end

