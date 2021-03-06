/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {
	WebView *_webView;	// 4 = 0x4
	WebInspectorFrontend *_frontend;	// 8 = 0x8
}
@property(assign, getter=isJavaScriptProfilingEnabled) BOOL javaScriptProfilingEnabled;	// G=0x316b5319; S=0x316b5341; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x316b5379; S=0x316b53b1; converted property
+ (id)webInspector;	// 0x316b55e9
- (id)initWithWebView:(id)webView;	// 0x316b5035
- (void)attach:(id)attach;	// 0x316b53fd
- (void)close:(id)close;	// 0x316b53d5
- (void)dealloc;	// 0x316b5079
- (void)detach:(id)detach;	// 0x316b541d
- (void)evaluateInFrontend:(id)frontend callId:(long)anId script:(id)script;	// 0x316b543d
- (BOOL)isDebuggingJavaScript;	// 0x316b5151
// converted property getter: - (BOOL)isJavaScriptProfilingEnabled;	// 0x316b5319
- (BOOL)isProfilingJavaScript;	// 0x316b5239
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x316b5379
- (void)releaseFrontend;	// 0x316b55bd
- (void)setFrontend:(id)frontend;	// 0x316b5595
// converted property setter: - (void)setJavaScriptProfilingEnabled:(BOOL)enabled;	// 0x316b5341
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x316b53b1
- (void)setWebFrame:(id)frame;	// 0x316b564d
- (void)show:(id)show;	// 0x316b5101
- (void)showConsole:(id)console;	// 0x316b5111
- (void)showTimeline:(id)timeline;	// 0x316b514d
- (void)showWindow;	// 0x316b50d9
- (void)showWindow:(id)window;	// 0x316b5699
- (void)startDebuggingJavaScript:(id)script;	// 0x316b51e9
- (void)startProfilingJavaScript:(id)script;	// 0x316b52d1
- (void)stopDebuggingJavaScript:(id)script;	// 0x316b5211
- (void)stopProfilingJavaScript:(id)script;	// 0x316b52f5
- (void)toggleDebuggingJavaScript:(id)script;	// 0x316b5189
- (void)toggleProfilingJavaScript:(id)script;	// 0x316b5271
- (void)webViewClosed;	// 0x316b50c5
@end

