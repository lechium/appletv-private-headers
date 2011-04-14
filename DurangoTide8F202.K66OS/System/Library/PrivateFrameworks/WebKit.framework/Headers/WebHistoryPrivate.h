/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

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
@property(assign) int historyAgeInDaysLimit;	// G=0x32c5d971; S=0x32c5d5d5; converted property
@property(assign) int historyItemLimit;	// G=0x32c5d9c1; S=0x32c5d5f5; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x32c5df25; converted property
+ (void)initialize;	// 0x32c101b9
- (id)init;	// 0x32c1023d
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x32c5d6bd
- (void)addItemToDateCaches:(id)dateCaches;	// 0x32c215ad
- (void)addItems:(id)items;	// 0x32c5d8b9
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x32c25875
- (id)ageLimitDate;	// 0x32c5da11
- (id)allItems;	// 0x32c5d951
- (BOOL)containsURL:(id)url;	// 0x32c5d919
- (id)data;	// 0x32c5dcf5
- (void)dealloc;	// 0x32c5e5cd
- (void)finalize;	// 0x32c5e54d
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x32c217c9
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x32c5d971
// converted property getter: - (int)historyItemLimit;	// 0x32c5d9c1
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x32c2bd71
- (id)itemForURL:(id)url;	// 0x32c237a9
- (id)itemForURLString:(id)urlstring;	// 0x32c237d5
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x32c1a025
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x32c1a055
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x32c5deb1
// converted property getter: - (id)orderedLastVisitedDays;	// 0x32c5df25
- (BOOL)removeAllItems;	// 0x32c5e321
- (BOOL)removeItem:(id)item;	// 0x32c5d7ed
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x32c5e3c5
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x32c5e43d
- (BOOL)removeItems:(id)items;	// 0x32c5d841
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x32c5da69
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x32c5d5d5
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x32c5d5f5
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x32c21129
@end

