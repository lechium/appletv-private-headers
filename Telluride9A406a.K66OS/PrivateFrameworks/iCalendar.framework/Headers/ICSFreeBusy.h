/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate, ICSUserAddress, NSString, ICSDuration;

@interface ICSFreeBusy : ICSComponent {
}
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) ICSDate *created;	// @dynamic
@property(retain) ICSDate *dtend;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDuration *duration;	// @dynamic
@property(retain) NSArray *freebusy;	// G=0x3150bb31; S=0x3150bb51; 
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSString *x_calendarserver_mask_uid;	// G=0x3150bb71; S=0x3150bbb9; 
+ (id)name;	// 0x3150bb25
// declared property getter: - (id)freebusy;	// 0x3150bb31
// declared property setter: - (void)setFreebusy:(id)freebusy;	// 0x3150bb51
// declared property setter: - (void)setX_calendarserver_mask_uid:(id)uid;	// 0x3150bbb9
// declared property getter: - (id)x_calendarserver_mask_uid;	// 0x3150bb71
@end

