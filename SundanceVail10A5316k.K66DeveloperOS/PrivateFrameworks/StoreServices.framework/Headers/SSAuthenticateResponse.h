/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSError, SSAccount;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSError *_error;	// 8 = 0x8
	NSDictionary *_responseDictionary;	// 12 = 0xc
	int _responseType;	// 16 = 0x10
}
@property(assign, nonatomic) int authenticateResponseType;	// G=0x34e50b41; S=0x34e50b51; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x34e50b21; S=0x34e50b31; @synthesize=_authenticatedAccount
@property(readonly, assign, nonatomic) NSError *error;	// G=0x34e50b61; @synthesize=_error
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x34e50b71; S=0x34e50b85; @synthesize=_responseDictionary
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e5097d
- (void)_setError:(id)error;	// 0x34e50895
// declared property getter: - (int)authenticateResponseType;	// 0x34e50b41
// declared property getter: - (id)authenticatedAccount;	// 0x34e50b21
- (id)copyXPCEncoding;	// 0x34e508d9
- (void)dealloc;	// 0x34e5081d
// declared property getter: - (id)error;	// 0x34e50b61
// declared property getter: - (id)responseDictionary;	// 0x34e50b71
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x34e50b51
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x34e50b31
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x34e50b85
@end

