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
@property(retain, nonatomic) AAAccount *account;	// G=0x35749c7d; S=0x35749c8d; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x357497c1
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x35749821
- (void).cxx_destruct;	// 0x35749cb5
// declared property getter: - (id)account;	// 0x35749c7d
// declared property setter: - (void)setAccount:(id)account;	// 0x35749c8d
- (id)urlRequest;	// 0x35749915
@end

