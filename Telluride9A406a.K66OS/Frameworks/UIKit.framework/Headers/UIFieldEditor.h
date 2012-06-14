/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAutoscrollContainer.h"
#import "UIKit-Structs.h"
#import "UIWebDocumentView.h"

@class NSString, DOMDocument, DOMHTMLElement, UIView;
@protocol UITextSelectingContainer;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument *_document;	// 568 = 0x238
	DOMHTMLElement *_textElement;	// 572 = 0x23c
	DOMHTMLElement *_sizeElement;	// 576 = 0x240
	NSString *_initialText;	// 580 = 0x244
	NSString *_currentStyle;	// 584 = 0x248
	UIView<UITextSelectingContainer> *_proxiedView;	// 588 = 0x24c
@private
	unsigned _baseWritingDirectionIsRTL : 1;	// 592 = 0x250
	unsigned _changingView : 1;	// 592 = 0x250
	unsigned _disableNotifications : 1;	// 592 = 0x250
	unsigned _delegateRespondsToFieldEditorDidChange : 1;	// 592 = 0x250
	unsigned _delegateRespondsToShouldInsertText : 1;	// 592 = 0x250
	unsigned _delegateRespondsToShouldReplaceWithText : 1;	// 592 = 0x250
	unsigned _fieldEditorReentrancyGuard : 1;	// 592 = 0x250
	unsigned _isResigningFirstResponder : 1;	// 592 = 0x250
	unsigned _mouseWasDragged : 1;	// 593 = 0x251
	unsigned _reserved : 21;	// 593 = 0x251
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;	// G=0x358576c1; S=0x3585770d; 
@property(assign) BOOL notificationsDisabled;	// G=0x3580fa8d; S=0x3585708d; converted property
@property(retain) id style;	// G=0x3575de39; S=0x3575b385; converted property
+ (id)activeFieldEditor;	// 0x3578f425
+ (void)releaseSharedInstance;	// 0x356e7b3d
+ (id)sharedFieldEditor;	// 0x3575a975
- (id)initWithFrame:(CGRect)frame;	// 0x3575a9c9
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x3580fa25
- (id)_responderForBecomeFirstResponder;	// 0x35856bbd
- (void)_selectNSRange:(NSRange)range;	// 0x3575c515
- (void)_setTextElementString:(id)string;	// 0x3575b4d1
- (void)_setTextElementStyle:(id)style;	// 0x3575b401
- (id)_textSelectingContainer;	// 0x35777d39
- (id)automaticallySelectedOverlay;	// 0x35856eb1
// declared property getter: - (CGPoint)autoscrollContentOffset;	// 0x358576c1
- (void)autoscrollWillNotStart;	// 0x358576bd
- (void)becomeFieldEditorForView:(id)view;	// 0x3575ae29
- (CGRect)caretRect;	// 0x3575cb5d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x3575e059
- (unsigned)characterOffsetAtPoint:(CGPoint)point;	// 0x35856bcd
- (CGRect)contentFrameForView:(id)view;	// 0x35857749
- (CGSize)contentSize;	// 0x357fdfa9
- (id)customOverlayContainer;	// 0x35856e69
- (void)dealloc;	// 0x35856b09
- (BOOL)hasMarkedText;	// 0x3575dd9d
- (id)interactionAssistant;	// 0x3575dd51
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x3578f1fd
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x357d6845
- (BOOL)keyboardInputChanged:(id)changed;	// 0x357815fd
- (void)keyboardInputChangedSelection:(id)selection;	// 0x35760c2d
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x3580f5e1
- (void)mouseDown:(GSEventRef)down;	// 0x35856ca5
- (void)mouseDragged:(GSEventRef)dragged;	// 0x35856d09
- (BOOL)mouseEventsChangeSelection;	// 0x358570a5
- (void)mouseUp:(GSEventRef)up;	// 0x35856d6d
// converted property getter: - (BOOL)notificationsDisabled;	// 0x3580fa8d
- (id)proxiedView;	// 0x3575f3dd
- (BOOL)resignFirstResponder;	// 0x35790be9
- (void)resumeWithNotification:(id)notification;	// 0x35856de1
- (void)revealSelection;	// 0x3575cdc5
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x3575d865
- (void)scrollToMakeInlineHoleVisible;	// 0x35781399
- (int)scrollXOffset;	// 0x35790b91
- (int)scrollYOffset;	// 0x35790bbd
- (void)selectAll;	// 0x357f211d
- (void)selectionChanged;	// 0x3575c6a9
- (CGRect)selectionClipRect;	// 0x358570a9
- (NSRange)selectionRange;	// 0x357b3531
- (id)selectionView;	// 0x3575b35d
// declared property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x3585770d
- (void)setBaseWritingDirection:(int)direction;	// 0x3575ddc9
- (void)setFrame:(CGRect)frame;	// 0x3575aca1
// converted property setter: - (void)setNotificationsDisabled:(BOOL)disabled;	// 0x3585708d
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x3575c059
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x3575c07d
- (void)setSelection:(NSRange)selection;	// 0x3575c4b5
// converted property setter: - (void)setStyle:(id)style;	// 0x3575b385
- (void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;	// 0x3575b7ad
- (void)setTextSelectionBehavior:(int)behavior;	// 0x3575c0e9
- (id)sizeStyleForRect:(CGRect)rect;	// 0x3575c401
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x358570cd
// converted property getter: - (id)style;	// 0x3575de39
- (id)text;	// 0x3575bf31
- (id)textColorForCaretSelection;	// 0x35856c49
- (id)textInputTraits;	// 0x3575adb1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35856dd1
- (void)updateAutoscroll:(id)autoscroll;	// 0x358572cd
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x357b3e9d
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x3580fad1
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x357b3bdd
- (void)webViewDidChange:(id)webView;	// 0x357809f1
@end
