/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <__objc_empty_cache.h> // Unknown library

@class WebView, WebNodeHighlightView;

@interface HighlightLayer : __objc_empty_cache {
	WebNodeHighlightView *_view;	// 48 = 0x30
	WebView *_webView;	// 52 = 0x34
}
- (id)initWithHighlightView:(id)highlightView webView:(id)view;	// 0x35097b45
- (id)actionForKey:(id)key;	// 0x35097c8d
- (void)layoutSublayers;	// 0x35097b99
@end
