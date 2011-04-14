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
+ (id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;	// 0x324498cd
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;	// 0x324bf8e9
+ (Class)_protocolClassForRequest:(id)request;	// 0x32440989
+ (Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;	// 0x32427e45
+ (id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;	// 0x32449679
+ (id)_registeredClasses;	// 0x32439939
+ (void)_removePropertyForKey:(id)key inRequest:(id)request;	// 0x324bf665
+ (BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;	// 0x324bf76d
+ (BOOL)canInitWithRequest:(id)request;	// 0x324bf8c5
+ (id)canonicalRequestForRequest:(id)request;	// 0x324bf859
+ (id)propertyForKey:(id)key inRequest:(id)request;	// 0x3244ce41
+ (BOOL)registerClass:(Class)aClass;	// 0x3243a30d
+ (void)removePropertyForKey:(id)key inRequest:(id)request;	// 0x324bf67d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x324bf695
+ (void)setProperty:(id)property forKey:(id)key inRequest:(id)request;	// 0x324408ad
+ (void)unregisterClass:(Class)aClass;	// 0x324bf7e1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x324496c1
- (void)_releaseProtocolClientReference;	// 0x3244a04d
- (void)_resumeLoading;	// 0x324bf661
- (void)_suspendLoading;	// 0x324bf65d
- (id)cachedResponse;	// 0x324bf641
- (id)client;	// 0x32449af5
- (void)dealloc;	// 0x3244a20d
- (id)request;	// 0x32449b11
- (void)startLoading;	// 0x324bf839
- (void)stopLoading;	// 0x324bf819
@end

