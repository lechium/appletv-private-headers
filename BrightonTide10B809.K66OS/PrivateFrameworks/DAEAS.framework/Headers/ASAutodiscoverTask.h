/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DAEAS-Structs.h"
#import "ASTask.h"

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {
	NSString *_serverURL;	// 108 = 0x6c
	NSString *_emailAddress;	// 112 = 0x70
	NSString *_redirectEmail;	// 116 = 0x74
	NSString *_authUsername;	// 120 = 0x78
	NSMutableDictionary *_accountInfo;	// 124 = 0x7c
	NSError *_discoveryError;	// 128 = 0x80
}
- (id)initWithURL:(id)url emailAddress:(id)address authUsername:(id)username;	// 0x339d9501
- (id)_HTTPMethodForRequest:(id)request;	// 0x339d969d
- (void)_addAuthToRequest:(id)request;	// 0x339d9745
- (id)_easVersion;	// 0x339d9689
- (void)_handleActionNode:(xmlNode *)node;	// 0x339d9dbd
- (void)_handleErrorNode:(xmlNode *)node;	// 0x339d9c49
- (void)_handleServerNode:(xmlNode *)node;	// 0x339d9965
- (void)_handleUserNode:(xmlNode *)node;	// 0x339d9eb5
- (id)_policyKey;	// 0x339d968d
- (void)_setAccountInfoFromAutoDiscoveryXML:(id)autoDiscoveryXML;	// 0x339d9f21
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x339d9845
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x339d9701
- (id)_url;	// 0x339d9651
- (id)contentType;	// 0x339d9691
- (void)dealloc;	// 0x339d9591
- (void)didProcessContext:(id)context;	// 0x339da245
- (BOOL)expectsWBXML;	// 0x339d96fd
- (void)finishWithError:(id)error;	// 0x339da2a5
- (id)localizedErrorStringForCertificateErrorCode:(int)certificateErrorCode host:(id)host;	// 0x339d98c1
- (BOOL)processContext:(id)context;	// 0x339d98bd
- (id)requestBody;	// 0x339d9849
- (BOOL)requiresEASVersionInformaton;	// 0x339da3f5
- (BOOL)shouldHandlePasswordErrors;	// 0x339da29d
- (BOOL)shouldLogIncomingData;	// 0x339da3f9
- (BOOL)shouldStallAfterCannotFindHost;	// 0x339da2a1
- (double)timeoutInterval;	// 0x339d9645
@end
