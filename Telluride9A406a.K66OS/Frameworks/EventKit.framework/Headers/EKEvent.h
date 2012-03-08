/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"
#import "EventKit-Structs.h"

@class EKRecurrenceRule, NSString, EKParticipant, NSNumber, NSDate, EKCalendarDate;

@interface EKEvent : EKCalendarItem {
@private
	EKCalendarDate *_occurrenceStartDate;	// 4 = 0x4
	EKCalendarDate *_occurrenceEndDate;	// 8 = 0x8
	BOOL _occurrenceIsAllDay;	// 12 = 0xc
	EKCalendarDate *_originalOccurrenceStartDate;	// 16 = 0x10
	EKCalendarDate *_originalOccurrenceEndDate;	// 20 = 0x14
	NSNumber *_originalOccurrenceIsAllDay;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x345403f5; S=0x34549d75; 
@property(assign, nonatomic) int availability;	// G=0x34583bc5; S=0x34583c19; 
@property(readonly, assign, nonatomic) int birthdayPersonID;	// G=0x34583a9d; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x34540631; S=0x3454a2e1; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x34547c0d; 
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x34549b9d; 
@property(assign) unsigned modifiedProperties;	// G=0x34583845; S=0x34583879; converted property
@property(assign) BOOL needsOccurrenceCacheUpdate;	// G=0x345838bd; S=0x345838e1; converted property
@property(copy, nonatomic) EKCalendarDate *occurrenceEndDate;	// G=0x3453fc7d; S=0x345403d1; @synthesize=_occurrenceEndDate
@property(assign, nonatomic) BOOL occurrenceIsAllDay;	// G=0x34586265; S=0x3453f721; @synthesize=_occurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *occurrenceStartDate;	// G=0x345403c1; S=0x3453f6ad; @synthesize=_occurrenceStartDate
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x34547dcd; 
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceEndDate;	// G=0x3454ab89; S=0x3454a215; @synthesize=_originalOccurrenceEndDate
@property(copy, nonatomic) NSNumber *originalOccurrenceIsAllDay;	// G=0x3454abb5; S=0x34548cc1; @synthesize=_originalOccurrenceIsAllDay
@property(copy, nonatomic) EKCalendarDate *originalOccurrenceStartDate;	// G=0x3454ab65; S=0x3454a1f1; @synthesize=_originalOccurrenceStartDate
@property(assign) int participationStatus;	// G=0x34548519; S=0x34583925; converted property
@property(assign) unsigned readState;	// G=0x34548615; S=0x34583cb5; converted property
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule;	// G=0x34583b15; S=0x34583b61; 
@property(retain) id responseComment;	// G=0x34583c7d; S=0x34583c99; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x34540611; S=0x3454a035; 
@property(readonly, assign, nonatomic) int status;	// G=0x34541efd; 
+ (id)eventWithEventStore:(id)eventStore;	// 0x3454b355
- (id)init;	// 0x345833f5
- (id)initWithEventStore:(id)eventStore;	// 0x34548665
- (id)initWithPersistentObject:(id)persistentObject;	// 0x34583431
- (id)initWithPersistentObject:(id)persistentObject occurrenceDate:(id)date;	// 0x3453f1c1
- (BOOL)_cancelWithSpan:(int)span error:(id *)error;	// 0x34585569
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_lQVxyC)date timeZone:(id)zone error:(id *)error;	// 0x3454e295
- (BOOL)_deleteWithSpan:(int)span error:(id *)error;	// 0x345541f5
- (void)_detachWithStartDate:(id)startDate newStartDate:(id)date future:(BOOL)future;	// 0x345856ed
- (id)_effectiveTimeZone;	// 0x3454a239
- (BOOL)_isAllDay;	// 0x3453f6d1
- (BOOL)_isInitialOccurrenceDate:(id)date;	// 0x34554011
- (BOOL)_occurrenceExistsOnDate:(double)date timeZone:(id)zone;	// 0x3458532d
- (int)_parentParticipationStatus;	// 0x34583a5d
- (id)_persistentEvent;	// 0x3453fd39
- (void)_sendModifiedNote;	// 0x3454b2c1
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)span;	// 0x345540f5
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x34584639
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x3454de91
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x34584479
- (int)alarmCount;	// 0x34583aed
- (BOOL)allowsAlarmModifications;	// 0x3454e391
- (BOOL)allowsCalendarModifications;	// 0x34583ffd
- (BOOL)allowsRecurrenceModifications;	// 0x34549b19
- (id)attachments;	// 0x34547cd9
- (int)attendeeCount;	// 0x34583ac5
- (id)attendees;	// 0x34547e6d
// declared property getter: - (int)availability;	// 0x34583bc5
// declared property getter: - (int)birthdayPersonID;	// 0x34583a9d
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x3458368d
- (BOOL)canBeRespondedTo;	// 0x34548295
- (BOOL)canDetachSingleOccurrence;	// 0x34584099
- (BOOL)canMoveToCalendar:(id)calendar fromCalendar:(id)calendar2 error:(id *)error;	// 0x34583dd1
- (BOOL)canSetAvailability;	// 0x34584159
- (void)clearReadState;	// 0x34583cf9
- (BOOL)commitWithSpan:(int)span error:(id *)error;	// 0x3454e4c1
- (id)committedValueForKey:(id)key;	// 0x3454928d
- (int)compareStartDateWithEvent:(id)event;	// 0x34540589
- (void)dealloc;	// 0x34548e65
- (id)description;	// 0x345841d5
- (void)didCommit;	// 0x3455266d
- (id)dirtyPropertiesToSkip;	// 0x34584315
- (double)duration;	// 0x3454334d
- (id)endCalendarDate;	// 0x3453fc6d
// declared property getter: - (id)endDate;	// 0x34540631
- (XXStruct_lQVxyC)endDateGr;	// 0x345432bd
- (XXStruct_lQVxyC)endDatePinnedForAllDay;	// 0x345837d1
// declared property getter: - (id)eventIdentifier;	// 0x34547c0d
- (id)eventStore;	// 0x3454215d
- (id)exportToICS;	// 0x34583565
- (id)externalId;	// 0x34584109
- (id)externalURL;	// 0x34583445
- (BOOL)hasSelfAttendee;	// 0x345841a5
- (unsigned)hash;	// 0x34540405
- (id)initialEndDate;	// 0x345836f1
- (id)initialStartDate;	// 0x3458369d
// declared property getter: - (BOOL)isAllDay;	// 0x345403f5
// declared property getter: - (BOOL)isDetached;	// 0x34549b9d
- (BOOL)isDirtyIgnoringCalendar;	// 0x345835ed
- (BOOL)isEndDateDirty;	// 0x345835cd
- (BOOL)isEqual:(id)equal;	// 0x345404b1
- (BOOL)isStartDateDirty;	// 0x345835ad
- (BOOL)isStatusDirty;	// 0x3458358d
- (BOOL)isTentative;	// 0x34583d2d
// converted property getter: - (unsigned)modifiedProperties;	// 0x34583845
// converted property getter: - (BOOL)needsOccurrenceCacheUpdate;	// 0x345838bd
- (id)occurrenceDate;	// 0x345499dd
// declared property getter: - (id)occurrenceEndDate;	// 0x3453fc7d
// declared property getter: - (BOOL)occurrenceIsAllDay;	// 0x34586265
// declared property getter: - (id)occurrenceStartDate;	// 0x345403c1
// declared property getter: - (id)organizer;	// 0x34547dcd
// declared property getter: - (id)originalOccurrenceEndDate;	// 0x3454ab89
// declared property getter: - (id)originalOccurrenceIsAllDay;	// 0x3454abb5
// declared property getter: - (id)originalOccurrenceStartDate;	// 0x3454ab65
// converted property getter: - (int)participationStatus;	// 0x34548519
- (int)pendingParticipationStatus;	// 0x345840e1
// converted property getter: - (unsigned)readState;	// 0x34548615
// declared property getter: - (id)recurrenceRule;	// 0x34583b15
- (BOOL)refresh;	// 0x3454ac49
- (BOOL)removeWithSpan:(int)span error:(id *)error;	// 0x34553f41
- (BOOL)requiresDetach;	// 0x3454d095
// converted property getter: - (id)responseComment;	// 0x34583c7d
- (BOOL)responseMustApplyToAll;	// 0x34584071
- (void)revert;	// 0x34584371
- (void)rollback;	// 0x3454a619
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34549d75
// declared property setter: - (void)setAvailability:(int)availability;	// 0x34583c19
// declared property setter: - (void)setEndDate:(id)date;	// 0x3454a2e1
// converted property setter: - (void)setModifiedProperties:(unsigned)properties;	// 0x34583879
// converted property setter: - (void)setNeedsOccurrenceCacheUpdate:(BOOL)update;	// 0x345838e1
// declared property setter: - (void)setOccurrenceEndDate:(id)date;	// 0x345403d1
// declared property setter: - (void)setOccurrenceIsAllDay:(BOOL)day;	// 0x3453f721
// declared property setter: - (void)setOccurrenceStartDate:(id)date;	// 0x3453f6ad
// declared property setter: - (void)setOriginalOccurrenceEndDate:(id)date;	// 0x3454a215
// declared property setter: - (void)setOriginalOccurrenceIsAllDay:(id)day;	// 0x34548cc1
// declared property setter: - (void)setOriginalOccurrenceStartDate:(id)date;	// 0x3454a1f1
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x34583925
// converted property setter: - (void)setReadState:(unsigned)state;	// 0x34583cb5
// declared property setter: - (void)setRecurrenceRule:(id)rule;	// 0x34583b61
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x34583c99
// declared property setter: - (void)setStartDate:(id)date;	// 0x3454a035
- (void)setTimeZone:(id)zone;	// 0x34548ce5
- (id)startCalendarDate;	// 0x3453fc5d
// declared property getter: - (id)startDate;	// 0x34540611
- (XXStruct_lQVxyC)startDateGr;	// 0x3454322d
- (XXStruct_lQVxyC)startDatePinnedForAllDay;	// 0x34583769
// declared property getter: - (int)status;	// 0x34541efd
- (id)uniqueId;	// 0x34584131
- (BOOL)validateWithSpan:(int)span error:(id *)error;	// 0x3454d4f9
@end

