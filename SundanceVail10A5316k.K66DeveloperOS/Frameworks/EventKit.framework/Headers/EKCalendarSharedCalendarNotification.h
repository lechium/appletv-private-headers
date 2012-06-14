/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarNotification.h"


@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {
	int _sharingInvitationResponse;	// 36 = 0x24
}
@property(assign, nonatomic) int sharingInvitationResponse;	// G=0x30e70f41; S=0x30e70f51; @synthesize=_sharingInvitationResponse
- (id)initWithType:(int)type;	// 0x30e70e49
- (id)calendarFromEventStore:(id)eventStore;	// 0x30e70ef5
// declared property setter: - (void)setSharingInvitationResponse:(int)response;	// 0x30e70f51
// declared property getter: - (int)sharingInvitationResponse;	// 0x30e70f41
@end
