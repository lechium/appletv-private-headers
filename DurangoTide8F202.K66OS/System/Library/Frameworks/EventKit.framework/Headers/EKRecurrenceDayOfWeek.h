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
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x3167d6b1; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x3167d6a1; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x3167e811
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x3167e7d9
- (id)initWithCoder:(id)coder;	// 0x3167f071
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x3167f0ed
- (id)copyWithZone:(NSZone *)zone;	// 0x3167e5cd
// declared property getter: - (int)dayOfTheWeek;	// 0x3167d6b1
- (id)description;	// 0x3167e68d
- (void)encodeWithCoder:(id)coder;	// 0x3167e78d
- (unsigned)hash;	// 0x3167e661
- (id)iCalendarDescription;	// 0x3167e6f1
- (BOOL)isEqual:(id)equal;	// 0x3167e5e1
// declared property getter: - (int)weekNumber;	// 0x3167d6a1
@end

