/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject {
@private
	double timestamp;	// 4 = 0x4
	addrinfo *addressInfo;	// 12 = 0xc
}
+ (id)addressInfoForHost:(id)host;	// 0x324b3b45
+ (void)asyncResolveWithCallbackClient:(id)callbackClient;	// 0x324b3c91
- (id)_initWithAddressInfo:(addrinfo *)addressInfo;	// 0x324b3a71
- (double)_timestamp;	// 0x324b3a61
- (addrinfo *)addrinfo;	// 0x324b3a51
- (void)dealloc;	// 0x324b3b05
- (void)finalize;	// 0x324b3ac5
@end

