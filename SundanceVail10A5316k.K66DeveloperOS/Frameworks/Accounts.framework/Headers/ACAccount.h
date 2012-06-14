/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"

@class ACAccountStore, ACAccountType, NSMutableDictionary, NSURL, ACAccountCredential, NSDate, NSMutableSet, NSSet, NSDictionary, NSString, NSArray;

@interface ACAccount : NSObject {
@private
	ACAccountStore *_store;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_accountDescription;	// 12 = 0xc
	NSString *_owningBundleID;	// 16 = 0x10
	NSString *_username;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSString *_authToken;	// 28 = 0x1c
	ACAccountType *_accountType;	// 32 = 0x20
	ACAccountCredential *_credential;	// 36 = 0x24
	NSMutableDictionary *_properties;	// 40 = 0x28
	NSMutableDictionary *_dataclassProperties;	// 44 = 0x2c
	BOOL _accountAccessAvailable;	// 48 = 0x30
	BOOL _authenticated;	// 49 = 0x31
	BOOL _active;	// 50 = 0x32
	BOOL _supportsAuthentication;	// 51 = 0x33
	NSURL *_objectID;	// 52 = 0x34
	NSDate *_date;	// 56 = 0x38
	ACAccount *_parentAccount;	// 60 = 0x3c
	BOOL _haveCheckedForParentAccount;	// 64 = 0x40
	NSString *_parentAccountIdentifier;	// 68 = 0x44
	NSArray *_childAccounts;	// 72 = 0x48
	NSMutableSet *_enabledDataclasses;	// 76 = 0x4c
	NSMutableSet *_provisionedDataclasses;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *accountDescription;	// G=0x33a1dfcd; S=0x33a1dfe1; 
@property(readonly, assign, nonatomic) NSDictionary *accountProperties;	// G=0x33a1e05d; 
@property(assign, nonatomic) __weak ACAccountStore *accountStore;	// G=0x33a1e1cd; S=0x33a1e1b9; 
@property(retain, nonatomic) ACAccountType *accountType;	// G=0x33a1e1ed; S=0x33a1e245; 
@property(assign, nonatomic) BOOL active;	// G=0x33a1e179; S=0x33a1e189; 
@property(assign, nonatomic) BOOL authenticated;	// G=0x33a1e159; S=0x33a1e169; 
@property(readonly, assign, nonatomic) NSArray *childAccounts;	// G=0x33a1e42d; 
@property(retain, nonatomic) ACAccountCredential *credential;	// G=0x33a1df4d; S=0x33a1dfa5; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x33a1e799; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x33a1e8dd; 
@property(readonly, assign, nonatomic) ACAccount *displayAccount;	// G=0x33a1e3d9; 
@property(retain, nonatomic) NSMutableSet *enabledDataclasses;	// G=0x33a1e639; S=0x33a1e64d; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x33a1debd; 
@property(copy, nonatomic) NSURL *objectID;	// G=0x33a1e895; S=0x33a1e8a9; 
@property(retain) NSString *owningBundleID;	// G=0x33a1e015; S=0x33a1e029; converted property
@property(retain, nonatomic) ACAccount *parentAccount;	// G=0x33a1e26d; S=0x33a1e369; 
@property(readonly, assign, nonatomic) NSString *parentAccountIdentifier;	// G=0x33a1e2dd; 
@property(retain, nonatomic) NSSet *provisionedDataclasses;	// G=0x33a1e485; S=0x33a1e541; 
@property(assign, nonatomic) BOOL supportsAuthentication;	// G=0x33a1e199; S=0x33a1e1a9; 
@property(copy, nonatomic) NSString *username;	// G=0x33a1df05; S=0x33a1df19; 
+ (id)_createNewAccountUID;	// 0x33a1ebcd
- (id)initWithAccountType:(id)accountType;	// 0x33a1d355
- (id)initWithCoder:(id)coder;	// 0x33a1d4a9
- (void).cxx_destruct;	// 0x33a1ec05
- (id)_enabledDataclassesShouldFaultEmptySet:(BOOL)_enabledDataclasses;	// 0x33a1e575
// declared property getter: - (id)accountDescription;	// 0x33a1dfcd
// declared property getter: - (id)accountProperties;	// 0x33a1e05d
- (id)accountPropertyForKey:(id)key;	// 0x33a1e0a5
// declared property getter: - (id)accountStore;	// 0x33a1e1cd
// declared property getter: - (id)accountType;	// 0x33a1e1ed
// declared property getter: - (BOOL)active;	// 0x33a1e179
// declared property getter: - (BOOL)authenticated;	// 0x33a1e159
// declared property getter: - (id)childAccounts;	// 0x33a1e42d
// declared property getter: - (id)credential;	// 0x33a1df4d
- (void)credentialsChanged:(id)changed;	// 0x33a1de29
// declared property getter: - (id)dataclassProperties;	// 0x33a1e799
// declared property getter: - (id)date;	// 0x33a1e8dd
- (void)dealloc;	// 0x33a1dbf9
- (id)description;	// 0x33a1dc79
// declared property getter: - (id)displayAccount;	// 0x33a1e3d9
// declared property getter: - (id)enabledDataclasses;	// 0x33a1e639
- (void)encodeWithCoder:(id)coder;	// 0x33a1d8b5
// declared property getter: - (id)identifier;	// 0x33a1debd
- (BOOL)isEnabledForDataclass:(NSString *)dataclass;	// 0x33a1e675
- (BOOL)isProvisionedForDataclass:(NSString *)dataclass;	// 0x33a1e73d
// declared property getter: - (id)objectID;	// 0x33a1e895
// converted property getter: - (id)owningBundleID;	// 0x33a1e015
// declared property getter: - (id)parentAccount;	// 0x33a1e26d
// declared property getter: - (id)parentAccountIdentifier;	// 0x33a1e2dd
- (id)propertiesForDataclass:(NSString *)dataclass;	// 0x33a1e7e1
// declared property getter: - (id)provisionedDataclasses;	// 0x33a1e485
- (void)reload;	// 0x33a1e925
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x33a1dfe1
- (void)setAccountProperties:(id)properties;	// 0x33a1e071
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x33a1e0c5
// declared property setter: - (void)setAccountStore:(id)store;	// 0x33a1e1b9
// declared property setter: - (void)setAccountType:(id)type;	// 0x33a1e245
// declared property setter: - (void)setActive:(BOOL)active;	// 0x33a1e189
// declared property setter: - (void)setAuthenticated:(BOOL)authenticated;	// 0x33a1e169
// declared property setter: - (void)setCredential:(id)credential;	// 0x33a1dfa5
- (void)setDataclassProperties:(id)properties;	// 0x33a1e7ad
- (void)setDate:(id)date;	// 0x33a1e8f1
- (void)setEnabled:(BOOL)enabled forDataclass:(NSString *)dataclass;	// 0x33a1e6d1
// declared property setter: - (void)setEnabledDataclasses:(id)dataclasses;	// 0x33a1e64d
- (void)setIdentifier:(id)identifier;	// 0x33a1ded1
// declared property setter: - (void)setObjectID:(id)anId;	// 0x33a1e8a9
// converted property setter: - (void)setOwningBundleID:(id)anId;	// 0x33a1e029
// declared property setter: - (void)setParentAccount:(id)account;	// 0x33a1e369
- (void)setProperties:(id)properties forDataclass:(NSString *)dataclass;	// 0x33a1e801
// declared property setter: - (void)setProvisionedDataclasses:(id)dataclasses;	// 0x33a1e541
// declared property setter: - (void)setSupportsAuthentication:(BOOL)authentication;	// 0x33a1e1a9
// declared property setter: - (void)setUsername:(id)username;	// 0x33a1df19
// declared property getter: - (BOOL)supportsAuthentication;	// 0x33a1e199
// declared property getter: - (id)username;	// 0x33a1df05
@end

