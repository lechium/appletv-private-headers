/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "NSObject.h"

@class NSString, NSTimeZone, NSArray, NSSet, NSURL, NSDictionary;
@protocol CalDAVPrincipal;

@protocol CalDAVCalendar <NSObject>
@property(readonly, assign) NSSet *allItemURLs;
@property(retain) NSDictionary *bulkRequests;
@property(retain) NSURL *calendarURL;
@property(retain) NSSet *calendarUserAddresses;
@property(assign) BOOL canBePublished;
@property(retain) NSString *color;
@property(retain) NSString *ctag;
@property(retain) NSString *guid;
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
@property(assign) BOOL isSubscribed;
@property(assign) BOOL isTaskContainer;
@property(readonly, assign) BOOL needsPublishUpdate;
@property(retain) NSString *notes;
@property(assign) int order;
@property(retain) NSURL *owner;
@property(retain) NSString *ownerDisplayName;
@property(retain) NSURL *prePublishURL;
@property(readonly, assign) id<CalDAVPrincipal> principal;
@property(retain) NSURL *publishURL;
@property(retain) NSString *pushKey;
@property(readonly, assign) NSArray *shareeActions;
@property(retain) NSSet *sharees;
@property(assign) int sharingStatus;
@property(readonly, assign) NSArray *syncActions;
@property(retain) NSString *syncToken;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSString *title;
@property(readonly, assign) NSDictionary *uuidsToAddActions;
@property(assign) BOOL wasModifiedLocally;
// declared property getter: - (id)allItemURLs;
@optional
- (Class)appSpecificCalendarItemClass;
@required
// declared property getter: - (id)bulkRequests;
// declared property getter: - (id)calendarURL;
// declared property getter: - (id)calendarUserAddresses;
// declared property getter: - (BOOL)canBePublished;
@optional
- (void)clearShareeActions;
@required
// declared property getter: - (id)color;
// declared property getter: - (id)ctag;
- (BOOL)deleteResourcesAtURLs:(id)urls;
- (id)etagsForItemURLs:(id)itemURLs;
// declared property getter: - (id)guid;
// declared property getter: - (id)hrefsToModDeleteActions;
// declared property getter: - (BOOL)isAffectingAvailability;
// declared property getter: - (BOOL)isEditable;
// declared property getter: - (BOOL)isEnabled;
// declared property getter: - (BOOL)isEventContainer;
// declared property getter: - (BOOL)isNotification;
// declared property getter: - (BOOL)isPublished;
// declared property getter: - (BOOL)isRenameable;
// declared property getter: - (BOOL)isScheduleInbox;
// declared property getter: - (BOOL)isScheduleOutbox;
// declared property getter: - (BOOL)isSubscribed;
// declared property getter: - (BOOL)isTaskContainer;
// declared property getter: - (BOOL)needsPublishUpdate;
// declared property getter: - (id)notes;
// declared property getter: - (int)order;
// declared property getter: - (id)owner;
// declared property getter: - (id)ownerDisplayName;
// declared property getter: - (id)prePublishURL;
@optional
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;
@required
// declared property getter: - (id)principal;
// declared property getter: - (id)publishURL;
// declared property getter: - (id)pushKey;
// declared property setter: - (void)setBulkRequests:(id)requests;
// declared property setter: - (void)setCalendarURL:(id)url;
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;
// declared property setter: - (void)setCanBePublished:(BOOL)published;
// declared property setter: - (void)setColor:(id)color;
// declared property setter: - (void)setCtag:(id)ctag;
- (BOOL)setEtag:(id)etag forItemAtURL:(id)url;
// declared property setter: - (void)setGuid:(id)guid;
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;
// declared property setter: - (void)setIsEditable:(BOOL)editable;
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;
// declared property setter: - (void)setIsEventContainer:(BOOL)container;
// declared property setter: - (void)setIsNotification:(BOOL)notification;
// declared property setter: - (void)setIsPublished:(BOOL)published;
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;
// declared property setter: - (void)setNotes:(id)notes;
// declared property setter: - (void)setOrder:(int)order;
// declared property setter: - (void)setOwner:(id)owner;
// declared property setter: - (void)setOwnerDisplayName:(id)name;
// declared property setter: - (void)setPrePublishURL:(id)url;
// declared property setter: - (void)setPublishURL:(id)url;
// declared property setter: - (void)setPushKey:(id)key;
- (BOOL)setScheduleTag:(id)tag forItemAtURL:(id)url;
// declared property setter: - (void)setSharees:(id)sharees;
// declared property setter: - (void)setSharingStatus:(int)status;
// declared property setter: - (void)setSyncToken:(id)token;
// declared property setter: - (void)setTimeZone:(id)zone;
// declared property setter: - (void)setTitle:(id)title;
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;
// declared property getter: - (id)shareeActions;
// declared property getter: - (id)sharees;
// declared property getter: - (int)sharingStatus;
// declared property getter: - (id)syncActions;
@optional
- (void)syncDidFinishWithError:(id)sync;
@required
// declared property getter: - (id)syncToken;
// declared property getter: - (id)timeZone;
// declared property getter: - (id)title;
- (BOOL)updateResourcesFromServer:(id)server;
// declared property getter: - (id)uuidsToAddActions;
// declared property getter: - (BOOL)wasModifiedLocally;
@end

