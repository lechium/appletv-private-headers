/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAEmailVettingRequest.h"

@class NSString;

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest {
	NSString *_token;	// 20 = 0x14
}
+ (Class)responseClass;	// 0x34e857b5
- (id)initWithAccount:(id)account token:(id)token;	// 0x34e857d1
- (id)initWithURLString:(id)urlstring account:(id)account token:(id)token;	// 0x34e85855
- (void).cxx_destruct;	// 0x34e85a91
- (id)bodyDictionary;	// 0x34e859d9
- (id)urlString;	// 0x34e858e9
@end
