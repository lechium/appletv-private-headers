/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebView.h"

@class _UIServiceWebViewController;

__attribute__((visibility("hidden")))
@interface _UIServiceWebView : UIWebView {
	_UIServiceWebViewController *_serviceWebViewController;	// 88 = 0x58
	BOOL _shouldDecidePolicyRemotely;	// 92 = 0x5c
}
@property(assign, nonatomic) _UIServiceWebViewController *serviceWebViewController;	// G=0x310235e5; S=0x310235f5; @synthesize=_serviceWebViewController
@property(assign, nonatomic) BOOL shouldDecidePolicyRemotely;	// G=0x31023605; S=0x31023615; @synthesize=_shouldDecidePolicyRemotely
- (id)_makeAlertView;	// 0x310235c5
- (void)_webView:(id)view dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;	// 0x31023529
- (BOOL)_webView:(id)view presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;	// 0x31023421
// declared property getter: - (id)serviceWebViewController;	// 0x310235e5
// declared property setter: - (void)setServiceWebViewController:(id)controller;	// 0x310235f5
// declared property setter: - (void)setShouldDecidePolicyRemotely:(BOOL)decidePolicyRemotely;	// 0x31023615
// declared property getter: - (BOOL)shouldDecidePolicyRemotely;	// 0x31023605
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x31023229
@end

