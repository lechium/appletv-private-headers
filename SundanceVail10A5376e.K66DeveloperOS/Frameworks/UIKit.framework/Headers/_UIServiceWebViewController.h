/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIServiceWebViewControllerProtocol.h"
#import "WebUIBrowserLoadingControllerDelegate.h"
#import "UIViewController.h"
#import "XPCProxyTarget.h"

@class _UIServiceWebView, WebUIBrowserLoadingController;
@protocol _UIRemoteWebViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface _UIServiceWebViewController : UIViewController <XPCProxyTarget, _UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {
	_UIServiceWebView *_uiWebView;	// 196 = 0xc4
	WebUIBrowserLoadingController *_loadingController;	// 200 = 0xc8
	id<_UIRemoteWebViewControllerProtocol> _remoteViewControllerProxy;	// 204 = 0xcc
}
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x306431f1
- (BOOL)_isInternalInstall;	// 0x306433b9
- (id)_makeAlertView;	// 0x306438f5
- (void)_remotelyDecidePolicyForRequest:(id)request inMainFrame:(BOOL)mainFrame navigationType:(id)type decisionHandler:(id)handler;	// 0x30643701
- (void)_remotelyDispatchDidDismissViewController;	// 0x30643869
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)_remotelyDispatch;	// 0x306437ed
- (void)_setupRemoteInspectorDetailsForRequestingProcess;	// 0x30643461
- (void)browserLoadingController:(id)controller didFinishLoadingWithError:(id)error dataSource:(id)source;	// 0x30643a25
- (void)browserLoadingControllerDidStartLoading:(id)browserLoadingController;	// 0x30643a01
- (void)browserLoadingControllerDidUpdateBackForward:(id)browserLoadingController;	// 0x30643a45
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)browserLoadingController;	// 0x306439b9
- (void)browserLoadingControllerDidUpdateTitle:(id)browserLoadingController;	// 0x30643ab1
- (void)browserLoadingControllerDidUpdateURLString:(id)browserLoadingController;	// 0x30643af9
- (void)configureWithEncodedSettings:(id)encodedSettings;	// 0x30643889
- (void)dealloc;	// 0x30643941
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30643e11
- (void)goBack;	// 0x30643d29
- (void)goForward;	// 0x30643d49
- (void)loadEncodedRequest:(id)request;	// 0x30643b41
- (void)loadUserTypedAddress:(id)address;	// 0x30643d09
- (void)loadView;	// 0x30643921
- (id)localizedApplicationNameForProcess:(int)process;	// 0x3064341d
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30642fb5
- (void)reload;	// 0x30643d69
- (void)setShouldDecidePolicyRemotely:(BOOL)decidePolicyRemotely;	// 0x306436e1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30643da9
- (void)stopLoading;	// 0x30643d89
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x306435ed
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30643df1
@end
