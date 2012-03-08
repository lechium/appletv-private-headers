/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}
@property(assign) int action;	// G=0x3152aea5; S=0x3152aefd; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *x_apple_proximity;	// G=0x3152afb5; S=0x3152affd; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x3152af4d; S=0x3152af95; 
+ (id)ICSStringFromAction:(int)action;	// 0x3152ae65
+ (int)actionFromICSString:(id)icsstring;	// 0x3152addd
+ (id)name;	// 0x3152add1
// declared property getter: - (int)action;	// 0x3152aea5
- (void)fixAlarm;	// 0x315036a9
// declared property setter: - (void)setAction:(int)action;	// 0x3152aefd
// declared property setter: - (void)setX_apple_proximity:(id)proximity;	// 0x3152affd
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x3152af95
// declared property getter: - (id)x_apple_proximity;	// 0x3152afb5
// declared property getter: - (id)x_wr_alarmuid;	// 0x3152af4d
@end

