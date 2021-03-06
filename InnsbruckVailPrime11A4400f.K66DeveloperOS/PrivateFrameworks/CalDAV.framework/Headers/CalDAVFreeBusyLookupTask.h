/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVScheduleTask.h"

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {
	NSString *_maskedUID;	// 184 = 0xb8
}
@property(retain) NSString *maskedUID;	// G=0x3026a7f5; S=0x3026a809; @synthesize=_maskedUID
+ (id)_icsDate:(id)date calendar:(id)calendar;	// 0x3026a6c5
+ (id)freeBusyDocumentWithOrganizer:(id)organizer attendees:(id)attendees start:(id)start end:(id)end maskedUID:(id)uid;	// 0x3026a34d
- (id)initWithOrganizer:(id)organizer originator:(id)originator attendees:(id)attendees start:(id)start end:(id)end outboxURL:(id)url maskedUID:(id)uid;	// 0x3026a265
- (void)dealloc;	// 0x3026a309
// declared property getter: - (id)maskedUID;	// 0x3026a7f5
// declared property setter: - (void)setMaskedUID:(id)uid;	// 0x3026a809
@end

