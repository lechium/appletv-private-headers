/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCoding, NSCopying> {
@private
	NSURLProtectionSpaceInternal *_internal;	// 4 = 0x4
}
- (id)init;	// 0x31db3015
- (id)initWithCoder:(id)coder;	// 0x31db3405
- (id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;	// 0x31db2d19
- (id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;	// 0x31db2f09
- (CFURLProtectionSpaceRef)_cfurlprtotectionspace;	// 0x31db33a5
- (id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;	// 0x31db2fdd
- (id)_internalInit;	// 0x31db2cd9
- (id)authenticationMethod;	// 0x31db3265
- (id)copyWithZone:(NSZone *)zone;	// 0x31db31d5
- (void)dealloc;	// 0x31db302d
- (id)distinguishedNames;	// 0x31db32f1
- (void)encodeWithCoder:(id)coder;	// 0x31db33b5
- (unsigned)hash;	// 0x31db31e5
- (id)host;	// 0x31db30e5
- (BOOL)isEqual:(id)equal;	// 0x31db31f9
- (BOOL)isProxy;	// 0x31db30c9
- (int)port;	// 0x31db3121
- (id)protocol;	// 0x31db3319
- (id)proxyType;	// 0x31db3135
- (id)realm;	// 0x31db3071
- (BOOL)receivesCredentialSecurely;	// 0x31db30ad
- (SecTrust *)serverTrust;	// 0x31db3305
@end
