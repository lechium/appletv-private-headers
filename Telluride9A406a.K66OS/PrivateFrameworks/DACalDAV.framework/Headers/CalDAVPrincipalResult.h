/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x32ee5b25; S=0x32ee5b39; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x32ee5a45; S=0x32ee5a59; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x32ee5821; 
@property(retain) NSArray *emailAddresses;	// G=0x32ee5ab5; S=0x32ee5ac9; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x32ee59d5; S=0x32ee59e9; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x32ee5a0d; S=0x32ee5a21; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x32ee56e9; 
@property(retain) NSString *principalPath;	// G=0x32ee5aed; S=0x32ee5b01; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x32ee5a7d; S=0x32ee5a91; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x32ee5619
- (id)init;	// 0x32ee4ff5
- (id)initWithResponse:(id)response;	// 0x32ee51b5
- (void)addCUAddress:(id)address;	// 0x32ee5661
- (void)addEmail:(id)email;	// 0x32ee56a5
- (id)convertToDAContactSearchResultElement;	// 0x32ec65dd
// declared property getter: - (id)cuAddresses;	// 0x32ee5b25
- (void)dealloc;	// 0x32ee50f1
- (id)description;	// 0x32ee5939
// declared property getter: - (id)displayName;	// 0x32ee5a45
// declared property getter: - (id)emailAddress;	// 0x32ee5821
// declared property getter: - (id)emailAddresses;	// 0x32ee5ab5
// declared property getter: - (id)firstName;	// 0x32ee59d5
// declared property getter: - (id)lastName;	// 0x32ee5a0d
// declared property getter: - (id)preferredCUAddress;	// 0x32ee56e9
// declared property getter: - (id)principalPath;	// 0x32ee5aed
// declared property getter: - (id)resultType;	// 0x32ee5a7d
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x32ee5b39
// declared property setter: - (void)setDisplayName:(id)name;	// 0x32ee5a59
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x32ee5ac9
// declared property setter: - (void)setFirstName:(id)name;	// 0x32ee59e9
// declared property setter: - (void)setLastName:(id)name;	// 0x32ee5a21
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x32ee5b01
// declared property setter: - (void)setResultType:(id)type;	// 0x32ee5a91
@end

