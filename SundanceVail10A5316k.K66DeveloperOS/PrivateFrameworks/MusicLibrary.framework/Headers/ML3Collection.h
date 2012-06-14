/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Collection : ML3Entity {
}
+ (id)artworkCacheIDProperty;	// 0x3461a3f5
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x345eca51
+ (void)initialize;	// 0x345ec279
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x3461a3f9
+ (id)propertiesForGroupingKey;	// 0x3461a149
+ (id)trackForeignPersistentID;	// 0x3461a3f1
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3461a7d9
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x3461a185
- (void)updateCloudStatus;	// 0x3461a4a1
- (void)updateRepresentativeItem:(id)item inLibrary:(id)library withArtworkCacheID:(id)artworkCacheID;	// 0x3461a7d5
- (void)updateTrackValues:(id)values;	// 0x3461a3ed
@end

