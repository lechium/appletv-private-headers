/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRCalendarViewDelegate.h"
#import <BRViewController.h> // Unknown library
#import "BRCalendarViewDataSource.h"

@class NSDictionary, NSDate, BRCalendarView;

__attribute__((visibility("hidden")))
@interface ATVGamesScheduleController : BRViewController <BRCalendarViewDataSource, BRCalendarViewDelegate> {
@private
	NSDictionary *_data;	// 64 = 0x40
	NSDate *_startDate;	// 68 = 0x44
	NSDate *_endDate;	// 72 = 0x48
	BRCalendarView *_calendar;	// 76 = 0x4c
}
@property(readonly, assign) BRCalendarView *calendar;	// G=0x307a4e41; @synthesize=_calendar
@property(readonly, assign) NSDictionary *data;	// G=0x307a4e31; @synthesize=_data
- (id)initWithDictionary:(id)dictionary;	// 0x307a4ef1
- (id)_dayDictForDate:(id)date;	// 0x307a5049
- (void)_loadGameData:(id)data;	// 0x307a5275
// declared property getter: - (id)calendar;	// 0x307a4e41
- (id)calendarForCalendarView:(id)calendarView;	// 0x307a4e51
- (void)calendarView:(id)view didSelectItemAtDate:(id)date;	// 0x307a50e5
- (id)calendarView:(id)view itemForDate:(id)date;	// 0x307a519d
// declared property getter: - (id)data;	// 0x307a4e31
- (void)dealloc;	// 0x307a4e71
- (id)endDateForCalendarView:(id)calendarView;	// 0x307a4e21
- (id)startDateForCalendarView:(id)calendarView;	// 0x307a4e11
@end

