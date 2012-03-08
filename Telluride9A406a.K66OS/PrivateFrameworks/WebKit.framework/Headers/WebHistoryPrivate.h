/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject {
@private
	NSMutableDictionary *_entriesByURL;	// 4 = 0x4
	HashMap<long long int,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *_entriesByDate;	// 8 = 0x8
	NSMutableArray *_orderedLastVisitedDays;	// 12 = 0xc
	BOOL itemLimitSet;	// 16 = 0x10
	int itemLimit;	// 20 = 0x14
	BOOL ageInDaysLimitSet;	// 24 = 0x18
	int ageInDaysLimit;	// 28 = 0x1c
}
@property(assign) int historyAgeInDaysLimit;	// G=0x302ab47d; S=0x302f7625; converted property
@property(assign) int historyItemLimit;	// G=0x302ab3c1; S=0x302f7649; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x302c6125; converted property
+ (void)initialize;	// 0x302a03d1
- (id)init;	// 0x302a045d
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x302ac8f9
- (void)addItemToDateCaches:(id)dateCaches;	// 0x302aca41
- (void)addItems:(id)items;	// 0x302f7731
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x302b8629
- (id)ageLimitDate;	// 0x302ab41d
- (id)allItems;	// 0x302f77c9
- (BOOL)containsURL:(id)url;	// 0x302f778d
- (id)data;	// 0x302bcdcd
- (void)dealloc;	// 0x302f7c09
- (void)finalize;	// 0x302f7b89
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x302acc69
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x302ab47d
// converted property getter: - (int)historyItemLimit;	// 0x302ab3c1
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x302ace2d
- (id)itemForURL:(id)url;	// 0x302b76a9
- (id)itemForURLString:(id)urlstring;	// 0x302b76dd
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x302aafc1
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x302aaff1
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x302c6095
// converted property getter: - (id)orderedLastVisitedDays;	// 0x302c6125
- (BOOL)removeAllItems;	// 0x302f7a69
- (BOOL)removeItem:(id)item;	// 0x302f766d
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x302f7b11
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x302b5435
- (BOOL)removeItems:(id)items;	// 0x302f76c9
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x302f77e9
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x302f7625
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x302f7649
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x302b5305
@end

