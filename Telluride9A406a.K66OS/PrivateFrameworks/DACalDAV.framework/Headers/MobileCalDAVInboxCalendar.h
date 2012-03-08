/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"


@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {
}
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x32ee2a9d
- (void *)_copyEventActionWithURL:(id)url;	// 0x32ee2c39
- (BOOL)_removeInvitationWithURL:(id)url;	// 0x32ee34c5
- (id)allEventURLs;	// 0x32ee2b01
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x32ee35e9
- (id)etagForInvitationWithURL:(id)url;	// 0x32ee301d
- (id)etagsForEventURLs:(id)eventURLs;	// 0x32ee3061
- (BOOL)isScheduleInbox;	// 0x32ee2afd
- (void)removeInvitationWithURL:(id)url;	// 0x32ee2cc9
- (void)setETag:(id)tag forInvitationAtURL:(id)url uniqueIdentifier:(id)identifier;	// 0x32ee2d85
- (BOOL)updateResourcesFromServer:(id)server;	// 0x32ee31e1
@end

