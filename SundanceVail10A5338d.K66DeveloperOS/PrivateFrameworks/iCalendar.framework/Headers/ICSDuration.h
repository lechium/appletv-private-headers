/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface ICSDuration : NSObject <NSCoding> {
	double _duration;	// 4 = 0x4
}
+ (id)durationFromICSString:(id)icsstring;	// 0x365491a5
+ (id)durationFromRFC2445UTF8String:(const char *)rfc2445UTF8String;	// 0x36548f99
+ (id)generateDurationFromICSString:(id)icsstring;	// 0x36538839
- (id)initWithCoder:(id)coder;	// 0x365388d5
- (id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x3653867d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36538855
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3653ccc1
- (int)days;	// 0x36538745
- (void)encodeWithCoder:(id)coder;	// 0x36538895
- (int)hours;	// 0x36538781
- (BOOL)isNegative;	// 0x36538815
- (int)minutes;	// 0x365387b9
- (int)seconds;	// 0x365387ed
- (double)timeInterval;	// 0x365386fd
- (int)weeks;	// 0x36538715
@end
