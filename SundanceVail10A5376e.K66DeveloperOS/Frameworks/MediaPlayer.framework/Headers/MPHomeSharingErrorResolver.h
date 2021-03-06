/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSAuthorizationRequestDelegate.h"

@class SSAuthorizationRequest, NSURL, NSData, MPHomeSharingML3DataProvider, NSError;

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
	unsigned long long _accountID;	// 8 = 0x8
	MPHomeSharingML3DataProvider *_dataProvider;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSURL *_keybagURL;	// 24 = 0x18
	SSAuthorizationRequest *_request;	// 28 = 0x1c
	NSData *_tokenData;	// 32 = 0x20
}
@property(retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;	// G=0x36d3d67d; S=0x36d3d68d; @synthesize=_dataProvider
- (id)initWithTokenData:(id)tokenData forAccountID:(unsigned long long)accountID keybagURL:(id)url;	// 0x36d3cead
- (BOOL)_errorIsFairPlayError:(id)error;	// 0x36d3d591
- (void)authorizationRequest:(id)request didReceiveResponse:(id)response;	// 0x36d3d171
// declared property getter: - (id)dataProvider;	// 0x36d3d67d
- (void)dealloc;	// 0x36d3cf79
- (void)request:(id)request didFailWithError:(id)error;	// 0x36d3d4d5
- (void)requestDidFinish:(id)request;	// 0x36d3d551
- (void)resolveError:(id)error;	// 0x36d3d03d
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x36d3d68d
@end

