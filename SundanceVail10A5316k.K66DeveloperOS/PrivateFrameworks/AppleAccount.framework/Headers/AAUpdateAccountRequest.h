/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest {
	AAAccount *_account;	// 16 = 0x10
}
@property(retain, nonatomic) AAAccount *account;	// G=0x37270559; S=0x37270569; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x3726fd95
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3726fdf5
- (void).cxx_destruct;	// 0x37270591
// declared property getter: - (id)account;	// 0x37270559
// declared property setter: - (void)setAccount:(id)account;	// 0x37270569
- (id)urlRequest;	// 0x3726fed1
- (id)urlString;	// 0x3726fe7d
@end

