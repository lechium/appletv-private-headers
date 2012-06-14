/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKCalendarFilter : NSObject <NSCopying> {
@private
	opaque_pthread_mutex_t _lock;	// 4 = 0x4
	NSMutableSet *_calendarUIDs;	// 48 = 0x30
	CalDatabase *_database;	// 52 = 0x34
	NSMutableDictionary *_queryCache;	// 56 = 0x38
	NSString *_searchTerm;	// 60 = 0x3c
	int _entityType;	// 64 = 0x40
}
@property(copy, nonatomic) NSString *searchTerm;	// G=0x30dee119; S=0x30e2c65d; @synthesize=_searchTerm
+ (void)_addCalendarUIDsFromPrefs:(id)prefs toSet:(id)set database:(CalDatabase *)database;	// 0x30dede05
+ (void)_addCalendarWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x30dedf05
+ (void)_addCalendarsForStoreWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x30e2c381
- (id)initFilteringAllWithDatabase:(CalDatabase *)database;	// 0x30e2bec9
- (id)initWithDatabase:(CalDatabase *)database;	// 0x30ded7fd
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type;	// 0x30e2bea5
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type calendarUIDs:(id)uids;	// 0x30ded81d
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type showingCalendarsWithUIDs:(id)uids;	// 0x30e2bf7d
- (id)initWithDatabase:(CalDatabase *)database filteringCalendars:(id)calendars;	// 0x30e2bfd5
- (id)initWithDatabase:(CalDatabase *)database showingCalendars:(id)calendars;	// 0x30e06df9
- (id)initWithDatabase:(CalDatabase *)database showingCalendarsWithUIDs:(id)uids;	// 0x30e2bf21
- (id)initWithPersistentIdentifier:(id)persistentIdentifier database:(CalDatabase *)database;	// 0x30ded9b5
- (id)_UIDAntiSetWithCalendars:(id)calendars;	// 0x30df8bad
- (id)_UIDSetWithCalendars:(id)calendars;	// 0x30df07f9
- (id)_addFilterToQuery:(id)query creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x30df870d
- (id)_calendarUIDsFromPersistentIdentifier:(id)persistentIdentifier;	// 0x30deda11
- (void)_databaseChanged;	// 0x30e2c045
- (id)_generateUIDSetToFilterAllCalendars;	// 0x30e2c155
- (id)_generateUIDSetToFilterCalendars:(id)filterCalendars;	// 0x30e2c08d
- (id)_generateUIDSetToShowCalendarUIDs:(id)showCalendarUIDs;	// 0x30e2c0d1
- (id)_generateUIDSetToShowCalendars:(id)showCalendars;	// 0x30e06e55
- (BOOL)_isFilteringAllWhileLocked;	// 0x30df0769
- (id)calendarIDClauseForQueryWithVariableName:(id)variableName;	// 0x30df8925
- (id)copyWithZone:(NSZone *)zone;	// 0x30e2c319
- (void)dealloc;	// 0x30dee12d
- (id)filterQueryForKey:(id)key prefix:(id)prefix whereClause:(id)clause creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x30e2c44d
- (id)filterQueryForQueryString:(id)queryString creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x30df8695
- (id)filteredCalendars;	// 0x30e2c1c1
- (BOOL)isCalendarUIDVisible:(id)visible;	// 0x30e04995
- (BOOL)isEqual:(id)equal;	// 0x30dee005
- (BOOL)isFilteringAll;	// 0x30df06dd
- (BOOL)isShowingAll;	// 0x30dee2b9
- (id)persistentIdentifier;	// 0x30df4d61
- (void)removeCalendarWithUID:(id)uid;	// 0x30e2c2f9
// declared property getter: - (id)searchTerm;	// 0x30dee119
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x30e2c65d
- (void)validate;	// 0x30e04de9
- (int)visibleCalendarCountWithOptions:(int)options;	// 0x30dee2fd
- (id)visibleCalendarsWithOptions:(int)options;	// 0x30dee6f5
@end

