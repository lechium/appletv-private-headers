/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSArray, EKPersistentCalendarItem, EKRecurrenceEnd, NSDate;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
@private
	id _helper;	// 32 = 0x20
	EKRecurrenceEnd *_recurrenceEnd;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x30e693ed; 
@property(readonly, assign, nonatomic) NSDate *cachedEndDate;	// G=0x30e697c5; 
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x30e6978d; 
@property(assign, nonatomic) unsigned count;	// G=0x30e05a39; S=0x30e025f5; 
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x30e05d51; S=0x30e02391; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x30e05ac5; S=0x30e01b51; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x30e05c85; S=0x30e0246d; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x30e05a1d; S=0x30e021bd; 
@property(assign, nonatomic) int firstDayOfTheWeek;	// G=0x30e05c3d; S=0x30e697e1; 
@property(assign, nonatomic) int frequency;	// G=0x30e05bc9; S=0x30dfdc51; 
@property(assign, nonatomic) int interval;	// G=0x30e05b4d; S=0x30dfdd69; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x30e05a81; S=0x30e021d9; 
@property(retain, nonatomic) EKPersistentCalendarItem *owner;	// G=0x30e03b59; S=0x30e02549; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x30e05cc9; S=0x30e020e1; 
@property(readonly, assign, nonatomic) BOOL shouldPinMonthDays;	// G=0x30e69409; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x30e05d0d; S=0x30e022b5; 
+ (id)relations;	// 0x30e02565
- (id)init;	// 0x30dfdbbd
// declared property getter: - (id)UUID;	// 0x30e693ed
- (id)_helper;	// 0x30e01b7d
// declared property getter: - (id)cachedEndDate;	// 0x30e697c5
// declared property getter: - (id)calendarIdentifier;	// 0x30e6978d
- (id)copyWithZone:(NSZone *)zone;	// 0x30e69545
// declared property getter: - (unsigned)count;	// 0x30e05a39
// declared property getter: - (id)daysOfTheMonth;	// 0x30e05d51
// declared property getter: - (id)daysOfTheWeek;	// 0x30e05ac5
// declared property getter: - (id)daysOfTheYear;	// 0x30e05c85
- (void)dealloc;	// 0x30e0793d
- (id)description;	// 0x30e69461
// declared property getter: - (id)endDate;	// 0x30e05a1d
- (int)entityType;	// 0x30e01b4d
// declared property getter: - (int)firstDayOfTheWeek;	// 0x30e05c3d
// declared property getter: - (int)frequency;	// 0x30e05bc9
- (XXStruct_mY3THC)gregorianUnits;	// 0x30e696fd
// declared property getter: - (int)interval;	// 0x30e05b4d
- (BOOL)isDirty;	// 0x30e696a5
// declared property getter: - (id)monthsOfTheYear;	// 0x30e05a81
// declared property getter: - (id)owner;	// 0x30e03b59
// declared property setter: - (void)setCount:(unsigned)count;	// 0x30e025f5
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x30e02391
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x30e01b51
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x30e0246d
// declared property setter: - (void)setEndDate:(id)date;	// 0x30e021bd
// declared property setter: - (void)setFirstDayOfTheWeek:(int)theWeek;	// 0x30e697e1
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x30dfdc51
// declared property setter: - (void)setInterval:(int)interval;	// 0x30dfdd69
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x30e021d9
// declared property setter: - (void)setOwner:(id)owner;	// 0x30e02549
// declared property getter: - (id)setPositions;	// 0x30e05cc9
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x30e020e1
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x30e022b5
// declared property getter: - (BOOL)shouldPinMonthDays;	// 0x30e69409
- (BOOL)validate:(id *)validate;	// 0x30e03aa9
// declared property getter: - (id)weeksOfTheYear;	// 0x30e05d0d
@end

