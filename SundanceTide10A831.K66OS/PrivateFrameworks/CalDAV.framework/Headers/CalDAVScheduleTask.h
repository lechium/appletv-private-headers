/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSArray, CalDAVScheduleResponseItem, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask {
	NSArray *_attendees;	// 168 = 0xa8
	NSString *_originator;	// 172 = 0xac
	CalDAVScheduleResponseItem *_scheduleResponse;	// 176 = 0xb0
}
@property(retain) NSArray *attendees;	// G=0x34715005; S=0x34715019; @synthesize=_attendees
@property(retain) NSString *originator;	// G=0x34714fe1; S=0x34714ff5; @synthesize=_originator
@property(retain) CalDAVScheduleResponseItem *scheduleResponse;	// G=0x34714fbd; S=0x34714fd1; @synthesize=_scheduleResponse
- (id)initWithOriginator:(id)originator attendees:(id)attendees outboxURL:(id)url payload:(id)payload;	// 0x34714cd1
- (id)additionalHeaderValues;	// 0x34714d51
// declared property getter: - (id)attendees;	// 0x34715005
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x34714e4d
- (void)dealloc;	// 0x34714c59
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x34714edd
// declared property getter: - (id)originator;	// 0x34714fe1
// declared property getter: - (id)scheduleResponse;	// 0x34714fbd
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x34715019
// declared property setter: - (void)setOriginator:(id)originator;	// 0x34714ff5
// declared property setter: - (void)setScheduleResponse:(id)response;	// 0x34714fd1
@end

