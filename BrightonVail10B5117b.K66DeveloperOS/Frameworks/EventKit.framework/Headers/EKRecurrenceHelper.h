/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface EKRecurrenceHelper : NSObject {
	NSString *_specifier;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	BOOL _parsed;	// 9 = 0x9
	NSArray *_daysOfTheWeek;	// 12 = 0xc
	NSArray *_daysOfTheMonth;	// 16 = 0x10
	NSArray *_daysOfTheYear;	// 20 = 0x14
	NSArray *_weeksOfTheYear;	// 24 = 0x18
	NSArray *_monthsOfTheYear;	// 28 = 0x1c
	NSArray *_setPositions;	// 32 = 0x20
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x3189f781; S=0x3189f71d; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x3189ef49; S=0x3189eee5; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x3189f85d; S=0x3189f7f9; 
@property(readonly, assign, nonatomic) BOOL isDirty;	// G=0x318a0ea5; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x3189f5c9; S=0x3189f565; 
@property(copy, nonatomic) NSArray *setPositions;	// G=0x3189f40d; S=0x3189f3a9; 
@property(copy, nonatomic) NSString *specifier;	// G=0x319044b9; S=0x31904515; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x3189f6a5; S=0x3189f641; 
- (id)initWithSpecifier:(id)specifier;	// 0x3189ee91
- (void)_appendDaysOfTheWeek:(id)theWeek toSpecifier:(id)specifier;	// 0x31904755
- (void)_appendIndexList:(id)list toSpecifier:(id)specifier propertyKey:(unsigned short)key;	// 0x319048c9
- (void)_clearArrays;	// 0x3189f2cd
- (id)_parseDaysOfWeek:(XXStruct_1STaIB *)week range:(XXStruct_K5nmsA)range;	// 0x319049e9
- (id)_parseIndexList:(XXStruct_1STaIB *)list range:(XXStruct_K5nmsA)range;	// 0x31904cfd
- (void)_parseSpecifierIfNeeded;	// 0x3189ef95
- (void)_updateSpecifier;	// 0x319045a5
// declared property getter: - (id)daysOfTheMonth;	// 0x3189f781
// declared property getter: - (id)daysOfTheWeek;	// 0x3189ef49
// declared property getter: - (id)daysOfTheYear;	// 0x3189f85d
- (void)dealloc;	// 0x31904269
// declared property getter: - (BOOL)isDirty;	// 0x318a0ea5
- (BOOL)isEqual:(id)equal;	// 0x31904419
// declared property getter: - (id)monthsOfTheYear;	// 0x3189f5c9
- (void)revert;	// 0x31904331
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x3189f71d
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x3189eee5
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x3189f7f9
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x3189f565
// declared property getter: - (id)setPositions;	// 0x3189f40d
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x3189f3a9
// declared property setter: - (void)setSpecifier:(id)specifier;	// 0x31904515
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x3189f641
// declared property getter: - (id)specifier;	// 0x319044b9
// declared property getter: - (id)weeksOfTheYear;	// 0x3189f6a5
@end

