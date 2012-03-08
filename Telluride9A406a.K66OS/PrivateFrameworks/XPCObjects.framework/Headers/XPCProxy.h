/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <NSObject.h> // Unknown library
#import "XPCObjects-Structs.h"
#import "NSCopying.h"

@class NSArray;
@protocol XPCProxyTarget;

@interface XPCProxy : NSObject <NSCopying> {
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	id<XPCProxyTarget> _target;	// 12 = 0xc
	Class _remoteClass;	// 16 = 0x10
	id _errorHandler;	// 20 = 0x14
	BOOL _invalidated;	// 24 = 0x18
	BOOL _useTraditionalEncoder;	// 25 = 0x19
	NSArray *_whitelistedClassNames;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) xpc_connection_s *connection;	// G=0x30007ff5; @synthesize=_connection
@property(copy) id errorHandler;	// G=0x30008d19; S=0x30008cf1; @synthesize=_errorHandler
@property(assign) Class remoteClass;	// G=0x30008005; S=0x30008015; @synthesize=_remoteClass
@property(assign) id<XPCProxyTarget> target;	// G=0x30008025; S=0x30008035; @synthesize=_target
@property(assign, nonatomic) BOOL useTraditionalEncoder;	// G=0x30007fd5; S=0x30007fe5; @synthesize=_useTraditionalEncoder
+ (void)initialize;	// 0x30008cbd
- (id)initWithConnection:(xpc_connection_s *)connection queue:(dispatch_queue_s *)queue target:(id)target;	// 0x3000853d
- (id)_errorForXpcError:(void *)xpcError;	// 0x300081c9
- (void)_getInvocationArgument:(void *)argument argumentType:(const char *)type class:(Class *)aClass forXpcArgument:(void *)xpcArgument message:(void *)message;	// 0x30009109
- (void)_handleInternalMessage:(void *)message;	// 0x30008d31
- (id)_invocationForMessage:(void *)message;	// 0x30009c35
- (BOOL)_messageIsInternal:(void *)internal;	// 0x30008dd5
- (void *)_newInternalMessageWithID:(int)anId;	// 0x30008dad
- (void *)_newMessageAndReplyHandler:(id *)handler forInvocation:(id)invocation;	// 0x30009919
- (void *)_newXpcArgumentForInvocationArgumentAt:(void *)at ofType:(const char *)type;	// 0x30009709
- (void *)_newXpcEncodingForObject:(id)object;	// 0x30008eed
- (id)_objectForXpcEncoding:(void *)xpcEncoding;	// 0x30008df5
- (id)_proxyDescription;	// 0x3000822d
// declared property getter: - (xpc_connection_s *)connection;	// 0x30007ff5
- (id)copyWithZone:(NSZone *)zone;	// 0x300082a5
- (void)dealloc;	// 0x30008c31
// declared property getter: - (id)errorHandler;	// 0x30008d19
- (void)forwardInvocation:(id)invocation;	// 0x30009e91
- (void)getProxyClassWithHandler:(id)handler;	// 0x30009f15
- (void)invalidate;	// 0x300089c1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x30008111
// declared property getter: - (Class)remoteClass;	// 0x30008005
- (void)restrictDecodingToWhitelistedClassNames:(id)whitelistedClassNames;	// 0x30008695
// declared property setter: - (void)setErrorHandler:(id)handler;	// 0x30008cf1
// declared property setter: - (void)setRemoteClass:(Class)aClass;	// 0x30008015
// declared property setter: - (void)setTarget:(id)target;	// 0x30008035
// declared property setter: - (void)setUseTraditionalEncoder:(BOOL)encoder;	// 0x30007fe5
// declared property getter: - (id)target;	// 0x30008025
// declared property getter: - (BOOL)useTraditionalEncoder;	// 0x30007fd5
@end

