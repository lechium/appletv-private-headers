/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSDate, UIPickerView, NSLocale, NSTimeZone, NSCalendar;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 68 = 0x44
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x3078d0d1; S=0x3078d0b1; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x3078cfdd; S=0x3078cfbd; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x3065e4e1; S=0x3078d07d; @dynamic
@property(retain) id dateComponents;	// G=0x3078cf35; S=0x3078cf15; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x3078d171; S=0x3064745d; @dynamic
@property(retain, nonatomic) NSLocale *locale;	// G=0x3078d151; S=0x3078d131; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x3078d01d; S=0x3078cffd; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x3078d05d; S=0x3078d03d; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x3078cf9d; S=0x30647629; @dynamic
@property(assign) double timeInterval;	// G=0x3078cf55; S=0x3078cf69; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x3078d111; S=0x3078d0f1; @dynamic
- (id)initWithCoder:(id)coder;	// 0x3078d4cd
- (id)initWithFrame:(CGRect)frame;	// 0x306462d9
- (void)_insertPickerView;	// 0x306464a9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3078d481
// declared property getter: - (id)calendar;	// 0x3078d0d1
// declared property getter: - (double)countDownDuration;	// 0x3078cfdd
// declared property getter: - (id)date;	// 0x3065e4e1
// converted property getter: - (id)dateComponents;	// 0x3078cf35
// declared property getter: - (int)datePickerMode;	// 0x3078d171
- (void)encodeWithCoder:(id)coder;	// 0x3078d209
- (int)hour;	// 0x3078cead
// declared property getter: - (id)locale;	// 0x3078d151
// declared property getter: - (id)maximumDate;	// 0x3078d01d
// declared property getter: - (id)minimumDate;	// 0x3078d05d
- (int)minute;	// 0x3078ce8d
// declared property getter: - (int)minuteInterval;	// 0x3078cf9d
- (int)second;	// 0x3078ce6d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3078d0b1
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x3078cfbd
// declared property setter: - (void)setDate:(id)date;	// 0x3078d07d
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x3078ce55
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x30647845
// converted property setter: - (void)setDateComponents:(id)components;	// 0x3078cf15
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x3064745d
- (void)setDelegate:(id)delegate;	// 0x3078cf7d
- (void)setFrame:(CGRect)frame;	// 0x30646431
- (void)setHighlightsToday:(BOOL)today;	// 0x3078cecd
// declared property setter: - (void)setLocale:(id)locale;	// 0x3078d131
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x3078cffd
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x3078d03d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x30647629
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x3078cef1
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x3078cf69
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x3078d0f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3078d1d9
// converted property getter: - (double)timeInterval;	// 0x3078cf55
// declared property getter: - (id)timeZone;	// 0x3078d111
@end

