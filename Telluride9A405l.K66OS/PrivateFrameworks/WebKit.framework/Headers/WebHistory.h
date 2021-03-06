/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
@private
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x353ca81d; S=0x353ca83d; converted property
@property(assign) int historyItemLimit;	// G=0x353ca861; S=0x353ca881; converted property
+ (void)_removeAllVisitedLinks;	// 0x353cacd9
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x353cacdd
+ (id)optionalSharedHistory;	// 0x353880d1
+ (void)setOptionalSharedHistory:(id)history;	// 0x353734ed
- (id)init;	// 0x3537336d
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x3538b605
- (id)_data;	// 0x3538fdad
- (id)_itemForURLString:(id)urlstring;	// 0x35396795
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x35388b71
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x353880e1
- (void)addItems:(id)items;	// 0x353ca915
- (id)allItems;	// 0x353cacb9
- (BOOL)containsURL:(id)url;	// 0x353ca8ed
- (void)dealloc;	// 0x353caa1d
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x353ca81d
// converted property getter: - (int)historyItemLimit;	// 0x353ca861
- (id)itemForURL:(id)url;	// 0x3538a685
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x3537dedd
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x35399071
- (id)orderedLastVisitedDays;	// 0x35399105
- (void)removeAllItems;	// 0x353ca961
- (void)removeItems:(id)items;	// 0x353ca9c9
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x353ca8a5
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x353ca83d
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x353ca881
@end

