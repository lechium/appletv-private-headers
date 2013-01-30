/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"
#import "SSAuthenticationContext.h"
#import "NSMutableCopying.h"

@class NSNumber, NSArray, NSString, NSDictionary;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying> {
}
@property(copy, nonatomic) NSDictionary *HTTPHeaders;	// S=0x378143ad; @dynamic
@property(copy, nonatomic) NSString *accountName;	// S=0x37814021; @dynamic
@property(assign, nonatomic, getter=isAccountNameEditable) BOOL accountNameEditable;	// S=0x37814065; @dynamic
@property(assign) int accountScope;	// S=0x37814075; @dynamic
@property(assign, nonatomic) BOOL allowsRetry;	// S=0x37814085; @dynamic
@property(assign, nonatomic) BOOL canCreateNewAccount;	// S=0x37814095; @dynamic
@property(assign, nonatomic) BOOL canSetActiveAccount;	// S=0x378140a5; @dynamic
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x37814359; @dynamic
@property(assign, nonatomic, getter=isDemoAccount) BOOL demoAccount;	// S=0x3781439d; @dynamic
@property(copy, nonatomic) NSString *initialPassword;	// S=0x378140b5; @dynamic
@property(copy, nonatomic) NSString *preferredITunesStoreClient;	// S=0x378140f9; @dynamic
@property(assign, nonatomic) int promptStyle;	// S=0x3781413d; @dynamic
@property(copy, nonatomic) NSDictionary *requestParameters;	// S=0x3781414d; @dynamic
@property(retain, nonatomic) NSNumber *requiredUniqueIdentifier;	// S=0x37814191; @dynamic
@property(assign, nonatomic) BOOL shouldFollowAccountButtons;	// S=0x378141d5; @dynamic
@property(assign, nonatomic) BOOL shouldIgnoreProtocol;	// S=0x378141e5; @dynamic
@property(assign, nonatomic) BOOL shouldSuppressDialogs;	// S=0x378141f5; @dynamic
@property(copy, nonatomic) NSDictionary *signupRequestParameters;	// S=0x37814205; @dynamic
@property(assign, nonatomic) int tokenType;	// S=0x378143f1; @dynamic
@property(copy, nonatomic) NSArray *userAgentComponents;	// S=0x37814249; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x37813f81
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x37813fd1
// declared property setter: - (void)setAccountName:(id)name;	// 0x37814021
// declared property setter: - (void)setAccountNameEditable:(BOOL)editable;	// 0x37814065
// declared property setter: - (void)setAccountScope:(int)scope;	// 0x37814075
// declared property setter: - (void)setAllowsRetry:(BOOL)retry;	// 0x37814085
// declared property setter: - (void)setCanCreateNewAccount:(BOOL)account;	// 0x37814095
// declared property setter: - (void)setCanSetActiveAccount:(BOOL)account;	// 0x378140a5
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x37814359
// declared property setter: - (void)setDemoAccount:(BOOL)account;	// 0x3781439d
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x378143ad
// declared property setter: - (void)setInitialPassword:(id)password;	// 0x378140b5
// declared property setter: - (void)setPreferredITunesStoreClient:(id)client;	// 0x378140f9
// declared property setter: - (void)setPromptStyle:(int)style;	// 0x3781413d
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x3781414d
// declared property setter: - (void)setRequiredUniqueIdentifier:(id)identifier;	// 0x37814191
// declared property setter: - (void)setShouldFollowAccountButtons:(BOOL)followAccountButtons;	// 0x378141d5
// declared property setter: - (void)setShouldIgnoreProtocol:(BOOL)ignoreProtocol;	// 0x378141e5
// declared property setter: - (void)setShouldSuppressDialogs:(BOOL)suppressDialogs;	// 0x378141f5
// declared property setter: - (void)setSignupRequestParameters:(id)parameters;	// 0x37814205
// declared property setter: - (void)setTokenType:(int)type;	// 0x378143f1
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x37814249
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3781428d
@end
