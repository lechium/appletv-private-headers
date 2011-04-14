/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLResponse.h"

@class NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
@private
	NSHTTPURLResponseInternal *_httpInternal;	// 8 = 0x8
}
+ (BOOL)isErrorStatusCode:(int)code;	// 0x32428315
+ (id)localizedStringForStatusCode:(int)statusCode;	// 0x324c1671
- (id)initWithCoder:(id)coder;	// 0x324c1175
- (id)initWithURL:(id)url statusCode:(int)code headerFields:(id)fields requestTime:(double)time;	// 0x324c10fd
- (id)_clientCertificateChain;	// 0x324c154d
- (id)_clientCertificateState;	// 0x324c15f5
- (id)_initWithCFURLResponse:(CFURLResponseRef)cfurlresponse;	// 0x324202cd
- (id)_peerCertificateChain;	// 0x324c15a1
- (SecTrust *)_peerTrust;	// 0x324c09a5
- (void)_setPeerTrust:(SecTrust *)trust;	// 0x324c09e1
- (id)allHeaderFields;	// 0x32420469
- (void)dealloc;	// 0x324246bd
- (void)encodeWithCoder:(id)coder;	// 0x324c0a35
- (int)statusCode;	// 0x324203e9
@end

