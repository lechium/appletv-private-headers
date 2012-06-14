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

@class NSArray, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPMediaQuery *_sourceMediaQuery;	// 16 = 0x10
	NSArray *_sourceMediaQueryItems;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x309ce115; 
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x309cf2ad; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x309cda35
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x309cd9a1
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items shuffleType:(unsigned)type;	// 0x309cd8d5
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x309ce7d5
- (void)_rebuildCaches;	// 0x309ce851
- (void)_rebuildCachesWithInitialIndex:(unsigned)initialIndex;	// 0x309ce865
- (void)_rebuildGroupedCachesWithInitialItemIndex:(unsigned)initialItemIndex;	// 0x309ce909
- (void)_rebuildItemCachesWithInitialItemIndex:(unsigned)initialItemIndex;	// 0x309ceee9
- (void)_resetCaches;	// 0x309cf1dd
- (void)_shuffleMutableArray:(id)array withInitialIndex:(unsigned)initialIndex;	// 0x309cf235
- (id)copyWithZone:(NSZone *)zone;	// 0x309cdbc1
- (unsigned)count;	// 0x309cdc31
- (void)dealloc;	// 0x309cd9c1
- (void)encodeWithCoder:(id)coder;	// 0x309cdb29
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x309cdd59
- (unsigned)indexOfObject:(id)object;	// 0x309cdf75
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x309ce0c9
// declared property getter: - (id)items;	// 0x309ce115
- (id)objectAtIndex:(unsigned)index;	// 0x309ce27d
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x309ce419
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x309ce631
// declared property getter: - (id)sourceMediaQuery;	// 0x309cf2ad
- (void)unshuffle;	// 0x309ce7b5
@end
