/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationManager.h"

@class BRAccountType;

@interface BRDefaultAuthenticationManager : BRAuthenticationManager {
@private
	BRAccountType *_accountType;	// 12 = 0xc
}
@property(readonly, assign) BRAccountType *accountType;	// G=0x36721299; @synthesize=_accountType
- (id)initWithAccountType:(id)accountType;	// 0x36721085
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x36721099
- (id)_basicAccount;	// 0x3672118d
- (void)_markAsPreferredAccount:(id)account;	// 0x36721239
- (void)_preferredAccountRemoved:(id)removed;	// 0x36721201
// declared property getter: - (id)accountType;	// 0x36721299
- (void)dealloc;	// 0x367210f1
- (id)preferredAccount;	// 0x3672113d
@end

