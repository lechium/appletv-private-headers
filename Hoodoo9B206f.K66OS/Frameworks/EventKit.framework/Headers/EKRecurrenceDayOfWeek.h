/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
@private
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x31f3c5c1; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x31f3c5d1; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x31f3c1b5
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x31f3c1f5
- (id)initWithCoder:(id)coder;	// 0x31f3c2d1
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x31f3c235
- (id)copyWithZone:(NSZone *)zone;	// 0x31f3c5b1
// declared property getter: - (int)dayOfTheWeek;	// 0x31f3c5c1
- (id)description;	// 0x31f3c49d
- (void)encodeWithCoder:(id)coder;	// 0x31f3c351
- (unsigned)hash;	// 0x31f3c4fd
- (id)iCalendarDescription;	// 0x31f3c419
- (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x31f3c3a9
- (BOOL)isEqual:(id)equal;	// 0x31f3c52d
// declared property getter: - (int)weekNumber;	// 0x31f3c5d1
@end

