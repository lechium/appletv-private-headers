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
@property(assign) BOOL canBeShared;
@property(retain) NSString *color;	// G=0x339ad979; S=0x339adaa1; 
@property(retain) NSString *ctag;
@property(retain) NSString *guid;
@property(assign) BOOL hasAlarmFilter;	// G=0x339adca1; S=0x339adce1; 
@property(assign) BOOL hasAttachmentFilter;	// G=0x339add65; S=0x339adda5; 
@property(assign) BOOL hasTaskFilter;	// G=0x339ade29; S=0x339ade69; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;
@property(assign) BOOL isAffectingAvailability;
@property(assign) BOOL isEditable;
@property(assign) BOOL isEnabled;
@property(assign) BOOL isEventContainer;
@property(assign) BOOL isNotification;
@property(assign) BOOL isPoll;
@property(assign) BOOL isPublished;
@property(assign) BOOL isRenameable;
@property(assign) BOOL isScheduleInbox;
@property(assign) BOOL isScheduleOutbox;
@property(assign) BOOL isSubscribed;	// G=0x339ad94d; 
@property(assign) BOOL isTaskContainer;	// G=0x339ada69; S=0x339ada6d; 
@property(readonly, assign) BOOL needsPublishUpdate;
@property(retain) NSString *notes;
@property(assign) int order;	// S=0x339adfbd; 
@property(retain) NSURL *owner;
@property(retain) NSString *ownerDisplayName;
@property(retain) NSURL *prePublishURL;
@property(readonly, assign) id<CalDAVPrincipal> principal;
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x339ad915; converted property
@property(retain) NSURL *publishURL;
@property(retain) NSString *pushKey;
@property(assign) double refreshInterval;	// G=0x339adeed; S=0x339adf2d; 
@property(readonly, assign) NSArray *shareeActions;
@property(retain) NSSet *sharees;
@property(assign) int sharingStatus;
@property(retain) NSURL *subscriptionURL;	// G=0x339adbb9; S=0x339adc0d; 
@property(readonly, assign) NSArray *syncActions;
@property(retain) NSString *syncToken;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSString *title;	// G=0x339adafd; S=0x339adb25; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;
@property(assign) BOOL wasModifiedLocally;
- (id)initWithCalendarURL:(id)calendarURL properties:(id)properties principal:(id)principal;	// 0x339ad7b1
- (id)calendarURLString;	// 0x339ad951
// declared property getter: - (id)color;	// 0x339ad979
- (void)dealloc;	// 0x339ad8c9
// declared property getter: - (BOOL)hasAlarmFilter;	// 0x339adca1
// declared property getter: - (BOOL)hasAttachmentFilter;	// 0x339add65
// declared property getter: - (BOOL)hasTaskFilter;	// 0x339ade29
// declared property getter: - (BOOL)isSubscribed;	// 0x339ad94d
// declared property getter: - (BOOL)isTaskContainer;	// 0x339ada69
// converted property getter: - (id)properties;	// 0x339ad915
// declared property getter: - (double)refreshInterval;	// 0x339adeed
// declared property setter: - (void)setColor:(id)color;	// 0x339adaa1
// declared property setter: - (void)setHasAlarmFilter:(BOOL)filter;	// 0x339adce1
// declared property setter: - (void)setHasAttachmentFilter:(BOOL)filter;	// 0x339adda5
// declared property setter: - (void)setHasTaskFilter:(BOOL)filter;	// 0x339ade69
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x339ada6d
// declared property setter: - (void)setOrder:(int)order;	// 0x339adfbd
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x339adf2d
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x339adc0d
// declared property setter: - (void)setTitle:(id)title;	// 0x339adb25
// declared property getter: - (id)subscriptionURL;	// 0x339adbb9
// declared property getter: - (id)title;	// 0x339adafd
@end

