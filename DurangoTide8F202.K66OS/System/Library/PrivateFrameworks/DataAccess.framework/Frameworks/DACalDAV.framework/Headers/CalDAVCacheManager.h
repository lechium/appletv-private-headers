/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class MobileCalDAVCalendar, NSMutableSet, NSMutableDictionary;

@interface CalDAVCacheManager : NSObject {
	MobileCalDAVCalendar *_calendar;	// 4 = 0x4
	NSMutableDictionary *_filenameToModifiedLocallyMap;	// 8 = 0x8
	NSMutableSet *_locallyDeletedFilenames;	// 12 = 0xc
	NSMutableDictionary *_uniqueIdentifierToLocalUIDMap;	// 16 = 0x10
	NSMutableDictionary *_notificationToEtagMap;	// 20 = 0x14
}
+ (id)cacheControllerForCalendar:(id)calendar;	// 0x32ce6cc5
+ (void)clearAllCacheControllers;	// 0x32ce6ca5
- (id)init;	// 0x32ce6e6d
- (void *)_copyCalEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce6fd9
- (void *)_copyCalEventWithUniqueIdentifierInStore:(id)store;	// 0x32ce7079
- (void *)_copyEventActionWithFilename:(id)filename;	// 0x32ce81e5
- (void *)_copyEventActionWithFilename:(id)filename forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce80e9
- (id)_initWithCalendar:(id)calendar;	// 0x32ce6ee9
- (id)_notificationEtagPath;	// 0x32ce8581
- (id)_notificationToEtagMap;	// 0x32ce7a69
- (id)allFilenames;	// 0x32ce7f11
- (void)dealloc;	// 0x32ce6ddd
- (void)endChanges;	// 0x32ce6b75
- (id)etagForFilename:(id)filename;	// 0x32ce7551
- (id)etagForInvitationWithFilename:(id)filename;	// 0x32ce8491
- (id)etagForNotificationWithFilename:(id)filename;	// 0x32ce6b0d
- (id)filenameForUID:(id)uid;	// 0x32ce7765
- (id)filenamesForInvitationsWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce7ff1
- (void)flushNotificationEtagCache;	// 0x32ce79b1
- (BOOL)isFileLocallyModified:(id)modified;	// 0x32ce7bc9
- (int)localUIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce6bc5
- (void)removeInvitationWithFilename:(id)filename;	// 0x32ce84d1
- (void)removeNotificationEtagForFilename:(id)filename;	// 0x32ce6ae5
- (id)scheduleTagForFilename:(id)filename;	// 0x32ce7665
- (void)setETag:(id)tag forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce7151
- (void)setETag:(id)tag forFilename:(id)filename;	// 0x32ce7209
- (void)setETag:(id)tag forInvitationWithFilename:(id)filename uniqueIdentifier:(id)identifier;	// 0x32ce8289
- (void)setEventModified:(id)modified;	// 0x32ce6c79
- (void)setFilename:(id)filename forUID:(id)uid;	// 0x32ce77fd
- (void)setFilenameLocallyDeleted:(id)deleted;	// 0x32ce7c99
- (void)setLocallyModified:(BOOL)modified forFilename:(id)filename;	// 0x32ce7d85
- (void)setNotificationEtag:(id)etag forFilename:(id)filename;	// 0x32ce6b39
- (void)setScheduleTag:(id)tag forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x32ce7309
- (void)setScheduleTag:(id)tag forFilename:(id)filename;	// 0x32ce73c1
- (void)setUIDModified:(id)modified;	// 0x32ce7ec5
- (void)setUniqueIdentifier:(id)identifier forLocalUID:(int)localUID;	// 0x32ce6bf9
- (id)uidForFilename:(id)filename;	// 0x32ce78d9
@end

