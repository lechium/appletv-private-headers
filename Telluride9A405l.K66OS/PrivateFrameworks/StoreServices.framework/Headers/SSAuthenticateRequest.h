/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class SSAuthenticationContext;
@protocol SSAuthenticateRequestDelegate;

@interface SSAuthenticateRequest : SSRequest <SSCoding> {
@private
	SSAuthenticationContext *_authenticationContext;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x3650c099; @synthesize=_authenticationContext
@property(assign, nonatomic) id<SSAuthenticateRequestDelegate> delegate;	// @dynamic
- (id)initWithAccount:(id)account;	// 0x3650bc39
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x3650bcc9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3650be15
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3650be9d
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3650c01d
// declared property getter: - (id)authenticationContext;	// 0x3650c099
- (id)copyPropertyListEncoding;	// 0x3650bd69
- (void *)copyXPCEncoding;	// 0x3650bde1
- (void)dealloc;	// 0x3650bd1d
- (id)handleFailureResponse:(id)response;	// 0x3650bed9
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x3650bf85
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x3650bff5
@end
