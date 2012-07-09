/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSPersistentStore, NSMutableDictionary;

@interface PFUbiquityPeerRangeCache : NSObject {
	NSPersistentStore *_store;	// 4 = 0x4
	NSMutableDictionary *_cachedRanges;	// 8 = 0x8
	NSMutableDictionary *_allEntityRanges;	// 12 = 0xc
	NSMutableDictionary *_translatedGlobalIDs;	// 16 = 0x10
	NSString *_localPeerID;	// 20 = 0x14
	NSString *_storeName;	// 24 = 0x18
	BOOL _cachedStorePeerRanges;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x366c490d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSPersistentStore *store;	// G=0x366c492d; @synthesize=_store
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x366c491d; @synthesize=_storeName
@property(readonly, assign, nonatomic) NSDictionary *translatedGlobalIDs;	// G=0x366c493d; @synthesize=_translatedGlobalIDs
+ (void)initialize;	// 0x366c2ef1
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x366c48b9
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x366c4905
- (id)initForPersistentStore:(id)persistentStore andLocalPeerID:(id)anId;	// 0x366c2f55
- (BOOL)cachePeerRanges:(id *)ranges;	// 0x366c317d
- (BOOL)cacheSQLCorePeerRange:(id)range error:(id *)error;	// 0x366c3295
- (id)cachedRangeForLocalPrimaryKey:(unsigned)localPrimaryKey ofEntityNamed:(id)entityNamed;	// 0x366c378d
- (id)cachedRangeForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x366c35b9
- (id)createGlobalObjectIDForManagedObjectID:(id)managedObjectID;	// 0x366c3af5
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)storeSaveSnapshot error:(id *)error;	// 0x366c3d05
- (void)dealloc;	// 0x366c3081
// declared property getter: - (id)localPeerID;	// 0x366c490d
- (unsigned)localPrimaryKeyForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x366c3a7d
// declared property getter: - (id)store;	// 0x366c492d
// declared property getter: - (id)storeName;	// 0x366c491d
// declared property getter: - (id)translatedGlobalIDs;	// 0x366c493d
@end
