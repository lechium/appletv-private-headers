/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSURLConnectionDelegateProxy : NSObject {
@private
	id delegate;	// 4 = 0x4
	unsigned flags;	// 8 = 0x8
}
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x327736f1
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;	// 0x327e839d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x32773f3d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x327e83d5
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x327e8365
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x3277035d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x327702c1
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x327e8321
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x32772ef1
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x32772d99
- (void)connectionDidFinishLoading:(id)connection;	// 0x327703a1
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x3276f8fd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3276f34d
- (void)setDelegate:(id)delegate;	// 0x3276f02d
@end
