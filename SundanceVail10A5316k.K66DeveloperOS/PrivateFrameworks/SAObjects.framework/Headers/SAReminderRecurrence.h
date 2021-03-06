/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x32f468b5; S=0x32f468d1; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x32f46921; S=0x32f4693d; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x32f4698d; S=0x32f469a9; 
@property(copy, nonatomic) NSString *frequencyTimeUnit;	// G=0x32f469f9; S=0x32f46a15; 
@property(assign, nonatomic) int interval;	// G=0x32f46a65; S=0x32f46ad5; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x32f46b19; S=0x32f46b35; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x32f46b85; S=0x32f46ba1; 
+ (id)recurrence;	// 0x32f46825
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x32f46869
// declared property getter: - (id)daysOfTheMonth;	// 0x32f468b5
// declared property getter: - (id)daysOfTheWeek;	// 0x32f46921
// declared property getter: - (id)daysOfTheYear;	// 0x32f4698d
- (id)encodedClassName;	// 0x32f46819
// declared property getter: - (id)frequencyTimeUnit;	// 0x32f469f9
- (id)groupIdentifier;	// 0x32f46809
// declared property getter: - (int)interval;	// 0x32f46a65
// declared property getter: - (id)monthsOfTheYear;	// 0x32f46b19
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x32f468d1
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x32f4693d
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x32f469a9
// declared property setter: - (void)setFrequencyTimeUnit:(id)unit;	// 0x32f46a15
// declared property setter: - (void)setInterval:(int)interval;	// 0x32f46ad5
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x32f46b35
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x32f46ba1
// declared property getter: - (id)weeksOfTheYear;	// 0x32f46b85
@end

