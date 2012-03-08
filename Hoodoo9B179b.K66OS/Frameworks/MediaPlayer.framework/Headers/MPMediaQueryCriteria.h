/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray, NSSet, NSMutableSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
@private
	NSMutableSet *_filterPredicates;	// 4 = 0x4
	int _entityOrder;	// 8 = 0x8
	int _groupingType;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	NSSet *_itemPropertiesToFetch;	// 20 = 0x14
	NSSet *_collectionPropertiesToFetch;	// 24 = 0x18
}
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x309d4b09; S=0x309d4b19; @synthesize=_collectionPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x309d419d; 
@property(copy, nonatomic) NSSet *filterPredicates;	// G=0x309d4b91; S=0x309d4515; @synthesize=_filterPredicates
@property(assign, nonatomic) int groupingType;	// G=0x309d4b3d; S=0x309d4b4d; @synthesize=_groupingType
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x309d4ba1; S=0x309d4bb1; @synthesize=_itemPropertiesToFetch
@property(copy, nonatomic) NSArray *orderingProperties;	// G=0x309d4b5d; S=0x309d4b6d; @synthesize=_orderingProperties
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x309d48a1; 
- (id)init;	// 0x309d3b81
- (id)ML3CollectionsQueryInLibrary:(id)library;	// 0x309c0f21
- (id)ML3ItemsQueryInLibrary:(id)library;	// 0x309c0ad9
- (id)ML3ItemsQueryInLibrary:(id)library orderingProperties:(id)properties nameBlankProperty:(id)property;	// 0x309c0b35
- (id)ML3OrderingPropertiesForGroupingType:(int)groupingType;	// 0x309c082d
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)mporderingProperties;	// 0x309c0581
- (void)addFilterPredicate:(id)predicate;	// 0x309d4455
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x309d4b09
- (id)copyWithZone:(NSZone *)zone;	// 0x309d40b9
- (void)dealloc;	// 0x309d3bc1
- (id)description;	// 0x309d3c49
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x309d419d
// declared property getter: - (id)filterPredicates;	// 0x309d4b91
// declared property getter: - (int)groupingType;	// 0x309d4b3d
- (unsigned)hash;	// 0x309d3e45
- (BOOL)isEqual:(id)equal;	// 0x309d3d1d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x309d4ba1
// declared property getter: - (id)orderingProperties;	// 0x309d4b5d
- (id)predicateForProperty:(id)property;	// 0x309d45c9
- (void)removeFilterPredicate:(id)predicate;	// 0x309d44b9
- (void)removePredicatesForProperty:(id)property;	// 0x309d46c5
- (id)sanitizedQueryCriteria;	// 0x309d49ad
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x309d4b19
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x309d4515
// declared property setter: - (void)setGroupingType:(int)type;	// 0x309d4b4d
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x309d4bb1
// declared property setter: - (void)setOrderingProperties:(id)properties;	// 0x309d4b6d
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x309d48a1
@end

