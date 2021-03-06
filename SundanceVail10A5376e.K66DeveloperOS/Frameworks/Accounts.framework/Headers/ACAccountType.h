/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library

@class NSURL, ACAccountStore, NSSet, NSString;

@interface ACAccountType : NSObject {
	NSString *_accountTypeDescription;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_credentialType;	// 12 = 0xc
	int _credentialAvailability;	// 16 = 0x10
	NSURL *_objectID;	// 20 = 0x14
	int _visibility;	// 24 = 0x18
	id _credentialProtectionPolicy;	// 28 = 0x1c
	ACAccountStore *_accountStore;	// 32 = 0x20
	int _supportsAuthentication;	// 36 = 0x24
	int _maximumSavedAllowed;	// 40 = 0x28
	BOOL _supportsMultipleAccounts;	// 44 = 0x2c
	NSSet *_supportedDataclasses;	// 48 = 0x30
	NSSet *_syncableDataclasses;	// 52 = 0x34
	NSSet *_accessKeys;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) BOOL accessGranted;	// G=0x345e34dd; 
@property(readonly, assign, nonatomic) NSSet *accessKeys;	// G=0x345e3545; @synthesize=_accessKeys
@property(assign, nonatomic) __weak ACAccountStore *accountStore;	// G=0x345e359d; S=0x345e35bd; @synthesize=_accountStore
@property(readonly, assign, nonatomic) NSString *accountTypeDescription;	// G=0x345e3351; @synthesize=_accountTypeDescription
@property(assign, nonatomic) int credentialAvailability;	// G=0x345e343d; S=0x345e342d; 
@property(copy, nonatomic) id credentialProtectionPolicy;	// G=0x345e345d; S=0x345e34a9; 
@property(readonly, assign, nonatomic) NSString *credentialType;	// G=0x345e3409; @synthesize=_credentialType
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x345e3309; @synthesize=_identifier
@property(retain, nonatomic) NSURL *objectID;	// G=0x345e3399; S=0x345e33ad; @synthesize=_objectID
@property(readonly, assign, nonatomic) NSSet *supportedDataclasses;	// G=0x345e3259; @synthesize=_supportedDataclasses
@property(assign, nonatomic) int supportsAuthentication;	// G=0x345e3519; S=0x345e3509; @synthesize=_supportsAuthentication
@property(readonly, assign, nonatomic) BOOL supportsMultipleAccounts;	// G=0x345e3535; @synthesize=_supportsMultipleAccounts
@property(readonly, assign, nonatomic) NSSet *syncableDataclasses;	// G=0x345e32b1; @synthesize=_syncableDataclasses
@property(assign, nonatomic) int visibility;	// G=0x345e341d; S=0x345e344d; 
- (id)initWithCoder:(id)coder;	// 0x345e2c79
- (id)initWithIdentifier:(id)identifier description:(id)description;	// 0x345e2bcd
- (void).cxx_destruct;	// 0x345e35d1
// declared property getter: - (BOOL)accessGranted;	// 0x345e34dd
// declared property getter: - (id)accessKeys;	// 0x345e3545
// declared property getter: - (id)accountStore;	// 0x345e359d
// declared property getter: - (id)accountTypeDescription;	// 0x345e3351
// declared property getter: - (int)credentialAvailability;	// 0x345e343d
// declared property getter: - (id)credentialProtectionPolicy;	// 0x345e345d
// declared property getter: - (id)credentialType;	// 0x345e3409
- (id)description;	// 0x345e315d
- (void)encodeWithCoder:(id)coder;	// 0x345e2f09
// declared property getter: - (id)identifier;	// 0x345e3309
// declared property getter: - (id)objectID;	// 0x345e3399
// declared property setter: - (void)setAccountStore:(id)store;	// 0x345e35bd
- (void)setAccountTypeDescription:(id)description;	// 0x345e3365
// declared property setter: - (void)setCredentialAvailability:(int)availability;	// 0x345e342d
// declared property setter: - (void)setCredentialProtectionPolicy:(id)policy;	// 0x345e34a9
- (void)setCredentialType:(id)type;	// 0x345e33d5
- (void)setIdentifier:(id)identifier;	// 0x345e331d
// declared property setter: - (void)setObjectID:(id)anId;	// 0x345e33ad
// declared property setter: - (void)setSupportsAuthentication:(int)authentication;	// 0x345e3509
// declared property setter: - (void)setVisibility:(int)visibility;	// 0x345e344d
// declared property getter: - (id)supportedDataclasses;	// 0x345e3259
// declared property getter: - (int)supportsAuthentication;	// 0x345e3519
// declared property getter: - (BOOL)supportsMultipleAccounts;	// 0x345e3535
// declared property getter: - (id)syncableDataclasses;	// 0x345e32b1
// declared property getter: - (int)visibility;	// 0x345e341d
@end

