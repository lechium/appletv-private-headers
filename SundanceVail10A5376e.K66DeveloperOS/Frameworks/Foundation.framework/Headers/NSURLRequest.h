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
	NSURLRequestInternal *_internal;	// 4 = 0x4
}
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)host;	// 0x34d3e1a5
+ (id)allowsSpecificHTTPSCertificateForHost:(id)host;	// 0x34d3e149
+ (void)checkForSharedCookieStoreNeed:(CFURLRequestRef)sharedCookieStoreNeed;	// 0x34d349ed
+ (double)defaultTimeoutInterval;	// 0x34d764a5
+ (id)requestWithURL:(id)url;	// 0x34d3d56d
+ (id)requestWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x34d6afe9
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)certificate forHost:(id)host;	// 0x34e00df9
+ (void)setAllowsSpecificHTTPSCertificate:(id)certificate forHost:(id)host;	// 0x34e00ea5
+ (void)setDefaultTimeoutInterval:(double)interval;	// 0x34d764bd
- (id)init;	// 0x34dfff4d
- (id)initWithCoder:(id)coder;	// 0x34dfff61
- (id)initWithURL:(id)url;	// 0x34d3d5a9
- (id)initWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x34d3d5dd
- (id)HTTPBody;	// 0x34e00d71
- (id)HTTPBodyStream;	// 0x34e00db5
- (id)HTTPContentType;	// 0x34e00f79
- (id)HTTPExtraCookies;	// 0x34e00f95
- (id)HTTPMethod;	// 0x34d7974d
- (id)HTTPReferrer;	// 0x34e00fdd
- (BOOL)HTTPShouldHandleCookies;	// 0x34d3e4d1
- (BOOL)HTTPShouldUsePipelining;	// 0x34e01015
- (id)HTTPUserAgent;	// 0x34e00ff9
- (id)URL;	// 0x34d34a75
- (CFURLRequestRef)_CFURLRequest;	// 0x34d3e129
- (BOOL)_URLHasScheme:(id)scheme;	// 0x34d3e41d
- (id)_copyReplacingURLWithURL:(id)url;	// 0x34e00ad5
- (id)_initWithCFURLRequest:(CFURLRequestRef)cfurlrequest;	// 0x34d34921
- (id)_propertyForKey:(id)key;	// 0x34d35199
- (void)_removePropertyForKey:(id)key;	// 0x34e00b65
- (void)_setProperty:(id)property forKey:(id)key;	// 0x34e00b3d
- (id)allHTTPHeaderFields;	// 0x34e00d2d
- (BOOL)allowsCellularAccess;	// 0x34e00ba9
- (id)boundInterfaceIdentifier;	// 0x34e00bd1
- (unsigned)cachePolicy;	// 0x34e00971
- (id)contentDispositionEncodingFallbackArray;	// 0x34e0103d
- (id)copyWithZone:(NSZone *)zone;	// 0x34e00ac5
- (void)dealloc;	// 0x34d3601d
- (id)description;	// 0x34e00a61
- (void)encodeWithCoder:(id)coder;	// 0x34e007d1
- (unsigned)hash;	// 0x34e009d1
- (BOOL)isEqual:(id)equal;	// 0x34e009f1
- (id)mainDocumentURL;	// 0x34e009b1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34d6b035
- (unsigned)networkServiceType;	// 0x34e00b89
- (double)timeoutInterval;	// 0x34e00991
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x34d79705
@end

