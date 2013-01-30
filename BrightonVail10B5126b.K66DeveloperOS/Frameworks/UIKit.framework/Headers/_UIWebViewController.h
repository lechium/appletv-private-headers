/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class _UIRemoteWebViewController, UIBarButtonItem, _UIAsyncInvocation, NSString, _UIQueueingServiceWebViewControllerProxy;
@protocol _UIWebViewControllerDelegate;

@interface _UIWebViewController : UIViewController {
	_UIAsyncInvocation *_cancelViewServiceRequest;	// 196 = 0xc4
	_UIRemoteWebViewController *_remoteViewController;	// 200 = 0xc8
	_UIQueueingServiceWebViewControllerProxy *_serviceProxy;	// 204 = 0xcc
	id<_UIWebViewControllerDelegate> _delegate;	// 208 = 0xd0
	UIBarButtonItem *_backBarButtonItem;	// 212 = 0xd4
	UIBarButtonItem *_forwardBarButtonItem;	// 216 = 0xd8
	BOOL _canGoBack;	// 220 = 0xdc
	BOOL _canGoForward;	// 221 = 0xdd
	BOOL _loading;	// 222 = 0xde
	float _estimatedProgress;	// 224 = 0xe0
	NSString *_pageTitle;	// 228 = 0xe4
	NSString *_URLString;	// 232 = 0xe8
}
@property(copy, nonatomic) NSString *URLString;	// G=0x32f18915; S=0x32f1825d; @synthesize=_URLString
@property(readonly, assign, nonatomic) UIBarButtonItem *backBarButtonItem;	// G=0x32f188a1; @synthesize=_backBarButtonItem
@property(readonly, assign, nonatomic) BOOL canGoBack;	// G=0x32f188c1; @synthesize=_canGoBack
@property(readonly, assign, nonatomic) BOOL canGoForward;	// G=0x32f188d1; @synthesize=_canGoForward
@property(assign, nonatomic) id<_UIWebViewControllerDelegate> delegate;	// G=0x32f18891; S=0x32f187ed; @synthesize=_delegate
@property(readonly, assign, nonatomic) float estimatedProgress;	// G=0x32f188f1; @synthesize=_estimatedProgress
@property(readonly, assign, nonatomic) UIBarButtonItem *forwardBarButtonItem;	// G=0x32f188b1; @synthesize=_forwardBarButtonItem
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;	// G=0x32f188e1; @synthesize=_loading
@property(readonly, assign, nonatomic) NSString *pageTitle;	// G=0x32f18901; @synthesize=_pageTitle
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x32f17c51
// declared property getter: - (id)URLString;	// 0x32f18915
- (void)_addRemoteView;	// 0x32f178c5
- (void)_connectToService;	// 0x32f179f1
- (void)_decidePolicyForEncodedRequest:(id)encodedRequest inMainFrame:(BOOL)mainFrame navigationType:(id)type replyHandler:(id)handler;	// 0x32f18631
- (void)_dispatchDidDismissViewController;	// 0x32f187a5
- (void)_dispatchWillPresentViewControllerWithCompletionHandler:(id)_dispatch;	// 0x32f186ed
- (void)_setCanGoBack:(BOOL)back canGoForward:(BOOL)forward;	// 0x32f180dd
- (void)_setEstimatedProgress:(float)progress;	// 0x32f17f91
- (void)_setLoading:(BOOL)loading error:(id)error;	// 0x32f18035
- (void)_setTitle:(id)title;	// 0x32f18155
- (void)_setURLString:(id)string;	// 0x32f181d9
- (void)_updateBarButtonItems;	// 0x32f17985
- (void)_webContentSizeWithReplyHandler:(id)replyHandler;	// 0x32f18565
// declared property getter: - (id)backBarButtonItem;	// 0x32f188a1
// declared property getter: - (BOOL)canGoBack;	// 0x32f188c1
// declared property getter: - (BOOL)canGoForward;	// 0x32f188d1
- (void)configureWithSettings:(id)settings;	// 0x32f18529
- (void)dealloc;	// 0x32f17ea5
// declared property getter: - (id)delegate;	// 0x32f18891
// declared property getter: - (float)estimatedProgress;	// 0x32f188f1
// declared property getter: - (id)forwardBarButtonItem;	// 0x32f188b1
- (void)goBack;	// 0x32f1843d
- (void)goForward;	// 0x32f1845d
// declared property getter: - (BOOL)isLoading;	// 0x32f188e1
- (void)loadHTMLString:(id)string baseURL:(id)url;	// 0x32f1841d
- (void)loadRequest:(id)request;	// 0x32f18341
- (void)loadView;	// 0x32f184bd
// declared property getter: - (id)pageTitle;	// 0x32f18901
- (void)queueingServiceProxy:(id)proxy willQueueInvocation:(id)invocation;	// 0x32f17e45
- (void)reload;	// 0x32f1847d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f187ed
// declared property setter: - (void)setURLString:(id)string;	// 0x32f1825d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32f18849
- (void)stopLoading;	// 0x32f1849d
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x32f1829d
@end
