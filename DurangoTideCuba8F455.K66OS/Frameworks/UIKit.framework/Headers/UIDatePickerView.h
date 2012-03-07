/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPickerView.h"
#import "UIPickerViewDelegate.h"
#import "UIPickerViewDataSource.h"

@class UIDatePicker, NSLocale, NSTimeZone, NSCalendar, NSDateComponents, NSString, UILabel, NSDate;

__attribute__((visibility("hidden")))
@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
@private
	int _datePickerMode;	// 76 = 0x4c
	NSLocale *_locale;	// 80 = 0x50
	NSTimeZone *_timeZone;	// 84 = 0x54
	NSCalendar *_calendar;	// 88 = 0x58
	CFDateFormatterRef _localDateFormatter;	// 92 = 0x5c
	NSDate *_date;	// 96 = 0x60
	NSDate *_minimumDate;	// 100 = 0x64
	NSDate *_maximumDate;	// 104 = 0x68
	double _countDownDuration;	// 108 = 0x6c
	int _minuteInterval;	// 116 = 0x74
	NSDateComponents *_referenceComponents;	// 120 = 0x78
	double _todaySinceReferenceDate;	// 124 = 0x7c
	NSDateComponents *_todayDateComponents;	// 132 = 0x84
	NSString *_amString;	// 136 = 0x88
	NSString *_pmString;	// 140 = 0x8c
	UILabel *_hourLabel;	// 144 = 0x90
	UILabel *_minuteLabel;	// 148 = 0x94
	UIDatePicker *_datePickerDelegate;	// 152 = 0x98
	id _delegateOfDatePicker;	// 156 = 0x9c
	int _numberOfDaysInCurrentMonth;	// 160 = 0xa0
	int _expectedAMPM;	// 164 = 0xa4
	NSDateComponents *_minDateComponents;	// 168 = 0xa8
	NSDateComponents *_maxDateComponents;	// 172 = 0xac
	struct {
		unsigned dateOrder : 2;
		unsigned timeOrder : 2;
		unsigned weekdayOrder : 1;
		unsigned staggerTimeIntervals : 1;
		unsigned loadingDateOrTime : 1;
		unsigned highlightsToday : 1;
		unsigned hasCustomCalendar : 1;
		unsigned reserved : 23;
	} _datePickerFlags;	// 176 = 0xb0
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x30130401; S=0x30276789; @synthesize=_calendar
@property(assign, nonatomic) double countDownDuration;	// G=0x302759c9; S=0x30276c41; 
@property(copy, nonatomic) NSDate *date;	// G=0x30147501; S=0x30148fd5; @synthesize=_date
@property(retain) id dateComponents;	// G=0x301303cd; S=0x30275a31; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x30275865; S=0x30130491; @synthesize=_datePickerMode
@property(assign, nonatomic) id delegateOfDatePicker;	// G=0x302757f5; S=0x30275805; @synthesize=_delegateOfDatePicker
@property(readonly, assign, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;	// G=0x302757c5; 
@property(retain, nonatomic) NSLocale *locale;	// G=0x30275855; S=0x30275dc5; @synthesize=_locale
@property(copy, nonatomic) NSDate *maximumDate;	// G=0x30275825; S=0x30275c35; @synthesize=_maximumDate
@property(copy, nonatomic) NSDate *minimumDate;	// G=0x30275835; S=0x30275cfd; @synthesize=_minimumDate
@property(assign, nonatomic) int minuteInterval;	// G=0x30275815; S=0x30130649; @synthesize=_minuteInterval
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x30275845; S=0x302766e1; @synthesize=_timeZone
- (id)initWithFrame:(CGRect)frame;	// 0x3012f585
- (id)_ampmCellFont;	// 0x301330a1
- (int)_columnForElement:(unsigned)element;	// 0x30130c6d
- (id)_createAccessoryViewWithText:(id)text andFont:(id)font;	// 0x30275875
- (id)_createLabelWithString:(id)string above:(id)above;	// 0x30276de1
- (id)_datePickerCellFont;	// 0x30132931
- (void)_datePickerReset:(id)reset;	// 0x302769cd
- (int)_dayForRow:(int)row;	// 0x30149511
- (void)_doneLoadingDateOrTime;	// 0x301482c9
- (unsigned)_elementForColumn:(int)column;	// 0x301328ad
- (void)_ensureTodayIsSet;	// 0x3013ee09
- (int)_eraForRow:(int)row;	// 0x3014973d
- (id)_fadeLabel:(id)label toNewLabelWithString:(id)string ifAnimated:(BOOL)animated;	// 0x30276a61
// declared property getter: - (BOOL)_hasCustomCalendar;	// 0x302757c5
- (int)_hourForRow:(int)row;	// 0x30138999
- (id)_hoursString;	// 0x30276a29
- (id)_hrMinFont;	// 0x30275b7d
- (int)_incrementForElement:(unsigned)element;	// 0x3013e93d
- (int)_incrementedAmountForValue:(int)value withElement:(unsigned)element;	// 0x3013e8c5
- (void)_loadDateAnimated:(BOOL)animated;	// 0x301308c9
- (void)_loadDesignatorStrings;	// 0x30132779
- (CFDateFormatterRef)_localDateFormatter;	// 0x3013eef1
- (int)_minuteForRow:(int)row;	// 0x301474c9
- (id)_minutesString;	// 0x30276a45
- (int)_monthForRow:(int)row;	// 0x30149319
- (int)_numberOfDaysInDate:(id)date;	// 0x30130411
- (int)_numberOfDaysInWeek;	// 0x30276191
- (BOOL)_scrollingAnyColumnExcept:(int)except;	// 0x30275a6d
- (int)_secondForRow:(int)row;	// 0x30275abd
- (int)_selectedHourForColumn:(int)column;	// 0x30275b01
- (int)_selectedMinuteForColumn:(int)column;	// 0x30275ad5
- (void)_setDateComponent:(id)component withElement:(unsigned)element;	// 0x301471bd
- (void)_setupCell:(id)cell atRow:(int)row inColumn:(int)column withElementFlag:(unsigned)elementFlag;	// 0x3013cecd
- (BOOL)_shouldEnableDayForRow:(int)row column:(int)column;	// 0x30149539
- (BOOL)_shouldEnableHourForValue:(int)value column:(int)column;	// 0x3013ec2d
- (BOOL)_shouldEnableMinuteForValue:(int)value column:(int)column;	// 0x3013e979
- (BOOL)_shouldEnableMonthForRow:(int)row column:(int)column;	// 0x30149339
- (BOOL)_shouldEnableWeekMonthDayForCell:(id)cell;	// 0x3013f3f1
- (BOOL)_shouldEnableYearForRow:(int)row;	// 0x3014988d
- (BOOL)_showingDate;	// 0x302757ad
- (id)_sizedPickerCellFont;	// 0x301329d9
- (float)_tableRowHeight;	// 0x302757a5
- (id)_todayTextColor;	// 0x301494ad
- (void)_updateBitsForDate:(id)date andReload:(BOOL)reload animateIfNeeded:(BOOL)needed;	// 0x301300c1
- (BOOL)_updateDateOrTime;	// 0x30146e25
- (void)_updateEnabledCells:(BOOL)cells;	// 0x30143ae5
- (void)_updateLabels:(BOOL)labels;	// 0x301389dd
- (void)_updateReferenceBits;	// 0x3013034d
- (void)_updateRowInColumn:(int)column toValue:(int)value withRepeatingAmount:(int)repeatingAmount element:(unsigned)element animated:(BOOL)animated;	// 0x3013861d
- (int)_yearForRow:(int)row;	// 0x301497e5
// declared property getter: - (id)calendar;	// 0x30130401
// declared property getter: - (double)countDownDuration;	// 0x302759c9
// declared property getter: - (id)date;	// 0x30147501
// converted property getter: - (id)dateComponents;	// 0x301303cd
// declared property getter: - (int)datePickerMode;	// 0x30275865
- (void)dealloc;	// 0x3014bfd9
// declared property getter: - (id)delegateOfDatePicker;	// 0x302757f5
- (int)hour;	// 0x30275c11
- (void)layoutSubviews;	// 0x30130e01
// declared property getter: - (id)locale;	// 0x30275855
// declared property getter: - (id)maximumDate;	// 0x30275825
// declared property getter: - (id)minimumDate;	// 0x30275835
- (int)minute;	// 0x30275bed
// declared property getter: - (int)minuteInterval;	// 0x30275815
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x301307e9
- (id)pickerImageNamePrefix;	// 0x30131dd9
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x30146d8d
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x30137459
- (float)pickerView:(id)view rowHeightForComponent:(int)component;	// 0x30135599
- (id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;	// 0x3013ca0d
- (float)pickerView:(id)view widthForComponent:(int)component;	// 0x301321d9
- (void)pickerViewLoaded:(id)loaded;	// 0x301374f1
- (void)scrollerDidScroll:(id)scroller;	// 0x30137dd5
- (void)scrollerWillStartDragging:(id)scroller;	// 0x30143acd
- (int)second;	// 0x30275bc9
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x30276789
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x30276c41
// declared property setter: - (void)setDate:(id)date;	// 0x30148fd5
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x3013087d
// converted property setter: - (void)setDateComponents:(id)components;	// 0x30275a31
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x30130491
- (void)setDelegate:(id)delegate;	// 0x3013044d
// declared property setter: - (void)setDelegateOfDatePicker:(id)datePicker;	// 0x30275805
- (void)setFrame:(CGRect)frame;	// 0x3012f841
- (void)setHighlightsToday:(BOOL)today;	// 0x302757d9
// declared property setter: - (void)setLocale:(id)locale;	// 0x30275dc5
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x30275c35
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x30275cfd
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x30130649
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x30275b2d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x302766e1
- (id)shadowColor;	// 0x302759a9
// declared property getter: - (id)timeZone;	// 0x30275845
@end
