/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, BRAccountType;

@interface BRAccount : NSObject <NSCoding> {
@private
	int _version;	// 4 = 0x4
	NSString *_assignedGUID;	// 8 = 0x8
	NSString *_accountName;	// 12 = 0xc
	BOOL _accountOptionsSet;	// 16 = 0x10
	BOOL _isSystemAccount;	// 17 = 0x11
	NSMutableDictionary *_metadata;	// 20 = 0x14
	NSMutableDictionary *_session;	// 24 = 0x18
	BRAccountType *_accountType;	// 28 = 0x1c
	BOOL _lockedForAuthenticator;	// 32 = 0x20
}
@property(retain) NSString *accountName;	// G=0x30332c19; S=0x30332c29; converted property
@property(readonly, assign) BOOL accountOptionsSet;	// G=0x303330c5; converted property
@property(retain) id type;	// G=0x30332ba1; S=0x30332bd9; converted property
+ (int)_currentVersion;	// 0x30333575
- (id)initWithAccountName:(id)accountName;	// 0x30332285
- (id)initWithCoder:(id)coder;	// 0x30332391
- (id)SSAccount;	// 0x303332cd
- (id)_accountQuery;	// 0x30333469
- (id)_assignedGUID;	// 0x30321789
- (id)_decryptPassword:(id)password;	// 0x303335a9
- (id)_encryptPassword:(id)password;	// 0x303335a5
- (BOOL)_isSystemAccount;	// 0x3032179d
- (id)_keychainAccessGroup;	// 0x30333579
- (void)_readProtectedInfo:(id)info;	// 0x303335a1
- (void)_resetSession;	// 0x303335ad
- (void)_setVersion:(int)version;	// 0x3033358d
- (int)_version;	// 0x3033357d
- (void)_writeProtectedInfo:(id)info;	// 0x3033359d
// converted property getter: - (id)accountName;	// 0x30332c19
// converted property getter: - (BOOL)accountOptionsSet;	// 0x303330c5
- (void)acquireAuthenticatorLock;	// 0x3033327d
- (void)dealloc;	// 0x30332b05
- (void)encodeWithCoder:(id)coder;	// 0x3033273d
- (BOOL)isAuthenticated;	// 0x3033307d
- (void)markAccountOptionsAsSet;	// 0x3033319d
- (void)markAsDirty;	// 0x30333081
- (id)metadataValueForKey:(id)key;	// 0x30332d09
- (void)releaseAuthenticatorLock;	// 0x303332a5
- (void)resetAccountOptions;	// 0x303330d5
- (void)resetSession;	// 0x303331c5
- (id)sessionValueForKey:(id)key;	// 0x30332e99
// converted property setter: - (void)setAccountName:(id)name;	// 0x30332c29
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x30332dc5
- (void)setSessionValue:(id)value forKey:(id)key;	// 0x30332f55
// converted property setter: - (void)setType:(id)type;	// 0x30332bd9
// converted property getter: - (id)type;	// 0x30332ba1
- (void)willBeDeleted;	// 0x30333525
@end

