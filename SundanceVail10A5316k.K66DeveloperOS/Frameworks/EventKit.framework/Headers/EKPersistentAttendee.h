/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentParticipant.h"


@interface EKPersistentAttendee : EKPersistentParticipant {
}
@property(retain) id owner;	// G=0x30e64925; S=0x30e64909; converted property
@property(assign, nonatomic) int participantRole;	// G=0x30e64861; S=0x30e6487d; 
@property(assign, nonatomic) int participantStatus;	// G=0x30e646e1; S=0x30e64731; 
@property(assign, nonatomic) int participantType;	// G=0x30e64899; S=0x30e648b5; 
@property(assign, nonatomic) int pendingStatus;	// G=0x30e648d1; S=0x30e648ed; 
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30e64399
+ (id)attendeeWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x30e64351
+ (id)defaultPropertiesToLoad;	// 0x30e6420d
+ (id)relations;	// 0x30e642c1
- (id)initWithAddress:(id)address name:(id)name;	// 0x30e6447d
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30e643d9
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x30e64421
- (id)copyWithZone:(NSZone *)zone;	// 0x30e644c9
- (id)description;	// 0x30e64609
- (int)entityType;	// 0x30e644c5
// converted property getter: - (id)owner;	// 0x30e64925
// declared property getter: - (int)participantRole;	// 0x30e64861
// declared property getter: - (int)participantStatus;	// 0x30e646e1
// declared property getter: - (int)participantType;	// 0x30e64899
// declared property getter: - (int)pendingStatus;	// 0x30e648d1
// converted property setter: - (void)setOwner:(id)owner;	// 0x30e64909
// declared property setter: - (void)setParticipantRole:(int)role;	// 0x30e6487d
// declared property setter: - (void)setParticipantStatus:(int)status;	// 0x30e64731
// declared property setter: - (void)setParticipantType:(int)type;	// 0x30e648b5
// declared property setter: - (void)setPendingStatus:(int)status;	// 0x30e648ed
@end
