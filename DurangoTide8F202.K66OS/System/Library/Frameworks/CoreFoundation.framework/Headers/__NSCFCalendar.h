/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCalendar.h"


__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar {
}
@property(assign) unsigned firstWeekday;	// G=0x31cc7ccd; S=0x31cc7cd9; converted property
@property(retain) id gregorianStartDate;	// G=0x31cc7e71; S=0x31cc7f01; converted property
@property(retain) id locale;	// G=0x31cc7b95; S=0x31cc7c31; converted property
@property(assign) unsigned minimumDaysInFirstWeek;	// G=0x31cc7d69; S=0x31cc7de1; converted property
@property(retain) id timeZone;	// G=0x31cc7c3d; S=0x31cc2b55; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31d21391
- (id)initWithCalendarIdentifier:(id)calendarIdentifier;	// 0x31cc7b75
- (id)calendarIdentifier;	// 0x31cc7afd
- (id)components:(unsigned)components fromDate:(id)date;	// 0x31cc2b61
- (id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;	// 0x31cc96a5
- (id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;	// 0x31cc9f65
- (id)dateFromComponents:(id)components;	// 0x31cc6ac9
- (void)finalize;	// 0x31d22be5
// converted property getter: - (unsigned)firstWeekday;	// 0x31cc7ccd
// converted property getter: - (id)gregorianStartDate;	// 0x31cc7e71
- (unsigned)hash;	// 0x31d22bbd
- (BOOL)isEqual:(id)equal;	// 0x31d22b9d
// converted property getter: - (id)locale;	// 0x31cc7b95
- (NSRange)maximumRangeOfUnit:(unsigned)unit;	// 0x31d24a55
// converted property getter: - (unsigned)minimumDaysInFirstWeek;	// 0x31cc7d69
- (NSRange)minimumRangeOfUnit:(unsigned)unit;	// 0x31d24a25
- (unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x31d247c5
- (NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;	// 0x31cc80d5
- (BOOL)rangeOfUnit:(unsigned)unit startDate:(id *)date interval:(double *)interval forDate:(id)date4;	// 0x31d24801
- (oneway void)release;	// 0x31cca86d
- (id)retain;	// 0x31d22bc9
- (unsigned)retainCount;	// 0x31d22bd9
// converted property setter: - (void)setFirstWeekday:(unsigned)weekday;	// 0x31cc7cd9
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x31cc7f01
// converted property setter: - (void)setLocale:(id)locale;	// 0x31cc7c31
// converted property setter: - (void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;	// 0x31cc7de1
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x31cc2b55
// converted property getter: - (id)timeZone;	// 0x31cc7c3d
@end

