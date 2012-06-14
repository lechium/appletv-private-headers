/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MSShare : NSObject <NSCoding> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_UUID;	// 20 = 0x14
	int _sharingOurStream;	// 24 = 0x18
	int _sharingTheirStream;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *UUID;	// G=0x339a2209; S=0x339a2219; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x339a21d1; S=0x339a21e1; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x339a2161; S=0x339a2171; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x339a1745; S=0x339a1741; 
@property(retain, nonatomic) NSString *lastName;	// G=0x339a2199; S=0x339a21a9; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x339a2129; S=0x339a2139; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x339a1701; S=0x339a1711; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x339a2241; S=0x339a2251; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x339a1721; S=0x339a1731; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x339a2261; S=0x339a2271; @synthesize=_sharingTheirStream
+ (id)share;	// 0x339a175d
- (id)initWithCoder:(id)coder;	// 0x339a1f65
- (void).cxx_destruct;	// 0x339a2281
// declared property getter: - (id)UUID;	// 0x339a2209
- (id)description;	// 0x339a1825
// declared property getter: - (id)emailAddress;	// 0x339a21d1
- (void)encodeWithCoder:(id)coder;	// 0x339a1dd1
// declared property getter: - (id)firstName;	// 0x339a2161
// declared property getter: - (id)fullName;	// 0x339a1745
- (unsigned)hash;	// 0x339a1789
- (BOOL)isEqual:(id)equal;	// 0x339a1975
// declared property getter: - (id)lastName;	// 0x339a2199
// declared property getter: - (id)personID;	// 0x339a2129
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x339a21e1
// declared property setter: - (void)setFirstName:(id)name;	// 0x339a2171
// declared property setter: - (void)setFullName:(id)name;	// 0x339a1741
// declared property setter: - (void)setLastName:(id)name;	// 0x339a21a9
// declared property setter: - (void)setPersonID:(id)anId;	// 0x339a2139
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x339a1711
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x339a2251
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x339a1731
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x339a2271
// declared property setter: - (void)setUUID:(id)uuid;	// 0x339a2219
// declared property getter: - (int)sharingOurPhotostream;	// 0x339a1701
// declared property getter: - (int)sharingOurStream;	// 0x339a2241
// declared property getter: - (int)sharingTheirPhotostream;	// 0x339a1721
// declared property getter: - (int)sharingTheirStream;	// 0x339a2261
@end

