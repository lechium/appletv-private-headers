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
@property(assign) int historyAgeInDaysLimit;	// G=0x3400f971; S=0x3400f5d5; converted property
@property(assign) int historyItemLimit;	// G=0x3400f9c1; S=0x3400f5f5; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x3400ff25; converted property
+ (void)initialize;	// 0x33fc21b9
- (id)init;	// 0x33fc223d
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x3400f6bd
- (void)addItemToDateCaches:(id)dateCaches;	// 0x33fd35ad
- (void)addItems:(id)items;	// 0x3400f8b9
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x33fd7875
- (id)ageLimitDate;	// 0x3400fa11
- (id)allItems;	// 0x3400f951
- (BOOL)containsURL:(id)url;	// 0x3400f919
- (id)data;	// 0x3400fcf5
- (void)dealloc;	// 0x340105cd
- (void)finalize;	// 0x3401054d
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x33fd37c9
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x3400f971
// converted property getter: - (int)historyItemLimit;	// 0x3400f9c1
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x33fddd71
- (id)itemForURL:(id)url;	// 0x33fd57a9
- (id)itemForURLString:(id)urlstring;	// 0x33fd57d5
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x33fcc025
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x33fcc055
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x3400feb1
// converted property getter: - (id)orderedLastVisitedDays;	// 0x3400ff25
- (BOOL)removeAllItems;	// 0x34010321
- (BOOL)removeItem:(id)item;	// 0x3400f7ed
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x340103c5
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x3401043d
- (BOOL)removeItems:(id)items;	// 0x3400f841
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x3400fa69
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x3400f5d5
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3400f5f5
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x33fd3129
@end
