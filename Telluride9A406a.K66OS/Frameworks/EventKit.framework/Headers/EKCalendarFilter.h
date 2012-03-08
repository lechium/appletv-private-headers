/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet, NSMutableDictionary;

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
@property(copy, nonatomic) NSString *searchTerm;	// G=0x3453c1e5; S=0x34577ed9; @synthesize=_searchTerm
+ (void)_addCalendarUIDsFromPrefs:(id)prefs toSet:(id)set database:(CalDatabase *)database;	// 0x3453bee5
+ (void)_addCalendarWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x3453bfc1
+ (void)_addCalendarsForStoreWithUID:(id)uid toSet:(id)set database:(CalDatabase *)database;	// 0x34577bf5
- (id)initFilteringAllWithDatabase:(CalDatabase *)database;	// 0x34577751
- (id)initWithDatabase:(CalDatabase *)database;	// 0x3453b859
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type;	// 0x3457772d
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type calendarUIDs:(id)uids;	// 0x3453b879
- (id)initWithDatabase:(CalDatabase *)database entityType:(int)type showingCalendarsWithUIDs:(id)uids;	// 0x34577805
- (id)initWithDatabase:(CalDatabase *)database filteringCalendars:(id)calendars;	// 0x3457785d
- (id)initWithDatabase:(CalDatabase *)database showingCalendars:(id)calendars;	// 0x34554929
- (id)initWithDatabase:(CalDatabase *)database showingCalendarsWithUIDs:(id)uids;	// 0x345777a9
- (id)initWithPersistentIdentifier:(id)persistentIdentifier database:(CalDatabase *)database;	// 0x3453ba09
- (id)_UIDAntiSetWithCalendars:(id)calendars;	// 0x34546b21
- (id)_UIDSetWithCalendars:(id)calendars;	// 0x3453e87d
- (id)_addFilterToQuery:(id)query creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x345466d5
- (id)_calendarUIDsFromPersistentIdentifier:(id)persistentIdentifier;	// 0x3453ba65
- (void)_databaseWillChange:(id)_database;	// 0x345778b9
- (id)_generateUIDSetToFilterAllCalendars;	// 0x345779d5
- (id)_generateUIDSetToFilterCalendars:(id)filterCalendars;	// 0x34577901
- (id)_generateUIDSetToShowCalendarUIDs:(id)showCalendarUIDs;	// 0x34577951
- (id)_generateUIDSetToShowCalendars:(id)showCalendars;	// 0x34554985
- (BOOL)_isFilteringAllWhileLocked;	// 0x3453e7ed
- (id)calendarIDClauseForQueryWithVariableName:(id)variableName;	// 0x345468e5
- (id)copyWithZone:(NSZone *)zone;	// 0x34577b8d
- (void)dealloc;	// 0x3453c1f5
- (id)filterQueryForKey:(id)key prefix:(id)prefix whereClause:(id)clause creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x34577cb5
- (id)filterQueryForQueryString:(id)queryString creator:(/*function-pointer*/ void *)creator userInfo:(void *)info;	// 0x3454665d
- (id)filteredCalendars;	// 0x34577a45
- (BOOL)isCalendarUIDVisible:(id)visible;	// 0x34552a49
- (BOOL)isEqual:(id)equal;	// 0x3453c0bd
- (BOOL)isFilteringAll;	// 0x3453e761
- (BOOL)isShowingAll;	// 0x3453c579
- (id)persistentIdentifier;	// 0x34542bf9
- (void)removeCalendarWithUID:(id)uid;	// 0x34577b6d
// declared property getter: - (id)searchTerm;	// 0x3453c1e5
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x34577ed9
- (void)validate;	// 0x34552f0d
- (int)visibleCalendarCountWithOptions:(int)options;	// 0x3453c5bd
- (id)visibleCalendarsWithOptions:(int)options;	// 0x3453c839
@end

