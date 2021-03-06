/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {
	ACAccount *_account;	// 24 = 0x18
}
@property(retain, nonatomic) ACAccount *account;	// G=0x3001a625; S=0x3001a635; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3001a0e9
- (void).cxx_destruct;	// 0x3001a65d
// declared property getter: - (id)account;	// 0x3001a625
// declared property setter: - (void)setAccount:(id)account;	// 0x3001a635
- (id)urlRequest;	// 0x3001a151
@end

