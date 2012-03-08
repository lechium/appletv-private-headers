/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMappedObjectStore, NSString;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject {
@private
	NSMappedObjectStore *_store;	// 4 = 0x4
	NSString *_databaseUUID;	// 8 = 0x8
	NSMutableDictionary *_storeMetadata;	// 12 = 0xc
	unsigned long long _nextPK64;	// 16 = 0x10
	NSMutableDictionary *_mappings;	// 24 = 0x18
}
@property(retain) NSString *databaseUUID;	// G=0x32b7f6b5; S=0x32b7f66d; converted property
@property(retain) id metadata;	// G=0x32b7f10d; S=0x32b7f24d; converted property
@property(readonly, assign) unsigned long long nextPK64;	// G=0x32b7f701; converted property
@property(readonly, retain) NSMappedObjectStore *store;	// G=0x32b7f0e5; converted property
+ (void)initialize;	// 0x32b7f1c1
- (id)initWithStore:(id)store;	// 0x32b7f88d
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;	// 0x32b7f0f5
- (void)_setMetadata:(id)metadata;	// 0x32b7f281
- (id)_storeMetadataForSaving;	// 0x32b7f1dd
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;	// 0x32b7f315
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x32b7f805
- (id)configurationName;	// 0x32b7f86d
- (id)dataForKey:(id)key;	// 0x32b7f839
// converted property getter: - (id)databaseUUID;	// 0x32b7f6b5
- (void)dealloc;	// 0x32b7f11d
- (id)externalMapping;	// 0x32b7f0d5
- (id)handleFetchRequest:(id)request;	// 0x32b7f769
// converted property getter: - (id)metadata;	// 0x32b7f10d
// converted property getter: - (unsigned long long)nextPK64;	// 0x32b7f701
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x32b7f7d1
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x32b7f735
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x32b7f66d
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x32b7f24d
// converted property getter: - (id)store;	// 0x32b7f0e5
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x32b7f79d
@end

