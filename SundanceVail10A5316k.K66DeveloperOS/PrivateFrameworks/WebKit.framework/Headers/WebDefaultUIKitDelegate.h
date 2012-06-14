/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject {
}
+ (id)sharedUIKitDelegate;	// 0x3500934d
- (void)_webthread_webView:(id)view attachRootLayer:(id)layer;	// 0x35034b5d
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x35034b55
- (id)checkSpellingOfString:(id)string;	// 0x35034b91
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x35034ac9
- (void)deleteFromInput;	// 0x35034b59
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x35034ae1
- (int)getPasteboardChangeCount;	// 0x35034bad
- (int)getPasteboardItemsCount;	// 0x35034b9d
- (BOOL)hasRichlyEditableSelection;	// 0x35034ba5
- (BOOL)isUnperturbedDictationResultMarker:(id)marker;	// 0x35034bb1
- (BOOL)performsTwoStepPaste:(id)paste;	// 0x35034ba9
- (id)readDataFromPasteboard:(id)pasteboard withIndex:(int)index;	// 0x35034b99
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x35034b6d
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x35034ba1
- (void)webView:(id)view addMessageToConsole:(id)console withSource:(id)source;	// 0x35034bbd
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x35034b39
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x35034b09
- (void)webView:(id)view didCreateOrUpdateScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer scrollSize:(id)size forNode:(id)node allowHorizontalScrollbar:(BOOL)scrollbar allowVerticalScrollbar:(BOOL)scrollbar7;	// 0x35034b65
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x35034b35
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x35034b31
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x35034b0d
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x350235b1
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x35034b3d
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x35034b4d
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x35034b21
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x35034b41
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x35034b51
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x35034b19
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x35034b05
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x35028461
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x350239e9
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x35034b1d
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x35034b45
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x35034b15
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener allowMultipleFiles:(BOOL)files acceptMIMETypes:(id)types;	// 0x35034b7d
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x35034b11
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x35034b29
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x35034bb5
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x35034b2d
- (void)webView:(id)view willRemoveScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer forNode:(id)node;	// 0x35034b69
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x35034b49
- (void)webViewDidCommitCompositingLayerChanges:(id)webView;	// 0x35034b61
- (void)webViewDidDrawTiles:(id)webView;	// 0x35034bb9
- (void)webViewDidEndOverflowScroll:(id)webView;	// 0x35034b79
- (void)webViewDidLayout:(id)webView;	// 0x35034b71
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x35034b25
- (void)webViewDidStartOverflowScroll:(id)webView;	// 0x35034b75
- (void)writeDataToPasteboard:(id)pasteboard;	// 0x35034b95
@end

