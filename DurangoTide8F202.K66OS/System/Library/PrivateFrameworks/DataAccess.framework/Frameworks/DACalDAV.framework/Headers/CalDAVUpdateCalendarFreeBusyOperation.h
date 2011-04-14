/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVSession, NSString;

@interface CalDAVUpdateCalendarFreeBusyOperation : AYOperation {
	NSString *_fromURI;	// 64 = 0x40
	NSString *_toURI;	// 68 = 0x44
	NSString *_inboxURI;	// 72 = 0x48
	DAVSession *_session;	// 76 = 0x4c
}
- (id)initWithSession:(id)session fromURI:(id)uri toURI:(id)uri3 inboxURI:(id)uri4;	// 0x32cf2b75
- (void)dealloc;	// 0x32cf2af5
- (void)updateFreeBusySet;	// 0x32cf269d
@end

