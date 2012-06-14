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
@property(retain) NSNumber *number;	// G=0x3152ef59; S=0x3152ef69; 
@property(assign) int weekday;	// G=0x3152f0c5; S=0x3152f0d5; @synthesize=_weekday
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x315167d9
+ (int)weekdayFromICSString:(id)icsstring;	// 0x315166fd
- (id)initWithCoder:(id)coder;	// 0x3152f031
- (id)initWithWeekday:(int)weekday;	// 0x3152eee5
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x3152eef9
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x31509699
- (void)encodeWithCoder:(id)coder;	// 0x3152efd1
// declared property getter: - (id)number;	// 0x3152ef59
// declared property setter: - (void)setNumber:(id)number;	// 0x3152ef69
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x3152f0d5
// declared property getter: - (int)weekday;	// 0x3152f0c5
@end
