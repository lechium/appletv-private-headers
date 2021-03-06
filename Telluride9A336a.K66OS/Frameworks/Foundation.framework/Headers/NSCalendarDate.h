/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDate.h> // Unknown library

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x336a6181; S=0x3366fcfd; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x3364a179; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x336a6171; S=0x3366fc9d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x33649fd5
+ (id)calendarDate;	// 0x3368c3d1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x336a7721
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x336a6725
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x336a6771
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x33687ee9
+ (id)distantFuture;	// 0x336a6081
+ (id)distantPast;	// 0x336a60f1
- (id)init;	// 0x3364a059
- (id)initWithCoder:(id)coder;	// 0x336a65a9
- (id)initWithString:(id)string;	// 0x336a6055
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x33699499
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x336994bd
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x3364a07d
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x33687f4d
- (id)addTimeInterval:(double)interval;	// 0x3366fc0d
// converted property getter: - (id)calendarFormat;	// 0x336a6181
- (Class)classForCoder;	// 0x336a648d
- (id)copyWithZone:(NSZone *)zone;	// 0x33699065
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x3368c40d
- (int)dayOfCommonEra;	// 0x336a6191
- (int)dayOfMonth;	// 0x336a623d
- (int)dayOfWeek;	// 0x336a6275
- (int)dayOfYear;	// 0x336a62c1
- (void)dealloc;	// 0x3364a241
- (id)description;	// 0x336a66cd
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x336a6711
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x336a67bd
- (id)descriptionWithLocale:(id)locale;	// 0x336a66ed
- (void)encodeWithCoder:(id)coder;	// 0x336a6491
- (int)hourOfDay;	// 0x3368ede9
- (int)microsecondOfSecond;	// 0x336a62ed
- (int)minuteOfHour;	// 0x3366fb85
- (int)monthOfYear;	// 0x336a6205
- (oneway void)release;	// 0x3364a191
- (int)secondOfMinute;	// 0x3364a0f5
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x3366fcfd
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3366fc9d
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x3364a179
// converted property getter: - (id)timeZone;	// 0x336a6171
- (id)timeZoneDetail;	// 0x336a6161
- (int)yearOfCommonEra;	// 0x33687eb1
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x336a633d
@end

