/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
	id<UIScrollViewDelegate> _delegate;	// 4 = 0x4
	UIWebView *_webView;	// 8 = 0x8
}
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x347a7505; S=0x347a7515; @synthesize=_delegate
@property(assign, nonatomic) UIWebView *webView;	// G=0x347a7525; S=0x347a7535; @synthesize=_webView
// declared property getter: - (id)delegate;	// 0x347a7505
- (void)forwardInvocation:(id)invocation;	// 0x347a7429
- (id)methodSignatureForSelector:(SEL)selector;	// 0x347a7349
- (BOOL)respondsToSelector:(SEL)selector;	// 0x347a73ad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x347a7515
// declared property setter: - (void)setWebView:(id)view;	// 0x347a7535
// declared property getter: - (id)webView;	// 0x347a7525
@end
