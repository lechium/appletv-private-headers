/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {
@private
	NSURLProtocolInternal *_internal;	// 4 = 0x4
}
+ (id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;	// 0x315b36d5
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;	// 0x3163374d
+ (Class)_protocolClassForRequest:(id)request;	// 0x31596e35
+ (Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;	// 0x3157b3f1
+ (id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;	// 0x31633679
+ (id)_registeredClasses;	// 0x3157ad99
+ (void)_removePropertyForKey:(id)key inRequest:(id)request;	// 0x316337e9
+ (BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;	// 0x316334f9
+ (BOOL)canInitWithRequest:(id)request;	// 0x3163345d
+ (id)canonicalRequestForRequest:(id)request;	// 0x31633481
+ (id)propertyForKey:(id)key inRequest:(id)request;	// 0x31633725
+ (BOOL)registerClass:(Class)aClass;	// 0x3159f095
+ (void)removePropertyForKey:(id)key inRequest:(id)request;	// 0x31633739
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x31633565
+ (void)setProperty:(id)property forKey:(id)key inRequest:(id)request;	// 0x31596dcd
+ (void)unregisterClass:(Class)aClass;	// 0x31633639
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x315b34b5
- (void)_releaseProtocolClientReference;	// 0x315b4215
- (void)_resumeLoading;	// 0x316337e5
- (void)_suspendLoading;	// 0x316337e1
- (id)cachedResponse;	// 0x316336bd
- (id)client;	// 0x315b3f11
- (void)dealloc;	// 0x315b44dd
- (id)request;	// 0x315b3f31
- (void)startLoading;	// 0x316336dd
- (void)stopLoading;	// 0x31633701
@end
