/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDateComponents, NSCalendar, NSString;

@interface BBBehaviorOverrideEffectiveInterval : NSObject <NSCopying, NSCoding> {
	NSDateComponents *_startComponents;	// 4 = 0x4
	NSDateComponents *_endComponents;	// 8 = 0x8
	NSString *_calendarIdentifier;	// 12 = 0xc
	NSCalendar *_calendar;	// 16 = 0x10
	unsigned _repeatInterval;	// 20 = 0x14
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x35dfa211; S=0x35dfa225; @synthesize=_calendar
@property(copy, nonatomic) NSString *calendarIdentifier;	// G=0x35dfa1ed; S=0x35dfa201; @synthesize=_calendarIdentifier
@property(copy, nonatomic) NSDateComponents *endComponents;	// G=0x35dfa1c9; S=0x35dfa1dd; @synthesize=_endComponents
@property(assign, nonatomic) unsigned repeatInterval;	// G=0x35dfa235; S=0x35dfa245; @synthesize=_repeatInterval
@property(copy, nonatomic) NSDateComponents *startComponents;	// G=0x35dfa1a5; S=0x35dfa1b9; @synthesize=_startComponents
+ (int)_dateComponentWithProvidedComponent:(int)providedComponent andBaseComponent:(int)component;	// 0x35df9cf5
+ (id)adjustComponentsForRepeatInterval:(unsigned)repeatInterval earlier:(BOOL)earlier;	// 0x35df9be1
+ (id)dateWithComponents:(id)components closestToDate:(id)date earlierThanDate:(BOOL)date3 calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x35df9d09
+ (id)dateWithComponents:(id)components immediatelyFollowingDate:(id)date calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x35df9f15
+ (id)dateWithComponents:(id)components immediatelyPriorToDate:(id)date calendar:(id)calendar repeatInterval:(unsigned)interval;	// 0x35df9ee1
+ (unsigned)relevantUnitsForRepeatInterval:(unsigned)repeatInterval;	// 0x35df9b2d
- (id)initWithCoder:(id)coder;	// 0x35df9805
- (id)initWithStartComponents:(id)startComponents endComponents:(id)components calendarIdentifier:(id)identifier repeatInterval:(unsigned)interval;	// 0x35df95a5
- (id)_configuredCalendarWithIdentifier:(id)identifier;	// 0x35df9529
- (void)_synchronizeTimeZone;	// 0x35df9f49
// declared property getter: - (id)calendar;	// 0x35dfa211
// declared property getter: - (id)calendarIdentifier;	// 0x35dfa1ed
- (BOOL)containsDate:(id)date;	// 0x35df9f95
- (id)copyWithZone:(NSZone *)zone;	// 0x35df9a51
- (void)dealloc;	// 0x35df96d9
- (id)description;	// 0x35df9759
- (void)encodeWithCoder:(id)coder;	// 0x35df9995
// declared property getter: - (id)endComponents;	// 0x35dfa1c9
- (id)nextTransitionDateAfterDate:(id)date;	// 0x35dfa0bd
// declared property getter: - (unsigned)repeatInterval;	// 0x35dfa235
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x35dfa225
// declared property setter: - (void)setCalendarIdentifier:(id)identifier;	// 0x35dfa201
// declared property setter: - (void)setEndComponents:(id)components;	// 0x35dfa1dd
// declared property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x35dfa245
// declared property setter: - (void)setStartComponents:(id)components;	// 0x35dfa1b9
// declared property getter: - (id)startComponents;	// 0x35dfa1a5
@end
