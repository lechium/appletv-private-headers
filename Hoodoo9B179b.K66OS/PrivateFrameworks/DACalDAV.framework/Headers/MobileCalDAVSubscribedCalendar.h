/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"
#import "CalDAVSubscribedCalendar.h"

@class NSTimeZone, NSArray, NSString, NSSet, NSURL, NSMutableDictionary, NSDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {
	NSMutableDictionary *_properties;	// 112 = 0x70
}
@property(readonly, assign) NSSet *allEventURLs;
@property(retain) NSDictionary *bulkRequests;
@property(retain) NSURL *calendarURL;
@property(retain) NSSet *calendarUserAddresses;
@property(assign) BOOL canBePublished;
@property(retain) NSString *color;	// G=0x3091972d; S=0x30919855; 
@property(retain) NSString *ctag;
@property(retain) NSString *guid;
@property(assign) BOOL hasAlarmFilter;	// G=0x30919a51; S=0x30919a91; 
@property(assign) BOOL hasAttachmentFilter;	// G=0x30919b15; S=0x30919b55; 
@property(assign) BOOL hasTaskFilter;	// G=0x30919bd9; S=0x30919c19; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;
@property(assign) BOOL isAffectingAvailability;
@property(assign) BOOL isEditable;
@property(assign) BOOL isEnabled;
@property(assign) BOOL isEventContainer;
@property(assign) BOOL isNotification;
@property(assign) BOOL isRenameable;
@property(assign) BOOL isScheduleInbox;
@property(assign) BOOL isScheduleOutbox;
@property(assign) BOOL isSubscribed;	// G=0x30919729; 
@property(assign) BOOL isTaskContainer;	// G=0x3091981d; S=0x30919821; 
@property(retain) NSString *notes;
@property(assign) int order;	// S=0x30919d6d; 
@property(retain) NSURL *owner;
@property(retain) NSString *ownerDisplayName;
@property(readonly, assign) id<CalDAVPrincipal> principal;
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x309196f1; converted property
@property(retain) NSURL *publishURL;
@property(retain) NSString *pushKey;
@property(assign) double refreshInterval;	// G=0x30919c9d; S=0x30919cdd; 
@property(assign) int sharingStatus;
@property(retain) NSURL *subscriptionURL;	// G=0x3091996d; S=0x309199c1; 
@property(readonly, assign) NSArray *syncActions;
@property(retain) NSString *syncToken;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSString *title;	// G=0x309198b1; S=0x309198d9; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;
@property(readonly, assign) BOOL wasModifiedLocally;
- (id)initWithCalendarURL:(id)calendarURL properties:(id)properties principal:(id)principal;	// 0x309195a5
// declared property getter: - (id)color;	// 0x3091972d
- (void)dealloc;	// 0x309196a5
// declared property getter: - (BOOL)hasAlarmFilter;	// 0x30919a51
// declared property getter: - (BOOL)hasAttachmentFilter;	// 0x30919b15
// declared property getter: - (BOOL)hasTaskFilter;	// 0x30919bd9
// declared property getter: - (BOOL)isSubscribed;	// 0x30919729
// declared property getter: - (BOOL)isTaskContainer;	// 0x3091981d
// converted property getter: - (id)properties;	// 0x309196f1
// declared property getter: - (double)refreshInterval;	// 0x30919c9d
// declared property setter: - (void)setColor:(id)color;	// 0x30919855
// declared property setter: - (void)setHasAlarmFilter:(BOOL)filter;	// 0x30919a91
// declared property setter: - (void)setHasAttachmentFilter:(BOOL)filter;	// 0x30919b55
// declared property setter: - (void)setHasTaskFilter:(BOOL)filter;	// 0x30919c19
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x30919821
// declared property setter: - (void)setOrder:(int)order;	// 0x30919d6d
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x30919cdd
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x309199c1
// declared property setter: - (void)setTitle:(id)title;	// 0x309198d9
// declared property getter: - (id)subscriptionURL;	// 0x3091996d
// declared property getter: - (id)title;	// 0x309198b1
@end

