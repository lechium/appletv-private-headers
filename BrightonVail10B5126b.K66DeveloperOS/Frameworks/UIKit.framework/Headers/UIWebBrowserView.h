/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormAccessoryDelegate.h"
#import "UIBrowserDocumentController.h"
#import "UIKit-Structs.h"
#import "_UIWebRotationDelegate.h"
#import "UIWebDocumentView.h"

@class NSMutableArray, NSArray, NSTimer, UIWebFormAccessory, UIWebFormDelegate, UIWebTouchEventsGestureRecognizer, UIWebRotatingSheet, DOMNode, UIWebPDFView;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController, _UIWebRotationDelegate> {
	UIWebFormAccessory *_accessory;	// 612 = 0x264
	NSObject<UIFormPeripheral> *_input;	// 616 = 0x268
	DOMNode *_currentAssistedNode;	// 620 = 0x26c
	DOMNode *_assistedNodeStartingFocusRedirects;	// 624 = 0x270
	CGRect _inputViewBounds;	// 628 = 0x274
	CGRect _addressViewBounds;	// 644 = 0x284
	float _lastAdjustmentForScroller;	// 660 = 0x294
	unsigned _audioSessionCategoryOverride;	// 664 = 0x298
	unsigned _accessoryEnabled : 1;	// 668 = 0x29c
	unsigned _forceInputView : 1;	// 668 = 0x29c
	unsigned _formIsAutoFilling : 1;	// 668 = 0x29c
	unsigned _inputViewObeysDOMFocus : 1;	// 668 = 0x29c
	unsigned _allowDOMFocusRedirects : 1;	// 668 = 0x29c
	unsigned _hasEditedTextField : 1;	// 668 = 0x29c
	unsigned _alwaysDispatchesScrollEvents : 1;	// 668 = 0x29c
	UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;	// 672 = 0x2a0
	UIWebFormDelegate *_formDelegate;	// 676 = 0x2a4
	UIResponder *_editingDelegateForEverythingExceptForms;	// 680 = 0x2a8
	unsigned _dispatchedTouchEvents;	// 684 = 0x2ac
	NSMutableArray *_deferredTouchEvents;	// 688 = 0x2b0
	struct {
		NSMutableArray *all;
		NSMutableArray *html;
		NSMutableArray *javascript;
		NSMutableArray *css;
		NSMutableArray *error;
		NSMutableArray *warning;
		NSMutableArray *tip;
		NSMutableArray *log;
	} _messages;	// 692 = 0x2b4
	struct {
		UIWebPDFView *view;
		NSTimer *timer;
	} _pdf;	// 724 = 0x2d4
}
@property(retain, nonatomic) UIWebFormAccessory *_accessory;	// G=0x32e2a90d; S=0x32e2a91d; @synthesize
@property(retain, nonatomic) DOMNode *_currentAssistedNode;	// G=0x32e2a93d; S=0x32e2a94d; @synthesize
@property(assign, nonatomic) UIResponder *_editingDelegateForEverythingExceptForms;	// G=0x32c4d01d; S=0x32e2a95d; @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral> *_input;	// G=0x32e2a92d; S=0x32c58fe5; @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// G=0x32e2a96d; S=0x32e2a981; @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowDOMFocusRedirects;	// G=0x32c59139; S=0x32e2a9d5; @synthesize=_allowDOMFocusRedirects
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x32e27d79; S=0x32b9f455; 
@property(assign, nonatomic) BOOL alwaysDispatchesScrollEvents;	// G=0x32e2a785; S=0x32b9f4a1; 
@property(assign, nonatomic) unsigned audioSessionCategoryOverride;	// G=0x32e27e99; S=0x32e27e4d; 
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// G=0x32e2a9f5; @synthesize=_hasEditedTextField
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// G=0x32e2a99d; S=0x32e2a9b1; @synthesize=_inputViewObeysDOMFocus
@property(readonly, assign, nonatomic) BOOL isDispatchingTouchEvents;	// G=0x32e28975; 
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x32e27e09; S=0x32e27dbd; 
+ (id)_PDFPageNumberLabel:(BOOL)label;	// 0x32e2a221
+ (id)getUIWebBrowserViewForWebFrame:(id)webFrame;	// 0x32e271c1
+ (BOOL)isAutoFillAllowed;	// 0x32e271ed
+ (float)preferredScrollDecelerationFactor;	// 0x32b961b9
- (id)initWithFrame:(CGRect)frame;	// 0x32b987f9
- (id)initWithWebView:(id)webView frame:(CGRect)frame;	// 0x32b988b9
- (id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;	// 0x32e2a66d
// declared property getter: - (id)_accessory;	// 0x32e2a90d
- (CGRect)_activeRectForRectToCenter:(CGRect)center;	// 0x32e28a9d
- (void)_autoFillFrame:(id)frame;	// 0x32b9eb75
- (void)_beginAllowingFocusRedirects;	// 0x32e27b71
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;	// 0x32e2919d
- (void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge toValue:(float)value;	// 0x32e28de5
- (void)_clearAllConsoleMessages;	// 0x32b9e2cd
- (void)_clearSelectionAndUI;	// 0x32c569e9
- (CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;	// 0x32e289ad
// declared property getter: - (id)_currentAssistedNode;	// 0x32e2a93d
- (CGSize)_defaultScrollViewContentSize;	// 0x32e29cad
- (void)_deferWebEvent:(id)event;	// 0x32e285d5
- (void)_didScroll;	// 0x32c3b7dd
- (void)_dispatchWebEvent:(id)event;	// 0x32e28505
- (void)_displayFormNodeInputView;	// 0x32e279b1
- (BOOL)_dumpWebArchiveAtPath:(id)path;	// 0x32e2a4a1
- (id)_editingDelegate;	// 0x32e27731
// declared property getter: - (id)_editingDelegateForEverythingExceptForms;	// 0x32c4d01d
- (void)_endAllowingFocusRedirects;	// 0x32e27bb9
- (void)_endDeferringEvents;	// 0x32e28599
- (unsigned)_firstVisiblePDFPageNumber;	// 0x32e2a285
- (void)_handleDeferredEvents;	// 0x32e28665
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32e274b1
// declared property getter: - (id)_input;	// 0x32e2a92d
- (BOOL)_keepKeyboardVisibleDuringFocusRedirects;	// 0x32c590e9
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x32c4e291
- (id)_keyboardResponder;	// 0x32e27455
- (void)_keyboardWillChangeFrame:(id)_keyboard;	// 0x32c4e1b1
- (void)_keyboardWillHide:(id)_keyboard;	// 0x32c4e48d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x32c4e1fd
- (CGPoint)_originForPDFPageLabelInSuperview:(id)superview;	// 0x32e2a2a5
- (void)_promptForReplace:(id)replace;	// 0x32e2776d
- (BOOL)_requiresKeyboardResetOnReload;	// 0x32c58f69
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32c5914d
- (void)_resetFormDataForFrame:(id)frame;	// 0x32b9db45
- (void)_scrollCaretToVisible:(id)visible;	// 0x32e28049
- (void)_setAddressViewFrame:(CGRect)frame;	// 0x32b9c53d
- (void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)automaticKeyboardInfo adjustScrollView:(BOOL)view;	// 0x32c4e2c5
- (void)_setSelectedDOMRangeAndUpdateUI:(id)ui;	// 0x32e2a58d
- (BOOL)_shouldDeferEvents;	// 0x32e284ed
- (void)_startAssistingKeyboard;	// 0x32e27791
- (void)_startAssistingNode:(id)node;	// 0x32e277b9
- (void)_startDeferringEvents;	// 0x32e2855d
- (void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;	// 0x32e2a5c5
- (void)_stopAssistingFormNode;	// 0x32e27911
- (void)_stopAssistingKeyboard;	// 0x32e277a5
- (void)_stopAssistingNode:(id)node;	// 0x32e277d9
- (void)_updateAccessory;	// 0x32e27a35
- (void)_updateFixedPositionContent;	// 0x32c3bf4d
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;	// 0x32ba0685
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;	// 0x32b9aa39
- (void)_updateFixedPositioningObjectsLayoutSoon;	// 0x32e277f1
- (void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;	// 0x32e2a335
- (void)_updateScrollerViewForInputView:(id)inputView;	// 0x32e27801
- (void)_webTouchEventsRecognized:(id)recognized;	// 0x32e28785
- (void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;	// 0x32e291d9
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;	// 0x32e2953d
- (void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;	// 0x32e295cd
- (void)_zoomToRect:(CGRect)rect withScale:(float)scale;	// 0x32e29c59
- (void)acceptedAutoFillWord:(id)word;	// 0x32e28181
- (void)accessoryAutoFill;	// 0x32e27f8d
- (void)accessoryClear;	// 0x32e2801d
- (void)accessoryDone;	// 0x32e27ee1
- (void)accessoryTab:(BOOL)tab;	// 0x32e27ef1
- (CGRect)activeRectForRectOfInterest:(CGRect)interest;	// 0x32e2a849
// declared property getter: - (BOOL)allowDOMFocusRedirects;	// 0x32c59139
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x32e27d79
// declared property getter: - (BOOL)alwaysDispatchesScrollEvents;	// 0x32e2a785
- (void)assistFormNode:(id)node;	// 0x32e27c2d
// declared property getter: - (unsigned)audioSessionCategoryOverride;	// 0x32e27e99
- (void)autoFillWithElementValue;	// 0x32e281c5
- (BOOL)canAutoFill;	// 0x32e28111
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32e27579
- (void)clearMessagesMatchingMask:(int)mask;	// 0x32b9e2e5
- (BOOL)considerHeightOfRectOfInterestForRotation;	// 0x32e2a8f5
- (CGSize)contentSizeForScrollView:(id)scrollView;	// 0x32e2a8d5
- (void)copy:(id)copy;	// 0x32e27689
- (void)dealloc;	// 0x32e272ed
- (void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;	// 0x32e28089
- (id)formElement;	// 0x32c4d00d
// declared property getter: - (BOOL)hasEditedTextField;	// 0x32e2a9f5
- (float)heightToKeepVisible;	// 0x32e2a845
- (id)inputAccessoryView;	// 0x32c58ff5
- (id)inputView;	// 0x32c58f6d
// declared property getter: - (BOOL)inputViewObeysDOMFocus;	// 0x32e2a99d
- (void)installGestureRecognizers;	// 0x32b98b9d
// declared property getter: - (BOOL)isAccessoryEnabled;	// 0x32e2a96d
- (BOOL)isAutoFillMode;	// 0x32e28209
- (BOOL)isAutoFilling;	// 0x32e28295
// declared property getter: - (BOOL)isDispatchingTouchEvents;	// 0x32e28975
- (BOOL)isEditable;	// 0x32c4ce79
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x32e27e09
- (id)messagesMatchingMask:(int)mask;	// 0x32e2a13d
- (float)minimumVerticalContentOffset;	// 0x32e2a841
- (BOOL)playsNicelyWithGestures;	// 0x32c4cf81
- (CGRect)rectOfInterestForRotation;	// 0x32e2a81d
- (BOOL)resignFirstResponder;	// 0x32c3ecb1
- (void)rotateEnclosingScrollViewToFrame:(CGRect)frame;	// 0x32e29d69
- (float)scaleForProposedNewScale:(float)proposedNewScale andOldScale:(float)scale;	// 0x32e2a88d
- (XXStruct_NwkmQC)scalesForContainerSize:(CGSize)containerSize;	// 0x32e2a79d
// declared property setter: - (void)setAccessoryEnabled:(BOOL)enabled;	// 0x32e2a981
// declared property setter: - (void)setAllowDOMFocusRedirects:(BOOL)redirects;	// 0x32e2a9d5
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x32b9f455
// declared property setter: - (void)setAlwaysDispatchesScrollEvents:(BOOL)events;	// 0x32b9f4a1
// declared property setter: - (void)setAudioSessionCategoryOverride:(unsigned)override;	// 0x32e27e4d
- (void)setBounds:(CGRect)bounds;	// 0x32e27849
- (void)setFrame:(CGRect)frame;	// 0x32b98ad1
// declared property setter: - (void)setInputViewObeysDOMFocus:(BOOL)focus;	// 0x32e2a9b1
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x32e27dbd
// declared property setter: - (void)set_accessory:(id)accessory;	// 0x32e2a91d
// declared property setter: - (void)set_currentAssistedNode:(id)node;	// 0x32e2a94d
// declared property setter: - (void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;	// 0x32e2a95d
// declared property setter: - (void)set_input:(id)input;	// 0x32c58fe5
- (id)textDocument;	// 0x32e27491
- (id)textFormElement;	// 0x32c5792d
- (void)updateBoundariesOfScrollView:(id)scrollView withScales:(XXStruct_NwkmQC)scales;	// 0x32e2a7dd
- (void)webView:(id)view addMessageToConsole:(id)console withSource:(id)source;	// 0x32e29e51
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x32e28135
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x32b9ec01
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x32b9ae85
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x32b9ea19
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x32b9c4a5
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x32e283c5
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x32e282c1
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x32b9c661
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x32e28a7d
- (void)webViewFormEditedStatusHasChanged:(id)changed;	// 0x32e282a9
@end
