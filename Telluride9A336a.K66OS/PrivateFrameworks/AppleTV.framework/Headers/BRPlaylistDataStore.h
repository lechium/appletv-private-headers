/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRDataStore.h"

@protocol BRMediaCollection;

@interface BRPlaylistDataStore : BRDataStore {
@private
	id<BRMediaCollection> _playlist;	// 40 = 0x28
}
- (id)initWithPlaylist:(id)playlist mediaTypes:(id)types;	// 0x33b340e1
- (void)addObject:(id)object;	// 0x33b34431
- (void)dealloc;	// 0x33b34141
- (id)loadData;	// 0x33b341e1
- (void)objectModified:(id)modified;	// 0x33b34435
- (id)playlist;	// 0x33b3418d
- (void)removeObject:(id)object;	// 0x33b34485
- (BOOL)storeAppliesToObject:(id)object;	// 0x33b3419d
@end
