/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {
	NSDictionary *_urls;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *aboutURL;	// G=0x37267755; 
@property(readonly, assign, nonatomic) NSString *authenticateURL;	// G=0x37267781; 
@property(readonly, assign, nonatomic) NSString *checkValidityURL;	// G=0x37267831; 
@property(readonly, assign, nonatomic) NSString *createAppleIDURL;	// G=0x372677ad; 
@property(readonly, assign, nonatomic) NSString *createDelegateAccountsURL;	// G=0x37267805; 
@property(readonly, assign, nonatomic) NSString *existingAppleIDTermsUIURL;	// G=0x37267889; 
@property(readonly, assign, nonatomic) NSString *iForgotURL;	// G=0x3726785d; 
@property(readonly, assign, nonatomic) NSString *loginDelegatesURL;	// G=0x372678b5; 
@property(readonly, assign, nonatomic) BOOL setupAssistantServerEnabled;	// G=0x372678e1; 
@property(readonly, assign, nonatomic) NSString *signingSessionCertURL;	// G=0x372676d1; 
@property(readonly, assign, nonatomic) NSString *signingSessionURL;	// G=0x372676fd; 
@property(readonly, assign, nonatomic) NSString *updateAppleIDURL;	// G=0x372677d9; 
@property(readonly, assign, nonatomic) NSString *xmlUI;	// G=0x37267729; 
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;	// 0x372674d5
- (void).cxx_destruct;	// 0x37267949
// declared property getter: - (id)aboutURL;	// 0x37267755
// declared property getter: - (id)authenticateURL;	// 0x37267781
// declared property getter: - (id)checkValidityURL;	// 0x37267831
// declared property getter: - (id)createAppleIDURL;	// 0x372677ad
// declared property getter: - (id)createDelegateAccountsURL;	// 0x37267805
// declared property getter: - (id)existingAppleIDTermsUIURL;	// 0x37267889
// declared property getter: - (id)iForgotURL;	// 0x3726785d
// declared property getter: - (id)loginDelegatesURL;	// 0x372678b5
// declared property getter: - (BOOL)setupAssistantServerEnabled;	// 0x372678e1
// declared property getter: - (id)signingSessionCertURL;	// 0x372676d1
// declared property getter: - (id)signingSessionURL;	// 0x372676fd
// declared property getter: - (id)updateAppleIDURL;	// 0x372677d9
// declared property getter: - (id)xmlUI;	// 0x37267729
@end

