/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@class NSString, NSSet;

@interface BRSeriesDataStore : BRDataStore {
@private
	NSSet *_seriesMediaTypes;	// 40 = 0x28
	NSString *_seriesName;	// 44 = 0x2c
	int _seriesDataStoreType;	// 48 = 0x30
}
+ (id)byDateDataStoreWithTypes:(id)types;	// 0x332af4cd
+ (id)byMostRecentDataStoreWithTypes:(id)types;	// 0x332af5c9
+ (id)byShowDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x332af521
+ (id)byUnwatchedByMostRecentDataStoreWithTypes:(id)types;	// 0x332af61d
+ (id)byUnwatchedDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x332af575
- (id)_aggregateSeries:(id)series aggregate:(id)aggregate sortByDate:(BOOL)date;	// 0x332afd85
- (id)_filteredSeriesFrom:(id)from;	// 0x332b01fd
- (id)_groupEpisodesIntoSeries:(id)series filterOutWatched:(BOOL)watched sortByDate:(BOOL)date;	// 0x332b0355
- (id)_groupSeriesIntoSeasons:(id)seasons filterOutWatched:(BOOL)watched;	// 0x332b0535
- (void)_handleObjectModifiedForMostRecentUnwatchedDataStore:(id)mostRecentUnwatchedDataStore;	// 0x332b0801
- (id)_initWithSeriesTypes:(id)seriesTypes seriesName:(id)name dataStoreType:(int)type;	// 0x332afcfd
- (id)_labelForSeason:(int)season;	// 0x332b00dd
- (id)_mediaTypePredicate;	// 0x332aff55
- (id)_primaryCollectionTitlesFromData:(id)data;	// 0x332b06f1
- (id)_seriesPredicate;	// 0x332b0081
- (id)_sortResultsByDate:(id)date;	// 0x332b0139
- (void)addObject:(id)object;	// 0x332af795
- (void)dealloc;	// 0x332af671
- (id)hashForData:(id)data;	// 0x332afbf9
- (id)loadData;	// 0x332af8b5
- (void)objectModified:(id)modified;	// 0x332af809
- (void)removeObject:(id)object;	// 0x332af8a5
- (BOOL)storeAppliesToObject:(id)object;	// 0x332af6d1
@end

