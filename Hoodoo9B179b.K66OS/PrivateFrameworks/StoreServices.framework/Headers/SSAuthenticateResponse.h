/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSCoding.h"

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSDictionary *_responseDictionary;	// 8 = 0x8
	int _responseType;	// 12 = 0xc
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x33c8e489; S=0x33c8e499; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x33c8e455; S=0x33c8e465; @synthesize=_authenticatedAccount
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x33c8e4a9; S=0x33c8e4b9; @synthesize=_responseDictionary
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x33c8e319
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x33c8e419
// declared property getter: - (int)authenticateResponseType;	// 0x33c8e489
// declared property getter: - (id)authenticatedAccount;	// 0x33c8e455
- (id)copyPropertyListEncoding;	// 0x33c8e225
- (void *)copyXPCEncoding;	// 0x33c8e2e5
- (void)dealloc;	// 0x33c8e1c5
// declared property getter: - (id)responseDictionary;	// 0x33c8e4a9
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x33c8e499
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x33c8e465
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x33c8e4b9
@end

