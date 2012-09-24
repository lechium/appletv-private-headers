/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebDocumentView.h"
#import "UIAutoscrollContainer.h"
#import "UIKit-Structs.h"

@class DOMDocument, DOMHTMLElement, NSString, UIView;
@protocol UITextInput;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument *_document;	// 608 = 0x260
	DOMHTMLElement *_textElement;	// 612 = 0x264
	DOMHTMLElement *_sizeElement;	// 616 = 0x268
	NSString *_currentStyle;	// 620 = 0x26c
	UIView<UITextInput> *_proxiedView;	// 624 = 0x270
	unsigned _baseWritingDirectionIsRTL : 1;	// 628 = 0x274
	unsigned _changingView : 1;	// 628 = 0x274
	unsigned _disableNotifications : 1;	// 628 = 0x274
	unsigned _delegateRespondsToFieldEditorDidChange : 1;	// 628 = 0x274
	unsigned _delegateRespondsToShouldInsertText : 1;	// 628 = 0x274
	unsigned _delegateRespondsToShouldReplaceWithText : 1;	// 628 = 0x274
	unsigned _fieldEditorReentrancyGuard : 1;	// 628 = 0x274
	unsigned _clearOnDelete : 1;	// 628 = 0x274
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x33bc8435; S=0x33bc8481; 
@property(assign) BOOL notificationsDisabled;	// G=0x33b6e875; S=0x33bc7e11; converted property
@property(retain) id style;	// G=0x33acc8a9; S=0x33ac9ae5; converted property
+ (id)activeFieldEditor;	// 0x33afaea9
+ (id)excludedElementsForHTML;	// 0x33bc84e1
+ (void)releaseSharedInstance;	// 0x33a5d781
+ (id)sharedFieldEditor;	// 0x33ac912d
- (id)initWithFrame:(CGRect)frame;	// 0x33ac9181
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x33b6e7e5
- (id)_responderForBecomeFirstResponder;	// 0x33bc72c1
- (void)_selectNSRange:(NSRange)range;	// 0x33acae8d
- (void)_setTextElementAttributedText:(id)text;	// 0x33bc7635
- (void)_setTextElementString:(id)string;	// 0x33ac9c4d
- (void)_setTextElementStyle:(id)style;	// 0x33ac9b6d
- (id)_textSelectingContainer;	// 0x33ae3c85
- (id)attributedText;	// 0x33bc7411
- (id)automaticallySelectedOverlay;	// 0x33bc7cdd
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x33bc8435
- (void)autoscrollWillNotStart;	// 0x33bc8431
- (void)becomeFieldEditorForView:(id)view;	// 0x33ac95c5
- (void)beginSelectionChange;	// 0x33bc7a45
- (CGRect)caretRect;	// 0x33acb469
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x33acccb1
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x33bc72d1
- (CGRect)contentFrameForView:(id)view;	// 0x33bc84bd
- (CGSize)contentSize;	// 0x33b639c1
- (id)customOverlayContainer;	// 0x33bc7c95
- (void)dealloc;	// 0x33bc721d
- (void)deleteBackward;	// 0x33bc7341
- (void)disableClearsOnInsertion;	// 0x33bc79fd
- (BOOL)hasMarkedText;	// 0x33acc7f9
- (id)interactionAssistant;	// 0x33acc7a9
- (BOOL)isEditing;	// 0x33bc7e2d
- (BOOL)isInsideRichlyEditableTextWidget;	// 0x33bc79b5
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x33afac81
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x33b3db05
- (BOOL)keyboardInputChanged:(id)changed;	// 0x33aeca51
- (void)keyboardInputChangedSelection:(id)selection;	// 0x33acf44d
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x33b6e3a5
- (void)mouseDown:(GSEventRef)down;	// 0x33bc7acd
- (void)mouseDragged:(GSEventRef)dragged;	// 0x33bc7b2d
- (BOOL)mouseEventsChangeSelection;	// 0x33bc7e29
- (void)mouseUp:(GSEventRef)up;	// 0x33bc7b8d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x33b6e875
- (id)proxiedView;	// 0x33acdd15
- (BOOL)resignFirstResponder;	// 0x33afc75d
- (void)resumeWithNotification:(id)notification;	// 0x33bc7c0d
- (void)revealSelection;	// 0x33acb6c1
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x33acc245
- (void)scrollToMakeInlineHoleVisible;	// 0x33aec7f1
- (int)scrollXOffset;	// 0x33afc705
- (int)scrollYOffset;	// 0x33afc731
- (void)selectAll;	// 0x33b58215
- (void)selectionChanged;	// 0x33acb039
- (NSRange)selectionRange;	// 0x33b1d251
- (id)selectionView;	// 0x33ac9abd
- (void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x33bc786d
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x33bc8481
- (void)setBaseWritingDirection:(int)direction;	// 0x33acc82d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x33bc8609
- (void)setFrame:(CGRect)frame;	// 0x33ac9435
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x33bc7e11
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x33aca9a9
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x33aca9cd
- (void)setSelection:(NSRange)selection;	// 0x33acae2d
// converted property setter: - (void)setStyle:(id)style;	// 0x33ac9ae5
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x33aca071
- (void)setTextSelectionBehavior:(int)behavior;	// 0x33acaa39
- (id)sizeStyleForRect:(CGRect)rect;	// 0x33acad79
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x33bc7e51
// converted property getter: - (id)style;	// 0x33acc8a9
- (id)text;	// 0x33aca879
- (id)textColorForCaretSelection;	// 0x33bc73ad
- (id)textInputTraits;	// 0x33ac954d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33bc7bfd
- (void)updateAutoscroll:(id)autoscroll;	// 0x33bc8051
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x33b1db29
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x33b6e8c9
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x33b1d87d
- (void)webViewDidChange:(id)webView;	// 0x33aebe9d
@end
