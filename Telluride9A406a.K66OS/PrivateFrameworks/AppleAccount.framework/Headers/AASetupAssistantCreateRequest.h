/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest {
	NSDictionary *appleIDParameters;	// 12 = 0xc
	AASigningSession *signingSession;	// 16 = 0x10
}
+ (Class)responseClass;	// 0x35f66421
- (id)initWithAppleIDParameters:(id)appleIDParameters signingSession:(id)session;	// 0x35f6643d
- (id)bodyDictionary;	// 0x35f66515
- (void)dealloc;	// 0x35f664b5
- (id)urlRequest;	// 0x35f66559
- (id)urlString;	// 0x35f66525
@end

