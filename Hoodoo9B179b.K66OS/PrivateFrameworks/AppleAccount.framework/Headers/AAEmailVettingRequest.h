/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAEmailVettingRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x342e95a5; S=0x342e95b5; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x342e91dd
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x342e9225
// declared property getter: - (id)account;	// 0x342e95a5
- (void)dealloc;	// 0x342e9559
// declared property setter: - (void)setAccount:(id)account;	// 0x342e95b5
- (id)urlRequest;	// 0x342e92b9
@end

