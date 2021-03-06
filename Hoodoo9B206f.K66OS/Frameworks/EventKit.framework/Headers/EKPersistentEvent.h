/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentCalendarItem.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDate;

@interface EKPersistentEvent : EKPersistentCalendarItem {
	XXStruct_mY3THC _cachedDurationUnits;	// 28 = 0x1c
}
@property(copy, nonatomic) NSURL *URL;	// G=0x31ef3001; S=0x31f51785; 
@property(retain) id actions;	// G=0x31f51d1d; S=0x31f51d51; converted property
@property(assign, nonatomic) int availability;	// G=0x31f51ad1; S=0x31f51aed; 
@property(readonly, assign, nonatomic) int birthdayID;	// G=0x31f517c1; 
@property(readonly, assign, nonatomic) double duration;	// G=0x31f517dd; 
@property(readonly, assign, nonatomic) XXStruct_mY3THC durationUnits;	// G=0x31eead4d; 
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x31f51dcd; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x31eeafb1; S=0x31efc049; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x31ef2c69; 
@property(readonly, assign, nonatomic, getter=isFloating) BOOL floating;	// G=0x31ef3d3d; 
@property(readonly, assign, nonatomic, getter=isInvitation) BOOL invitation;	// G=0x31ef34e9; 
@property(readonly, assign, nonatomic, getter=isMeeting) BOOL meeting;	// G=0x31f51849; 
@property(assign, nonatomic) unsigned modifiedProperties;	// G=0x31f518a1; S=0x31f518bd; 
@property(assign, nonatomic) BOOL needsOccurrenceCacheUpdate;	// G=0x31f518d9; S=0x31f518f9; 
@property(copy, nonatomic) NSDate *originalStartDate;	// G=0x31f51b79; S=0x31f51b95; 
@property(assign, nonatomic) int participationStatus;	// G=0x31f51915; S=0x31f51945; 
@property(readonly, assign, nonatomic) int pendingParticipationStatus;	// G=0x31f51975; 
@property(assign, nonatomic) unsigned privacyLevel;	// G=0x31f51b09; S=0x31f51b25; 
@property(assign, nonatomic) unsigned readStatus;	// G=0x31ef36e5; S=0x31f51ab5; 
@property(copy, nonatomic) NSString *responseComment;	// G=0x31f51b41; S=0x31f51b5d; 
@property(assign, nonatomic) int status;	// G=0x31eecf35; S=0x31f51885; 
+ (id)defaultPropertiesToLoad;	// 0x31eea3ed
+ (id)generateUniqueIDWithEvent:(id)event originalEvent:(id)event2 calendar:(id)calendar;	// 0x31efcfdd
+ (id)relations;	// 0x31eec845
- (id)initCommon;	// 0x31eea151
// declared property getter: - (id)URL;	// 0x31ef3001
- (void)_adjustForNewCalendar;	// 0x31efca15
- (BOOL)_areDurationUnitsCached;	// 0x31eeae6d
- (BOOL)_hasExternalIDOrDeliverySource;	// 0x31f51ce5
- (BOOL)_hasValidEventAction;	// 0x31f51c19
- (void)_invalidateCachedDurationUnits;	// 0x31eea195
// converted property getter: - (id)actions;	// 0x31f51d1d
- (void)addAction:(id)action;	// 0x31f51d95
- (BOOL)allowsParticipationStatusModifications;	// 0x31ef32f5
// declared property getter: - (int)availability;	// 0x31f51ad1
// declared property getter: - (int)birthdayID;	// 0x31f517c1
- (int)birthdayId;	// 0x31f519a5
- (void)clearExceptionDatesAndUpdateDetachedOriginalDates;	// 0x31efc065
- (id)committedStartDate;	// 0x31f51bb1
- (id)copyWithZone:(NSZone *)zone;	// 0x31f52475
- (void)dealloc;	// 0x31f51689
- (void)deleteFromOccurrenceDateOnward:(id)occurrenceDateOnward;	// 0x31f51fd1
- (id)description;	// 0x31f51e39
- (id)detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x31f5269d
// declared property getter: - (double)duration;	// 0x31f517dd
// declared property getter: - (XXStruct_mY3THC)durationUnits;	// 0x31eead4d
// declared property getter: - (id)endDate;	// 0x31eeafb1
- (int)entityType;	// 0x31ef3ce1
// declared property getter: - (id)eventIdentifier;	// 0x31ef2c69
- (id)exportToICS;	// 0x31f516b5
- (void)filterExceptionDates;	// 0x31f53285
// declared property getter: - (BOOL)isEditable;	// 0x31f51dcd
// declared property getter: - (BOOL)isFloating;	// 0x31ef3d3d
// declared property getter: - (BOOL)isInvitation;	// 0x31ef34e9
// declared property getter: - (BOOL)isMeeting;	// 0x31f51849
// declared property getter: - (unsigned)modifiedProperties;	// 0x31f518a1
// declared property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x31f518d9
- (id)organizer;	// 0x31ef2e71
// declared property getter: - (id)originalStartDate;	// 0x31f51b79
// declared property getter: - (int)participationStatus;	// 0x31f51915
// declared property getter: - (int)pendingParticipationStatus;	// 0x31f51975
- (void)primitiveValueChangedForKey:(id)key;	// 0x31ef3add
// declared property getter: - (unsigned)privacyLevel;	// 0x31f51b09
// declared property getter: - (unsigned)readStatus;	// 0x31ef36e5
- (BOOL)refresh;	// 0x31efeb0d
- (void)removeAction:(id)action;	// 0x31f51db1
// declared property getter: - (id)responseComment;	// 0x31f51b41
- (BOOL)responseMustApplyToAll;	// 0x31f519c1
// converted property setter: - (void)setActions:(id)actions;	// 0x31f51d51
// declared property setter: - (void)setAvailability:(int)availability;	// 0x31f51aed
// declared property setter: - (void)setEndDate:(id)date;	// 0x31efc049
// declared property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x31f518bd
// declared property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x31f518f9
// declared property setter: - (void)setOriginalStartDate:(id)date;	// 0x31f51b95
// declared property setter: - (void)setParticipationStatus:(int)status;	// 0x31f51945
// declared property setter: - (void)setPrivacyLevel:(unsigned)level;	// 0x31f51b25
// declared property setter: - (void)setReadStatus:(unsigned)status;	// 0x31f51ab5
// declared property setter: - (void)setResponseComment:(id)comment;	// 0x31f51b5d
// declared property setter: - (void)setStatus:(int)status;	// 0x31f51885
// declared property setter: - (void)setURL:(id)url;	// 0x31f51785
// declared property getter: - (int)status;	// 0x31eecf35
- (BOOL)validate:(id *)validate;	// 0x31efc5a1
@end

