/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {
	WebScriptCallFramePrivate *_private;	// 4 = 0x4
	id _userInfo;	// 8 = 0x8
}
@property(retain) id userInfo;	// G=0x365fe441; S=0x365fe3fd; converted property
- (void)_clearDebuggerCallFrame;	// 0x365fe2a5
- (id)_convertValueToObjcValue:(JSValue)objcValue;	// 0x365fe2d9
- (id)_initWithGlobalObject:(id)globalObject debugger:(WebScriptDebugger *)debugger caller:(id)caller debuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x365fe191
- (void)_setDebuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x365fe249
- (id)caller;	// 0x365fe451
- (void)dealloc;	// 0x365fe399
- (id)evaluateWebScript:(id)script;	// 0x365fe751
- (id)exception;	// 0x365fe711
- (id)functionName;	// 0x365fe6dd
- (id)scopeChain;	// 0x365fe471
// converted property setter: - (void)setUserInfo:(id)info;	// 0x365fe3fd
// converted property getter: - (id)userInfo;	// 0x365fe441
@end

