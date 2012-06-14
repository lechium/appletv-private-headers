/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
@private
	WebScriptWorldPrivate *_private;	// 4 = 0x4
}
+ (id)findOrCreateWorld:(DOMWrapperWorld *)world;	// 0x3507c6d1
+ (id)scriptWorldForGlobalContext:(OpaqueJSContext *)globalContext;	// 0x3507c6b5
+ (id)standardWorld;	// 0x3507c4fd
+ (id)world;	// 0x3501bdc9
- (id)init;	// 0x3501be01
- (id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;	// 0x3501bf49
- (void)dealloc;	// 0x3501c281
- (void)unregisterWorld;	// 0x3501c261
@end

