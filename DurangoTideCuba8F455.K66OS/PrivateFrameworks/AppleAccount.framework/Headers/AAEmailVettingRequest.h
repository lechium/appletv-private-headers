/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAEmailVettingRequest : AARequest {
	AAAccount *_account;	// 8 = 0x8
}
@property(retain, nonatomic) AAAccount *account;	// G=0x34320d2d; S=0x34322475; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x34320f51
// declared property getter: - (id)account;	// 0x34320d2d
- (void)dealloc;	// 0x34320f09
// declared property setter: - (void)setAccount:(id)account;	// 0x34322475
- (id)urlRequest;	// 0x34321be9
@end
