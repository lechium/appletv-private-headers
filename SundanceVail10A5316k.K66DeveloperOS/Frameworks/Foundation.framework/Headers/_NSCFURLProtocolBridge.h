/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLProtocolClient.h"

@class NSURLProtocol, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {
@private
	NSURLProtocol *_nsProt;	// 4 = 0x4
	CFURLProtocolRef _cfProt;	// 8 = 0x8
	CFURLAuthChallengeRef _cfChallenge;	// 12 = 0xc
	NSURLAuthenticationChallenge *_nsChallenge;	// 16 = 0x10
	BOOL _loading;	// 20 = 0x14
}
+ (void)barRequest:(CFURLRequestRef)request;	// 0x31a2550d
+ (void)permitRequest:(CFURLRequestRef)request;	// 0x31a25551
+ (void)registerWithCFURLProtocol;	// 0x319f110d
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x31a293ad
- (void)URLProtocol:(id)protocol cachedResponseIsValid:(id)valid;	// 0x31a2a0ad
- (void)URLProtocol:(id)protocol didCancelAuthenticationChallenge:(id)challenge;	// 0x31aa72a1
- (void)URLProtocol:(id)protocol didFailWithError:(id)error;	// 0x31aa7129
- (void)URLProtocol:(id)protocol didLoadData:(id)data;	// 0x31aa7065
- (void)URLProtocol:(id)protocol didLoadData:(id)data lengthReceived:(long long)received;	// 0x31aa6f81
- (void)URLProtocol:(id)protocol didReceiveAuthenticationChallenge:(id)challenge;	// 0x31aa71e5
- (void)URLProtocol:(id)protocol didReceiveResponse:(id)response cacheStoragePolicy:(unsigned)policy;	// 0x31aa6ead
- (void)URLProtocol:(id)protocol wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x31aa6d7d
- (void)URLProtocolDidFinishLoading:(id)urlprotocol;	// 0x31aa70a5
- (void)_forgetClient;	// 0x31a2a1bd
- (void)bridgeRelease;	// 0x31a2988d
- (void)bridgeRetain;	// 0x31a29795
- (void)cachedResponseIsValid:(id)valid;	// 0x31a2a111
- (void)dealloc;	// 0x31a2a42d
- (id)description;	// 0x31aa689d
- (void)didFailWithError:(id)error;	// 0x31aa6d05
- (void)didFinishLoading;	// 0x31aa6cf1
- (void)didLoadData:(id)data lengthReceived:(long long)received;	// 0x31aa6cd5
- (void)didReceiveAuthenticationChallenge:(id)challenge;	// 0x31aa6d19
- (void)didReceiveResponse:(id)response;	// 0x31aa6ca5
- (void)halt;	// 0x31aa69e1
- (void)pushEvent:(id)event from:(const char *)from;	// 0x31aa6949
- (void)resume;	// 0x31aa6a71
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x31aa6909
- (void)start;	// 0x31a298ad
- (void)stop;	// 0x31a2a151
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x31aa6929
- (void)useCredential:(CFURLCredentialRef)credential forChallenge:(CFURLAuthChallengeRef)challenge;	// 0x31aa6b35
- (void)wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x31aa6c3d
@end

