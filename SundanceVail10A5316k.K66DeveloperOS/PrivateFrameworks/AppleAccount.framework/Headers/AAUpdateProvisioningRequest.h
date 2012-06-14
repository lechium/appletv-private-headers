/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x37271c11; S=0x37271c21; @synthesize=_account
+ (Class)responseClass;	// 0x372712e9
- (id)initWithAccount:(id)account;	// 0x37271305
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x37271365
- (void).cxx_destruct;	// 0x37271c49
// declared property getter: - (id)account;	// 0x37271c11
// declared property setter: - (void)setAccount:(id)account;	// 0x37271c21
- (id)urlCredential;	// 0x372713ed
- (id)urlRequest;	// 0x37271525
- (id)urlString;	// 0x372714b1
@end

