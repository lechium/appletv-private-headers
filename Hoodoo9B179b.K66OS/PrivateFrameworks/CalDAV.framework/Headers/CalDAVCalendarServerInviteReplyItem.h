/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library


@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem {
	CoreDAVItem *_href;	// 24 = 0x18
	CoreDAVItem *_inviteStatus;	// 28 = 0x1c
	CoreDAVItem *_hostURL;	// 32 = 0x20
	CoreDAVItem *_inReplyTo;	// 36 = 0x24
	CoreDAVItem *_summary;	// 40 = 0x28
}
@property(readonly, retain) CoreDAVItem *hostURL;	// G=0x35a94f41; @synthesize=_hostURL
@property(readonly, retain) CoreDAVItem *href;	// G=0x35a94f71; @synthesize=_href
@property(readonly, retain) CoreDAVItem *inReplyTo;	// G=0x35a94f29; @synthesize=_inReplyTo
@property(readonly, retain) CoreDAVItem *inviteStatus;	// G=0x35a94f59; @synthesize=_inviteStatus
@property(readonly, retain) CoreDAVItem *summary;	// G=0x35a94f11; @synthesize=_summary
// declared property getter: - (id)hostURL;	// 0x35a94f41
// declared property getter: - (id)href;	// 0x35a94f71
// declared property getter: - (id)inReplyTo;	// 0x35a94f29
// declared property getter: - (id)inviteStatus;	// 0x35a94f59
// declared property getter: - (id)summary;	// 0x35a94f11
@end

