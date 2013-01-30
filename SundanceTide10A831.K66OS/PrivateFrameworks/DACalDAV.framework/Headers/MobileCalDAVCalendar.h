/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CalDAVCalendar.h"
#import <NSObject.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSTimeZone, NSArray, NSString, MobileCalDAVPrincipal, NSMutableArray, NSSet, NSURL, NSDictionary, NSMutableDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {
	MobileCalDAVPrincipal *_principal;	// 4 = 0x4
	NSString *_calGUID;	// 8 = 0x8
	NSString *_calendarURLString;	// 12 = 0xc
	BOOL _isDirty;	// 16 = 0x10
	BOOL _isSubscribed;	// 17 = 0x11
	BOOL _isScheduleInbox;	// 18 = 0x12
	BOOL _isScheduleOutbox;	// 19 = 0x13
	BOOL _isEnabled;	// 20 = 0x14
	BOOL _isAffectingAvailability;	// 21 = 0x15
	NSString *_pushKey;	// 24 = 0x18
	NSString *_syncToken;	// 28 = 0x1c
	BOOL _needsPublishUpdate;	// 32 = 0x20
	NSSet *_sharees;	// 36 = 0x24
	NSMutableDictionary *_uniqueIdentifierToRecordIDMap;	// 40 = 0x28
	NSMutableDictionary *_URLToRecordIDMap;	// 44 = 0x2c
	NSMutableDictionary *_URLToEtagMap;	// 48 = 0x30
	void *_calCalendar;	// 52 = 0x34
	int _mostRecentEventChangeIndex;	// 56 = 0x38
	int _mostRecentTaskChangeIndex;	// 60 = 0x3c
	int _mostRecentAlarmChangeIndex;	// 64 = 0x40
	int _mostRecentAttendeeChangeIndex;	// 68 = 0x44
	int _mostRecentAttachmentChangeIndex;	// 72 = 0x48
	int _mostRecentRecurChangeIndex;	// 76 = 0x4c
	int _mostRecentEventActionChangeIndex;	// 80 = 0x50
	int _mostRecentShareeChangeIndex;	// 84 = 0x54
	NSMutableDictionary *_deletedCalendarItems;	// 88 = 0x58
	NSArray *_syncActions;	// 92 = 0x5c
	NSArray *_shareeActions;	// 96 = 0x60
	NSDictionary *_hrefsToModDeleteActions;	// 100 = 0x64
	NSDictionary *_uuidsToAddActions;	// 104 = 0x68
	NSMutableArray *_outstandingTaskGroups;	// 108 = 0x6c
	id _syncActionCompletionBlock;	// 112 = 0x70
	BOOL _wasModifiedLocally;	// 116 = 0x74
}
@property(readonly, assign) NSString *accountID;	// G=0x3489d771; 
@property(readonly, assign) NSSet *allItemURLs;	// G=0x3489c525; 
@property(retain) NSDictionary *bulkRequests;	// G=0x3489b229; S=0x3489b295; 
@property(retain) NSURL *calendarURL;	// G=0x3489aabd; S=0x3489ab19; 
@property(readonly, assign) NSString *calendarURLString;	// G=0x3489ab09; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x3489b8d9; S=0x3489b8f9; 
@property(assign) BOOL canBePublished;	// G=0x3489b4b1; S=0x3489b4d5; 
@property(assign) BOOL canBeShared;	// G=0x3489b535; S=0x3489b559; 
@property(retain) NSString *color;	// G=0x3489b14d; S=0x3489b1a1; 
@property(retain) NSString *ctag;	// G=0x3489c309; S=0x3489c385; 
@property(readonly, assign) NSString *displayColor;	// G=0x3489d74d; 
@property(retain) NSString *guid;	// G=0x3489a9e1; S=0x3489a9f1; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x348a1405; 
@property(assign) BOOL isAffectingAvailability;	// G=0x348a2da5; S=0x348a2dbd; @synthesize=_isAffectingAvailability
@property(assign) BOOL isDirty;	// G=0x348a2d75; S=0x348a2d8d; @synthesize=_isDirty
@property(assign) BOOL isEditable;	// G=0x3489c1e9; S=0x3489c215; 
@property(assign) BOOL isEnabled;	// G=0x348a2d45; S=0x348a2d5d; @synthesize=_isEnabled
@property(assign) BOOL isEventContainer;	// G=0x3489ae15; S=0x3489ae39; 
@property(readonly, assign) BOOL isHidden;	// G=0x3489d729; 
@property(assign) BOOL isNotification;	// G=0x3489ae9d; S=0x3489aea1; 
@property(assign) BOOL isPoll;	// G=0x3489aea5; S=0x3489aea9; 
@property(assign) BOOL isPublished;	// G=0x3489b5b9; S=0x3489b5dd; 
@property(assign) BOOL isRenameable;	// G=0x3489c279; S=0x3489c2a5; 
@property(assign) BOOL isScheduleInbox;	// G=0x3489ae95; S=0x3489ae99; 
@property(assign) BOOL isScheduleOutbox;	// G=0x348a2d15; S=0x348a2d2d; @synthesize=_isScheduleOutbox
@property(assign) BOOL isSubscribed;	// G=0x348a2ce5; S=0x348a2cfd; @synthesize=_isSubscribed
@property(assign) BOOL isTaskContainer;	// G=0x3489ad95; S=0x3489adb9; 
@property(assign) BOOL needsPublishUpdate;	// G=0x348a2dd5; S=0x348a2ded; @synthesize=_needsPublishUpdate
@property(retain) NSString *notes;	// G=0x3489aff9; S=0x3489b02d; 
@property(assign) int order;	// G=0x3489bb29; S=0x3489bb55; 
@property(retain) NSURL *owner;	// G=0x3489b3b5; S=0x3489b411; 
@property(retain) NSString *ownerDisplayName;	// G=0x3489b71d; S=0x3489b755; 
@property(readonly, assign) NSString *ownerEmailAddress;	// G=0x3489b7d9; 
@property(retain) NSURL *prePublishURL;	// G=0x3489b6e1; S=0x3489b719; 
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x348a2cad; @synthesize=_principal
@property(retain) NSURL *publishURL;	// G=0x3489b63d; S=0x3489b675; 
@property(retain) NSString *pushKey;	// G=0x348a2cc1; S=0x348a2cd5; @synthesize=_pushKey
@property(readonly, assign) NSArray *shareeActions;	// G=0x348a125d; 
@property(retain) NSSet *sharees;	// G=0x3489c0d5; S=0x3489bc9d; 
@property(assign) int sharingStatus;	// G=0x3489bba9; S=0x3489bbd9; 
@property(readonly, assign) NSArray *syncActions;	// G=0x348a0ecd; 
@property(retain) NSString *syncToken;	// G=0x3489c3fd; S=0x3489c479; 
@property(retain) NSTimeZone *timeZone;	// G=0x3489bb09; S=0x3489bb25; 
@property(retain) NSString *title;	// G=0x3489aead; S=0x3489aee5; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x348a13f5; 
@property(assign) BOOL wasModifiedLocally;	// G=0x348a2e05; S=0x348a2e1d; @synthesize=_wasModifiedLocally
+ (int)addedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3489e1fd
+ (BOOL)clearCalendarChangesToIndex:(int)index inPrincipal:(id)principal;	// 0x3489ec61
+ (int)deletedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3489ea35
+ (int)modifiedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x3489e67d
- (void *)initCalCalendarWithTitle:(id)title;	// 0x3489da61
- (id)initWithCalendarURL:(id)calendarURL calCalendar:(void *)calendar principal:(id)principal;	// 0x3489a689
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal;	// 0x3489a71d
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x3489a411
- (int)_addAddedItemsOfType:(int)type toArray:(id)array;	// 0x3489f499
- (void)_addCalendarItemWithRowID:(int)rowID toArrayIfNeeded:(id)arrayIfNeeded withChangeRowid:(int)changeRowid changeType:(id)type;	// 0x3489f1d5
- (void)_addShareeWithRowID:(id)rowID toDictionaryIfNeeded:(id)dictionaryIfNeeded;	// 0x348a1415
- (id)_calExternalRep;	// 0x3489e159
- (void)_clearChangesAtIndices:(id)indices withClearCall:(/*function-pointer*/ void *)clearCall forType:(id)type;	// 0x348a0849
- (void)_clearChangesFromItem:(id)item;	// 0x348a09ad
- (void)_collectShareeActions;	// 0x348a153d
- (void *)_copyCalItemWithExternalID:(id)externalID;	// 0x3489ca81
- (void *)_copyCalItemWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x3489c9d9
- (id)_copyDeletedEventActions;	// 0x348a04d5
- (id)_createActionsForItems:(id)items withAction:(int)action alreadySentItems:(id)items3 shouldSave:(BOOL *)save;	// 0x348a0b05
- (void)_dropCalStoreContext;	// 0x3489e0f9
- (int)_gatherDeletedChanges:(/*function-pointer*/ void *)changes inDictionary:(id)dictionary;	// 0x3489fecd
- (int)_gatherModifiedEventsInArray:(id)array;	// 0x3489f8f1
- (int)_gatherModifiedItemsFromCalChangesCall:(/*function-pointer*/ void *)calChangesCall forType:(id)type inArray:(id)array;	// 0x3489f7a1
- (int)_gatherModifiedTasksInArray:(id)array;	// 0x3489fb91
- (id)_itemPropertyDictForItemAtIndex:(int)index withChangedIDs:(CFArrayRef)changedIDs withChangedRowids:(CFArrayRef)changedRowids withExternalIDs:(CFArrayRef)externalIDs uniqueIdentifiers:(CFArrayRef)identifiers significantAttributeChanges:(CFArrayRef)changes oldCalendarIDs:(CFArrayRef)ids;	// 0x3489ece5
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x3489d4a1
- (void)_setSupportsEvents:(BOOL)events supportsTodos:(BOOL)todos;	// 0x3489ad15
- (BOOL)_updateCalendarOwnerInfo;	// 0x3489d7a9
// declared property getter: - (id)accountID;	// 0x3489d771
// declared property getter: - (id)allItemURLs;	// 0x3489c525
- (Class)appSpecificCalendarItemClass;	// 0x348a2c91
// declared property getter: - (id)bulkRequests;	// 0x3489b229
// declared property getter: - (id)calendarURL;	// 0x3489aabd
// declared property getter: - (id)calendarURLString;	// 0x3489ab09
// declared property getter: - (id)calendarUserAddresses;	// 0x3489b8d9
// declared property getter: - (BOOL)canBePublished;	// 0x3489b4b1
// declared property getter: - (BOOL)canBeShared;	// 0x3489b535
- (void)clearEventChanges;	// 0x348a06e5
- (void)clearShareeActions;	// 0x348a1291
// declared property getter: - (id)color;	// 0x3489b14d
- (id)copyAddedItems;	// 0x3489f689
- (id)copyAllItems;	// 0x3489ef1d
- (id)copyDeletedItems;	// 0x348a0465
- (id)copyModifiedItems;	// 0x3489fd79
// declared property getter: - (id)ctag;	// 0x3489c309
- (void)dealloc;	// 0x3489a741
- (void)deleteAction:(id)action completedWithError:(id)error;	// 0x348a10bd
- (void)deleteCalendar;	// 0x3489a925
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3489d601
- (id)description;	// 0x3489a895
// declared property getter: - (id)displayColor;	// 0x3489d74d
- (id)etagsForItemURLs:(id)itemURLs;	// 0x3489c759
- (void)flushCaches;	// 0x348a2ba1
- (void *)getCalCalendar;	// 0x3489de3d
// declared property getter: - (id)guid;	// 0x3489a9e1
- (BOOL)hasCalendarUserAddressEquivalentToURL:(id)url;	// 0x3489ba01
- (BOOL)hasEvents;	// 0x3489d6f5
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x348a1405
// declared property getter: - (BOOL)isAffectingAvailability;	// 0x348a2da5
// declared property getter: - (BOOL)isDirty;	// 0x348a2d75
// declared property getter: - (BOOL)isEditable;	// 0x3489c1e9
// declared property getter: - (BOOL)isEnabled;	// 0x348a2d45
// declared property getter: - (BOOL)isEventContainer;	// 0x3489ae15
// declared property getter: - (BOOL)isHidden;	// 0x3489d729
// declared property getter: - (BOOL)isNotification;	// 0x3489ae9d
// declared property getter: - (BOOL)isPoll;	// 0x3489aea5
// declared property getter: - (BOOL)isPublished;	// 0x3489b5b9
// declared property getter: - (BOOL)isRenameable;	// 0x3489c279
// declared property getter: - (BOOL)isScheduleInbox;	// 0x3489ae95
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x348a2d15
// declared property getter: - (BOOL)isSubscribed;	// 0x348a2ce5
// declared property getter: - (BOOL)isTaskContainer;	// 0x3489ad95
// declared property getter: - (BOOL)needsPublishUpdate;	// 0x348a2dd5
// declared property getter: - (id)notes;	// 0x3489aff9
// declared property getter: - (int)order;	// 0x3489bb29
// declared property getter: - (id)owner;	// 0x3489b3b5
// declared property getter: - (id)ownerDisplayName;	// 0x3489b71d
// declared property getter: - (id)ownerEmailAddress;	// 0x3489b7d9
// declared property getter: - (id)prePublishURL;	// 0x3489b6e1
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x348a2571
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x348a1c99
// declared property getter: - (id)principal;	// 0x348a2cad
// declared property getter: - (id)publishURL;	// 0x3489b63d
// declared property getter: - (id)pushKey;	// 0x348a2cc1
- (void)putAction:(id)action completedWithError:(id)error;	// 0x348a0edd
- (CalRecordID *)recordIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3489cb61
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3489ce8d
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x3489b295
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x3489ab19
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x3489b8f9
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x3489b4d5
// declared property setter: - (void)setCanBeShared:(BOOL)shared;	// 0x3489b559
// declared property setter: - (void)setColor:(id)color;	// 0x3489b1a1
// declared property setter: - (void)setCtag:(id)ctag;	// 0x3489c385
- (BOOL)setEtag:(id)etag forItemAtURL:(id)url;	// 0x3489ccc9
// declared property setter: - (void)setGuid:(id)guid;	// 0x3489a9f1
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;	// 0x348a2dbd
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x348a2d8d
// declared property setter: - (void)setIsEditable:(BOOL)editable;	// 0x3489c215
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x348a2d5d
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x3489ae39
// declared property setter: - (void)setIsNotification:(BOOL)notification;	// 0x3489aea1
// declared property setter: - (void)setIsPoll:(BOOL)poll;	// 0x3489aea9
// declared property setter: - (void)setIsPublished:(BOOL)published;	// 0x3489b5dd
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;	// 0x3489c2a5
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;	// 0x3489ae99
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;	// 0x348a2d2d
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;	// 0x348a2cfd
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x3489adb9
// declared property setter: - (void)setNeedsPublishUpdate:(BOOL)update;	// 0x348a2ded
// declared property setter: - (void)setNotes:(id)notes;	// 0x3489b02d
// declared property setter: - (void)setOrder:(int)order;	// 0x3489bb55
// declared property setter: - (void)setOwner:(id)owner;	// 0x3489b411
// declared property setter: - (void)setOwnerDisplayName:(id)name;	// 0x3489b755
// declared property setter: - (void)setPrePublishURL:(id)url;	// 0x3489b719
// declared property setter: - (void)setPublishURL:(id)url;	// 0x3489b675
// declared property setter: - (void)setPushKey:(id)key;	// 0x348a2cd5
- (BOOL)setScheduleTag:(id)tag forItemAtURL:(id)url;	// 0x3489cdc5
// declared property setter: - (void)setSharees:(id)sharees;	// 0x3489bc9d
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x3489bbd9
// declared property setter: - (void)setSyncToken:(id)token;	// 0x3489c479
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3489bb25
// declared property setter: - (void)setTitle:(id)title;	// 0x3489aee5
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x3489cb81
- (void)setUniqueIdentifier:(id)identifier forRecordID:(CalRecordID *)recordID;	// 0x3489cb21
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;	// 0x348a2e1d
// declared property getter: - (id)shareeActions;	// 0x348a125d
// declared property getter: - (id)sharees;	// 0x3489c0d5
// declared property getter: - (int)sharingStatus;	// 0x3489bba9
// declared property getter: - (id)syncActions;	// 0x348a0ecd
- (void)syncDidFinishWithError:(id)sync;	// 0x348a2c81
// declared property getter: - (id)syncToken;	// 0x3489c3fd
// declared property getter: - (id)timeZone;	// 0x3489bb09
// declared property getter: - (id)title;	// 0x3489aead
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3489d06d
// declared property getter: - (id)uuidsToAddActions;	// 0x348a13f5
// declared property getter: - (BOOL)wasModifiedLocally;	// 0x348a2e05
@end
