/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {
	WebView *_inspectedWebView;	// 4 = 0x4
	WebNodeHighlight *_currentHighlight;	// 8 = 0x8
}
- (id)initWithInspectedWebView:(id)inspectedWebView;	// 0x3393873d
- (void)dealloc;	// 0x33988149
- (void)didAttachWebNodeHighlight:(id)highlight;	// 0x33988295
- (void)hideHighlight;	// 0x33988245
- (void)highlight;	// 0x33988175
- (void)willDetachWebNodeHighlight:(id)highlight;	// 0x339882b5
@end

