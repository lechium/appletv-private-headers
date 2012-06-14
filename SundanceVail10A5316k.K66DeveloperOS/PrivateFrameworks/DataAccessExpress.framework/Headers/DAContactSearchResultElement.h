/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSCoding> {
	NSString *_displayName;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_workPhone;	// 20 = 0x14
	NSString *_mobilePhone;	// 24 = 0x18
	NSString *_company;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_homePhone;	// 36 = 0x24
	NSString *_alias;	// 40 = 0x28
	NSString *_office;	// 44 = 0x2c
	NSString *_serverSource;	// 48 = 0x30
	NSString *_recordName;	// 52 = 0x34
	NSString *_faxPhone;	// 56 = 0x38
	NSString *_department;	// 60 = 0x3c
	NSString *_street;	// 64 = 0x40
	NSString *_city;	// 68 = 0x44
	NSString *_state;	// 72 = 0x48
	NSString *_zip;	// 76 = 0x4c
	NSString *_country;	// 80 = 0x50
	NSData *_jpegPhoto;	// 84 = 0x54
	NSString *_imAddress;	// 88 = 0x58
	NSString *_uri;	// 92 = 0x5c
	NSString *_buildingName;	// 96 = 0x60
	NSString *_appleFloor;	// 100 = 0x64
	NSString *_pagerNumber;	// 104 = 0x68
	NSString *_postalAddress;	// 108 = 0x6c
	NSString *_homePostalAddress;	// 112 = 0x70
	NSString *_principalPath;	// 116 = 0x74
	NSString *_preferredUserAddress;	// 120 = 0x78
	NSArray *_cuAddresses;	// 124 = 0x7c
	NSString *_iPhone;	// 128 = 0x80
	NSString *_mainPhone;	// 132 = 0x84
	NSString *_workFaxPhone;	// 136 = 0x88
	NSString *_identifierOnServer;	// 140 = 0x8c
}
@property(copy) NSString *alias;	// G=0x372d6249; S=0x372d625d; @synthesize=_alias
@property(copy) NSString *appleFloor;	// G=0x372d6489; S=0x372d649d; @synthesize=_appleFloor
@property(copy) NSString *buildingName;	// G=0x372d6465; S=0x372d6479; @synthesize=_buildingName
@property(copy) NSString *city;	// G=0x372d6369; S=0x372d637d; @synthesize=_city
@property(copy) NSString *company;	// G=0x372d6201; S=0x372d6215; @synthesize=_company
@property(copy) NSString *country;	// G=0x372d63d5; S=0x372d63e9; @synthesize=_country
@property(copy) NSArray *cuAddresses;	// G=0x372d6561; S=0x372d6575; @synthesize=_cuAddresses
@property(copy) NSString *department;	// G=0x372d6321; S=0x372d6335; @synthesize=_department
@property(copy) NSString *displayName;	// G=0x372d6129; S=0x372d613d; @synthesize=_displayName
@property(copy) NSString *emailAddress;	// G=0x372d6195; S=0x372d61a9; @synthesize=_emailAddress
@property(copy) NSString *faxPhone;	// G=0x372d62fd; S=0x372d6311; @synthesize=_faxPhone
@property(copy) NSString *firstName;	// G=0x372d614d; S=0x372d6161; @synthesize=_firstName
@property(copy) NSString *homePhone;	// G=0x372d626d; S=0x372d6281; @synthesize=_homePhone
@property(copy) NSString *homePostalAddress;	// G=0x372d64f5; S=0x372d6509; @synthesize=_homePostalAddress
@property(copy) NSString *iPhone;	// G=0x372d6585; S=0x372d6599; @synthesize=_iPhone
@property(retain) NSString *identifierOnServer;	// G=0x372d65f1; S=0x372d6605; @synthesize=_identifierOnServer
@property(copy) NSString *imAddress;	// G=0x372d641d; S=0x372d6431; @synthesize=_imAddress
@property(copy) NSData *jpegPhoto;	// G=0x372d63f9; S=0x372d640d; @synthesize=_jpegPhoto
@property(copy) NSString *lastName;	// G=0x372d6171; S=0x372d6185; @synthesize=_lastName
@property(copy) NSString *mainPhone;	// G=0x372d65a9; S=0x372d65bd; @synthesize=_mainPhone
@property(copy) NSString *mobilePhone;	// G=0x372d61dd; S=0x372d61f1; @synthesize=_mobilePhone
@property(copy) NSString *office;	// G=0x372d6291; S=0x372d62a5; @synthesize=_office
@property(copy) NSString *pagerNumber;	// G=0x372d64ad; S=0x372d64c1; @synthesize=_pagerNumber
@property(copy) NSString *postalAddress;	// G=0x372d64d1; S=0x372d64e5; @synthesize=_postalAddress
@property(copy) NSString *preferredUserAddress;	// G=0x372d653d; S=0x372d6551; @synthesize=_preferredUserAddress
@property(copy) NSString *principalPath;	// G=0x372d6519; S=0x372d652d; @synthesize=_principalPath
@property(copy) NSString *recordName;	// G=0x372d62d9; S=0x372d62ed; @synthesize=_recordName
@property(copy) NSString *serverSource;	// G=0x372d62b5; S=0x372d62c9; @synthesize=_serverSource
@property(copy) NSString *state;	// G=0x372d638d; S=0x372d63a1; @synthesize=_state
@property(copy) NSString *street;	// G=0x372d6345; S=0x372d6359; @synthesize=_street
@property(copy) NSString *title;	// G=0x372d6225; S=0x372d6239; @synthesize=_title
@property(copy) NSString *uri;	// G=0x372d6441; S=0x372d6455; @synthesize=_uri
@property(copy) NSString *workFaxPhone;	// G=0x372d65cd; S=0x372d65e1; @synthesize=_workFaxPhone
@property(copy) NSString *workPhone;	// G=0x372d61b9; S=0x372d61cd; @synthesize=_workPhone
@property(copy) NSString *zip;	// G=0x372d63b1; S=0x372d63c5; @synthesize=_zip
- (id)initWithCoder:(id)coder;	// 0x372d5bb1
// declared property getter: - (id)alias;	// 0x372d6249
// declared property getter: - (id)appleFloor;	// 0x372d6489
// declared property getter: - (id)buildingName;	// 0x372d6465
// declared property getter: - (id)city;	// 0x372d6369
// declared property getter: - (id)company;	// 0x372d6201
// declared property getter: - (id)country;	// 0x372d63d5
// declared property getter: - (id)cuAddresses;	// 0x372d6561
- (void)dealloc;	// 0x372d494d
// declared property getter: - (id)department;	// 0x372d6321
- (id)description;	// 0x372d4c45
// declared property getter: - (id)displayName;	// 0x372d6129
// declared property getter: - (id)emailAddress;	// 0x372d6195
- (void)encodeWithCoder:(id)coder;	// 0x372d5665
// declared property getter: - (id)faxPhone;	// 0x372d62fd
// declared property getter: - (id)firstName;	// 0x372d614d
// declared property getter: - (id)homePhone;	// 0x372d626d
// declared property getter: - (id)homePostalAddress;	// 0x372d64f5
// declared property getter: - (id)iPhone;	// 0x372d6585
// declared property getter: - (id)identifierOnServer;	// 0x372d65f1
// declared property getter: - (id)imAddress;	// 0x372d641d
- (BOOL)isEqual:(id)equal;	// 0x372d5609
- (BOOL)isEqualToDAContactSearchResultElement:(id)dacontactSearchResultElement;	// 0x372d4cf1
// declared property getter: - (id)jpegPhoto;	// 0x372d63f9
// declared property getter: - (id)lastName;	// 0x372d6171
// declared property getter: - (id)mainPhone;	// 0x372d65a9
// declared property getter: - (id)mobilePhone;	// 0x372d61dd
// declared property getter: - (id)office;	// 0x372d6291
// declared property getter: - (id)pagerNumber;	// 0x372d64ad
// declared property getter: - (id)postalAddress;	// 0x372d64d1
// declared property getter: - (id)preferredUserAddress;	// 0x372d653d
// declared property getter: - (id)principalPath;	// 0x372d6519
// declared property getter: - (id)recordName;	// 0x372d62d9
// declared property getter: - (id)serverSource;	// 0x372d62b5
// declared property setter: - (void)setAlias:(id)alias;	// 0x372d625d
// declared property setter: - (void)setAppleFloor:(id)floor;	// 0x372d649d
// declared property setter: - (void)setBuildingName:(id)name;	// 0x372d6479
// declared property setter: - (void)setCity:(id)city;	// 0x372d637d
// declared property setter: - (void)setCompany:(id)company;	// 0x372d6215
// declared property setter: - (void)setCountry:(id)country;	// 0x372d63e9
// declared property setter: - (void)setCuAddresses:(id)addresses;	// 0x372d6575
// declared property setter: - (void)setDepartment:(id)department;	// 0x372d6335
// declared property setter: - (void)setDisplayName:(id)name;	// 0x372d613d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x372d61a9
// declared property setter: - (void)setFaxPhone:(id)phone;	// 0x372d6311
// declared property setter: - (void)setFirstName:(id)name;	// 0x372d6161
// declared property setter: - (void)setHomePhone:(id)phone;	// 0x372d6281
// declared property setter: - (void)setHomePostalAddress:(id)address;	// 0x372d6509
// declared property setter: - (void)setIPhone:(id)phone;	// 0x372d6599
// declared property setter: - (void)setIdentifierOnServer:(id)server;	// 0x372d6605
// declared property setter: - (void)setImAddress:(id)address;	// 0x372d6431
// declared property setter: - (void)setJpegPhoto:(id)photo;	// 0x372d640d
// declared property setter: - (void)setLastName:(id)name;	// 0x372d6185
// declared property setter: - (void)setMainPhone:(id)phone;	// 0x372d65bd
// declared property setter: - (void)setMobilePhone:(id)phone;	// 0x372d61f1
// declared property setter: - (void)setOffice:(id)office;	// 0x372d62a5
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x372d64c1
// declared property setter: - (void)setPostalAddress:(id)address;	// 0x372d64e5
// declared property setter: - (void)setPreferredUserAddress:(id)address;	// 0x372d6551
// declared property setter: - (void)setPrincipalPath:(id)path;	// 0x372d652d
// declared property setter: - (void)setRecordName:(id)name;	// 0x372d62ed
// declared property setter: - (void)setServerSource:(id)source;	// 0x372d62c9
// declared property setter: - (void)setState:(id)state;	// 0x372d63a1
// declared property setter: - (void)setStreet:(id)street;	// 0x372d6359
// declared property setter: - (void)setTitle:(id)title;	// 0x372d6239
// declared property setter: - (void)setUri:(id)uri;	// 0x372d6455
// declared property setter: - (void)setWorkFaxPhone:(id)phone;	// 0x372d65e1
// declared property setter: - (void)setWorkPhone:(id)phone;	// 0x372d61cd
// declared property setter: - (void)setZip:(id)zip;	// 0x372d63c5
// declared property getter: - (id)state;	// 0x372d638d
// declared property getter: - (id)street;	// 0x372d6345
// declared property getter: - (id)title;	// 0x372d6225
// declared property getter: - (id)uri;	// 0x372d6441
// declared property getter: - (id)workFaxPhone;	// 0x372d65cd
// declared property getter: - (id)workPhone;	// 0x372d61b9
// declared property getter: - (id)zip;	// 0x372d63b1
@end

