/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSDictionary, NSArray, NSMutableArray, NSString;

@interface ASGALSearchResult : ASItem {
	NSDictionary *_applicationData;	// 40 = 0x28
	NSString *_longID;	// 44 = 0x2c
	NSMutableArray *_classes;	// 48 = 0x30
	NSMutableArray *_collectionIDs;	// 52 = 0x34
	NSString *_phone;	// 56 = 0x38
	NSString *_office;	// 60 = 0x3c
	NSString *_title;	// 64 = 0x40
	NSString *_company;	// 68 = 0x44
	NSString *_alias;	// 72 = 0x48
	NSString *_firstName;	// 76 = 0x4c
	NSString *_lastName;	// 80 = 0x50
	NSString *_homePhone;	// 84 = 0x54
	NSString *_mobilePhone;	// 88 = 0x58
	NSString *_emailAddress;	// 92 = 0x5c
}
@property(copy) NSString *alias;	// G=0x31dc5e75; S=0x31dc5e89; @synthesize=_alias
@property(retain) NSDictionary *applicationData;	// G=0x31dc5175; S=0x31dc50f1; converted property
@property(retain) NSArray *classes;	// G=0x31dc5d25; S=0x31dc5d39; @synthesize=_classes
@property(retain) NSArray *collectionIDs;	// G=0x31dc5d5d; S=0x31dc5d71; @synthesize=_collectionIDs
@property(copy) NSString *company;	// G=0x31dc5e3d; S=0x31dc5e51; @synthesize=_company
@property(copy) NSString *emailAddress;	// G=0x31dc5f8d; S=0x31dc5fa1; @synthesize=_emailAddress
@property(copy) NSString *firstName;	// G=0x31dc5ead; S=0x31dc5ec1; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x31dc5f1d; S=0x31dc5f31; @synthesize=_homePhone
@property(copy) NSString *lastName;	// G=0x31dc5ee5; S=0x31dc5ef9; @synthesize=_lastName
@property(retain) NSString *longID;	// G=0x31dc5ced; S=0x31dc5d01; @synthesize=_longID
@property(copy) NSString *mobilePhone;	// G=0x31dc5f55; S=0x31dc5f69; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x31dc5dcd; S=0x31dc5de1; @synthesize=_office
@property(copy) NSString *phone;	// G=0x31dc5d95; S=0x31dc5da9; @synthesize=_phone
@property(copy) NSString *title;	// G=0x31dc5e05; S=0x31dc5e19; @synthesize=_title
+ (BOOL)acceptsTopLevelLeaves;	// 0x31dc4d95
+ (BOOL)frontingBasicTypes;	// 0x31dc4e91
+ (BOOL)notifyOfUnknownTokens;	// 0x31dc4ee5
+ (BOOL)parsingLeafNode;	// 0x31dc4de9
+ (BOOL)parsingWithSubItems;	// 0x31dc4e3d
- (void)addClass:(id)aClass;	// 0x31dc5c25
- (void)addCollectionID:(id)anId;	// 0x31dc5c89
// declared property getter: - (id)alias;	// 0x31dc5e75
// converted property getter: - (id)applicationData;	// 0x31dc5175
- (id)asParseRules;	// 0x31dc5185
// declared property getter: - (id)classes;	// 0x31dc5d25
// declared property getter: - (id)collectionIDs;	// 0x31dc5d5d
// declared property getter: - (id)company;	// 0x31dc5e3d
- (id)convertToDAContactSearchResultElement;	// 0x31dc594d
- (void)dealloc;	// 0x31dc4f39
- (id)description;	// 0x31dc5089
// declared property getter: - (id)emailAddress;	// 0x31dc5f8d
// declared property getter: - (id)firstName;	// 0x31dc5ead
// declared property getter: - (id)homePhone;	// 0x31dc5f1d
// declared property getter: - (id)lastName;	// 0x31dc5ee5
// declared property getter: - (id)longID;	// 0x31dc5ced
// declared property getter: - (id)mobilePhone;	// 0x31dc5f55
// declared property getter: - (id)office;	// 0x31dc5dcd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31dc58c9
// declared property getter: - (id)phone;	// 0x31dc5d95
- (void)postProcessApplicationData;	// 0x31dc5429
// declared property setter: - (void)setAlias:(id)alias;	// 0x31dc5e89
// converted property setter: - (void)setApplicationData:(id)data;	// 0x31dc50f1
// declared property setter: - (void)setClasses:(id)classes;	// 0x31dc5d39
// declared property setter: - (void)setCollectionIDs:(id)ids;	// 0x31dc5d71
// declared property setter: - (void)setCompany:(id)company;	// 0x31dc5e51
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31dc5fa1
// declared property setter: - (void)setFirstName:(id)name;	// 0x31dc5ec1
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x31dc5f31
// declared property setter: - (void)setLastName:(id)name;	// 0x31dc5ef9
// declared property setter: - (void)setLongID:(id)anId;	// 0x31dc5d01
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x31dc5f69
// declared property setter: - (void)setOffice:(id)office;	// 0x31dc5de1
// declared property setter: - (void)setPhone:(id)phone;	// 0x31dc5da9
// declared property setter: - (void)setTitle:(id)title;	// 0x31dc5e19
// declared property getter: - (id)title;	// 0x31dc5e05
@end

