/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInput.h"
#import "UIKit-Structs.h"
#import "UITextSelectingContainer.h"
#import "UIScrollView.h"

@class DOMHTMLElement, UIWebDocumentView, UIDelayedAction, UITextRange, NSDictionary, UITextPosition, WebFrame, UITextSelectionView, UITextInteractionAssistant, UIFont, UIColor, NSString;
@protocol UITextInputDelegate, UITextViewDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame *m_frame;	// 404 = 0x194
	DOMHTMLElement *m_body;	// 408 = 0x198
	int m_marginTop;	// 412 = 0x19c
	UIDelayedAction *m_selectionTimer;	// 416 = 0x1a0
	UIDelayedAction *m_longPressAction;	// 420 = 0x1a4
	BOOL m_editable;	// 424 = 0x1a8
	BOOL m_editing;	// 425 = 0x1a9
	BOOL m_becomesEditableWithGestures;	// 426 = 0x1aa
	BOOL m_reentrancyGuard;	// 427 = 0x1ab
	BOOL m_readyForScroll;	// 428 = 0x1ac
	BOOL m_hasExplicitTextAlignment;	// 429 = 0x1ad
	BOOL m_hasExplicitLineHeight;	// 430 = 0x1ae
	UITextInteractionAssistant *m_interactionAssistant;	// 432 = 0x1b0
	UITextSelectionView *m_selectionView;	// 436 = 0x1b4
	UIWebDocumentView *m_webView;	// 440 = 0x1b8
	UIFont *m_font;	// 444 = 0x1bc
	UIColor *m_textColor;	// 448 = 0x1c0
	int m_textAlignment;	// 452 = 0x1c4
	UIView *m_inputView;	// 456 = 0x1c8
	UIView *m_inputAccessoryView;	// 460 = 0x1cc
	float m_lineHeight;	// 464 = 0x1d0
	BOOL m_skipScrollContainingView;	// 468 = 0x1d4
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x35810e59; S=0x35810e69; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x358734c1; 
@property(assign) float bottomBufferHeight;	// G=0x3587305d; S=0x35872f6d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3580c181; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x3580cc81; S=0x3580c0b5; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3580c171; S=0x35810c59; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x3580c611; S=0x35811fc1; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x358127cd; 
@property(retain, nonatomic) UIFont *font;	// G=0x358728f9; S=0x3580c191; 
@property(retain) UIView *inputAccessoryView;	// G=0x358118c9; S=0x3580d5cd; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x358735a9; S=0x358735d1; 
@property(retain) UIView *inputView;	// G=0x358118b5; S=0x3580d5a9; @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x35811d8d; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x35872aa5; S=0x35872ab5; converted property
@property(assign) int marginTop;	// G=0x35872a95; S=0x358114a5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x358733e5; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x3587340d; S=0x35873435; 
@property(assign) CGPoint offset;	// G=0x3587312d; S=0x3587311d; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x3587316d; S=0x3587315d; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x358120dd; S=0x358729cd; 
@property(copy) UITextRange *selectedTextRange;	// G=0x35811949; S=0x358733b9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x3587382d; S=0x35873855; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x358738c9; S=0x358127f5; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3580c04d; 
@property(assign) BOOL showScrollerIndicators;	// G=0x358730cd; S=0x35873099; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x3580c7ed; S=0x3580ca49; 
@property(assign, nonatomic) int textAlignment;	// G=0x3587298d; S=0x3587299d; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x35872931; S=0x3580c6bd; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x35811945; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x358127a5; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x3581120d; converted property
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x35872011
+ (id)bestInterpretationForMarsVoltas:(id)marsVoltas;	// 0x3587205d
- (id)initWithCoder:(id)coder;	// 0x358715e1
- (id)initWithFrame:(CGRect)frame;	// 0x3580b389
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x35810be5
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x35871591
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x35871db9
- (id)_automationValue;	// 0x35812979
- (void)_bold:(id)bold;	// 0x35872311
- (void)_dealloc;	// 0x3580d449
- (void)_define:(id)define;	// 0x358722f1
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x35873881
- (void)_italicize:(id)italicize;	// 0x35872331
- (id)_keyboardResponder;	// 0x35811935
- (void)_populateArchivedSubviews:(id)subviews;	// 0x358719b5
- (Class)_printFormatterClass;	// 0x359db7d1
- (void)_promptForReplace:(id)replace;	// 0x358722b9
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x35811909
- (void)_showTextStyleOptions:(id)options;	// 0x35872371
- (void)_underline:(id)underline;	// 0x35872351
- (id)automaticallySelectedOverlay;	// 0x3581546d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x3587365d
- (BOOL)becomeFirstResponder;	// 0x358114d1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x35810e59
- (void)beginSelectionChange;	// 0x358126e5
// declared property getter: - (id)beginningOfDocument;	// 0x358734c1
// converted property getter: - (float)bottomBufferHeight;	// 0x3587305d
- (BOOL)canBecomeFirstResponder;	// 0x35811849
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x35812841
- (BOOL)canResignFirstResponder;	// 0x358128cd
- (void)cancelDataDetectorsWithWebLock;	// 0x3580d561
- (void)cancelInteractionWithLink;	// 0x35872d19
- (CGRect)caretRectForPosition:(id)position;	// 0x3581219d
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x358737bd
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x3587362d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x35812705
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x35873749
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3580b645
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x35873549
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x35871df9
// declared property getter: - (id)content;	// 0x3580c181
- (id)contentAsHTMLString;	// 0x35819aa9
- (void)copy:(id)copy;	// 0x35872239
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x35872079
- (void)cut:(id)cut;	// 0x35872219
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x3580cc81
- (void)dealloc;	// 0x3580d301
- (void)delayedUpdateForKeyboardDidShow;	// 0x35812145
- (void)deleteBackward;	// 0x35873251
- (void)detachInteractionAssistant;	// 0x3580d2e1
- (void)detachSelectionView;	// 0x3580d2c1
- (void)didMoveToSuperview;	// 0x3580c739
- (void)displayScrollerIndicators;	// 0x3587310d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x358723cd
- (void)encodeWithCoder:(id)coder;	// 0x35871a09
// declared property getter: - (id)endOfDocument;	// 0x358127cd
- (void)endSelectionChange;	// 0x35812821
- (void)ensureSelection;	// 0x3581204d
- (CGRect)firstRectForRange:(id)range;	// 0x358736bd
// declared property getter: - (id)font;	// 0x358728f9
- (void)forwardInvocation:(id)invocation;	// 0x35811e71
- (BOOL)hasText;	// 0x35872969
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x358126a9
// declared property getter: - (id)inputAccessoryView;	// 0x358118c9
// declared property getter: - (id)inputDelegate;	// 0x358735a9
// declared property getter: - (id)inputView;	// 0x358118b5
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x358732a5
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x358732d5
- (void)insertText:(id)text;	// 0x35873279
// declared property getter: - (id)interactionAssistant;	// 0x35811d8d
- (BOOL)isAccessibilityElementByDefault;	// 0x358ff649
// declared property getter: - (BOOL)isEditable;	// 0x3580c171
// declared property getter: - (BOOL)isEditing;	// 0x3580c611
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff64d
- (BOOL)isFirstResponder;	// 0x358117f1
- (BOOL)isInteractingWithLink;	// 0x35872d59
- (void)keyboardDidShow:(id)keyboard;	// 0x35812115
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x35814c71
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x35818afd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x35814ee9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x35811f41
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x35872da5
// converted property getter: - (float)lineHeight;	// 0x35872aa5
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x358721d9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x358721b9
// converted property getter: - (int)marginTop;	// 0x35872a95
// declared property getter: - (id)markedTextRange;	// 0x358733e5
// declared property getter: - (id)markedTextStyle;	// 0x3587340d
- (id)metadataDictionariesForDictationResults;	// 0x35873335
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35811e25
- (BOOL)mightHaveLinks;	// 0x35810e39
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x3587209d
// converted property getter: - (CGPoint)offset;	// 0x3587312d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x35873579
- (void)paste:(id)paste;	// 0x35872259
- (void)performBecomeEditableTasks;	// 0x35811fd1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x35873519
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x358734e9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x358735fd
- (void)recalculateStyle;	// 0x3580c239
- (CGRect)rectForSelection:(NSRange)selection;	// 0x35872835
- (id)rectsForRange:(id)range;	// 0x358738f1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3580bf5d
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x35873305
- (void)removeFromSuperview;	// 0x3580d251
- (void)replace:(id)replace;	// 0x358721f9
- (void)replaceRange:(id)range withText:(id)text;	// 0x35873389
- (void)resetDataDetectorsResultsWithWebLock;	// 0x35811ef9
- (BOOL)resignFirstResponder;	// 0x3580d065
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3580b3d9
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x35872b3d
- (void)scrollRectToVisibleInContainingScrollView;	// 0x35812329
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x3581224d
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x35873241
// converted property getter: - (BOOL)scrollingEnabled;	// 0x3587316d
- (void)select:(id)select;	// 0x35872279
- (void)selectAll;	// 0x35872191
- (void)selectAll:(id)all;	// 0x35872299
// declared property getter: - (NSRange)selectedRange;	// 0x358120dd
- (id)selectedText;	// 0x35872155
// declared property getter: - (id)selectedTextRange;	// 0x35811949
// declared property getter: - (int)selectionAffinity;	// 0x3587382d
- (CGRect)selectionClipRect;	// 0x35812229
// declared property getter: - (int)selectionGranularity;	// 0x358738c9
// declared property getter: - (id)selectionView;	// 0x3580c04d
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x35873185
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x3587314d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x3587368d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x35810e69
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x35872f6d
- (void)setContentToHTMLString:(id)htmlstring;	// 0x35811375
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3580c0b5
- (void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x35871ed5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x35810c59
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x35811fc1
// declared property setter: - (void)setFont:(id)font;	// 0x3580c191
- (void)setFrame:(CGRect)frame;	// 0x3580b45d
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x3580d5cd
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x358735d1
// declared property setter: - (void)setInputView:(id)view;	// 0x3580d5a9
// converted property setter: - (void)setLineHeight:(float)height;	// 0x35872ab5
// converted property setter: - (void)setMarginTop:(int)top;	// 0x358114a5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x35873461
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x35873435
- (void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;	// 0x3587204d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x3587311d
- (void)setRichText:(BOOL)text;	// 0x358728cd
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x35873195
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x3587315d
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x358729cd
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x358733b9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x35873855
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x358127f5
- (void)setSelectionToEnd;	// 0x35872701
- (void)setSelectionToStart;	// 0x35872601
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x35873099
// declared property setter: - (void)setText:(id)text;	// 0x3580ca49
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x3587299d
// declared property setter: - (void)setTextColor:(id)color;	// 0x3580c6bd
- (BOOL)shouldScrollEnclosingScrollView;	// 0x3580c621
- (BOOL)shouldStartDataDetectors;	// 0x3580cca1
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x358730cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35872429
- (void)startDataDetectorsWithWebLock;	// 0x35810ec5
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35872cb9
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35872d39
- (id)styleString;	// 0x3580bc11
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x35812621
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x35872c99
// declared property getter: - (id)text;	// 0x3580c7ed
// declared property getter: - (int)textAlignment;	// 0x3587298d
// declared property getter: - (id)textColor;	// 0x35872931
// declared property getter: - (id)textDocument;	// 0x35811945
- (id)textInRange:(id)range;	// 0x3587335d
- (id)textInputTraits;	// 0x3580b43d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x35812775
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3580bdc5
// declared property getter: - (id)tokenizer;	// 0x358127a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x358720fd
- (id)undoManager;	// 0x35872391
- (id)undoManagerForWebView:(id)webView;	// 0x35814ec9
- (void)unmarkText;	// 0x35873499
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x3580bfcd
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35872cd9
- (void)updateSelection;	// 0x3587212d
- (void)updateWebViewObjects;	// 0x3580be45
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x35872cf9
- (CGRect)visibleRect;	// 0x35812511
- (CGRect)visibleTextRect;	// 0x35812431
// converted property getter: - (id)webView;	// 0x3581120d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x35872e7d
- (void)webViewDidChange:(id)webView;	// 0x3580c2a5
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x35872d7d
@end

