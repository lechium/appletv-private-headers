/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAEmailVettingRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x37272119; S=0x37272129; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x37271c5d
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x37271cbd
- (void).cxx_destruct;	// 0x37272151
// declared property getter: - (id)account;	// 0x37272119
// declared property setter: - (void)setAccount:(id)account;	// 0x37272129
- (id)urlRequest;	// 0x37271db1
@end

