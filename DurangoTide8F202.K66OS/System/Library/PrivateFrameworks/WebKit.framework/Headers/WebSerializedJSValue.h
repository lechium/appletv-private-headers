/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebSerializedJSValuePrivate;

@interface WebSerializedJSValue : NSObject {
@private
	WebSerializedJSValuePrivate *_private;	// 4 = 0x4
}
- (id)initWithValue:(OpaqueJSValue *)value context:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x32c74661
- (void)dealloc;	// 0x32c745e1
- (OpaqueJSValue *)deserialize:(OpaqueJSContext *)deserialize;	// 0x32c74631
@end

