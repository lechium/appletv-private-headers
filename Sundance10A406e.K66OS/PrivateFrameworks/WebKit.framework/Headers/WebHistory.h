/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x3082b485; S=0x3082b465; converted property
@property(assign) int historyItemLimit;	// G=0x3082b445; S=0x3082b425; converted property
+ (void)_removeAllVisitedLinks;	// 0x3082b4d1
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x3082b4c5
+ (id)optionalSharedHistory;	// 0x307ea0b1
+ (void)setOptionalSharedHistory:(id)history;	// 0x307dd0fd
- (id)init;	// 0x307dcf35
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x307edcad
- (id)_data;	// 0x307d92e1
- (id)_itemForURLString:(id)urlstring;	// 0x307f6831
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x307eab85
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x307ea0c1
- (void)addItems:(id)items;	// 0x3082b36d
- (id)allItems;	// 0x3082b4a5
- (BOOL)containsURL:(id)url;	// 0x3082b3b9
- (void)dealloc;	// 0x3082b1b9
- (void)finalize;	// 0x3082b245
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x3082b485
// converted property getter: - (int)historyItemLimit;	// 0x3082b445
- (id)itemForURL:(id)url;	// 0x307e70f5
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x307d7369
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x307f9175
- (id)orderedLastVisitedDays;	// 0x307f8dc9
- (void)removeAllItems;	// 0x3082b309
- (void)removeItems:(id)items;	// 0x3082b2b5
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x3082b3dd
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x3082b465
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3082b425
- (void)timeZoneChanged:(id)changed;	// 0x3082b199
@end
