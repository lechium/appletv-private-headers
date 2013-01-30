/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVScheduleTask.h"

@class NSString;

@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask {
	NSString *_maskedUID;	// 180 = 0xb4
}
@property(retain) NSString *maskedUID;	// G=0x346fec8d; S=0x346feca1; @synthesize=_maskedUID
+ (id)_icsDate:(id)date calendar:(id)calendar;	// 0x346feb5d
+ (id)freeBusyDocumentWithOrganizer:(id)organizer attendees:(id)attendees start:(id)start end:(id)end maskedUID:(id)uid;	// 0x346fe801
- (id)initWithOrganizer:(id)organizer originator:(id)originator attendees:(id)attendees start:(id)start end:(id)end outboxURL:(id)url maskedUID:(id)uid;	// 0x346fe719
- (void)dealloc;	// 0x346fe7bd
// declared property getter: - (id)maskedUID;	// 0x346fec8d
// declared property setter: - (void)setMaskedUID:(id)uid;	// 0x346feca1
@end
