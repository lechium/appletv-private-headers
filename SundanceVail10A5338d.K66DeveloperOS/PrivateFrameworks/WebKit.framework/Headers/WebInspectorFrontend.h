/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebInspectorFrontend : NSObject {
	WebInspectorFrontendClient *m_frontendClient;	// 4 = 0x4
}
@property(assign, getter=isDebuggingEnabled) BOOL debuggingEnabled;	// G=0x316b715d; S=0x316b7175; converted property
@property(assign, getter=isTimelineProfilingEnabled) BOOL timelineProfilingEnabled;	// G=0x316b71d1; S=0x316b71e9; converted property
- (id)initWithFrontendClient:(WebInspectorFrontendClient *)frontendClient;	// 0x316b70f1
- (void)attach;	// 0x316b7135
- (void)detach;	// 0x316b7149
// converted property getter: - (BOOL)isDebuggingEnabled;	// 0x316b715d
- (BOOL)isProfilingJavaScript;	// 0x316b7191
// converted property getter: - (BOOL)isTimelineProfilingEnabled;	// 0x316b71d1
// converted property setter: - (void)setDebuggingEnabled:(BOOL)enabled;	// 0x316b7175
// converted property setter: - (void)setTimelineProfilingEnabled:(BOOL)enabled;	// 0x316b71e9
- (void)showConsole;	// 0x316b7205
- (void)startProfilingJavaScript;	// 0x316b71a9
- (void)stopProfilingJavaScript;	// 0x316b71bd
@end

