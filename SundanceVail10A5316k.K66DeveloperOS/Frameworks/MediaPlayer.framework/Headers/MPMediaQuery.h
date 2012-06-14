/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItemCollection, NSSet, MPMediaLibrary, NSArray, MPMediaQuerySectionInfo;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
@private
	MPMediaQueryInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL _hasCollections;	// G=0x348646c5; 
@property(readonly, assign, nonatomic) BOOL _hasItems;	// G=0x34864699; 
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x348656c5; S=0x348656ed; @synthesize
@property(readonly, assign, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;	// G=0x348aa34d; 
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x348645fd; S=0x34864645; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x34864719; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x34864c85; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x34863f85; 
@property(retain) id criteria;	// G=0x3486566d; S=0x34865681; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x34864881; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x34863c81; S=0x34863cc9; 
@property(assign, nonatomic) int groupingType;	// G=0x34863fbd; S=0x34863fe1; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x34864585; S=0x348645a9; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x348646f1; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x34864c5d; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x34863f71; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x34863e31; S=0x34863e41; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x34864795; S=0x34864741; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x3486480d; S=0x348647dd; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x34864bbd; 
@property(assign, nonatomic) BOOL useSections;	// G=0x3486485d; S=0x34864839; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x34864be9; 
+ (id)ITunesUAudioQuery;	// 0x348638a1
+ (id)activeGeniusPlaylist;	// 0x348a9ead
+ (id)albumsQuery;	// 0x348634fd
+ (id)artistsQuery;	// 0x348635cd
+ (id)audibleAudiobooksQuery;	// 0x34863a7d
+ (id)audiobooksQuery;	// 0x348639c5
+ (id)compilationsQuery;	// 0x34863af9
+ (id)composersQuery;	// 0x34863bc9
+ (id)geniusMixesQuery;	// 0x34864485
+ (id)genresQuery;	// 0x34863c25
+ (void)initialize;	// 0x34862909
+ (id)movieRentalsQuery;	// 0x34864351
+ (id)moviesQuery;	// 0x34864299
+ (id)musicVideosQuery;	// 0x34864129
+ (id)playlistsQuery;	// 0x34863775
+ (id)podcastsQuery;	// 0x348637d1
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x34864031
+ (id)songsQuery;	// 0x3486369d
+ (id)tvShowsQuery;	// 0x348641e1
+ (id)videoPodcastsQuery;	// 0x348643cd
+ (id)videosQuery;	// 0x34864071
- (id)init;	// 0x34862959
- (id)initWithCoder:(id)coder;	// 0x34862ef5
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x3486296d
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x34862ae9
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x34862a75
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x348629e1
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x34865305
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x34865175
// declared property getter: - (BOOL)_hasCollections;	// 0x348646c5
// declared property getter: - (BOOL)_hasItems;	// 0x34864699
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x348656c5
- (BOOL)_isFilteringDisabled;	// 0x34865129
- (id)_itemsImmediately:(BOOL)immediately;	// 0x34863e85
// declared property getter: - (id)_orderingProperties;	// 0x34864795
- (id)_sanitizedQuery;	// 0x34864cad
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x34864741
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x34864d1d
- (void)addFilterPredicate:(id)predicate;	// 0x34863d1d
// declared property getter: - (id)collectionByJoiningCollections;	// 0x348aa34d
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x348645fd
// declared property getter: - (id)collectionSectionInfo;	// 0x34864719
// declared property getter: - (id)collectionSections;	// 0x34864c85
// declared property getter: - (id)collections;	// 0x34863f85
- (id)copyByRemovingStaticEntities;	// 0x348634a5
- (id)copyWithZone:(NSZone *)zone;	// 0x34863329
// converted property getter: - (id)criteria;	// 0x3486566d
- (void)dealloc;	// 0x34862b39
- (id)description;	// 0x34862b91
- (void)encodeWithCoder:(id)coder;	// 0x34863161
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x34864881
// declared property getter: - (id)filterPredicates;	// 0x34863c81
- (unsigned)groupingThreshold;	// 0x34864be5
// declared property getter: - (int)groupingType;	// 0x34863fbd
- (unsigned)hash;	// 0x34862eb5
- (BOOL)isEqual:(id)equal;	// 0x34862df9
// declared property getter: - (id)itemPropertiesToFetch;	// 0x34864585
// declared property getter: - (id)itemSectionInfo;	// 0x348646f1
// declared property getter: - (id)itemSections;	// 0x34864c5d
// declared property getter: - (id)items;	// 0x34863f71
// declared property getter: - (id)mediaLibrary;	// 0x34863e31
- (id)predicateForProperty:(id)property;	// 0x348aa059
- (void)removeFilterPredicate:(id)predicate;	// 0x34863da5
- (void)removePredicatesForProperty:(id)property;	// 0x348aa181
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x34864645
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x34865681
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x348aa2bd
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x34863cc9
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x348aa319
// declared property setter: - (void)setGroupingType:(int)type;	// 0x34863fe1
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x348645a9
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x34863e41
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x348647dd
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x34865625
// declared property setter: - (void)setUseSections:(BOOL)sections;	// 0x34864839
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x348656ed
// declared property getter: - (BOOL)sortItems;	// 0x3486480d
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x34864bbd
// declared property getter: - (BOOL)useSections;	// 0x3486485d
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x34865105
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x348650e1
// declared property getter: - (BOOL)willGroupEntities;	// 0x34864be9
@end

