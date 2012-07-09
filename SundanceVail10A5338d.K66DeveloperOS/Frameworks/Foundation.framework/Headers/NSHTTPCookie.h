/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject {
	NSHTTPCookieInternal *_cookiePrivate;	// 4 = 0x4
}
+ (id)_cf2nsCookies:(CFArrayRef)cookies;	// 0x373cbe39
+ (CFArrayRef)_ns2cfCookies:(id)cookies;	// 0x373cbf31
+ (id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x373cbd71
+ (id)cookieWithProperties:(id)properties;	// 0x373cbcfd
+ (id)cookiesWithResponseHeaderFields:(id)responseHeaderFields forURL:(id)url;	// 0x373cc575
+ (id)requestHeaderFieldsWithCookies:(id)cookies;	// 0x373cc51d
- (id)init;	// 0x373cbddd
- (id)initWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x373cbdb9
- (id)initWithCoder:(id)coder;	// 0x373ccba1
- (id)initWithProperties:(id)properties;	// 0x373cbd45
- (id)Comment;	// 0x373cc305
- (id)CommentURL;	// 0x373cc315
- (id)Discard;	// 0x373cc419
- (id)Domain;	// 0x373cc2d5
- (id)Expires;	// 0x373cc2f5
- (id)MaxAge;	// 0x373cc481
- (id)Name;	// 0x373cc2b5
- (id)OriginURL;	// 0x373cc325
- (id)Path;	// 0x373cc2e5
- (id)Port;	// 0x373cc44d
- (id)Secure;	// 0x373cc3e5
- (id)Value;	// 0x373cc2c5
- (id)Version;	// 0x373cc3a5
- (OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;	// 0x373cc039
- (int)_compareForHeaderOrder:(id)headerOrder;	// 0x373cc5bd
- (BOOL)_isExpired;	// 0x373cc74d
- (id)_key;	// 0x373cc6cd
- (id)comment;	// 0x373cc20d
- (id)commentURL;	// 0x373cc245
- (void)dealloc;	// 0x373cbdf5
- (id)description;	// 0x373cc795
- (id)domain;	// 0x373cc19d
- (void)encodeWithCoder:(id)coder;	// 0x373ccb71
- (id)expiresDate;	// 0x373cc0b1
- (unsigned)hash;	// 0x373ccae1
- (BOOL)isEqual:(id)equal;	// 0x373cca95
- (BOOL)isHTTPOnly;	// 0x373cc095
- (BOOL)isSecure;	// 0x373cc079
- (BOOL)isSessionOnly;	// 0x373cc05d
- (id)name;	// 0x373cc12d
- (id)path;	// 0x373cc1d5
- (id)portList;	// 0x373cc27d
- (id)properties;	// 0x373cc001
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x374598b9
- (id)value;	// 0x373cc165
- (unsigned)version;	// 0x373cc049
@end
