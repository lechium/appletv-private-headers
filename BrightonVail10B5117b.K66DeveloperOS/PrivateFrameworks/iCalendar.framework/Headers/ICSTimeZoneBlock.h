/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate;

@interface ICSTimeZoneBlock : ICSComponent {
}
@property(retain) ICSDate *dtstart;	// G=0x36a3f15d; S=0x36a3f195; 
@property(retain) NSArray *rdate;	// G=0x36a3f1d5; S=0x36a3f1b5; 
@property(retain) NSArray *rrule;	// G=0x36a3f345; S=0x36a3f1f5; 
@property(assign) NSArray *tzname;	// G=0x36a3f451; S=0x36a3f55d; 
@property(assign) int tzoffsetfrom;	// G=0x36a3f6a9; S=0x36a3f701; 
@property(assign) int tzoffsetto;	// G=0x36a3f751; S=0x36a3f7a9; 
- (void)addRecurrenceDate:(id)date;	// 0x36a3f7f9
- (int)compare:(id)compare;	// 0x36a140dd
- (id)computeTimeZoneChangeListFromDate:(id)date toDate:(id)date2;	// 0x36a407a1
// declared property getter: - (id)dtstart;	// 0x36a3f15d
// declared property getter: - (id)rdate;	// 0x36a3f1d5
// declared property getter: - (id)rrule;	// 0x36a3f345
// declared property setter: - (void)setDtstart:(id)dtstart;	// 0x36a3f195
// declared property setter: - (void)setRdate:(id)rdate;	// 0x36a3f1b5
// declared property setter: - (void)setRrule:(id)rrule;	// 0x36a3f1f5
// declared property setter: - (void)setTzname:(id)tzname;	// 0x36a3f55d
// declared property setter: - (void)setTzoffsetfrom:(int)tzoffsetfrom;	// 0x36a3f701
// declared property setter: - (void)setTzoffsetto:(int)tzoffsetto;	// 0x36a3f7a9
// declared property getter: - (id)tzname;	// 0x36a3f451
// declared property getter: - (int)tzoffsetfrom;	// 0x36a3f6a9
// declared property getter: - (int)tzoffsetto;	// 0x36a3f751
- (BOOL)validate:(id *)validate;	// 0x36a3ef71
@end

