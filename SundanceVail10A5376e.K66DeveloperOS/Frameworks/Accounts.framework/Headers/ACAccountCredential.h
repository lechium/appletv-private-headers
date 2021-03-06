/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library

@class NSDate, NSMutableDictionary, NSString;

@interface ACAccountCredential : NSObject {
	NSMutableDictionary *_credentialItems;	// 4 = 0x4
	NSString *_credentialType;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *appleidFacetimeToken;	// G=0x345e4ec1; S=0x345e4dd9; 
@property(copy, nonatomic) NSString *appleidGameCenterToken;	// G=0x345e4edd; S=0x345e4e1d; 
@property(copy, nonatomic) NSString *appleidMadridToken;	// G=0x345e4ef9; S=0x345e4e61; 
@property(copy, nonatomic) NSString *appleidiCloudToken;	// G=0x345e4ea5; S=0x345e4d95; 
@property(readonly, retain) NSMutableDictionary *credentialItems;	// G=0x345e4ac1; converted property
@property(copy, nonatomic) NSString *credentialType;	// G=0x345e4f49; S=0x345e4f15; 
@property(retain, nonatomic) NSDate *expiryDate;	// G=0x345e4c71; S=0x345e4ce5; 
@property(copy, nonatomic) NSString *oauthRefreshToken;	// G=0x345e4c11; S=0x345e4c2d; 
@property(copy, nonatomic) NSString *oauthToken;	// G=0x345e4b95; S=0x345e4b51; 
@property(copy, nonatomic) NSString *oauthTokenSecret;	// G=0x345e4bf5; S=0x345e4bb1; 
@property(copy, nonatomic) NSString *password;	// G=0x345e4d79; S=0x345e4d5d; 
+ (id)credentialWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x345e45f9
+ (id)credentialWithPassword:(id)password;	// 0x345e4675
+ (id)keysForType:(id)type;	// 0x345e46d9
+ (id)nonPersistentCredentialItemsForType:(id)type;	// 0x345e487d
- (id)init;	// 0x345e48e1
- (id)initWithAppleIDiCloudToken:(id)appleIDiCloudToken facetimeToken:(id)token madridToken:(id)token3 gamecenterToken:(id)token4;	// 0x345e44a9
- (id)initWithCoder:(id)coder;	// 0x345e4959
- (id)initWithOAuth2Token:(id)oauth2Token refreshToken:(id)token expiryDate:(id)date;	// 0x345e41c9
- (id)initWithOAuthToken:(id)oauthToken tokenSecret:(id)secret;	// 0x345e42e5
- (id)initWithPassword:(id)password;	// 0x345e43dd
- (void).cxx_destruct;	// 0x345e4f5d
// declared property getter: - (id)appleidFacetimeToken;	// 0x345e4ec1
// declared property getter: - (id)appleidGameCenterToken;	// 0x345e4edd
// declared property getter: - (id)appleidMadridToken;	// 0x345e4ef9
// declared property getter: - (id)appleidiCloudToken;	// 0x345e4ea5
- (id)credentialItemForKey:(id)key;	// 0x345e4af5
// converted property getter: - (id)credentialItems;	// 0x345e4ac1
// declared property getter: - (id)credentialType;	// 0x345e4f49
- (void)encodeWithCoder:(id)coder;	// 0x345e4a4d
// declared property getter: - (id)expiryDate;	// 0x345e4c71
- (unsigned)hash;	// 0x345e4169
- (BOOL)isEqual:(id)equal;	// 0x345e400d
- (id)keysForCredentialItems;	// 0x345e4ad5
// declared property getter: - (id)oauthRefreshToken;	// 0x345e4c11
// declared property getter: - (id)oauthToken;	// 0x345e4b95
// declared property getter: - (id)oauthTokenSecret;	// 0x345e4bf5
// declared property getter: - (id)password;	// 0x345e4d79
// declared property setter: - (void)setAppleidFacetimeToken:(id)token;	// 0x345e4dd9
// declared property setter: - (void)setAppleidGameCenterToken:(id)token;	// 0x345e4e1d
// declared property setter: - (void)setAppleidMadridToken:(id)token;	// 0x345e4e61
// declared property setter: - (void)setAppleidiCloudToken:(id)token;	// 0x345e4d95
- (void)setCredentialItem:(id)item forKey:(id)key;	// 0x345e4b15
// declared property setter: - (void)setCredentialType:(id)type;	// 0x345e4f15
// declared property setter: - (void)setExpiryDate:(id)date;	// 0x345e4ce5
// declared property setter: - (void)setOauthRefreshToken:(id)token;	// 0x345e4c2d
// declared property setter: - (void)setOauthToken:(id)token;	// 0x345e4b51
// declared property setter: - (void)setOauthTokenSecret:(id)secret;	// 0x345e4bb1
// declared property setter: - (void)setPassword:(id)password;	// 0x345e4d5d
@end

