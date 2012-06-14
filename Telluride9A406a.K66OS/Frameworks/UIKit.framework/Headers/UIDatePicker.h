/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSCalendar, UIPickerView, NSDate, NSLocale, NSTimeZone;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x358dd6c1; S=0x358dd6e1; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x358dd7bd; S=0x358dd7dd; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x35809f55; S=0x358dd701; @dynamic
@property(retain) id dateComponents;	// G=0x358dd88d; S=0x358dd8ad; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x358dd601; S=0x357ff649; @dynamic
@property(retain, nonatomic) NSLocale *locale;	// G=0x358dd661; S=0x358dd671; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x358dd77d; S=0x358dd79d; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x358dd73d; S=0x358dd75d; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x358dd7fd; S=0x357ff9f1; @dynamic
@property(assign) double timeInterval;	// G=0x358dd87d; S=0x358dd86d; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x358dd681; S=0x358dd6a1; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x358dd9fd; S=0x358dd9dd; 
- (id)initWithCoder:(id)coder;	// 0x358dd065
- (id)initWithFrame:(CGRect)frame;	// 0x357fe149
- (float)_contentWidth;	// 0x358dd97d
- (void)_insertPickerView;	// 0x357fe461
- (id)_locale;	// 0x358dd621
- (void)_populateArchivedSubviews:(id)subviews;	// 0x358dd31d
- (void)_setHidesLabels:(BOOL)labels;	// 0x358dd9bd
- (void)_setHighlightsToday:(BOOL)today;	// 0x358dd99d
- (void)_setLocale:(id)locale;	// 0x358dd641
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x358dd9dd
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x358dd9fd
- (void)awakeFromNib;	// 0x358dd2b1
// declared property getter: - (id)calendar;	// 0x358dd6c1
// declared property getter: - (double)countDownDuration;	// 0x358dd7bd
// declared property getter: - (id)date;	// 0x35809f55
// converted property getter: - (id)dateComponents;	// 0x358dd88d
// declared property getter: - (int)datePickerMode;	// 0x358dd601
- (void)encodeWithCoder:(id)coder;	// 0x358dd371
- (int)hour;	// 0x358dd90d
// declared property getter: - (id)locale;	// 0x358dd661
// declared property getter: - (id)maximumDate;	// 0x358dd77d
// declared property getter: - (id)minimumDate;	// 0x358dd73d
- (int)minute;	// 0x358dd92d
// declared property getter: - (int)minuteInterval;	// 0x358dd7fd
- (int)second;	// 0x358dd94d
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x358dd6e1
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x358dd7dd
// declared property setter: - (void)setDate:(id)date;	// 0x358dd701
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x358dd96d
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x357ffd41
// converted property setter: - (void)setDateComponents:(id)components;	// 0x358dd8ad
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x357ff649
- (void)setDelegate:(id)delegate;	// 0x358dd84d
- (void)setFrame:(CGRect)frame;	// 0x357fe3ed
- (void)setHighlightsToday:(BOOL)today;	// 0x358dd8ed
// declared property setter: - (void)setLocale:(id)locale;	// 0x358dd671
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x358dd79d
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x358dd75d
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x357ff9f1
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x358dd8cd
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x358dd86d
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x358dd6a1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x358dd81d
// converted property getter: - (double)timeInterval;	// 0x358dd87d
// declared property getter: - (id)timeZone;	// 0x358dd681
@end
