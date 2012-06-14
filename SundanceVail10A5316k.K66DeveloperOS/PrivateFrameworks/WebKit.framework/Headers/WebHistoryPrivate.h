/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject {
@private
	NSMutableDictionary *_entriesByURL;	// 4 = 0x4
	HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>> > *_entriesByDate;	// 8 = 0x8
	NSMutableArray *_orderedLastVisitedDays;	// 12 = 0xc
	BOOL itemLimitSet;	// 16 = 0x10
	int itemLimit;	// 20 = 0x14
	BOOL ageInDaysLimitSet;	// 24 = 0x18
	int ageInDaysLimit;	// 28 = 0x1c
}
@property(assign) int historyAgeInDaysLimit;	// G=0x3500b8c9; S=0x35059669; converted property
@property(assign) int historyItemLimit;	// G=0x3500b809; S=0x3505968d; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x350216a9; converted property
+ (void)initialize;	// 0x35001c7d
- (id)init;	// 0x35001d09
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x3500cc05
- (void)addItemToDateCaches:(id)dateCaches;	// 0x3500cd45
- (void)addItems:(id)items;	// 0x350595b5
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x35015b39
- (id)ageLimitDate;	// 0x3500b869
- (id)allItems;	// 0x35059649
- (BOOL)containsURL:(id)url;	// 0x35059615
- (id)data;	// 0x3501994d
- (void)dealloc;	// 0x35058ca9
- (void)finalize;	// 0x35058e15
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x3500cf45
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x3500b8c9
// converted property getter: - (int)historyItemLimit;	// 0x3500b809
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x3500d0d9
- (id)itemForURL:(id)url;	// 0x35014c65
- (id)itemForURLString:(id)urlstring;	// 0x35014c95
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x3500b419
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x3500b445
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x35021619
// converted property getter: - (id)orderedLastVisitedDays;	// 0x350216a9
- (void)rebuildHistoryByDayIfNeeded:(id)needed;	// 0x35058fc5
- (BOOL)removeAllItems;	// 0x35059501
- (BOOL)removeItem:(id)item;	// 0x3505943d
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x35058f49
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x35012ed9
- (BOOL)removeItems:(id)items;	// 0x3505949d
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x350596b1
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x35059669
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3505968d
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x35012dad
@end

