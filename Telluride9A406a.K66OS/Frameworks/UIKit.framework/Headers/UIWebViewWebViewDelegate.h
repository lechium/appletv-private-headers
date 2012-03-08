/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
@private
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x3581ae8d
- (void)_clearUIWebView;	// 0x3581d4e1
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x358b6b45
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x358b6a4d
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x358b6c79
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x358b6ba5
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x3581b929
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x358b6a85
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x358b6d35
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x3581c359
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x3581bebd
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x358b6bc5
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x358b6b85
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x3581c029
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x3581b5ad
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x358b6b65
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x358b6b25
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x3581bb95
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x358b6ae5
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x358b6ac5
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x3581bd19
- (void)webView:(id)view printFrameView:(id)view2;	// 0x358b6b05
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x358b6cf9
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x358b6cd9
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x358b6c99
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x3581c3ed
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x358b6cb9
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x3581bded
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x358b6c05
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x358b6c25
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x358b6c59
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x358b6aa5
- (void)webViewClose:(id)close;	// 0x358b6be5
@end

