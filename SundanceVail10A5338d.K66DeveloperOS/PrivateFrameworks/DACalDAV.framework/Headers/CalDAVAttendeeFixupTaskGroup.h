/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVTaskDelegate.h"
#import <CoreDAVTaskGroup.h> // Unknown library

@class MobileCalDAVPrincipal, MobileCalDAVCalendar, CalDAVPrincipalResult;

@interface CalDAVAttendeeFixupTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
	MobileCalDAVPrincipal *_principal;	// 44 = 0x2c
	MobileCalDAVCalendar *_calendar;	// 48 = 0x30
	void *_calItem;	// 52 = 0x34
	CalDAVPrincipalResult *_userInfo;	// 56 = 0x38
	BOOL _shouldSave;	// 60 = 0x3c
}
@property(readonly, assign) BOOL shouldSave;	// G=0x31dca949; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x31dc920d
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x31dc9279
- (void)_addOrganizerToItem;	// 0x31dc9af9
- (id)_getUserInfoFromAddressBook;	// 0x31dc935d
- (BOOL)_organizerIsMe:(void *)me;	// 0x31dc9ffd
- (void)_setOrganizerInfo;	// 0x31dc988d
- (void)dealloc;	// 0x31dc92f9
// declared property getter: - (BOOL)shouldSave;	// 0x31dca949
- (void)startTaskGroup;	// 0x31dca1d9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x31dca635
@end
