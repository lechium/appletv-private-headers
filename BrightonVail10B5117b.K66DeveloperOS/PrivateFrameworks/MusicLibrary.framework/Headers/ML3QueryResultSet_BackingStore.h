/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3QueryResultSet_BackingStore : NSObject {
	vector<long long, std::allocator<long long> > _persistentIDs;	// 4 = 0x4
	vector<unsigned char, std::allocator<unsigned char> > _sections;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x348858b9; 
- (id).cxx_construct;	// 0x34883901
- (void).cxx_destruct;	// 0x348ed0b5
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> *)ids;	// 0x348ecf2d
- (BOOL)containsPersistentIDs:(const unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> *)ids;	// 0x348ece55
// declared property getter: - (unsigned)count;	// 0x348858b9
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x348ecd61
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x348851b5
- (long long)persistentIDAtIndex:(unsigned)index;	// 0x348858f1
@end
