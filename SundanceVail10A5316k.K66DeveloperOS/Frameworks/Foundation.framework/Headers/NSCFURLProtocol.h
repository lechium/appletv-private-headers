/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLProtocol.h"


__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol {
@private
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x31a254b5
+ (id)canonicalRequestForRequest:(id)request;	// 0x31a25595
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x31aa60b5
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x31aa61cd
- (void)_resumeLoading;	// 0x31aa65f1
- (void)_suspendLoading;	// 0x31aa65dd
- (void)dealloc;	// 0x31aa6145
- (void)finalize;	// 0x31aa618d
- (void)startLoading;	// 0x31aa65b5
- (void)stopLoading;	// 0x31aa65c9
@end
