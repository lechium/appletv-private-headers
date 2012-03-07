/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"
#import "UIKeyInput.h"
#import <DOMNode.h> // Unknown library
#import "UIWebSelectionBlock.h"

@class UITextSelectionView, UITextInteractionAssistant, UIResponder, UIColor, UIImage, UITextRange, NSDictionary, UITextPosition, UIView;
@protocol UITextSelectingContent, UITextInputDelegate;

@interface DOMNode (UIWebFormExtensions)
- (id)createPeripheral;	// 0x32e8e6ed
- (id)createPickerCell;	// 0x32e8e6f5
- (id)createSelectedItem;	// 0x32e8e6f1
- (id)itemTitle;	// 0x32e8e6fd
- (void)populateCell:(id)cell;	// 0x32e8e6f9
@end

@interface DOMNode (UIKit_DOMExtras)
- (id)tagName;	// 0x32ea2a6d
- (id)urlScheme;	// 0x32ea2ac5
@end

@interface DOMNode (UIWebViewAdditions)
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x32eaf669
- (BOOL)isSecure;	// 0x32eaf785
- (BOOL)isTextControl;	// 0x32eaf781
- (int)keyboardType;	// 0x32eaf789
@end

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UIKeyInput, UITextInputTokenizer>
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign) BOOL becomesEditableWithGestures;	// G=0x32eb1471; S=0x32eb1475; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x32eb16a9; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x32eb1461; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x32eb0e25; S=0x32eb0e29; 
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x32eb1469; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x32eb146d; 
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x32eb16e1; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign) int initialSelectionBehavior;	// G=0x32eb0e3d; S=0x32eb0e41; converted property
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x32eb2135; S=0x32eb218d; 
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x32eb1465; 
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x32eaff81; S=0x32eafc15; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x32eb1d41; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x32eb22cd; S=0x32eb22d1; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// G=0x32eb0e35; S=0x32eb0e39; 
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange *selectedTextRange;	// G=0x32eb14d9; S=0x32eb1635; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x32eb26a5; S=0x32eb26fd; 
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x32eb13e1; 
@property(assign, nonatomic) int shortcutConversionType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x32eb0b59; S=0x32eb0ac9; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x32eb2701; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x32eb0e2d; S=0x32eb0e31; 
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x32eb0e1d; S=0x32eb0e21; 
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x32eaf9a9; S=0x32eaf9ad; 
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x32eb2131; 
- (CGRect)_lastRectForRange:(id)range;	// 0x32eb1a51
- (NSRange)_markedTextNSRange;	// 0x32eb060d
- (id)_textSelectingContainer;	// 0x32eb1481
- (void)acceptedAutoFillWord:(id)word;	// 0x32eb12cd
- (id)automaticallySelectedOverlay;	// 0x32eb0e45
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x32eb24e1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x32eb1471
- (void)beginSelectionChange;	// 0x32eb1381
// declared property getter: - (id)beginningOfDocument;	// 0x32eb16a9
- (CGRect)caretRect;	// 0x32eb0c71
- (CGRect)caretRectForPosition:(id)position;	// 0x32eb21e9
- (unsigned short)characterAfterCaretSelection;	// 0x32eb02bd
- (unsigned short)characterBeforeCaretSelection;	// 0x32eafbd5
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x32eafb91
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x32eb2395
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x32eb2475
- (id)closestPositionToPoint:(CGPoint)point;	// 0x32eb22d5
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x32eb2335
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x32eb1e59
- (void)confirmMarkedText:(id)text;	// 0x32eafd7d
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x32eb129d
- (CGPoint)constrainedPoint:(CGPoint)point withInset:(float)inset;	// 0x32eb09cd
// declared property getter: - (id)content;	// 0x32eb1461
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x32eb0e25
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x32eb0d89
- (id)delegate;	// 0x32eaf95d
- (void)deleteBackward;	// 0x32eaf9b1
- (void)detachInteractionAssistant;	// 0x32eb1479
- (void)detachSelectionView;	// 0x32eb147d
- (BOOL)editable;	// 0x32eb269d
- (BOOL)editing;	// 0x32eb26a1
// declared property getter: - (id)endOfDocument;	// 0x32eb16e1
- (void)endSelectionChange;	// 0x32eb13b1
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x32eb0571
- (void)extendCurrentSelection:(int)selection;	// 0x32eb07e5
- (CGRect)firstRectForRange:(id)range;	// 0x32eb1939
- (id)fontForCaretSelection;	// 0x32eb02fd
- (void)handleKeyWebEvent:(id)event;	// 0x32eaf965
- (BOOL)hasContent;	// 0x32eaf7b9
- (BOOL)hasSelection;	// 0x32eb0875
- (BOOL)hasText;	// 0x32eb1e41
// converted property getter: - (int)initialSelectionBehavior;	// 0x32eb0e3d
// declared property getter: - (id)inputDelegate;	// 0x32eb2135
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x32eafad9
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x32eafb31
- (void)insertText:(id)text;	// 0x32eafa21
// declared property getter: - (id)interactionAssistant;	// 0x32eb1465
- (BOOL)isAutoFillMode;	// 0x32eb1329
// declared property getter: - (BOOL)isEditable;	// 0x32eb1469
// declared property getter: - (BOOL)isEditing;	// 0x32eb146d
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x32eb1f99
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x32eb204d
- (BOOL)isShowingPlaceholder;	// 0x32eb0e19
// converted property getter: - (id)markedText;	// 0x32eaff81
// declared property getter: - (id)markedTextRange;	// 0x32eb1d41
// declared property getter: - (id)markedTextStyle;	// 0x32eb22cd
- (id)metadataDictionariesForDictationResults;	// 0x32eafb09
- (void)moveBackward:(unsigned)backward;	// 0x32eb0925
- (void)moveDown;	// 0x32eb1ccd
- (void)moveForward:(unsigned)forward;	// 0x32eb0929
- (void)moveLeft;	// 0x32eb1be5
- (void)moveRight;	// 0x32eb1b71
- (void)moveUp;	// 0x32eb1c59
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x32eb04ad
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x32eb1e95
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x32eb1f39
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x32eb1ed1
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x32eb1fe1
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x32eb2405
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x32eb0481
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x32eb07a9
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x32eb076d
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x32eb2095
- (id)rangeOfEnclosingWord:(id)enclosingWord;	// 0x32eb1805
- (CGRect)rectContainingCaretSelection;	// 0x32eb03fd
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x32eafe6d
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x32eaff1d
- (id)rectsForRange:(id)range;	// 0x32eb24e9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x32eafb61
- (void)replaceCurrentWordWithText:(id)text;	// 0x32eb00d9
- (void)replaceRange:(id)range withText:(id)text;	// 0x32eb1851
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x32eafff5
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x32eb01a5
- (BOOL)requiresKeyEvents;	// 0x32eaf961
// declared property getter: - (int)returnKeyType;	// 0x32eb0e35
- (void)selectAll;	// 0x32eb092d
- (id)selectedDOMRange;	// 0x32eb06bd
// declared property getter: - (id)selectedTextRange;	// 0x32eb14d9
// declared property getter: - (int)selectionAffinity;	// 0x32eb26a5
- (BOOL)selectionAtDocumentStart;	// 0x32eb08b5
- (BOOL)selectionAtWordStart;	// 0x32eb08ed
- (CGRect)selectionClipRect;	// 0x32eb143d
- (NSRange)selectionRange;	// 0x32eb0671
- (int)selectionState;	// 0x32eb098d
// declared property getter: - (id)selectionView;	// 0x32eb13e1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x32eb24e5
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x32eb1475
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x32eb0e29
// converted property setter: - (void)setInitialSelectionBehavior:(int)behavior;	// 0x32eb0e41
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x32eb218d
// converted property setter: - (void)setMarkedText:(id)text;	// 0x32eafc15
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32eafcc5
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x32eb22d1
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x32eb0e39
- (void)setSecure:(BOOL)secure;	// 0x32eaf959
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x32eb06f5
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x32eb1635
- (void)setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32eb1549
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x32eb26fd
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x32eb0c4d
- (void)setSelectionWithPoint:(CGPoint)point inset:(float)inset;	// 0x32eb0ba9
// converted property setter: - (void)setText:(id)text;	// 0x32eb0ac9
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x32eb0e31
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x32eb0e21
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x32eaf9ad
- (void)setupPlaceholderTextIfNeeded;	// 0x32eaf7f9
- (void)takeTraitsFrom:(id)from;	// 0x32eaf78d
// converted property getter: - (id)text;	// 0x32eb0b59
- (id)textColorForCaretSelection;	// 0x32eb03e1
// declared property getter: - (id)textDocument;	// 0x32eb2701
- (id)textInRange:(id)range;	// 0x32eb1719
- (id)textInputTraits;	// 0x32eaf7fd
// declared property getter: - (int)textLoupeVisibility;	// 0x32eb0e2d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x32eb176d
// declared property getter: - (id)textSuggestionDelegate;	// 0x32eb0e1d
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x32eaf9a9
// declared property getter: - (id)tokenizer;	// 0x32eb2131
- (id)uiWebDocumentView;	// 0x32eafa91
- (void)unmarkText;	// 0x32eb1dbd
- (void)updateAutoscroll:(id)autoscroll;	// 0x32eb0e8d
- (void)updateSelection;	// 0x32eb1439
- (id)wordContainingCaretSelection;	// 0x32eb0519
- (int)wordOffsetInRange:(id)range;	// 0x32eb05d1
- (id)wordRangeContainingCaretSelection;	// 0x32eb04d9
@end

@interface DOMNode (UIThreadSafeNodeAdditions)
- (id)_realNode;	// 0x32f2b4e9
@end

@interface DOMNode (UIWebInteraction)
- (id)absoluteQuadsAtPoint:(CGPoint)point;	// 0x32dcc239
- (BOOL)isLikelyToBeginPageLoad;	// 0x32f2b689
- (BOOL)nodeCanBecomeFirstResponder;	// 0x32f2b68d
- (BOOL)showsTapHighlight;	// 0x32dcc151
- (id)tapHighlightColor;	// 0x32f2b645
- (BOOL)touchCalloutEnabled;	// 0x32f2b685
@end

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x32f56679
- (id)asDomRange;	// 0x32f5667d
- (id)asElement;	// 0x32f56395
- (CGRect)boundingRect;	// 0x32dca585
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x32f5695d
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x32dca4d1
- (BOOL)containsBlock:(id)block;	// 0x32f564d1
- (BOOL)containsNode:(id)node;	// 0x32f56305
- (BOOL)containsRange:(id)range;	// 0x32f5674d
- (id)enclosingDocument;	// 0x32f569c9
- (id)enclosingElementIncludingSelf;	// 0x32f563b9
- (id)firstDescendantOfAboutTheSameWidthOrHeight;	// 0x32f56bd5
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)aboutTheSameWidthOrHeightAsRect withDescentDirection:(int)descentDirection;	// 0x32f569d9
- (BOOL)hasCustomLineHeight;	// 0x32f5644d
- (BOOL)isSameBlock:(id)block;	// 0x32f56481
- (id)largerParent;	// 0x32f56581
- (id)lastDescendantOfAboutTheSameWidthOrHeight;	// 0x32f56c71
- (id)parentBlock;	// 0x32f563ed
- (id)rangeOfContents;	// 0x32f56845
- (BOOL)rendersAsBlock;	// 0x32f56661
- (BOOL)selectable;	// 0x32f563fd
- (BOOL)strictlyContainsBlock:(id)block;	// 0x32f5653d
- (BOOL)strictlyContainsNode:(id)node;	// 0x32f56351
- (id)webFrame;	// 0x32dca6c1
@end

@interface DOMNode (UITextInputView)
- (id)textInputView;	// 0x32f6934d
@end

@interface DOMNode (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x32f9f0cd
- (id)_nextAssistedNode;	// 0x32f9f0d1
- (id)_previousAssistedNode;	// 0x32f9f111
- (BOOL)_requiresAccessoryView;	// 0x32f9f095
- (BOOL)_requiresInputView;	// 0x32f9f0ad
- (void)_startAssistingDocumentView:(id)view;	// 0x32f9f00d
- (void)_stopAssistingDocumentView:(id)view;	// 0x32f9f041
- (BOOL)_supportsAccessoryClear;	// 0x32f9f0c9
- (BOOL)_supportsAutoFill;	// 0x32f9f0c5
- (id)_textFormElement;	// 0x32f9f151
@end
