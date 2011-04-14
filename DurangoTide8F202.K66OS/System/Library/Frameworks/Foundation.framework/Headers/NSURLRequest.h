/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	NSURLRequestInternal *_internal;	// 4 = 0x4
}
+ (BOOL)allowsAnyHTTPSCertificateForHost:(id)host;	// 0x32427d11
+ (id)allowsSpecificHTTPSCertificateForHost:(id)host;	// 0x32427cc5
+ (double)defaultTimeoutInterval;	// 0x3244dad9
+ (id)requestWithURL:(id)url;	// 0x3244cc45
+ (id)requestWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x3244ec2d
+ (void)setAllowsAnyHTTPSCertificate:(BOOL)certificate forHost:(id)host;	// 0x324c07d1
+ (void)setAllowsSpecificHTTPSCertificate:(id)certificate forHost:(id)host;	// 0x324c0715
+ (void)setDefaultTimeoutInterval:(double)interval;	// 0x3244daf1
- (id)init;	// 0x324bfae9
- (id)initWithCoder:(id)coder;	// 0x324bfd05
- (id)initWithURL:(id)url;	// 0x32427619
- (id)initWithURL:(id)url cachePolicy:(unsigned)policy timeoutInterval:(double)interval;	// 0x3242764d
- (id)HTTPBody;	// 0x32448fbd
- (id)HTTPBodyStream;	// 0x32448ff5
- (id)HTTPContentType;	// 0x324bfaa5
- (id)HTTPExtraCookies;	// 0x324c06dd
- (id)HTTPMethod;	// 0x3243a2d5
- (id)HTTPReferrer;	// 0x324bfa89
- (BOOL)HTTPShouldHandleCookies;	// 0x32427fe1
- (BOOL)HTTPShouldUsePipelining;	// 0x324c0955
- (id)HTTPUserAgent;	// 0x324bfa6d
- (id)URL;	// 0x3242130d
- (CFURLRequestRef)_CFURLRequest;	// 0x32427c7d
- (BOOL)_URLHasScheme:(id)scheme;	// 0x32427f09
- (id)_copyReplacingURLWithURL:(id)url;	// 0x324c065d
- (id)_initWithCFURLRequest:(CFURLRequestRef)cfurlrequest;	// 0x32421011
- (id)_propertyForKey:(id)key;	// 0x3244a2f9
- (void)_removePropertyForKey:(id)key;	// 0x324bfb01
- (void)_setProperty:(id)property forKey:(id)key;	// 0x324408c5
- (id)allHTTPHeaderFields;	// 0x3244078d
- (unsigned)cachePolicy;	// 0x32448e9d
- (id)contentDispositionEncodingFallbackArray;	// 0x32448f09
- (id)copyWithZone:(NSZone *)zone;	// 0x324bfad5
- (void)dealloc;	// 0x324210bd
- (id)description;	// 0x324c05f1
- (void)encodeWithCoder:(id)coder;	// 0x324c0351
- (unsigned)hash;	// 0x324c0569
- (BOOL)isEqual:(id)equal;	// 0x324c058d
- (id)mainDocumentURL;	// 0x32448ee5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324408e9
- (unsigned)networkServiceType;	// 0x324c06b9
- (double)timeoutInterval;	// 0x32448ec1
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x3243a241
@end

