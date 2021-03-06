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
+ (BOOL)canInitWithRequest:(id)request;	// 0x31d2f64d
+ (id)canonicalRequestForRequest:(id)request;	// 0x31d2f72d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x31da9ef1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x31daa005
- (void)_resumeLoading;	// 0x31daa419
- (void)_suspendLoading;	// 0x31daa405
- (void)dealloc;	// 0x31da9f7d
- (void)finalize;	// 0x31da9fc5
- (void)startLoading;	// 0x31daa3dd
- (void)stopLoading;	// 0x31daa3f1
@end

