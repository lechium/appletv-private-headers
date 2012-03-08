/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSURLAuthenticationChallengeSender.h"

@class SSDownloadAuthenticationSession;

__attribute__((visibility("hidden")))
@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	SSDownloadAuthenticationSession *_session;	// 8 = 0x8
}
@property(readonly, assign) SSDownloadAuthenticationSession *authenticationSession;	// G=0x33cb3349; 
- (id)initWithAuthenticationSession:(id)authenticationSession;	// 0x33cb3275
// declared property getter: - (id)authenticationSession;	// 0x33cb3349
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x33cb34e5
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x33cb3515
- (void)dealloc;	// 0x33cb32e9
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x33cb3545
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x33cb3575
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x33cb35a5
@end

