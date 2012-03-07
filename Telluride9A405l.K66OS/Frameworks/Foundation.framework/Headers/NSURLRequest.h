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
#import "NSMutableCopying.h"

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	NSURLRequestInternal *_internal;	// 4 = 0x4
}
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)host;	// 0x3025f1e9
+ (id)allowsSpecificHTTPSCertificateForHost:(id)host;	// 0x3025f0f1
+ (void)checkForSharedCookieStoreNeed:(CFURLRequestRef)sharedCookieStoreNeed;	// 0x3031780d
+ (double)defaultTimeoutInterval;	// 0x30295401
+ (id)requestWithURL:(id)url;	// 0x3025e03d
+ (id)requestWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x302971c5
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)certificate forHost:(id)host;	// 0x30318739
+ (void)setAllowsSpecificHTTPSCertificate:(id)certificate forHost:(id)host;	// 0x303187e1
+ (void)setDefaultTimeoutInterval:(double)interval;	// 0x30295419
- (id)init;	// 0x30317895
- (id)initWithCoder:(id)coder;	// 0x303178a9
- (id)initWithURL:(id)url;	// 0x3025e079
- (id)initWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x3025e0ad
- (id)HTTPBody;	// 0x303186b1
- (id)HTTPBodyStream;	// 0x303186f5
- (id)HTTPContentType;	// 0x303188b1
- (id)HTTPExtraCookies;	// 0x303188cd
- (id)HTTPMethod;	// 0x303185e1
- (id)HTTPReferrer;	// 0x30318915
- (BOOL)HTTPShouldHandleCookies;	// 0x3025f685
- (BOOL)HTTPShouldUsePipelining;	// 0x3031894d
- (id)HTTPUserAgent;	// 0x30318931
- (id)URL;	// 0x3025f095
- (CFURLRequestRef)_CFURLRequest;	// 0x3025f075
- (BOOL)_URLHasScheme:(id)scheme;	// 0x3025f509
- (id)_copyReplacingURLWithURL:(id)url;	// 0x30318425
- (id)_initWithCFURLRequest:(CFURLRequestRef)cfurlrequest;	// 0x3025f335
- (id)_propertyForKey:(id)key;	// 0x3026bf21
- (void)_removePropertyForKey:(id)key;	// 0x3031848d
- (void)_setProperty:(id)property forKey:(id)key;	// 0x3027adf1
- (id)allHTTPHeaderFields;	// 0x30318625
- (id)boundInterfaceIdentifier;	// 0x303184d1
- (unsigned)cachePolicy;	// 0x303182c1
- (id)contentDispositionEncodingFallbackArray;	// 0x30318975
- (id)copyWithZone:(NSZone *)zone;	// 0x30318415
- (void)dealloc;	// 0x3025f5f5
- (id)description;	// 0x303183b1
- (void)encodeWithCoder:(id)coder;	// 0x30318125
- (unsigned)hash;	// 0x30318321
- (BOOL)isEqual:(id)equal;	// 0x30318341
- (id)mainDocumentURL;	// 0x30318301
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x302985ad
- (unsigned)networkServiceType;	// 0x303184b1
- (double)timeoutInterval;	// 0x303182e1
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x30318669
@end
