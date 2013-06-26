/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import </libobjc.A.h>


@interface __NSCFMemoryHTTPCookieStorage : NSObject {
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x2cf870ed; S=0x2cf870f1; converted property
+ (void)initialize;	// 0x2cf86fb9
- (id)init;	// 0x2cf87079
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x2cf870ed
- (id)cookies;	// 0x2cf870d9
- (id)cookiesForURL:(id)url;	// 0x2cf870e5
- (void)deleteCookie:(id)cookie;	// 0x2cf870e1
- (id)description;	// 0x2cf8707d
- (void)setCookie:(id)cookie;	// 0x2cf870dd
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x2cf870f1
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x2cf870e9
- (id)sortedCookiesUsingDescriptors:(id)descriptors;	// 0x2cf870f5
@end
