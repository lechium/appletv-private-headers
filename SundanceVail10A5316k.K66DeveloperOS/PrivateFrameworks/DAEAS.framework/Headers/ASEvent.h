/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"
#import "NSCoding.h"

@class ASRecurrence, NSArray, NSNumber, ASEventUID, ASTimeZone, NSString, NSDate;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {
	void *_calRecord;	// 64 = 0x40
	ASTimeZone *_timeZone;	// 68 = 0x44
	NSNumber *_allDayEvent;	// 72 = 0x48
	NSString *_body;	// 76 = 0x4c
	NSNumber *_bodyTruncated;	// 80 = 0x50
	NSNumber *_busyStatus;	// 84 = 0x54
	NSArray *_categories;	// 88 = 0x58
	NSDate *_dTStamp;	// 92 = 0x5c
	NSDate *_endTime;	// 96 = 0x60
	NSString *_location;	// 100 = 0x64
	NSNumber *_meetingStatus;	// 104 = 0x68
	NSString *_organizerEmail;	// 108 = 0x6c
	NSString *_organizerName;	// 112 = 0x70
	NSNumber *_reminderMinsBefore;	// 116 = 0x74
	NSNumber *_sensitivity;	// 120 = 0x78
	NSString *_subject;	// 124 = 0x7c
	NSDate *_startTime;	// 128 = 0x80
	ASEventUID *_eventUID;	// 132 = 0x84
	NSArray *_attendees;	// 136 = 0x88
	NSArray *_attendeesPendingDeletion;	// 140 = 0x8c
	ASRecurrence *_recurrence;	// 144 = 0x90
	NSArray *_exceptions;	// 148 = 0x94
	NSNumber *_responseRequested;	// 152 = 0x98
	int _meetingResponseToEmailAbout;	// 156 = 0x9c
	BOOL _calculateNextStatusAsIfMeetingRequest;	// 160 = 0xa0
	BOOL _shouldUpdateStatus;	// 161 = 0xa1
	BOOL _cachedOrganizerIsSelf;	// 162 = 0xa2
	BOOL _haveCheckedOrganizerEmail;	// 163 = 0xa3
	BOOL _isAttendeeUpdateOnly;	// 164 = 0xa4
	BOOL _isDTStampUpdateOnly;	// 165 = 0xa5
	NSNumber *_responseType;	// 168 = 0xa8
}
@property(retain) NSNumber *allDayEvent;	// G=0x309825d9; S=0x309825ed; @synthesize=_allDayEvent
@property(retain) NSArray *attendees;	// G=0x309827e1; S=0x309827f5; @synthesize=_attendees
@property(retain) NSArray *attendeesPendingDeletion;	// G=0x30982825; S=0x30982839; @synthesize=_attendeesPendingDeletion
@property(retain, nonatomic) NSString *body;	// G=0x309825fd; S=0x30980bdd; @synthesize=_body
@property(retain) NSNumber *bodyTruncated;	// G=0x3098260d; S=0x30982621; @synthesize=_bodyTruncated
@property(retain) NSNumber *busyStatus;	// G=0x30982631; S=0x30982645; @synthesize=_busyStatus
@property(assign) void *calEvent;	// G=0x3097fe29; S=0x3097fb85; converted property
@property(retain) NSArray *categories;	// G=0x30982655; S=0x30982669; @synthesize=_categories
@property(retain) NSDate *dTStamp;	// G=0x30982679; S=0x3098268d; @synthesize=_dTStamp
@property(retain) NSDate *endTime;	// G=0x3098269d; S=0x309826b1; @synthesize=_endTime
@property(retain) ASEventUID *eventUID;	// G=0x3098023d; S=0x30980275; @synthesize=_eventUID
@property(retain) id exceptionDate;	// G=0x30980301; S=0x30980305; converted property
@property(retain, nonatomic) NSArray *exceptions;	// G=0x30982815; S=0x3098246d; @synthesize=_exceptions
@property(retain) NSString *location;	// G=0x309826c1; S=0x309826d5; @synthesize=_location
@property(assign) int meetingResponseForEmail;	// G=0x3097cb35; S=0x3097cb61; converted property
@property(retain) NSNumber *meetingStatus;	// G=0x309826e5; S=0x309826f9; @synthesize=_meetingStatus
@property(retain) NSString *organizerEmail;	// G=0x30982709; S=0x3098271d; @synthesize=_organizerEmail
@property(retain) NSString *organizerName;	// G=0x3098272d; S=0x30982741; @synthesize=_organizerName
@property(retain, nonatomic) ASRecurrence *recurrence;	// G=0x30982805; S=0x3098255d; @synthesize=_recurrence
@property(retain) NSNumber *reminderMinsBefore;	// G=0x30982751; S=0x30982765; @synthesize=_reminderMinsBefore
@property(retain) NSNumber *responseRequested;	// G=0x30982849; S=0x3098285d; @synthesize=_responseRequested
@property(retain) NSNumber *responseType;	// G=0x3098286d; S=0x30982881; @synthesize=_responseType
@property(retain) NSNumber *sensitivity;	// G=0x30982775; S=0x30982789; @synthesize=_sensitivity
@property(retain) NSDate *startTime;	// G=0x309827bd; S=0x309827d1; @synthesize=_startTime
@property(retain) NSString *subject;	// G=0x30982799; S=0x309827ad; @synthesize=_subject
@property(retain) ASTimeZone *timeZone;	// G=0x309825b5; S=0x309825c9; @synthesize=_timeZone
+ (void)_setFakeDTStampDateForUnitTests:(id)unitTests;	// 0x3097f2a9
+ (BOOL)acceptsTopLevelLeaves;	// 0x3097ab19
+ (id)asParseRules;	// 0x3097af39
+ (id)eventWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x3097c589
+ (BOOL)frontingBasicTypes;	// 0x3097ac15
+ (BOOL)notifyOfUnknownTokens;	// 0x3097ac69
+ (BOOL)parsingLeafNode;	// 0x3097ab6d
+ (BOOL)parsingWithSubItems;	// 0x3097abc1
+ (void)setSystemTimeZoneNameForUnitTests:(id)unitTests;	// 0x3097aad9
- (id)init;	// 0x3097c451
- (id)initWithCalEvent:(void *)calEvent serverID:(id)anId account:(id)account;	// 0x3097c4c5
- (id)initWithCoder:(id)coder;	// 0x30980309
- (int)CalCalendarItemStatus;	// 0x3097c8f1
- (BOOL)_bailIfNotNewestDataForAccount:(id)account;	// 0x3097cb71
- (void)_determineSelfnessWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x3097e60d
- (void)_loadAttributesFromCalEvent:(void *)calEvent forAccount:(id)account;	// 0x3097b8fd
- (int)_meetingResponseShouldFilterForEmail:(BOOL)_meetingResponse;	// 0x3097ca81
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x3097ca39
- (int)_nextAttendeeStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x3097c9a9
- (int)_nextEventStatusWithOldStatus:(int)oldStatus account:(id)account;	// 0x3097c961
- (int)_nextEventStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type account:(id)account;	// 0x3097c90d
- (void)_sanitizeLocalExceptionsForAccount:(id)account;	// 0x3097e035
- (BOOL)_selfIsMoreCorrectThanOtherEvent:(id)event account:(id)account;	// 0x30981225
- (id)_transformedEndDateForActiveSync:(id)activeSync;	// 0x3097ae29
- (id)_transformedEndDateForCalFramework:(id)calFramework startDate:(id)date;	// 0x3097ad01
- (id)_transformedStartDateForActiveSync:(id)activeSync;	// 0x3097adcd
- (id)_transformedStartDateForCalFramework:(id)calFramework;	// 0x3097acbd
// declared property getter: - (id)allDayEvent;	// 0x309825d9
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x3097f2e9
// declared property getter: - (id)attendees;	// 0x309827e1
// declared property getter: - (id)attendeesPendingDeletion;	// 0x30982825
// declared property getter: - (id)body;	// 0x309825fd
// declared property getter: - (id)bodyTruncated;	// 0x3098260d
// declared property getter: - (id)busyStatus;	// 0x30982631
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)account;	// 0x30980c31
- (int)calAttendeePendingStatus;	// 0x3097c8bd
- (int)calAttendeeStatus;	// 0x3097c889
// converted property getter: - (void *)calEvent;	// 0x3097fe29
// declared property getter: - (id)categories;	// 0x30982655
- (void *)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void *)localEvent forAccount:(id)account;	// 0x3097b759
// declared property getter: - (id)dTStamp;	// 0x30982679
- (int)dataclass;	// 0x3097b611
- (void)dealloc;	// 0x3097c5d1
- (BOOL)deleteFromCalendar;	// 0x3097f1cd
- (BOOL)deleteFromContainer:(void *)container;	// 0x309811ed
- (id)description;	// 0x3097c7f1
- (void)encodeWithCoder:(id)coder;	// 0x309807d9
- (id)endDateForCalFramework;	// 0x30980189
// declared property getter: - (id)endTime;	// 0x3098269d
- (id)eventByMergingInEvent:(id)event account:(id)account;	// 0x30982429
- (id)eventByMergingInLosingEvent:(id)losingEvent account:(id)account;	// 0x30981da1
// declared property getter: - (id)eventUID;	// 0x3098023d
// converted property getter: - (id)exceptionDate;	// 0x30980301
// declared property getter: - (id)exceptions;	// 0x30982815
- (id)fullOrganizerString;	// 0x30980c79
- (BOOL)hasOccurrenceInTheFuture;	// 0x30980e85
- (void)informExceptionsThatParentIsReadyForAccount:(id)account;	// 0x3097e549
- (BOOL)isEqualToEvent:(id)event;	// 0x30981625
- (BOOL)loadCalRecordForAccount:(id)account;	// 0x3097fc89
- (void)loadClientIDs;	// 0x30980019
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x309811bd
// declared property getter: - (id)location;	// 0x309826c1
- (int)meetingResponseForAccount:(id)account;	// 0x3097caed
// converted property getter: - (int)meetingResponseForEmail;	// 0x3097cb35
// declared property getter: - (id)meetingStatus;	// 0x309826e5
// declared property getter: - (id)organizerEmail;	// 0x30982709
// declared property getter: - (id)organizerName;	// 0x3098272d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3097f105
- (void)postProcessApplicationData;	// 0x3097e785
- (BOOL)purgeAttendeesPendingDeletion;	// 0x30980cc5
// declared property getter: - (id)recurrence;	// 0x30982805
// declared property getter: - (id)reminderMinsBefore;	// 0x30982751
// declared property getter: - (id)responseRequested;	// 0x30982849
// declared property getter: - (id)responseType;	// 0x3098286d
- (BOOL)saveDetachedEventsWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3097e441
- (BOOL)saveServerIDToCalendar;	// 0x3097fe39
- (BOOL)saveServerIDToExistingItem;	// 0x309811d5
- (BOOL)saveToCalendarWithExistingRecord:(void *)existingRecord intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3097cb79
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x30981179
// declared property getter: - (id)sensitivity;	// 0x30982775
// declared property setter: - (void)setAllDayEvent:(id)event;	// 0x309825ed
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x309827f5
// declared property setter: - (void)setAttendeesPendingDeletion:(id)deletion;	// 0x30982839
// declared property setter: - (void)setBody:(id)body;	// 0x30980bdd
// declared property setter: - (void)setBodyTruncated:(id)truncated;	// 0x30982621
// declared property setter: - (void)setBusyStatus:(id)status;	// 0x30982645
// converted property setter: - (void)setCalEvent:(void *)event;	// 0x3097fb85
- (void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)request;	// 0x30981205
// declared property setter: - (void)setCategories:(id)categories;	// 0x30982669
// declared property setter: - (void)setDTStamp:(id)stamp;	// 0x3098268d
// declared property setter: - (void)setEndTime:(id)time;	// 0x309826b1
// declared property setter: - (void)setEventUID:(id)uid;	// 0x30980275
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x30980305
// declared property setter: - (void)setExceptions:(id)exceptions;	// 0x3098246d
- (void)setLocalItem:(void *)item;	// 0x309811ad
// declared property setter: - (void)setLocation:(id)location;	// 0x309826d5
// converted property setter: - (void)setMeetingResponseForEmail:(int)email;	// 0x3097cb61
// declared property setter: - (void)setMeetingStatus:(id)status;	// 0x309826f9
// declared property setter: - (void)setOrganizerEmail:(id)email;	// 0x3098271d
// declared property setter: - (void)setOrganizerName:(id)name;	// 0x30982741
// declared property setter: - (void)setRecurrence:(id)recurrence;	// 0x3098255d
// declared property setter: - (void)setReminderMinsBefore:(id)before;	// 0x30982765
// declared property setter: - (void)setResponseRequested:(id)requested;	// 0x3098285d
// declared property setter: - (void)setResponseType:(id)type;	// 0x30982881
// declared property setter: - (void)setSensitivity:(id)sensitivity;	// 0x30982789
- (void)setShouldUpdateStatus:(BOOL)updateStatus;	// 0x30981215
// declared property setter: - (void)setStartTime:(id)time;	// 0x309827d1
// declared property setter: - (void)setSubject:(id)subject;	// 0x309827ad
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x309825c9
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;	// 0x3097cb75
- (id)startDateForCalFramework;	// 0x3098012d
// declared property getter: - (id)startTime;	// 0x309827bd
// declared property getter: - (id)subject;	// 0x30982799
// declared property getter: - (id)timeZone;	// 0x309825b5
- (id)timeZoneNameForCalFramework;	// 0x3097aead
- (id)uidForCalFramework;	// 0x3098021d
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x3097b615
- (BOOL)verifyExternalIds;	// 0x3097fe6d
@end

