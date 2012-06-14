/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AASigningSession, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest {
	NSDictionary *appleIDParameters;	// 16 = 0x10
	AASigningSession *signingSession;	// 20 = 0x14
}
+ (Class)responseClass;	// 0x372669d1
- (id)initWithAppleIDParameters:(id)appleIDParameters signingSession:(id)session;	// 0x372669ed
- (void).cxx_destruct;	// 0x37266d69
- (id)bodyDictionary;	// 0x37266a95
- (id)urlRequest;	// 0x37266afd
- (id)urlString;	// 0x37266aa9
@end

