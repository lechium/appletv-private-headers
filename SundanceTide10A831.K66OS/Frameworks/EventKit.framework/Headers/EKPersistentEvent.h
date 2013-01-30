/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentCalendarItem.h"

@class NSString, NSURL, NSDate;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;	// 28 = 0x1c
}
@property(copy, nonatomic) NSURL *URL;	// G=0x34ee5fb5; S=0x34f53cf1; 
@property(retain) id actions;	// G=0x34f542a5; S=0x34f542d9; converted property
@property(assign, nonatomic) int availability;	// G=0x34ee6855; S=0x34f5405d; 
@property(readonly, assign, nonatomic) int birthdayID;	// G=0x34ede961; 
@property(readonly, assign, nonatomic) double duration;	// G=0x34f53d2d; 
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;	// G=0x34edffd1; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x34f54355; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x34edfe95; S=0x34eee7d1; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x34ee491d; 
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;	// G=0x34ee7019; 
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;	// G=0x34ee64e9; 
@property(readonly, assign, nonatomic) unsigned invitationChangedProperties;	// G=0x34f54041; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x34f54009; S=0x34f54025; 
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;	// G=0x34f53d95; 
@property(assign, nonatomic) unsigned modifiedProperties;	// G=0x34f53df1; S=0x34f53e0d; 
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;	// G=0x34f53e29; S=0x34f53e49; 
@property(copy, nonatomic) NSDate *originalStartDate;	// G=0x34f540e9; S=0x34f54105; 
@property(assign, nonatomic) int participationStatus;	// G=0x34f53e65; S=0x34f53e95; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x34f53ec9; 
@property(assign, nonatomic) unsigned privacyLevel;	// G=0x34f54079; S=0x34f54095; 
@property(copy, nonatomic) NSString *responseComment;	// G=0x34f540b1; S=0x34f540cd; 
@property(assign, nonatomic) int status;	// G=0x34edf8dd; S=0x34f53dd5; 
+ (id)defaultPropertiesToLoad;	// 0x34edc459
+ (id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;	// 0x34eef7e9
+ (id)relations;	// 0x34edc56d
- (id)initCommon;	// 0x34edc401
// declared property getter: - (id)URL;	// 0x34ee5fb5
- (void)_adjustForNewCalendar;	// 0x34eef265
- (BOOL)_areDurationUnitsCached;	// 0x34ee010d
- (BOOL)_hasExternalIDOrDeliverySource;	// 0x34f5426d
- (void)_invalidateCachedDurationUnits;	// 0x34edc445
// converted property getter: - (id)actions;	// 0x34f542a5
- (void)addAction:(id)action;	// 0x34f5431d
- (BOOL)allowsParticipationStatusModifications;	// 0x34ee6311
// declared property getter: - (int)availability;	// 0x34ee6855
// declared property getter: - (int)birthdayID;	// 0x34ede961
- (int)birthdayId;	// 0x34f53ef9
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;	// 0x34eee7ed
- (id)committedStartDate;	// 0x34f54121
- (id)copyWithZone:(NSZone *)zone;	// 0x34f54b69
- (void)dealloc;	// 0x34ee7fe5
- (void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;	// 0x34f54551
- (id)description;	// 0x34f543c1
- (id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x34f54d69
// declared property getter: - (double)duration;	// 0x34f53d2d
// declared property getter: - (XXStruct_mY3THC)durationUnits;	// 0x34edffd1
// declared property getter: - (id)endDate;	// 0x34edfe95
- (int)entityType;	// 0x34ee6fbd
// declared property getter: - (id)eventIdentifier;	// 0x34ee491d
- (id)exportToICS;	// 0x34f53c2d
- (void)filterExceptionDates;	// 0x34f55861
- (BOOL)hasValidEventAction;	// 0x34f54189
// declared property getter: - (unsigned)invitationChangedProperties;	// 0x34f54041
// declared property getter: - (unsigned)invitationStatus;	// 0x34f54009
// declared property getter: - (BOOL)isEditable;	// 0x34f54355
// declared property getter: - (BOOL)isFloating;	// 0x34ee7019
// declared property getter: - (BOOL)isInvitation;	// 0x34ee64e9
// declared property getter: - (BOOL)isMeeting;	// 0x34f53d95
// declared property getter: - (unsigned)modifiedProperties;	// 0x34f53df1
// declared property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x34f53e29
- (id)organizer;	// 0x34ee08f9
// declared property getter: - (id)originalStartDate;	// 0x34f540e9
// declared property getter: - (int)participationStatus;	// 0x34f53e65
// declared property getter: - (int)pendingParticipationStatus;	// 0x34f53ec9
- (void)primitiveValueChangedForKey:(id)key;	// 0x34ee6db1
// declared property getter: - (unsigned)privacyLevel;	// 0x34f54079
- (BOOL)refresh;	// 0x34ef0ffd
- (void)removeAction:(id)action;	// 0x34f54339
// declared property getter: - (id)responseComment;	// 0x34f540b1
- (BOOL)responseMustApplyToAll;	// 0x34f53f15
// converted property setter: - (void)setActions:(id)actions;	// 0x34f542d9
// declared property setter: - (void)setAvailability:(int)availability;	// 0x34f5405d
// declared property setter: - (void)setEndDate:(id)date;	// 0x34eee7d1
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x34f54025
// declared property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x34f53e0d
// declared property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x34f53e49
// declared property setter: - (void)setOriginalStartDate:(id)date;	// 0x34f54105
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x34f53e95
// declared property setter: - (void)setPrivacyLevel:(unsigned)level;	// 0x34f54095
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x34f540cd
// declared property setter: - (void)setStatus:(int)status;	// 0x34f53dd5
// declared property setter: - (void)setURL:(id)url;	// 0x34f53cf1
// declared property getter: - (int)status;	// 0x34edf8dd
- (BOOL)validate:(id *)validate;	// 0x34eeedad
@end
