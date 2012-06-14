/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CalDAVSubscribedCalendar.h"
#import "MobileCalDAVCalendar.h"

@class NSTimeZone, NSArray, NSString, NSSet, NSURL, NSDictionary, NSMutableDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {
	NSMutableDictionary *_properties;	// 120 = 0x78
}
@property(readonly, assign) NSSet *allItemURLs;
@property(retain) NSDictionary *bulkRequests;
@property(retain) NSURL *calendarURL;
@property(retain) NSSet *calendarUserAddresses;
@property(assign) BOOL canBePublished;
@property(retain) NSString *color;	// G=0x34178089; S=0x341781b1; 
@property(retain) NSString *ctag;
@property(retain) NSString *guid;
@property(assign) BOOL hasAlarmFilter;	// G=0x341783b1; S=0x341783f1; 
@property(assign) BOOL hasAttachmentFilter;	// G=0x34178475; S=0x341784b5; 
@property(assign) BOOL hasTaskFilter;	// G=0x34178539; S=0x34178579; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;
@property(assign) BOOL isAffectingAvailability;
@property(assign) BOOL isEditable;
@property(assign) BOOL isEnabled;
@property(assign) BOOL isEventContainer;
@property(assign) BOOL isNotification;
@property(assign) BOOL isPublished;
@property(assign) BOOL isRenameable;
@property(assign) BOOL isScheduleInbox;
@property(assign) BOOL isScheduleOutbox;
@property(assign) BOOL isSubscribed;	// G=0x34178085; 
@property(assign) BOOL isTaskContainer;	// G=0x34178179; S=0x3417817d; 
@property(readonly, assign) BOOL needsPublishUpdate;
@property(retain) NSString *notes;
@property(assign) int order;	// S=0x341786cd; 
@property(retain) NSURL *owner;
@property(retain) NSString *ownerDisplayName;
@property(retain) NSURL *prePublishURL;
@property(readonly, assign) id<CalDAVPrincipal> principal;
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x3417804d; converted property
@property(retain) NSURL *publishURL;
@property(retain) NSString *pushKey;
@property(assign) double refreshInterval;	// G=0x341785fd; S=0x3417863d; 
@property(readonly, assign) NSArray *shareeActions;
@property(retain) NSSet *sharees;
@property(assign) int sharingStatus;
@property(retain) NSURL *subscriptionURL;	// G=0x341782c9; S=0x3417831d; 
@property(readonly, assign) NSArray *syncActions;
@property(retain) NSString *syncToken;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSString *title;	// G=0x3417820d; S=0x34178235; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;
@property(assign) BOOL wasModifiedLocally;
- (id)initWithCalendarURL:(id)calendarURL properties:(id)properties principal:(id)principal;	// 0x34177ee9
// declared property getter: - (id)color;	// 0x34178089
- (void)dealloc;	// 0x34178001
// declared property getter: - (BOOL)hasAlarmFilter;	// 0x341783b1
// declared property getter: - (BOOL)hasAttachmentFilter;	// 0x34178475
// declared property getter: - (BOOL)hasTaskFilter;	// 0x34178539
// declared property getter: - (BOOL)isSubscribed;	// 0x34178085
// declared property getter: - (BOOL)isTaskContainer;	// 0x34178179
// converted property getter: - (id)properties;	// 0x3417804d
// declared property getter: - (double)refreshInterval;	// 0x341785fd
// declared property setter: - (void)setColor:(id)color;	// 0x341781b1
// declared property setter: - (void)setHasAlarmFilter:(BOOL)filter;	// 0x341783f1
// declared property setter: - (void)setHasAttachmentFilter:(BOOL)filter;	// 0x341784b5
// declared property setter: - (void)setHasTaskFilter:(BOOL)filter;	// 0x34178579
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x3417817d
// declared property setter: - (void)setOrder:(int)order;	// 0x341786cd
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x3417863d
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x3417831d
// declared property setter: - (void)setTitle:(id)title;	// 0x34178235
// declared property getter: - (id)subscriptionURL;	// 0x341782c9
// declared property getter: - (id)title;	// 0x3417820d
@end
