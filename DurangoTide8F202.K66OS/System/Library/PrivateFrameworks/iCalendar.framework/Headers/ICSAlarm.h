/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, NSString, ICSTrigger;

@interface ICSAlarm : ICSComponent {
}
@property(assign) int action;	// G=0x3003b1a9; S=0x3003b15d; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x3003b121; S=0x3003b101; 
+ (id)ICSStringFromAction:(int)action;	// 0x3003b0c5
+ (int)actionFromICSString:(id)icsstring;	// 0x3003b1f5
+ (id)name;	// 0x3003b0b9
// declared property getter: - (int)action;	// 0x3003b1a9
- (void)fixAlarm;	// 0x3001a5c1
// declared property setter: - (void)setAction:(int)action;	// 0x3003b15d
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x3003b101
// declared property getter: - (id)x_wr_alarmuid;	// 0x3003b121
@end

