/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "MSSearchDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, AAAccount, MSSearch;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	MSSearch *_search;	// 8 = 0x8
	AAAccount *_account;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	int _attempts;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(retain, nonatomic) AAAccount *account;	// G=0x34326079; S=0x34326f19; @synthesize=_account
- (id)init;	// 0x3432639d
- (id)initWithAccount:(id)account;	// 0x34326365
- (void)_downloadURLConfiguration:(id)configuration;	// 0x34326b69
- (void)_validateToken:(id)token;	// 0x34326415
- (void)_verify;	// 0x34326575
// declared property getter: - (id)account;	// 0x34326079
- (void)cancel;	// 0x34326839
- (void)dealloc;	// 0x343262e5
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x34326cdd
- (void)search:(id)search didFinishWithError:(id)error;	// 0x343268f9
- (void)sendVerificationEmail;	// 0x343262b9
// declared property setter: - (void)setAccount:(id)account;	// 0x34326f19
- (void)verifyWithHandler:(id)handler;	// 0x343269b9
@end
