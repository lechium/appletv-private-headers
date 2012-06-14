/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	NSURLRequestInternal *_internal;	// 4 = 0x4
}
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)host;	// 0x319f1411
+ (id)allowsSpecificHTTPSCertificateForHost:(id)host;	// 0x319f1345
+ (void)checkForSharedCookieStoreNeed:(CFURLRequestRef)sharedCookieStoreNeed;	// 0x31aafb45
+ (double)defaultTimeoutInterval;	// 0x31a2735d
+ (id)requestWithURL:(id)url;	// 0x319f0299
+ (id)requestWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x31a29189
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)certificate forHost:(id)host;	// 0x31ab0ab5
+ (void)setAllowsSpecificHTTPSCertificate:(id)certificate forHost:(id)host;	// 0x31ab0b61
+ (void)setDefaultTimeoutInterval:(double)interval;	// 0x31a27375
- (id)init;	// 0x31aafbcd
- (id)initWithCoder:(id)coder;	// 0x31aafbe1
- (id)initWithURL:(id)url;	// 0x319f02d5
- (id)initWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x319f0309
- (id)HTTPBody;	// 0x31ab0a2d
- (id)HTTPBodyStream;	// 0x31ab0a71
- (id)HTTPContentType;	// 0x31ab0c35
- (id)HTTPExtraCookies;	// 0x31ab0c51
- (id)HTTPMethod;	// 0x31ab095d
- (id)HTTPReferrer;	// 0x31ab0c99
- (BOOL)HTTPShouldHandleCookies;	// 0x319f18d9
- (BOOL)HTTPShouldUsePipelining;	// 0x31ab0cd1
- (id)HTTPUserAgent;	// 0x31ab0cb5
- (id)URL;	// 0x319f12e9
- (CFURLRequestRef)_CFURLRequest;	// 0x319f12c9
- (BOOL)_URLHasScheme:(id)scheme;	// 0x319f1755
- (id)_copyReplacingURLWithURL:(id)url;	// 0x31ab0755
- (id)_initWithCFURLRequest:(CFURLRequestRef)cfurlrequest;	// 0x319f155d
- (id)_propertyForKey:(id)key;	// 0x319fdd81
- (void)_removePropertyForKey:(id)key;	// 0x31ab07bd
- (void)_setProperty:(id)property forKey:(id)key;	// 0x31a0cc51
- (id)allHTTPHeaderFields;	// 0x31ab09a1
- (BOOL)allowsCellularAccess;	// 0x31ab0801
- (id)boundInterfaceIdentifier;	// 0x31ab0829
- (unsigned)cachePolicy;	// 0x31ab05f1
- (id)contentDispositionEncodingFallbackArray;	// 0x31ab0cf9
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab0745
- (void)dealloc;	// 0x319f1849
- (id)description;	// 0x31ab06e1
- (void)encodeWithCoder:(id)coder;	// 0x31ab0451
- (unsigned)hash;	// 0x31ab0651
- (BOOL)isEqual:(id)equal;	// 0x31ab0671
- (id)mainDocumentURL;	// 0x31ab0631
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a2a5b5
- (unsigned)networkServiceType;	// 0x31ab07e1
- (double)timeoutInterval;	// 0x31ab0611
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x31ab09e5
@end

