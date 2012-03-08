/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentParticipant.h"
#import "EventKit-Structs.h"


@interface EKPersistentAttendee : EKPersistentParticipant {
}
@property(retain) id owner;	// G=0x345a5885; S=0x345a5869; converted property
@property(assign, nonatomic) int participantRole;	// G=0x345a57c1; S=0x345a57dd; 
@property(assign, nonatomic) int participantStatus;	// G=0x345a5661; S=0x345a56b1; 
@property(assign, nonatomic) int participantType;	// G=0x345a57f9; S=0x345a5815; 
@property(assign, nonatomic) int pendingStatus;	// G=0x345a5831; S=0x345a584d; 
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x345a5319
+ (id)attendeeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x345a52d1
+ (id)relations;	// 0x345a5241
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x345a5359
- (id)initWithExternalID:(id)externalID name:(id)name;	// 0x345a53fd
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x345a53a1
- (id)copyWithZone:(NSZone *)zone;	// 0x345a5449
- (id)description;	// 0x345a5589
- (int)entityType;	// 0x345a5445
// converted property getter: - (id)owner;	// 0x345a5885
// declared property getter: - (int)participantRole;	// 0x345a57c1
// declared property getter: - (int)participantStatus;	// 0x345a5661
// declared property getter: - (int)participantType;	// 0x345a57f9
// declared property getter: - (int)pendingStatus;	// 0x345a5831
// converted property setter: - (void)setOwner:(id)owner;	// 0x345a5869
// declared property setter: - (void)setParticipantRole:(int)role;	// 0x345a57dd
// declared property setter: - (void)setParticipantStatus:(int)status;	// 0x345a56b1
// declared property setter: - (void)setParticipantType:(int)type;	// 0x345a5815
// declared property setter: - (void)setPendingStatus:(int)status;	// 0x345a584d
@end

