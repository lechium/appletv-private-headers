/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSCoding> {
	NSNumber *_type;	// 40 = 0x28
	NSNumber *_interval;	// 44 = 0x2c
	NSNumber *_dayOfWeek;	// 48 = 0x30
	NSNumber *_dayOfMonth;	// 52 = 0x34
	NSNumber *_weekOfMonth;	// 56 = 0x38
	NSNumber *_monthOfYear;	// 60 = 0x3c
	NSDate *_until;	// 64 = 0x40
	NSNumber *_occurrences;	// 68 = 0x44
	NSNumber *_firstDayOfWeek;	// 72 = 0x48
	NSNumber *_calendarType;	// 76 = 0x4c
	ASEvent *_parentEvent;	// 80 = 0x50
}
@property(retain) NSNumber *calendarType;	// G=0x3099bcf5; S=0x3099bd09; @synthesize=_calendarType
@property(retain) NSNumber *dayOfMonth;	// G=0x3099bc1d; S=0x3099bc31; @synthesize=_dayOfMonth
@property(retain) NSNumber *dayOfWeek;	// G=0x3099bbf9; S=0x3099bc0d; @synthesize=_dayOfWeek
@property(retain) NSNumber *firstDayOfWeek;	// G=0x3099bcd1; S=0x3099bce5; @synthesize=_firstDayOfWeek
@property(retain) NSNumber *interval;	// G=0x3099bbd5; S=0x3099bbe9; @synthesize=_interval
@property(retain) NSNumber *monthOfYear;	// G=0x3099bc65; S=0x3099bc79; @synthesize=_monthOfYear
@property(retain) NSNumber *occurrences;	// G=0x3099bcad; S=0x3099bcc1; @synthesize=_occurrences
@property(retain) NSNumber *type;	// G=0x3099bbb1; S=0x3099bbc5; @synthesize=_type
@property(retain) NSDate *until;	// G=0x3099bc89; S=0x3099bc9d; @synthesize=_until
@property(retain) NSNumber *weekOfMonth;	// G=0x3099bc41; S=0x3099bc55; @synthesize=_weekOfMonth
+ (BOOL)acceptsTopLevelLeaves;	// 0x309998a5
+ (id)asParseRules;	// 0x30999c89
+ (BOOL)frontingBasicTypes;	// 0x309999a1
+ (BOOL)notifyOfUnknownTokens;	// 0x309999f5
+ (BOOL)parsingLeafNode;	// 0x309998f9
+ (BOOL)parsingWithSubItems;	// 0x3099994d
- (id)initWithCalRecurrence:(void *)calRecurrence parentEvent:(id)event;	// 0x3099b2b9
- (id)initWithCoder:(id)coder;	// 0x3099b769
- (BOOL)_loadAttributesFromCalRecurrence:(void *)calRecurrence parentStartDate:(id)date parentItem:(id)item;	// 0x3099aa61
- (void *)_newRecurrenceWithParentStartDate:(id)parentStartDate;	// 0x3099a45d
- (BOOL)_requiresParentEvent;	// 0x3099a245
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x30999b79
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x30999a59
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x3099b345
// declared property getter: - (id)calendarType;	// 0x3099bcf5
// declared property getter: - (id)dayOfMonth;	// 0x3099bc1d
// declared property getter: - (id)dayOfWeek;	// 0x3099bbf9
- (void)dealloc;	// 0x3099b665
- (void)encodeWithCoder:(id)coder;	// 0x3099b9c5
// declared property getter: - (id)firstDayOfWeek;	// 0x3099bcd1
// declared property getter: - (id)interval;	// 0x3099bbd5
// declared property getter: - (id)monthOfYear;	// 0x3099bc65
// declared property getter: - (id)occurrences;	// 0x3099bcad
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3099a249
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x3099a9e1
// declared property setter: - (void)setCalendarType:(id)type;	// 0x3099bd09
// declared property setter: - (void)setDayOfMonth:(id)month;	// 0x3099bc31
// declared property setter: - (void)setDayOfWeek:(id)week;	// 0x3099bc0d
// declared property setter: - (void)setFirstDayOfWeek:(id)week;	// 0x3099bce5
// declared property setter: - (void)setInterval:(id)interval;	// 0x3099bbe9
// declared property setter: - (void)setMonthOfYear:(id)year;	// 0x3099bc79
// declared property setter: - (void)setOccurrences:(id)occurrences;	// 0x3099bcc1
- (void)setParentEvent:(id)event;	// 0x30999a49
// declared property setter: - (void)setType:(id)type;	// 0x3099bbc5
// declared property setter: - (void)setUntil:(id)until;	// 0x3099bc9d
- (void)setUntilString:(id)string;	// 0x3099b629
// declared property setter: - (void)setWeekOfMonth:(id)month;	// 0x3099bc55
// declared property getter: - (id)type;	// 0x3099bbb1
// declared property getter: - (id)until;	// 0x3099bc89
// declared property getter: - (id)weekOfMonth;	// 0x3099bc41
@end

