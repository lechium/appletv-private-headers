/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormAccessoryDelegate.h"
#import "UIBrowserDocumentController.h"
#import "UIWebDocumentView.h"
#import "UIKit-Structs.h"

@class DOMNode, UIWebPDFView, NSMutableArray, NSArray, NSTimer, UIWebFormAccessory, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, UIWebRotatingSheet;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory *_accessory;	// 568 = 0x238
	NSObject<UIFormPeripheral> *_input;	// 572 = 0x23c
	DOMNode *_currentAssistedNode;	// 576 = 0x240
	CGRect _inputViewBounds;	// 580 = 0x244
	CGRect _addressViewBounds;	// 596 = 0x254
	float _lastAdjustmentForScroller;	// 612 = 0x264
	unsigned _accessoryEnabled : 1;	// 616 = 0x268
	unsigned _forceInputView : 1;	// 616 = 0x268
	unsigned _formIsAutoFilling : 1;	// 616 = 0x268
	unsigned _inputViewObeysDOMFocus : 1;	// 616 = 0x268
	unsigned _hasEditedTextField : 1;	// 616 = 0x268
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 620 = 0x26c
	UIWebFormDelegate *_formDelegate;	// 624 = 0x270
	UIResponder *_editingDelegateForEverythingExceptForms;	// 628 = 0x274
	unsigned _dispatchedTouchEvents;	// 632 = 0x278
	NSMutableArray *_deferredTouchEvents;	// 636 = 0x27c
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 640 = 0x280
	struct {
		UIWebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 672 = 0x2a0
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x32fa3391; S=0x32e1f9a9; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x32fa33b1; S=0x32e1f9cd; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x32fa33c1; S=0x32e1c829; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x32fa33a1; S=0x32e1f08d; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x32fa33d1; S=0x32fa33e5; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x32fa089d; S=0x32d21bf5; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x32fa3479; @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// G=0x32fa3439; S=0x32fa345d; @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x32fa3401; S=0x32fa3419; @synthesize=_inputViewObeysDOMFocus
@property(readonly, assign, nonatomic) BOOL isDispatchingTouchEvents;	// G=0x32fa11c5; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x32fa092d; S=0x32fa08e1; 
+ (id)_PDFPageNumberLabel:(BOOL)label;	// 0x32fa2dc9
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x32f9fd15
+ (BOOL)isAutoFillAllowed;	// 0x32f9fd41
+ (float)preferredScrollDecelerationFactor;	// 0x32d1d6a1
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x32d1f90d
- (id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;	// 0x32fa327d
// declared property getter: - (id)_accessory;	// 0x32fa3391
- (CGRect)_activeRectForRectToCenter:(CGRect)center;	// 0x32fa121d
- (void)_autoFillFrame:(id)frame;	// 0x32d20e29
- (id)_buildVersion;	// 0x32d212dd
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x32fa1565
- (void)_clearAllConsoleMessages;	// 0x32dc30e9
- (void)_clearSelectionAndUI;	// 0x32fa315d
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x32dc8bc5
// declared property getter: - (id)_currentAssistedNode;	// 0x32fa33b1
- (CGSize)_defaultScrollViewContentSize;	// 0x32fa24e1
- (void)_deferWebEvent:(id)event;	// 0x32fa1031
- (void)_dispatchWebEvent:(id)event;	// 0x32fa0f65
- (void)_displayFormNodeInputView;	// 0x32fa0549
- (BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;	// 0x32dc03bd
- (void)_dumpWebArchiveAtPath:(id)path;	// 0x32fa3081
- (id)_editingDelegate;	// 0x32fa0219
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x32fa33c1
- (void)_endDeferringEvents;	// 0x32fa0ff9
- (unsigned)_firstVisiblePDFPageNumber;	// 0x32fa2e2d
- (void)_handleDeferredEvents;	// 0x32fa10bd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32f9fef9
// declared property getter: - (id)_input;	// 0x32fa33a1
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x32dce2f9
- (id)_keyboardResponder;	// 0x32f9fe99
- (void)_keyboardWillChangeFrame:(id)_keyboard;	// 0x32dcde41
- (void)_keyboardWillHide:(id)_keyboard;	// 0x32dce431
- (void)_keyboardWillShow:(id)_keyboard;	// 0x32dcde85
- (CGPoint)_originForPDFPageLabelInSuperview:(id)superview;	// 0x32fa2e4d
- (void)_promptForReplace:(id)replace;	// 0x32fa02d9
- (id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;	// 0x32dc02b1
- (BOOL)_requiresKeyboardResetOnReload;	// 0x32e1f015
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32e1f189
- (void)_resetFormDataForFrame:(id)frame;	// 0x32dc24a9
- (void)_rotateEnclosingScrollView:(id)view toFrame:(CGRect)frame withVisibleHeight:(float)visibleHeight rotationDelegate:(id)delegate;	// 0x32fa2599
- (void)_scrollCaretToVisible:(id)visible;	// 0x32fa0aa5
- (void)_setAddressViewFrame:(CGRect)frame;	// 0x32dc016d
- (void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;	// 0x32d21261
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)automaticKeyboardInfo adjustScrollView:(BOOL)view;	// 0x32dce32d
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x32fa319d
- (void)_setUIWebViewUserAgent;	// 0x32e1cf19
- (BOOL)_shouldDeferEvents;	// 0x32fa0f4d
- (void)_startAssistingKeyboard;	// 0x32fa02fd
- (void)_startAssistingNode:(id)node;	// 0x32fa0325
- (void)_startDeferringEvents;	// 0x32fa0fc1
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x32fa31d5
- (void)_stopAssistingFormNode;	// 0x32fa0475
- (void)_stopAssistingKeyboard;	// 0x32fa0311
- (void)_stopAssistingNode:(id)node;	// 0x32fa0345
- (void)_updateAccessory;	// 0x32fa05b5
- (void)_updateFixedPositionContent;	// 0x32dc6bd9
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;	// 0x32dcda35
- (void)_updateFixedPositioningObjectsLayoutSoon;	// 0x32fa0359
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x32fa2ee9
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x32fa0369
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x32dc92e5
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x32fa18c1
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x32fa1c21
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x32fa1c9d
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x32fa2489
- (void)acceptedAutoFillWord:(id)word;	// 0x32fa0c11
- (void)accessoryAutoFill;	// 0x32fa09ed
- (void)accessoryClear;	// 0x32fa0a79
- (void)accessoryDone;	// 0x32fa0971
- (void)accessoryTab:(BOOL)tab;	// 0x32fa0981
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x32fa089d
- (void)assistFormNode:(id)node;	// 0x32fa0721
- (void)assistFormNodeForTyping:(id)typing;	// 0x32fa06dd
- (void)autoFillWithElementValue;	// 0x32fa0c59
- (BOOL)canAutoFill;	// 0x32fa0b5d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32f9ffe5
- (void)clearMessagesMatchingMask:(int)mask;	// 0x32d21a25
- (void)copy:(id)copy;	// 0x32fa0171
- (void)dealloc;	// 0x32e1f83d
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x32fa0ae1
- (id)formElement;	// 0x32dcab69
// declared property getter: - (BOOL)hasEditedTextField;	// 0x32fa3479
- (id)inputAccessoryView;	// 0x32e1f0b1
- (id)inputView;	// 0x32e1f019
// declared property getter: - (CGRect)inputViewBounds;	// 0x32fa3439
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x32fa3401
- (void)installGestureRecognizers;	// 0x32d1fbb5
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x32fa33d1
- (BOOL)isAutoFillMode;	// 0x32fa0c9d
- (BOOL)isAutoFilling;	// 0x32fa0d25
// declared property getter: - (BOOL)isDispatchingTouchEvents;	// 0x32fa11c5
- (BOOL)isEditable;	// 0x32f9fe41
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x32fa092d
- (id)messagesMatchingMask:(int)mask;	// 0x32fa2ce5
- (BOOL)playsNicelyWithGestures;	// 0x32fa0251
- (BOOL)resignFirstResponder;	// 0x32dbdfcd
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x32fa33e5
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x32d21bf5
- (void)setBounds:(CGRect)bounds;	// 0x32fa03ad
- (void)setFrame:(CGRect)frame;	// 0x32d1faed
// declared property setter: - (void)setInputViewBounds:(CGRect)bounds;	// 0x32fa345d
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x32fa3419
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x32fa08e1
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x32e1f9a9
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x32e1f9cd
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x32e1c829
// declared property setter: - (void)set_input:(id)input;	// 0x32e1f08d
- (id)textDocument;	// 0x32f9fed9
- (id)textFormElement;	// 0x32dcab41
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x32fa0bc9
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x32fa0b81
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x32d20e05
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x32dc35d1
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x32fa2a25
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x32dc22ed
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x32fa0e41
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x32fa0d55
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x32dc23c9
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x32fa11fd
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x32fa0d3d
@end
