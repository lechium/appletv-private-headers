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
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x30cdfb81
- (BOOL)_isInternalInstall;	// 0x30cdfd49
- (id)_makeAlertView;	// 0x30ce0285
- (void)_remotelyDecidePolicyForRequest:(id)request inMainFrame:(BOOL)mainFrame navigationType:(id)type decisionHandler:(id)handler;	// 0x30ce0091
- (void)_remotelyDispatchDidDismissViewController;	// 0x30ce01f9
- (void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(id)_remotelyDispatch;	// 0x30ce017d
- (void)_setupRemoteInspectorDetailsForRequestingProcess;	// 0x30cdfdf1
- (void)browserLoadingController:(id)controller didFinishLoadingWithError:(id)error dataSource:(id)source;	// 0x30ce03b5
- (void)browserLoadingControllerDidStartLoading:(id)browserLoadingController;	// 0x30ce0391
- (void)browserLoadingControllerDidUpdateBackForward:(id)browserLoadingController;	// 0x30ce03d5
- (void)browserLoadingControllerDidUpdateEstimatedProgress:(id)browserLoadingController;	// 0x30ce0349
- (void)browserLoadingControllerDidUpdateTitle:(id)browserLoadingController;	// 0x30ce0441
- (void)browserLoadingControllerDidUpdateURLString:(id)browserLoadingController;	// 0x30ce0489
- (void)configureWithEncodedSettings:(id)encodedSettings;	// 0x30ce0219
- (void)dealloc;	// 0x30ce02d1
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30ce07a1
- (void)goBack;	// 0x30ce06b9
- (void)goForward;	// 0x30ce06d9
- (void)loadEncodedRequest:(id)request;	// 0x30ce04d1
- (void)loadUserTypedAddress:(id)address;	// 0x30ce0699
- (void)loadView;	// 0x30ce02b1
- (id)localizedApplicationNameForProcess:(int)process;	// 0x30cdfdad
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30cdf945
- (void)reload;	// 0x30ce06f9
- (void)setShouldDecidePolicyRemotely:(BOOL)decidePolicyRemotely;	// 0x30ce0071
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30ce0739
- (void)stopLoading;	// 0x30ce0719
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x30cdff7d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30ce0781
@end

