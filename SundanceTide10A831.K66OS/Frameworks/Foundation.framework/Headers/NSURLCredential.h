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

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSCoding, NSCopying> {
	NSURLCredentialInternal *_internal;	// 4 = 0x4
}
+ (id)credentialForTrust:(SecTrust *)trust;	// 0x325d3bd1
+ (id)credentialWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x325d38d9
+ (id)credentialWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x325d3885
- (id)initWithCoder:(id)coder;	// 0x325d3c65
- (id)initWithIdentity:(SecIdentity *)identity certificates:(id)certificates persistence:(unsigned)persistence;	// 0x325d3809
- (id)initWithTrust:(SecTrust *)trust;	// 0x325d3b5d
- (id)initWithUser:(id)user password:(id)password persistence:(unsigned)persistence;	// 0x325d3749
- (CFURLCredentialRef)_cfurlcredential;	// 0x325d3979
- (id)_initWithCFURLCredential:(CFURLCredentialRef)cfurlcredential;	// 0x325d37c9
- (id)certificates;	// 0x325d3b49
- (id)copyWithZone:(NSZone *)zone;	// 0x325d3a35
- (void)dealloc;	// 0x325d392d
- (id)description;	// 0x325d3a45
- (void)encodeWithCoder:(id)coder;	// 0x325d3c19
- (BOOL)hasPassword;	// 0x325d39fd
- (unsigned)hash;	// 0x325d3ab5
- (SecIdentity *)identity;	// 0x325d3b35
- (BOOL)isEqual:(id)equal;	// 0x325d3ac9
- (id)password;	// 0x325d39c5
- (unsigned)persistence;	// 0x325d3a19
- (id)user;	// 0x325d3989
@end
