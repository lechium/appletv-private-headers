/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class CalDAVBulkUploadTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {
	id<CalDAVCalendar> _calendar;	// 44 = 0x2c
	id<CalDAVPrincipal> _principal;	// 48 = 0x30
	CalDAVBulkUploadTaskGroup *_uploadTaskGroup;	// 52 = 0x34
}
- (id)initWithCalendar:(id)calendar principal:(id)principal accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x33813325
- (void)cancelTaskGroup;	// 0x33814029
- (id)dataContentType;	// 0x33813429
- (void)dealloc;	// 0x338133a1
- (void)startTaskGroup;	// 0x33813435
@end

