/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSDate, NSCalendar, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRCalendarMonthCell : BRControl {
@private
	NSDate *_date;	// 44 = 0x2c
	NSCalendar *_calendar;	// 48 = 0x30
	BRTextControl *_dayNumber;	// 52 = 0x34
	BRControl *_contents;	// 56 = 0x38
	BRControl *_border;	// 60 = 0x3c
	BRControl *_background;	// 64 = 0x40
	BRImageControl *_focusImage;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRControl *background;	// G=0x329ab935; @synthesize=_background
@property(readonly, assign, nonatomic) BRControl *border;	// G=0x329ab945; @synthesize=_border
@property(retain, nonatomic) NSCalendar *calendar;	// G=0x329ab965; S=0x329abfa9; @synthesize=_calendar
@property(retain, nonatomic) BRControl *contents;	// G=0x329ab955; S=0x329ab985; @synthesize=_contents
@property(retain, nonatomic) NSDate *date;	// G=0x329ab975; S=0x329abf81; @synthesize=_date
- (id)init;	// 0x329abb7d
// declared property getter: - (id)background;	// 0x329ab935
// declared property getter: - (id)border;	// 0x329ab945
// declared property getter: - (id)calendar;	// 0x329ab965
// declared property getter: - (id)contents;	// 0x329ab955
- (void)controlWasFocused;	// 0x329aba7d
- (void)controlWasUnfocused;	// 0x329aba35
// declared property getter: - (id)date;	// 0x329ab975
- (void)dealloc;	// 0x329abac9
- (void)layoutSubcontrols;	// 0x329abfd1
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x329abfa9
// declared property setter: - (void)setContents:(id)contents;	// 0x329ab985
// declared property setter: - (void)setDate:(id)date;	// 0x329abf81
- (void)setDate:(id)date inCalendar:(id)calendar;	// 0x329abe59
@end

