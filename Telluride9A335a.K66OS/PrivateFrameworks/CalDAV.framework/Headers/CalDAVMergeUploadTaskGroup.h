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
- (id)initWithCalendar:(id)calendar principal:(id)principal accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3326b295
- (void)cancelTaskGroup;	// 0x3326b319
- (id)dataContentType;	// 0x3326b289
- (void)dealloc;	// 0x3326b8f5
- (void)startTaskGroup;	// 0x3326b35d
@end
