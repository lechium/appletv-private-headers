/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding> {
	NSNumber *_number;	// 4 = 0x4
	int _weekday;	// 8 = 0x8
}
@property(retain) NSNumber *number;	// G=0x3266e391; S=0x3266e125; @synthesize=_number
@property(assign) int weekday;	// G=0x3266dbd9; S=0x3266dbe9; @synthesize=_weekday
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x32657fc9
+ (int)weekdayFromICSString:(id)icsstring;	// 0x32657efd
- (id)initWithCoder:(id)coder;	// 0x3266e2b1
- (id)initWithWeekday:(int)weekday;	// 0x3266e185
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x3266e339
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3264fd19
- (void)encodeWithCoder:(id)coder;	// 0x3266e0d1
// declared property getter: - (id)number;	// 0x3266e391
// declared property setter: - (void)setNumber:(id)number;	// 0x3266e125
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x3266dbe9
// declared property getter: - (int)weekday;	// 0x3266dbd9
@end

