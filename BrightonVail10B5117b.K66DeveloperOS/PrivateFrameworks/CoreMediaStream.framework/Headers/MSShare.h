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
	NSString *_personID;	// 4 = 0x4
	NSString *_firstName;	// 8 = 0x8
	NSString *_lastName;	// 12 = 0xc
	NSString *_emailAddress;	// 16 = 0x10
	NSString *_UUID;	// 20 = 0x14
	int _sharingOurStream;	// 24 = 0x18
	int _sharingTheirStream;	// 28 = 0x1c
}
@property(retain, nonatomic) NSString *UUID;	// G=0x33944351; S=0x33944361; @synthesize=_UUID
@property(retain, nonatomic) NSString *emailAddress;	// G=0x33944319; S=0x33944329; @synthesize=_emailAddress
@property(retain, nonatomic) NSString *firstName;	// G=0x339442a9; S=0x339442b9; @synthesize=_firstName
@property(retain, nonatomic) NSString *fullName;	// G=0x3394388d; S=0x33943889; 
@property(retain, nonatomic) NSString *lastName;	// G=0x339442e1; S=0x339442f1; @synthesize=_lastName
@property(retain, nonatomic) NSString *personID;	// G=0x33944271; S=0x33944281; @synthesize=_personID
@property(assign, nonatomic) int sharingOurPhotostream;	// G=0x33943849; S=0x33943859; 
@property(assign, nonatomic) int sharingOurStream;	// G=0x33944389; S=0x33944399; @synthesize=_sharingOurStream
@property(assign, nonatomic) int sharingTheirPhotostream;	// G=0x33943869; S=0x33943879; 
@property(assign, nonatomic) int sharingTheirStream;	// G=0x339443a9; S=0x339443b9; @synthesize=_sharingTheirStream
+ (id)share;	// 0x339438a5
- (id)initWithCoder:(id)coder;	// 0x339440ad
- (void).cxx_destruct;	// 0x339443c9
// declared property getter: - (id)UUID;	// 0x33944351
- (id)description;	// 0x3394396d
// declared property getter: - (id)emailAddress;	// 0x33944319
- (void)encodeWithCoder:(id)coder;	// 0x33943f19
// declared property getter: - (id)firstName;	// 0x339442a9
// declared property getter: - (id)fullName;	// 0x3394388d
- (unsigned)hash;	// 0x339438d1
- (BOOL)isEqual:(id)equal;	// 0x33943abd
// declared property getter: - (id)lastName;	// 0x339442e1
// declared property getter: - (id)personID;	// 0x33944271
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x33944329
// declared property setter: - (void)setFirstName:(id)name;	// 0x339442b9
// declared property setter: - (void)setFullName:(id)name;	// 0x33943889
// declared property setter: - (void)setLastName:(id)name;	// 0x339442f1
// declared property setter: - (void)setPersonID:(id)anId;	// 0x33944281
// declared property setter: - (void)setSharingOurPhotostream:(int)photostream;	// 0x33943859
// declared property setter: - (void)setSharingOurStream:(int)stream;	// 0x33944399
// declared property setter: - (void)setSharingTheirPhotostream:(int)photostream;	// 0x33943879
// declared property setter: - (void)setSharingTheirStream:(int)stream;	// 0x339443b9
// declared property setter: - (void)setUUID:(id)uuid;	// 0x33944361
// declared property getter: - (int)sharingOurPhotostream;	// 0x33943849
// declared property getter: - (int)sharingOurStream;	// 0x33944389
// declared property getter: - (int)sharingTheirPhotostream;	// 0x33943869
// declared property getter: - (int)sharingTheirStream;	// 0x339443a9
@end
