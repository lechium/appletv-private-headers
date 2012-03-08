/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTokenizer.h"
#import "UIKit-Structs.h"
#import <DOMNode.h> // Unknown library
#import "UIKeyboardInput.h"
#import "UIKeyInput.h"
#import "UIWebSelectionBlock.h"

@class UITextSelectionView, UITextInteractionAssistant, UIResponder, UIColor, UIImage, UITextRange, NSDictionary, UITextPosition, UIView;
@protocol UITextSelectingContent, UITextInputDelegate;

@interface DOMNode (UIWebFormExtensions)
- (id)createPeripheral;	// 0x330d5819
- (id)createPickerCell;	// 0x330d5821
- (id)createSelectedItem;	// 0x330d581d
- (id)itemTitle;	// 0x330d5829
- (void)populateCell:(id)cell;	// 0x330d5825
@end

@interface DOMNode (UIKit_DOMExtras)
- (id)tagName;	// 0x330ea08d
- (id)urlScheme;	// 0x330ea0e5
@end

@interface DOMNode (UIWebViewAdditions)
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x330f6efd
- (BOOL)isSecure;	// 0x330f7019
- (BOOL)isTextControl;	// 0x330f7015
- (int)keyboardType;	// 0x330f701d
@end

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UIKeyInput, UITextInputTokenizer>
@property(assign, nonatomic) BOOL acceptsEmoji;
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign) BOOL becomesEditableWithGestures;	// G=0x330f8d41; S=0x330f8d45; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x330f8f79; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x330f8d31; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x330f86f5; S=0x330f86f9; 
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x330f8d39; 
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x330f8d3d; 
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x330f8fb1; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign) int initialSelectionBehavior;	// G=0x330f870d; S=0x330f8711; converted property
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x330f9a05; S=0x330f9a5d; 
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(assign, nonatomic) unsigned insertionPointWidth;
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x330f8d35; 
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x330f7851; S=0x330f74e5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x330f9611; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x330f9b9d; S=0x330f9ba1; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// G=0x330f8705; S=0x330f8709; 
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange *selectedTextRange;	// G=0x330f8da9; S=0x330f8f05; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x330f9f75; S=0x330f9fcd; 
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x330f8cb1; 
@property(assign, nonatomic) int shortcutConversionType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x330f8429; S=0x330f8399; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x330f9fd1; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x330f86fd; S=0x330f8701; 
@property(assign, nonatomic) int textSelectionBehavior;
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x330f86ed; S=0x330f86f1; 
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x330f723d; S=0x330f7241; 
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x330f9a01; 
- (CGRect)_lastRectForRange:(id)range;	// 0x330f9321
- (NSRange)_markedTextNSRange;	// 0x330f7edd
- (id)_textSelectingContainer;	// 0x330f8d51
- (void)acceptedAutoFillWord:(id)word;	// 0x330f8b9d
- (id)automaticallySelectedOverlay;	// 0x330f8715
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x330f9db1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x330f8d41
- (void)beginSelectionChange;	// 0x330f8c51
// declared property getter: - (id)beginningOfDocument;	// 0x330f8f79
- (CGRect)caretRect;	// 0x330f8541
- (CGRect)caretRectForPosition:(id)position;	// 0x330f9ab9
- (unsigned short)characterAfterCaretSelection;	// 0x330f7b8d
- (unsigned short)characterBeforeCaretSelection;	// 0x330f74a5
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x330f7461
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x330f9c65
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x330f9d45
- (id)closestPositionToPoint:(CGPoint)point;	// 0x330f9ba5
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x330f9c05
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x330f9729
- (void)confirmMarkedText:(id)text;	// 0x330f764d
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x330f8b6d
- (CGPoint)constrainedPoint:(CGPoint)point withInset:(float)inset;	// 0x330f829d
// declared property getter: - (id)content;	// 0x330f8d31
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x330f86f5
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x330f8659
- (id)delegate;	// 0x330f71f1
- (void)deleteBackward;	// 0x330f7245
- (void)detachInteractionAssistant;	// 0x330f8d49
- (void)detachSelectionView;	// 0x330f8d4d
- (BOOL)editable;	// 0x330f9f6d
- (BOOL)editing;	// 0x330f9f71
// declared property getter: - (id)endOfDocument;	// 0x330f8fb1
- (void)endSelectionChange;	// 0x330f8c81
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x330f7e41
- (void)extendCurrentSelection:(int)selection;	// 0x330f80b5
- (CGRect)firstRectForRange:(id)range;	// 0x330f9209
- (id)fontForCaretSelection;	// 0x330f7bcd
- (CGRect)frameForDictationResultPlaceholder:(id)dictationResultPlaceholder;	// 0x330f741d
- (void)handleKeyWebEvent:(id)event;	// 0x330f71f9
- (BOOL)hasContent;	// 0x330f704d
- (BOOL)hasSelection;	// 0x330f8145
- (BOOL)hasText;	// 0x330f9711
// converted property getter: - (int)initialSelectionBehavior;	// 0x330f870d
// declared property getter: - (id)inputDelegate;	// 0x330f9a05
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x330f736d
- (id)insertDictationResultPlaceholder;	// 0x330f73c5
- (void)insertText:(id)text;	// 0x330f72b5
// declared property getter: - (id)interactionAssistant;	// 0x330f8d35
- (BOOL)isAutoFillMode;	// 0x330f8bf9
// declared property getter: - (BOOL)isEditable;	// 0x330f8d39
// declared property getter: - (BOOL)isEditing;	// 0x330f8d3d
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x330f9869
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x330f991d
- (BOOL)isShowingPlaceholder;	// 0x330f86e9
// converted property getter: - (id)markedText;	// 0x330f7851
// declared property getter: - (id)markedTextRange;	// 0x330f9611
// declared property getter: - (id)markedTextStyle;	// 0x330f9b9d
- (id)metadataDictionariesForDictationResults;	// 0x330f739d
- (void)moveBackward:(unsigned)backward;	// 0x330f81f5
- (void)moveDown;	// 0x330f959d
- (void)moveForward:(unsigned)forward;	// 0x330f81f9
- (void)moveLeft;	// 0x330f94b5
- (void)moveRight;	// 0x330f9441
- (void)moveUp;	// 0x330f9529
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x330f7d7d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x330f9765
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x330f9809
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x330f97a1
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x330f98b1
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x330f9cd5
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x330f7d51
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x330f8079
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x330f803d
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x330f9965
- (id)rangeOfEnclosingWord:(id)enclosingWord;	// 0x330f90d5
- (CGRect)rectContainingCaretSelection;	// 0x330f7ccd
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x330f773d
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x330f77ed
- (id)rectsForRange:(id)range;	// 0x330f9db9
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertResult:(BOOL)result;	// 0x330f73ed
- (void)replaceCurrentWordWithText:(id)text;	// 0x330f79a9
- (void)replaceRange:(id)range withText:(id)text;	// 0x330f9121
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x330f78c5
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x330f7a75
- (BOOL)requiresKeyEvents;	// 0x330f71f5
// declared property getter: - (int)returnKeyType;	// 0x330f8705
- (void)selectAll;	// 0x330f81fd
- (id)selectedDOMRange;	// 0x330f7f8d
// declared property getter: - (id)selectedTextRange;	// 0x330f8da9
// declared property getter: - (int)selectionAffinity;	// 0x330f9f75
- (BOOL)selectionAtDocumentStart;	// 0x330f8185
- (BOOL)selectionAtWordStart;	// 0x330f81bd
- (CGRect)selectionClipRect;	// 0x330f8d0d
- (NSRange)selectionRange;	// 0x330f7f41
- (int)selectionState;	// 0x330f825d
// declared property getter: - (id)selectionView;	// 0x330f8cb1
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x330f9db5
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x330f8d45
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x330f86f9
// converted property setter: - (void)setInitialSelectionBehavior:(int)behavior;	// 0x330f8711
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x330f9a5d
// converted property setter: - (void)setMarkedText:(id)text;	// 0x330f74e5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x330f7595
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x330f9ba1
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x330f8709
- (void)setSecure:(BOOL)secure;	// 0x330f71ed
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x330f7fc5
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x330f8f05
- (void)setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x330f8e19
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x330f9fcd
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x330f851d
- (void)setSelectionWithPoint:(CGPoint)point inset:(float)inset;	// 0x330f8479
// converted property setter: - (void)setText:(id)text;	// 0x330f8399
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x330f8701
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x330f86f1
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x330f7241
- (void)setupPlaceholderTextIfNeeded;	// 0x330f708d
- (void)takeTraitsFrom:(id)from;	// 0x330f7021
// converted property getter: - (id)text;	// 0x330f8429
- (id)textColorForCaretSelection;	// 0x330f7cb1
// declared property getter: - (id)textDocument;	// 0x330f9fd1
- (id)textInRange:(id)range;	// 0x330f8fe9
- (id)textInputTraits;	// 0x330f7091
// declared property getter: - (int)textLoupeVisibility;	// 0x330f86fd
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x330f903d
// declared property getter: - (id)textSuggestionDelegate;	// 0x330f86ed
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x330f723d
// declared property getter: - (id)tokenizer;	// 0x330f9a01
- (id)uiWebDocumentView;	// 0x330f7325
- (void)unmarkText;	// 0x330f968d
- (void)updateAutoscroll:(id)autoscroll;	// 0x330f875d
- (void)updateSelection;	// 0x330f8d09
- (id)wordContainingCaretSelection;	// 0x330f7de9
- (int)wordOffsetInRange:(id)range;	// 0x330f7ea1
- (id)wordRangeContainingCaretSelection;	// 0x330f7da9
@end

@interface DOMNode (UIThreadSafeNodeAdditions)
- (id)_realNode;	// 0x33173545
@end

@interface DOMNode (UIWebInteraction)
- (id)absoluteQuadsAtPoint:(CGPoint)point;	// 0x33010cf1
- (BOOL)isLikelyToBeginPageLoad;	// 0x331736e5
- (BOOL)nodeCanBecomeFirstResponder;	// 0x331736e9
- (BOOL)showsTapHighlight;	// 0x33010c09
- (id)tapHighlightColor;	// 0x331736a1
- (BOOL)touchCalloutEnabled;	// 0x331736e1
@end

@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x3319e911
- (id)asDomRange;	// 0x3319e915
- (id)asElement;	// 0x3319e62d
- (CGRect)boundingRect;	// 0x3300f03d
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x3319ebf5
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x3300ef89
- (BOOL)containsBlock:(id)block;	// 0x3319e769
- (BOOL)containsNode:(id)node;	// 0x3319e59d
- (BOOL)containsRange:(id)range;	// 0x3319e9e5
- (id)enclosingDocument;	// 0x3319ec61
- (id)enclosingElementIncludingSelf;	// 0x3319e651
- (id)firstDescendantOfAboutTheSameWidthOrHeight;	// 0x3319ee6d
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(CGRect)aboutTheSameWidthOrHeightAsRect withDescentDirection:(int)descentDirection;	// 0x3319ec71
- (BOOL)hasCustomLineHeight;	// 0x3319e6e5
- (BOOL)isSameBlock:(id)block;	// 0x3319e719
- (id)largerParent;	// 0x3319e819
- (id)lastDescendantOfAboutTheSameWidthOrHeight;	// 0x3319ef09
- (id)parentBlock;	// 0x3319e685
- (id)rangeOfContents;	// 0x3319eadd
- (BOOL)rendersAsBlock;	// 0x3319e8f9
- (BOOL)selectable;	// 0x3319e695
- (BOOL)strictlyContainsBlock:(id)block;	// 0x3319e7d5
- (BOOL)strictlyContainsNode:(id)node;	// 0x3319e5e9
- (id)webFrame;	// 0x3300f179
@end

@interface DOMNode (UITextInputView)
- (id)textInputView;	// 0x331b18e1
@end

@interface DOMNode (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x331e91c5
- (id)_nextAssistedNode;	// 0x331e91c9
- (id)_previousAssistedNode;	// 0x331e9209
- (BOOL)_requiresAccessoryView;	// 0x331e918d
- (BOOL)_requiresInputView;	// 0x331e91a5
- (void)_startAssistingDocumentView:(id)view;	// 0x331e9105
- (void)_stopAssistingDocumentView:(id)view;	// 0x331e9139
- (BOOL)_supportsAccessoryClear;	// 0x331e91c1
- (BOOL)_supportsAutoFill;	// 0x331e91bd
- (id)_textFormElement;	// 0x331e9249
@end

