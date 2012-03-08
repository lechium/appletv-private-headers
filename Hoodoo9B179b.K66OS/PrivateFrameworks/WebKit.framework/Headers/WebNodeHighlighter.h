/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject {
@private
	WebView *_inspectedWebView;	// 4 = 0x4
	WebNodeHighlight *_currentHighlight;	// 8 = 0x8
}
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x3450f9c9
- (void)dealloc;	// 0x3458e17d
- (void)didAttachWebNodeHighlight:(id)highlight;	// 0x3458e02d
- (void)hideHighlight;	// 0x3458e051
- (void)highlightNode:(id)node;	// 0x3458e0a9
- (void)willDetachWebNodeHighlight:(id)highlight;	// 0x3458e00d
@end

