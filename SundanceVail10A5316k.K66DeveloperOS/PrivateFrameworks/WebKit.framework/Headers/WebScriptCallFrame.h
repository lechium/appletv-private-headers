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
@private
	WebScriptCallFramePrivate *_private;	// 4 = 0x4
	id _userInfo;	// 8 = 0x8
}
@property(retain) id userInfo;	// G=0x3507b051; S=0x3507b00d; converted property
- (void)_clearDebuggerCallFrame;	// 0x3507aeb5
- (id)_convertValueToObjcValue:(JSValue)objcValue;	// 0x3507aee9
- (id)_initWithGlobalObject:(id)globalObject debugger:(WebScriptDebugger *)debugger caller:(id)caller debuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x3507ada1
- (void)_setDebuggerCallFrame:(const DebuggerCallFrame *)frame;	// 0x3507ae59
- (id)caller;	// 0x3507b061
- (void)dealloc;	// 0x3507afa9
- (id)evaluateWebScript:(id)script;	// 0x3507b271
- (id)exception;	// 0x3507b231
- (id)functionName;	// 0x3507b1fd
- (id)scopeChain;	// 0x3507b081
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3507b00d
// converted property getter: - (id)userInfo;	// 0x3507b051
@end

