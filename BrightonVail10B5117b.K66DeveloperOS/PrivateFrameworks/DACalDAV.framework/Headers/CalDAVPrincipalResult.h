/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSMutableArray;

@interface CalDAVPrincipalResult : NSObject {
	NSString *_firstName;	// 4 = 0x4
	NSString *_lastName;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
	NSString *_type;	// 16 = 0x10
	NSString *_principal;	// 20 = 0x14
	NSMutableArray *_emails;	// 24 = 0x18
	NSMutableArray *_cuAddresses;	// 28 = 0x1c
}
@property(retain) NSArray *cuAddresses;	// G=0x33b91c19; S=0x33b91c2d; @synthesize=_cuAddresses
@property(retain) NSString *displayName;	// G=0x33b91b89; S=0x33b91b9d; @synthesize=_displayName
@property(readonly, assign) NSString *emailAddress;	// G=0x33b9197d; 
@property(retain) NSArray *emailAddresses;	// G=0x33b91bd1; S=0x33b91be5; @synthesize=_emails
@property(retain) NSString *firstName;	// G=0x33b91b41; S=0x33b91b55; @synthesize=_firstName
@property(retain) NSString *lastName;	// G=0x33b91b65; S=0x33b91b79; @synthesize=_lastName
@property(readonly, assign) NSString *preferredCUAddress;	// G=0x33b9182d; 
@property(retain) NSString *principalPath;	// G=0x33b91bf5; S=0x33b91c09; @synthesize=_principal
@property(retain) NSString *resultType;	// G=0x33b91bad; S=0x33b91bc1; @synthesize=_type
+ (id)resultFromResponse:(id)response;	// 0x33b9175d
- (id)init;	// 0x33b91131
- (id)initWithResponse:(id)response;	// 0x33b912f9
- (void)addCUAddress:(id)address;	// 0x33b917a5
- (void)addEmail:(id)email;	// 0x33b917e9
- (id)convertToDAContactSearchResultElement;	// 0x33b6e3f1
// declared property getter: - (id)cuAddresses;	// 0x33b91c19
- (void)dealloc;	// 0x33b91231
- (id)description;	// 0x33b91aa5
// declared property getter: - (id)displayName;	// 0x33b91b89
// declared property getter: - (id)emailAddress;	// 0x33b9197d
// declared property getter: - (id)emailAddresses;	// 0x33b91bd1
// declared property getter: - (id)firstName;	// 0x33b91b41
// declared property getter: - (id)lastName;	// 0x33b91b65
// declared property getter: - (id)preferredCUAddress;	// 0x33b9182d
// declared property getter: - (id)principalPath;	// 0x33b91bf5
// declared property getter: - (id)resultType;	// 0x33b91bad
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x33b91c2d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x33b91b9d
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x33b91be5
// declared property setter: - (void)setFirstName:(id)name;	// 0x33b91b55
// declared property setter: - (void)setLastName:(id)name;	// 0x33b91b79
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x33b91c09
// declared property setter: - (void)setResultType:(id)type;	// 0x33b91bc1
@end
