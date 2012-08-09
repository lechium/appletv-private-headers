/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, NSPersistentStore;

@interface PFUbiquityPeerRangeCache : NSObject {
	NSMutableDictionary *_cachedRanges;	// 4 = 0x4
	NSMutableDictionary *_allEntityRanges;	// 8 = 0x8
	NSMutableDictionary *_translatedGlobalIDs;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
	NSPersistentStore *_privateStore;	// 28 = 0x1c
	BOOL _cachedStorePeerRanges;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x35d2b1c1; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSPersistentStore *privateStore;	// G=0x35d2b201; @synthesize=_privateStore
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x35d2b1d1; @synthesize=_storeName
@property(readonly, assign, nonatomic) NSDictionary *translatedGlobalIDs;	// G=0x35d2b1e1; @synthesize=_translatedGlobalIDs
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x35d2b1f1; @synthesize=_ubiquityRootLocation
+ (void)initialize;	// 0x35d29815
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x35d2b16d
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x35d2b1b9
- (id)initWithPrivateStore:(id)privateStore storeName:(id)name ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x35d29879
- (BOOL)cachePeerRanges:(id *)ranges;	// 0x35d29ab1
- (BOOL)cacheSQLCorePeerRange:(id)range error:(id *)error;	// 0x35d29bc9
- (id)cachedRangeForLocalPrimaryKey:(unsigned)localPrimaryKey ofEntityNamed:(id)entityNamed;	// 0x35d2a07d
- (id)cachedRangeForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x35d29eed
- (id)createGlobalObjectIDForManagedObjectID:(id)managedObjectID;	// 0x35d2a3e5
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)storeSaveSnapshot error:(id *)error;	// 0x35d2a60d
- (void)dealloc;	// 0x35d29995
// declared property getter: - (id)localPeerID;	// 0x35d2b1c1
- (unsigned)localPrimaryKeyForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x35d2a36d
// declared property getter: - (id)privateStore;	// 0x35d2b201
// declared property getter: - (id)storeName;	// 0x35d2b1d1
// declared property getter: - (id)translatedGlobalIDs;	// 0x35d2b1e1
// declared property getter: - (id)ubiquityRootLocation;	// 0x35d2b1f1
@end
