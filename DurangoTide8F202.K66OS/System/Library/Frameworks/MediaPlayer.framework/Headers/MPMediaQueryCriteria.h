/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSMutableSet, NSSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
@private
	NSMutableSet *_filterPredicates;	// 4 = 0x4
	int _entityOrder;	// 8 = 0x8
	int _groupingType;	// 12 = 0xc
	NSSet *_itemPropertiesToFetch;	// 16 = 0x10
	NSSet *_collectionPropertiesToFetch;	// 20 = 0x14
}
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x31dfa561; S=0x31dfb4bd; @synthesize=_collectionPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x31dfb31d; 
@property(copy, nonatomic) NSSet *filterPredicates;	// G=0x31dfa531; S=0x31dfa7dd; @synthesize=_filterPredicates
@property(assign, nonatomic) int groupingType;	// G=0x31dfa541; S=0x31dfa551; @synthesize=_groupingType
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x31dfa521; S=0x31dfb4e9; @synthesize=_itemPropertiesToFetch
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x31dfad0d; 
- (id)init;	// 0x31dfa571
- (id)ML3CollectionsQueryInLibrary:(id)library;	// 0x31ded221
- (id)ML3ItemsQueryInLibrary:(id)library;	// 0x31decb95
- (id)ML3ItemsQueryInLibrary:(id)library orderingProperties:(id)properties nameBlankProperty:(id)property;	// 0x31dece59
- (id)ML3OrderingPropertiesForGroupingType:(int)groupingType;	// 0x31decbc1
- (void)addFilterPredicate:(id)predicate;	// 0x31dfa8d5
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x31dfa561
- (id)copyWithZone:(NSZone *)zone;	// 0x31dfaa95
- (void)dealloc;	// 0x31dfac29
- (id)description;	// 0x31dfac95
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x31dfb31d
// declared property getter: - (id)filterPredicates;	// 0x31dfa531
// declared property getter: - (int)groupingType;	// 0x31dfa541
- (unsigned)hash;	// 0x31dfb131
- (BOOL)isEqual:(id)equal;	// 0x31dfab4d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x31dfa521
- (id)predicateForProperty:(id)property;	// 0x31dfb019
- (void)removeFilterPredicate:(id)predicate;	// 0x31dfa885
- (void)removePredicatesForProperty:(id)property;	// 0x31dfae31
- (id)sanitizedQueryCriteria;	// 0x31dfa5ad
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x31dfb4bd
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x31dfa7dd
// declared property setter: - (void)setGroupingType:(int)type;	// 0x31dfa551
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x31dfb4e9
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x31dfad0d
@end

