/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebDocumentView.h"
#import "WebMultipleTextMatches.h"
#import "WebDocumentElement.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentSearching.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentView, WebDocumentSearching> {
@private
	WebHTMLViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// G=0x32c66685; S=0x32c66655; converted property
+ (void)initialize;	// 0x32c0dd89
+ (id)supportedImageMIMETypes;	// 0x32c243dd
+ (id)supportedMIMETypes;	// 0x32c62819
+ (id)supportedNonImageMIMETypes;	// 0x32c1fc59
+ (id)unsupportedTextMIMETypes;	// 0x32c202f1
- (id)initWithFrame:(CGRect)frame;	// 0x32c132d9
- (id)_accessibilityParentForSubview:(id)subview;	// 0x32c62b1d
- (float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;	// 0x32c65b1d
- (void)_applyParagraphStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x32c62a35
- (void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x32c62a6d
- (void)_autoscroll;	// 0x32c626c5
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;	// 0x32c659ed
- (BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;	// 0x32c65a79
- (BOOL)_canAlterCurrentSelection;	// 0x32c626d9
- (BOOL)_canDecreaseSelectionListLevel;	// 0x32c65571
- (BOOL)_canEdit;	// 0x32c65199
- (BOOL)_canEditRichly;	// 0x32c651cd
- (BOOL)_canIncreaseSelectionListLevel;	// 0x32c6553d
- (BOOL)_canSmartCopyOrDelete;	// 0x32c65b79
- (void)_changeWordCaseWithSelector:(SEL)selector;	// 0x32c6298d
- (void)_clearLastHitViewIfSelf;	// 0x32c25d45
- (id)_compositingLayersHostingView;	// 0x32c62381
- (id)_dataSource;	// 0x32c622fd
- (void)_decreaseSelectionListLevel;	// 0x32c65995
- (void)_destroyAllWebPlugins;	// 0x32c64ae5
- (id)_documentRange;	// 0x32c623f9
- (id)_emptyStyle;	// 0x32c62aa5
- (void)_endPrintMode;	// 0x32c627d1
- (id)_frame;	// 0x32c16745
- (void)_frameOrBoundsChanged;	// 0x32c6506d
- (id)_frameView;	// 0x32c62429
- (BOOL)_handleEditingKeyEvent:(KeyboardEvent *)event;	// 0x32c64899
- (BOOL)_hasHTMLDocument;	// 0x32c659bd
- (BOOL)_hasInsertionPoint;	// 0x32c64c81
- (BOOL)_hasSelection;	// 0x32c64c21
- (BOOL)_hasSelectionOrInsertionPoint;	// 0x32c64c51
- (id)_highlighterForType:(id)type;	// 0x32c64869
- (id)_increaseSelectionListLevel;	// 0x32c655a5
- (id)_increaseSelectionListLevelOrdered;	// 0x32c656f5
- (id)_increaseSelectionListLevelUnordered;	// 0x32c65845
- (id)_insertOrderedList;	// 0x32c6529d
- (id)_insertUnorderedList;	// 0x32c653ed
- (BOOL)_insideAnotherHTMLView;	// 0x32c625d5
- (BOOL)_isEditable;	// 0x32c65201
- (BOOL)_isInPrintMode;	// 0x32c6239d
- (BOOL)_isSelectionEvent:(id)event;	// 0x32c63295
- (BOOL)_isTopHTMLView;	// 0x32c188cd
- (BOOL)_isUsingAcceleratedCompositing;	// 0x32c6235d
- (void)_layoutIfNeeded;	// 0x32c18a15
- (BOOL)_needsLayout;	// 0x32c16bb9
- (id)_pluginController;	// 0x32c15ce5
- (void)_removeHighlighterOfType:(id)type;	// 0x32c627a1
- (void)_restoreSubviews;	// 0x32c6231d
- (id)_selectedRange;	// 0x32c64cb1
- (void)_selectionChanged;	// 0x32c3191d
- (CGRect)_selectionRect;	// 0x32c64e89
- (void)_setAsideSubviews;	// 0x32c62319
- (void)_setHighlighter:(id)highlighter ofType:(id)type;	// 0x32c62715
- (void)_setMouseDownEvent:(id)event;	// 0x32c2ea85
- (void)_setPrinting:(BOOL)printing minimumPageWidth:(float)width height:(float)height maximumPageWidth:(float)width4 adjustViewSize:(BOOL)size;	// 0x32c62f35
- (void)_setToolTip:(id)tip;	// 0x32c62321
- (void)_setTransparentBackground:(BOOL)background;	// 0x32c62341
- (BOOL)_shouldDeleteRange:(id)range;	// 0x32c64e49
- (BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;	// 0x32c62465
- (BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x32c62551
- (BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;	// 0x32c62595
- (void)_startAutoscrollTimer:(id)timer;	// 0x32c62609
- (void)_stopAutoscrollTimer;	// 0x32c15c6d
- (id)_topHTMLView;	// 0x32c188ed
- (BOOL)_transparentBackground;	// 0x32c62325
- (void)_updateSelectionForInputManager;	// 0x32c31959
- (BOOL)_wantsKeyDownForEvent:(id)event;	// 0x32c62839
- (id)_webView;	// 0x32c18de5
- (void)_web_layoutIfNeededRecursive;	// 0x32c18969
- (BOOL)acceptsFirstResponder;	// 0x32c2c525
- (id)accessibilityFocusedUIElement;	// 0x32c62ba1
- (id)accessibilityHitTest:(CGPoint)test;	// 0x32c62b61
- (id)accessibilityRootElement;	// 0x32c627f5
- (void)addSubview:(id)subview;	// 0x32c28f3d
- (void)alignCenter:(id)center;	// 0x32c63c99
- (void)alignJustified:(id)justified;	// 0x32c63c81
- (void)alignLeft:(id)left;	// 0x32c63c69
- (void)alignRight:(id)right;	// 0x32c63c51
- (void)attachRootLayer:(id)layer;	// 0x32c623e5
- (BOOL)becomeFirstResponder;	// 0x32c2c5d1
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;	// 0x32c6479d
- (void)capitalizeWord:(id)word;	// 0x32c628d9
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x32c62ad5
- (unsigned)characterIndexForPoint:(CGPoint)point;	// 0x32c64e9d
- (void)clearFocus;	// 0x32c2d061
- (void)clearText:(id)text;	// 0x32c63411
- (void)close;	// 0x32c25cb5
- (void)closeIfNotCurrentView;	// 0x32c2d785
- (int)conversationIdentifier;	// 0x32c623ed
- (void)copy:(id)copy;	// 0x32c63c39
- (Command)coreCommandByName:(const char *)name;	// 0x32c64011
- (Command)coreCommandBySelector:(SEL)selector;	// 0x32c6416d
- (unsigned)countMatchesForText:(id)text caseSensitive:(BOOL)sensitive limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x32c36649
- (void)cut:(id)cut;	// 0x32c63c21
- (void)dataSourceUpdated:(id)updated;	// 0x32c23bd5
- (void)dealloc;	// 0x32c25c35
- (void)delete:(id)aDelete;	// 0x32c63c09
- (void)deleteBackward:(id)backward;	// 0x32c63bf1
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x32c63bd9
- (void)deleteForward:(id)forward;	// 0x32c63bc1
- (void)deleteToBeginningOfLine:(id)line;	// 0x32c63ba9
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x32c63b91
- (void)deleteToEndOfLine:(id)line;	// 0x32c63b79
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x32c63b61
- (void)deleteToMark:(id)mark;	// 0x32c63b49
- (void)deleteWordBackward:(id)backward;	// 0x32c63b31
- (void)deleteWordForward:(id)forward;	// 0x32c63b19
- (void)deselectAll;	// 0x32c2d015
- (void)detachRootLayer;	// 0x32c623e9
- (void)drawRect:(CGRect)rect;	// 0x32c18d75
- (void)drawSingleRect:(CGRect)rect;	// 0x32c18e11
- (id)elementAtPoint:(CGPoint)point;	// 0x32c64bad
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x32c66505
- (void)executeCoreCommandByName:(const char *)name;	// 0x32c63cb1
- (void)executeCoreCommandBySelector:(SEL)selector;	// 0x32c63e4d
- (void)finalize;	// 0x32c64801
- (CGRect)firstRectForCharacterRange:(NSRange)characterRange;	// 0x32c64f61
- (BOOL)hasMarkedText;	// 0x32c64e19
- (id)hitTest:(CGPoint)test;	// 0x32c2de75
- (void)ignoreSpelling:(id)spelling;	// 0x32c63b01
- (void)indent:(id)indent;	// 0x32c63ae9
- (void)insertBacktab:(id)backtab;	// 0x32c63ad1
- (void)insertLineBreak:(id)aBreak;	// 0x32c63ab9
- (void)insertNewline:(id)newline;	// 0x32c63aa1
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x32c63a89
- (void)insertParagraphSeparator:(id)separator;	// 0x32c63a71
- (void)insertTab:(id)tab;	// 0x32c63a59
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x32c63a41
- (void)insertText:(id)text;	// 0x32c3543d
- (BOOL)isOpaque;	// 0x32c63349
- (void)jumpToSelection:(id)selection;	// 0x32c633c9
- (void)keyDown:(id)down;	// 0x32c62d71
- (void)keyUp:(id)up;	// 0x32c62bd9
- (void)layout;	// 0x32c168ed
- (void)layoutIfNeeded;	// 0x32c625f5
- (void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width adjustingViewSize:(BOOL)size;	// 0x32c1690d
- (void)lowercaseWord:(id)word;	// 0x32c62915
- (BOOL)maintainsInactiveSelection;	// 0x32c2d011
- (void)makeBaseWritingDirectionNatural:(id)natural;	// 0x32c623dd
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x32c63a29
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x32c63a11
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x32c639f9
- (unsigned)markAllMatchesForText:(id)text caseSensitive:(BOOL)sensitive limit:(unsigned)limit;	// 0x32c64bcd
- (NSRange)markedRange;	// 0x32c65bcd
// converted property getter: - (BOOL)markedTextMatchesAreHighlighted;	// 0x32c66685
- (void)markedTextUpdate:(id)update;	// 0x32c64b09
- (void)mouseDown:(id)down;	// 0x32c2e8e1
- (void)mouseMoved:(id)moved;	// 0x32c2dfc1
- (void)mouseUp:(id)up;	// 0x32c2ec6d
- (void)moveBackward:(id)backward;	// 0x32c639e1
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x32c639c9
- (void)moveDown:(id)down;	// 0x32c639b1
- (void)moveDownAndModifySelection:(id)selection;	// 0x32c63999
- (void)moveForward:(id)forward;	// 0x32c63981
- (void)moveForwardAndModifySelection:(id)selection;	// 0x32c63969
- (void)moveLeft:(id)left;	// 0x32c63951
- (void)moveLeftAndModifySelection:(id)selection;	// 0x32c63939
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x32c63921
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x32c63909
- (void)moveRight:(id)right;	// 0x32c638f1
- (void)moveRightAndModifySelection:(id)selection;	// 0x32c638d9
- (void)moveToBeginningOfDocument:(id)document;	// 0x32c638c1
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x32c638a9
- (void)moveToBeginningOfLine:(id)line;	// 0x32c63891
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x32c63879
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x32c63861
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x32c63849
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x32c63831
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x32c63819
- (void)moveToEndOfDocument:(id)document;	// 0x32c63801
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x32c637e9
- (void)moveToEndOfLine:(id)line;	// 0x32c637d1
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x32c637b9
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x32c637a1
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x32c63789
- (void)moveToEndOfSentence:(id)sentence;	// 0x32c63771
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x32c63759
- (void)moveToLeftEndOfLine:(id)line;	// 0x32c63741
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x32c63729
- (void)moveToRightEndOfLine:(id)line;	// 0x32c63711
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x32c636f9
- (void)moveUp:(id)up;	// 0x32c636e1
- (void)moveUpAndModifySelection:(id)selection;	// 0x32c636c9
- (void)moveWordBackward:(id)backward;	// 0x32c636b1
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x32c63699
- (void)moveWordForward:(id)forward;	// 0x32c63681
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x32c63669
- (void)moveWordLeft:(id)left;	// 0x32c63651
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x32c63639
- (void)moveWordRight:(id)right;	// 0x32c63621
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x32c63609
- (void)outdent:(id)outdent;	// 0x32c635f1
- (void)pageDown:(id)down;	// 0x32c635d9
- (void)pageDownAndModifySelection:(id)selection;	// 0x32c635c1
- (void)pageUp:(id)up;	// 0x32c635a9
- (void)pageUpAndModifySelection:(id)selection;	// 0x32c63591
- (void)pasteAsPlainText:(id)text;	// 0x32c623e1
- (void)reapplyStyles;	// 0x32c169b9
- (id)rectsForTextMatches;	// 0x32c666e1
- (BOOL)resignFirstResponder;	// 0x32c2cedd
- (void)scrollWheel:(id)wheel;	// 0x32c6331d
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x32c6336d
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x32c66351
- (void)selectAll;	// 0x32c66329
- (void)selectAll:(id)all;	// 0x32c63579
- (void)selectLine:(id)line;	// 0x32c63561
- (void)selectParagraph:(id)paragraph;	// 0x32c63549
- (void)selectSentence:(id)sentence;	// 0x32c63531
- (void)selectToMark:(id)mark;	// 0x32c63519
- (void)selectWord:(id)word;	// 0x32c63501
- (NSRange)selectedRange;	// 0x32c65235
- (id)selectedString;	// 0x32c64b89
- (CGImageRef)selectionImageForcingBlackText:(BOOL)text;	// 0x32c662e1
- (CGRect)selectionImageRect;	// 0x32c66049
- (CGRect)selectionRect;	// 0x32c65fe1
- (id)selectionTextRects;	// 0x32c660b1
- (id)selectionView;	// 0x32c623f1
- (void)setDataSource:(id)source;	// 0x32c138f5
- (void)setMark:(id)mark;	// 0x32c634e9
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32c65d65
// converted property setter: - (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;	// 0x32c66655
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32c16c6d
- (void)setNeedsLayout:(BOOL)layout;	// 0x32c168a5
- (void)setNeedsToApplyStyles:(BOOL)applyStyles;	// 0x32c623c1
- (void)setScale:(float)scale;	// 0x32c166f9
- (id)string;	// 0x32c64b4d
- (void)subscript:(id)subscript;	// 0x32c634d1
- (void)superscript:(id)superscript;	// 0x32c634b9
- (BOOL)supportsTextEncoding;	// 0x32c623f5
- (void)swapWithMark:(id)mark;	// 0x32c634a1
- (void)toggleBaseWritingDirection:(id)direction;	// 0x32c6285d
- (void)touch:(id)touch;	// 0x32c6315d
- (void)transpose:(id)transpose;	// 0x32c63489
- (void)underline:(id)underline;	// 0x32c63471
- (void)unmarkAllTextMatches;	// 0x32c666b5
- (void)unmarkText;	// 0x32c65d11
- (void)unscript:(id)unscript;	// 0x32c63459
- (void)uppercaseWord:(id)word;	// 0x32c62951
- (void)viewDidMoveToHostWindow;	// 0x32c623bd
- (void)viewDidMoveToWindow;	// 0x32c15b89
- (void)viewWillDraw;	// 0x32c18839
- (void)viewWillMoveToHostWindow:(id)view;	// 0x32c623b9
- (void)viewWillMoveToWindow:(id)view;	// 0x32c63395
- (void)willRemoveSubview:(id)subview;	// 0x32c2a925
- (void)yank:(id)yank;	// 0x32c63441
- (void)yankAndSelect:(id)select;	// 0x32c63429
@end

