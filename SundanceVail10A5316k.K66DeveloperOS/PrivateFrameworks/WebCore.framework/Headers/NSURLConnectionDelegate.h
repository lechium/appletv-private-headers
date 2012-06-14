/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSObject.h"


@protocol NSURLConnectionDelegate <NSObject>
@optional
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;
@end

