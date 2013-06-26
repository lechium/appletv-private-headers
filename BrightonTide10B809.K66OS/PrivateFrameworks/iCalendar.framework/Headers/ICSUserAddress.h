/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSUserAddress : ICSProperty {
}
@property(retain) NSString *cn;	// G=0x36843da9; S=0x36843cf9; 
@property(assign) int cutype;	// G=0x36843ebd; S=0x36843e4d; 
@property(retain) NSString *dir;	// G=0x36843f2d; S=0x36843f0d; 
@property(retain) NSString *email;	// G=0x368444d5; S=0x36844495; 
@property(assign) int partstat;	// G=0x36843fbd; S=0x36843f4d; 
@property(assign) int role;	// G=0x368442bd; S=0x3684424d; 
@property(assign) BOOL rsvp;	// G=0x36844381; S=0x3684430d; 
@property(assign) int scheduleagent;	// G=0x3684413d; S=0x368440cd; 
@property(assign) int scheduleforcesend;	// G=0x368441fd; S=0x3684418d; 
@property(assign) int schedulestatus;	// G=0x3684407d; S=0x3684400d; 
@property(assign) BOOL x_apple_self_invited;	// G=0x36844445; S=0x368443d1; 
@property(retain) id x_calendarserver_email;	// G=0x3684452d; S=0x3684451d; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x3684362d
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x3684367d
+ (id)ICSStringFromRole:(int)role;	// 0x368437d9
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x36843701
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x368437b5
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x36843725
+ (id)URLForNoMail;	// 0x3684457d
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x36843215
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x368432b5
+ (int)roleFromICSString:(id)icsstring;	// 0x3684358d
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x368434f5
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x36843541
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x368433c5
- (id)initWithEmailAddress:(id)emailAddress;	// 0x3684387d
- (id)initWithURL:(id)url;	// 0x36843829
// declared property getter: - (id)cn;	// 0x36843da9
// declared property getter: - (int)cutype;	// 0x36843ebd
// declared property getter: - (id)dir;	// 0x36843f2d
- (id)displayName;	// 0x36843c11
// declared property getter: - (id)email;	// 0x368444d5
- (id)emailAddress;	// 0x36843b9d
- (void)fixAddress;	// 0x368412e9
- (BOOL)hasEmailAddress;	// 0x36843a19
- (BOOL)isEmailAddress;	// 0x36843a59
- (BOOL)isHTTPAddress;	// 0x36843ac5
- (BOOL)isHTTPSAddress;	// 0x36843b31
// declared property getter: - (int)partstat;	// 0x36843fbd
// declared property getter: - (int)role;	// 0x368442bd
// declared property getter: - (BOOL)rsvp;	// 0x36844381
// declared property getter: - (int)scheduleagent;	// 0x3684413d
// declared property getter: - (int)scheduleforcesend;	// 0x368441fd
// declared property getter: - (int)schedulestatus;	// 0x3684407d
// declared property setter: - (void)setCn:(id)cn;	// 0x36843cf9
// declared property setter: - (void)setCutype:(int)cutype;	// 0x36843e4d
// declared property setter: - (void)setDir:(id)dir;	// 0x36843f0d
// declared property setter: - (void)setEmail:(id)email;	// 0x36844495
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x36843f4d
// declared property setter: - (void)setRole:(int)role;	// 0x3684424d
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x3684430d
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x368440cd
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x3684418d
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x3684400d
- (void)setURL:(id)url;	// 0x3684453d
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x368443d1
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x3684451d
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x36844445
// converted property getter: - (id)x_calendarserver_email;	// 0x3684452d
@end
