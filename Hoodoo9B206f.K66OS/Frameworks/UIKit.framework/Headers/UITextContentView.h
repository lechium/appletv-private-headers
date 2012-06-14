/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextInput.h"
#import "UITextSelection.h"
#import "UITextSelectingContainer.h"

@class DOMHTMLElement, UITextRange, NSDictionary, UITextPosition, UIFont, UIDelayedAction, UITextSelectionView, UITextInteractionAssistant, UIColor, WebFrame, NSString, UIWebDocumentView;
@protocol UITextInputDelegate, UITextSelectingContent, UITextContentViewDelegate, UITextInputTokenizer;

@interface UITextContentView : UIView <UITextInput, UITextSelection, UITextSelectingContainer, UITextInputTraits> {
@private
	id m_delegate;	// 48 = 0x30
	WebFrame *m_frame;	// 52 = 0x34
	DOMHTMLElement *m_body;	// 56 = 0x38
	int m_marginTop;	// 60 = 0x3c
	UIDelayedAction *m_scrollToVisibleTimer;	// 64 = 0x40
	UIEdgeInsets m_selectionInset;	// 68 = 0x44
	float m_bottomBufferHeight;	// 84 = 0x54
	BOOL m_editable;	// 88 = 0x58
	BOOL m_editing;	// 89 = 0x59
	BOOL m_becomesEditableWithGestures;	// 90 = 0x5a
	BOOL m_becomingFirstResponder;	// 91 = 0x5b
	BOOL m_reentrancyGuard;	// 92 = 0x5c
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 93 = 0x5d
	BOOL m_hasExplicitTextAlignment;	// 94 = 0x5e
	UITextInteractionAssistant *m_interactionAssistant;	// 96 = 0x60
	UITextSelectionView *m_selectionView;	// 100 = 0x64
	UIWebDocumentView *m_webView;	// 104 = 0x68
	UIFont *m_font;	// 108 = 0x6c
	UIColor *m_textColor;	// 112 = 0x70
	int m_textAlignment;	// 116 = 0x74
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x355dd90d; S=0x35393b25; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x355de2e5; 
@property(assign) float bottomBufferHeight;	// G=0x355de041; S=0x355de02d; converted property
@property(assign) BOOL caretBlinks;	// G=0x355dccf1; S=0x355dcced; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x35393291; 
@property(assign) unsigned dataDetectorTypes;	// G=0x353e2fa5; S=0x353931b5; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x35393965; S=0x35393c69; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x35393281; S=0x353eb9b9; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x353e2fc5; S=0x354245ed; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x355de30d; 
@property(retain, nonatomic) UIFont *font;	// G=0x355dd719; S=0x353932ed; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x355de3f5; S=0x355de41d; 
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x35424999; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x355dd91d; S=0x355dd92d; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x355de209; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x355de231; S=0x355de259; 
@property(assign) CGPoint offset;	// G=0x355de065; S=0x355de061; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x355de085; S=0x355de081; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x35394049; S=0x3539208d; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x35422291; S=0x355dd845; 
@property(copy) UITextRange *selectedTextRange;	// G=0x354226a5; S=0x354696fd; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x355de679; S=0x355de6a1; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x355de715; S=0x354249cd; 
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x354012f1; S=0x3546667d; @synthesize=m_selectionInset
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x35392575; 
@property(assign) BOOL selectionVisible;	// G=0x355dcce9; S=0x355dcce5; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x355de059; S=0x355de055; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x353946e5; S=0x353e2d6d; 
@property(assign, nonatomic) int textAlignment;	// G=0x355dd805; S=0x355dd815; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x355dd751; S=0x355dd789; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x354226a1; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x35424971; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x35393b35; converted property
- (id)initWithCoder:(id)coder;	// 0x355dc769
- (id)initWithFrame:(CGRect)frame;	// 0x3538f939
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x3546662d
- (id)_automationValue;	// 0x355de8bd
- (void)_bold:(id)bold;	// 0x355dd345
- (void)_define:(id)define;	// 0x355dd325
- (void)_didScroll;	// 0x35467d99
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x355de6cd
- (void)_hideSelectionCommands;	// 0x355dd171
- (void)_italicize:(id)italicize;	// 0x355dd365
- (id)_keyboardResponder;	// 0x35423ccd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x355dc95d
- (void)_promptForReplace:(id)replace;	// 0x355dd2ed
- (void)_scrollViewDidEndDecelerating;	// 0x35467dbd
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x35467db9
- (void)_scrollViewWillBeginDragging;	// 0x35467d95
- (void)_showTextStyleOptions:(id)options;	// 0x355dd3a5
- (void)_underline:(id)underline;	// 0x355dd385
- (id)automaticallySelectedOverlay;	// 0x355dcc09
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x355de4a9
- (BOOL)becomeFirstResponder;	// 0x3542283d
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x355dd90d
- (void)beginSelectionChange;	// 0x353ebb65
// declared property getter: - (id)beginningOfDocument;	// 0x355de2e5
// converted property getter: - (float)bottomBufferHeight;	// 0x355de041
- (BOOL)canBecomeFirstResponder;	// 0x35422a89
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3546afc1
- (BOOL)canResignFirstResponder;	// 0x3546d7f1
- (void)cancelAutoscroll;	// 0x355dccc5
- (void)cancelDataDetectorsWithWebLock;	// 0x354680bd
- (void)cancelInteractionWithLink;	// 0x355dde21
// converted property getter: - (BOOL)caretBlinks;	// 0x355dccf1
- (CGRect)caretRectForPosition:(id)position;	// 0x354226cd
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x355dccf5
- (unsigned short)characterBeforeCaretSelection;	// 0x355dd0c9
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x355de609
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x355de479
- (void)clearScrollToVisibleTimer;	// 0x35401839
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x355dcf9d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x354248d1
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x355de595
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3538fb5d
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x355de395
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x355dcb2d
// declared property getter: - (id)content;	// 0x35393291
- (id)contentAsHTMLString;	// 0x353946b9
- (void)copy:(id)copy;	// 0x355dd24d
- (void)cut:(id)cut;	// 0x355dd22d
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x353e2fa5
- (void)dealloc;	// 0x35467ead
// declared property getter: - (id)delegate;	// 0x35393965
- (void)deleteBackward;	// 0x355de091
- (void)detachInteractionAssistant;	// 0x35467e79
- (void)detachSelectionView;	// 0x35467e59
- (void)didMoveToSuperview;	// 0x35393fd5
- (void)displayScrollerIndicators;	// 0x355de05d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x355dd3ed
- (void)encodeWithCoder:(id)coder;	// 0x355dc9b1
// declared property getter: - (id)endOfDocument;	// 0x355de30d
- (void)endSelectionChange;	// 0x353ec4f9
- (void)ensureSelection;	// 0x35424679
- (CGRect)firstRectForRange:(id)range;	// 0x355de509
// declared property getter: - (id)font;	// 0x355dd719
- (id)fontForCaretSelection;	// 0x355dd151
- (void)forwardInvocation:(id)invocation;	// 0x35393bb1
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x355de16d
- (BOOL)hasMarkedText;	// 0x355dd045
- (BOOL)hasSelection;	// 0x355dcc81
- (BOOL)hasText;	// 0x35332569
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35422655
// declared property getter: - (id)inputDelegate;	// 0x355de3f5
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x355de0e5
- (id)insertDictationResultPlaceholder;	// 0x355de115
- (void)insertText:(id)text;	// 0x355de0b9
// declared property getter: - (id)interactionAssistant;	// 0x35424999
// declared property getter: - (BOOL)isEditable;	// 0x35393281
// declared property getter: - (BOOL)isEditing;	// 0x353e2fc5
- (BOOL)isFirstResponder;	// 0x354227e5
- (BOOL)isInteractingWithLink;	// 0x355dde61
- (BOOL)isSMSTextView;	// 0x353ec15d
- (void)keyboardDidShow:(id)keyboard;	// 0x35401fe9
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x354697b9
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x3546a3d1
- (BOOL)keyboardInputChanged:(id)changed;	// 0x354273f5
- (void)keyboardInputChangedSelection:(id)selection;	// 0x354243bd
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x355ddead
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x355dd20d
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x355dd1ed
// converted property getter: - (int)marginTop;	// 0x355dd91d
- (id)markedText;	// 0x355dd069
// declared property getter: - (id)markedTextRange;	// 0x355de209
// declared property getter: - (id)markedTextStyle;	// 0x355de231
- (id)metadataDictionariesForDictationResults;	// 0x355de1b1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35393b65
- (BOOL)mightHaveLinks;	// 0x355ddd81
// converted property getter: - (CGPoint)offset;	// 0x355de065
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x355de3c5
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x355dd025
- (void)paste:(id)paste;	// 0x355dd26d
- (void)performBecomeEditableTasks;	// 0x354245fd
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x354010c9
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x355de365
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x355de335
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x355de449
- (void)recalculateStyle;	// 0x353933a9
- (CGRect)rectContainingCaretSelection;	// 0x355dd11d
- (CGRect)rectForScrollToVisible;	// 0x355dd615
- (CGRect)rectForSelection:(NSRange)selection;	// 0x355dd57d
- (id)rectsForRange:(id)range;	// 0x355de73d
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x353922e9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x355de13d
- (void)removeFromSuperview;	// 0x35467de9
- (void)replace:(id)replace;	// 0x355dd2cd
- (void)replaceRange:(id)range withText:(id)text;	// 0x355de1d9
- (void)resetDataDetectorsResultsWithWebLock;	// 0x355ddd39
- (BOOL)resignFirstResponder;	// 0x353e65ad
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x355ddc09
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x354011b9
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x353ec111
- (void)scrollToVisibleTimerAction;	// 0x35401099
- (id)scrollView;	// 0x35393a2d
// converted property getter: - (BOOL)scrollingEnabled;	// 0x355de085
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x35394049
- (void)select:(id)select;	// 0x355dd28d
- (void)selectAll;	// 0x355dd3c5
- (void)selectAll:(id)all;	// 0x355dd2ad
// declared property getter: - (NSRange)selectedRange;	// 0x35422291
- (id)selectedText;	// 0x355dcf61
// declared property getter: - (id)selectedTextRange;	// 0x354226a5
// declared property getter: - (int)selectionAffinity;	// 0x355de679
- (CGRect)selectionClipRect;	// 0x354249a9
// declared property getter: - (int)selectionGranularity;	// 0x355de715
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x354012f1
- (NSRange)selectionRange;	// 0x355dd0ed
- (id)selectionRectsForRange:(id)range;	// 0x355dcd65
// declared property getter: - (id)selectionView;	// 0x35392575
// converted property getter: - (BOOL)selectionVisible;	// 0x355dcce9
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x355de089
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x355de07d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x355de4d9
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x35393b25
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x355de02d
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x355dcced
- (void)setContentToHTMLString:(id)htmlstring;	// 0x353eb7b5
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x353931b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35393c69
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x353eb9b9
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x354245ed
// declared property setter: - (void)setFont:(id)font;	// 0x353932ed
- (void)setFrame:(CGRect)frame;	// 0x3538f989
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x355de41d
// converted property setter: - (void)setMarginTop:(int)top;	// 0x355dd92d
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x355de285
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x355de259
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x355de061
- (void)setRichText:(BOOL)text;	// 0x355dd6ed
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x355de08d
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x355de081
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x3539208d
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x355dd845
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x354696fd
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x355de6a1
- (void)setSelectionChangeCallbacksDisabled:(BOOL)disabled;	// 0x35392025
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x354249cd
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x3546667d
- (void)setSelectionToEnd;	// 0x353eb8e5
- (void)setSelectionToStart;	// 0x355dd4a5
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x355dcce5
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x355dd445
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x355de055
// declared property setter: - (void)setText:(id)text;	// 0x353e2d6d
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x355dd815
// declared property setter: - (void)setTextColor:(id)color;	// 0x355dd789
- (BOOL)shouldStartDataDetectors;	// 0x353e2fe5
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x355de059
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x355dcca5
- (void)startDataDetectorsWithWebLock;	// 0x355ddccd
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x355dddc1
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x355dde41
- (id)styleString;	// 0x35390045
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x3546b04d
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x355ddda1
// declared property getter: - (id)text;	// 0x353946e5
// declared property getter: - (int)textAlignment;	// 0x355dd805
// declared property getter: - (id)textColor;	// 0x355dd751
// declared property getter: - (id)textDocument;	// 0x354226a1
- (id)textInRange:(id)range;	// 0x3546af69
- (id)textInputTraits;	// 0x35393c39
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x35424941
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x35391e2d
// declared property getter: - (id)tokenizer;	// 0x35424971
- (void)touchScrollToVisibleTimer;	// 0x353ec1ad
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x353ec1cd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x355dcc29
- (id)undoManager;	// 0x355dd1b1
- (id)undoManagerForWebView:(id)webView;	// 0x355dd191
- (void)unmarkText;	// 0x355de2bd
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x35392359
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x355ddde1
- (void)updateSelection;	// 0x355dcc59
- (void)updateWebViewObjects;	// 0x35391f11
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x355dde01
- (CGRect)visibleRect;	// 0x355dd959
- (CGRect)visibleTextRect;	// 0x355ddb29
// converted property getter: - (id)webView;	// 0x35393b35
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x355ddf3d
- (void)webViewDidChange:(id)webView;	// 0x3539359d
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x355dde85
- (id)wordContainingCaretSelection;	// 0x355dd089
- (id)wordRangeContainingCaretSelection;	// 0x355dd0a9
@end
