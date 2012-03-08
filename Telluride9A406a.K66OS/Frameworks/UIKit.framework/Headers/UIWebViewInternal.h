/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWebPDFViewHandlerDelegate.h"
#import <NSObject.h> // Unknown library

@class UIWebPDFViewHandler, UICheckeredPatternView, UIScrollView, UIWebViewWebViewDelegate, UIWebBrowserView, NSURLRequest;
@protocol UIWebViewDelegate;

__attribute__((visibility("hidden")))
@interface UIWebViewInternal : NSObject <UIWebPDFViewHandlerDelegate> {
@private
	UIScrollView *scroller;	// 4 = 0x4
	UIWebBrowserView *browserView;	// 8 = 0x8
	UICheckeredPatternView *checkeredPatternView;	// 12 = 0xc
	id<UIWebViewDelegate> delegate;	// 16 = 0x10
	unsigned scalesPageToFit : 1;	// 20 = 0x14
	unsigned isLoading : 1;	// 20 = 0x14
	unsigned hasOverriddenOrientationChangeEventHandling : 1;	// 20 = 0x14
	unsigned drawsCheckeredPattern : 1;	// 20 = 0x14
	unsigned usedGeolocation : 1;	// 20 = 0x14
	unsigned webSelectionEnabled : 1;	// 20 = 0x14
	unsigned drawInWebThread : 1;	// 20 = 0x14
	unsigned inRotation : 1;	// 20 = 0x14
	NSURLRequest *request;	// 24 = 0x18
	int clickedAlertButtonIndex;	// 28 = 0x1c
	UIWebViewWebViewDelegate *webViewDelegate;	// 32 = 0x20
	UIWebPDFViewHandler *pdfHandler;	// 36 = 0x24
	int _retainCount;	// 40 = 0x28
}
- (void)pdfViewHandler:(id)handler linkClicked:(id)clicked;	// 0x358b4619
@end

