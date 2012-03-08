/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSLocale, NSTimeZone, UIPickerView, NSCalendar, NSDate;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x3312740d; S=0x3312742d; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x33127509; S=0x33127529; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x330508e1; S=0x3312744d; @dynamic
@property(retain) id dateComponents;	// G=0x331275d9; S=0x331275f9; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x3312734d; S=0x33045f95; @dynamic
@property(readonly, assign, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar;	// G=0x3312776d; 
@property(retain, nonatomic) NSLocale *locale;	// G=0x331273ad; S=0x331273bd; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x331274c9; S=0x331274e9; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x33127489; S=0x331274a9; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x33127549; S=0x3304633d; @dynamic
@property(assign) double timeInterval;	// G=0x331275c9; S=0x331275b9; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x331273cd; S=0x331273ed; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x33127749; S=0x33127729; 
- (id)initWithCoder:(id)coder;	// 0x33126db1
- (id)initWithFrame:(CGRect)frame;	// 0x33044d61
- (float)_contentWidth;	// 0x331276c9
// declared property getter: - (id)_dateUnderSelectionBar;	// 0x3312776d
- (void)_insertPickerView;	// 0x33045079
- (id)_locale;	// 0x3312736d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33127069
- (void)_setHidesLabels:(BOOL)labels;	// 0x33127709
- (void)_setHighlightsToday:(BOOL)today;	// 0x331276e9
- (void)_setLocale:(id)locale;	// 0x3312738d
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x33127729
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x33127749
- (void)awakeFromNib;	// 0x33126ffd
// declared property getter: - (id)calendar;	// 0x3312740d
// declared property getter: - (double)countDownDuration;	// 0x33127509
// declared property getter: - (id)date;	// 0x330508e1
// converted property getter: - (id)dateComponents;	// 0x331275d9
// declared property getter: - (int)datePickerMode;	// 0x3312734d
- (void)encodeWithCoder:(id)coder;	// 0x331270bd
- (int)hour;	// 0x33127659
// declared property getter: - (id)locale;	// 0x331273ad
// declared property getter: - (id)maximumDate;	// 0x331274c9
// declared property getter: - (id)minimumDate;	// 0x33127489
- (int)minute;	// 0x33127679
// declared property getter: - (int)minuteInterval;	// 0x33127549
- (int)second;	// 0x33127699
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x3312742d
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x33127529
// declared property setter: - (void)setDate:(id)date;	// 0x3312744d
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x331276b9
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x3304668d
// converted property setter: - (void)setDateComponents:(id)components;	// 0x331275f9
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x33045f95
- (void)setDelegate:(id)delegate;	// 0x33127599
- (void)setFrame:(CGRect)frame;	// 0x33045005
- (void)setHighlightsToday:(BOOL)today;	// 0x33127639
// declared property setter: - (void)setLocale:(id)locale;	// 0x331273bd
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x331274e9
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x331274a9
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x3304633d
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x33127619
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x331275b9
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x331273ed
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33127569
// converted property getter: - (double)timeInterval;	// 0x331275c9
// declared property getter: - (id)timeZone;	// 0x331273cd
@end

