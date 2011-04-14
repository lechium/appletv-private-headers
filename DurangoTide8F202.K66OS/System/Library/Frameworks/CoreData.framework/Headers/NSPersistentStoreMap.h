/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSMappedObjectStore;

__attribute__((visibility("hidden")))
@interface NSPersistentStoreMap : NSObject {
@private
	NSMappedObjectStore *_store;	// 4 = 0x4
	NSString *_databaseUUID;	// 8 = 0x8
	NSMutableDictionary *_storeMetadata;	// 12 = 0xc
	unsigned long long _nextPK64;	// 16 = 0x10
	NSMutableDictionary *_mappings;	// 24 = 0x18
}
@property(retain) NSString *databaseUUID;	// G=0x33166a49; S=0x33166a09; converted property
@property(retain) id metadata;	// G=0x331665dd; S=0x33166651; converted property
@property(readonly, assign) unsigned long long nextPK64;	// G=0x33166e71; converted property
@property(readonly, retain) NSMappedObjectStore *store;	// G=0x331665bd; converted property
+ (void)initialize;	// 0x33166b4d
- (id)initWithStore:(id)store;	// 0x33166b6d
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;	// 0x331665cd
- (void)_setMetadata:(id)metadata;	// 0x3316667d
- (id)_storeMetadataForSaving;	// 0x331665ed
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;	// 0x33166709
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x33166e15
- (id)configurationName;	// 0x33166a95
- (id)dataForKey:(id)key;	// 0x33166e41
// converted property getter: - (id)databaseUUID;	// 0x33166a49
- (void)dealloc;	// 0x33166ab5
- (id)externalMapping;	// 0x331665ad
- (id)handleFetchRequest:(id)request;	// 0x33166d8d
// converted property getter: - (id)metadata;	// 0x331665dd
// converted property getter: - (unsigned long long)nextPK64;	// 0x33166e71
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x33166de9
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x33166d5d
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x33166a09
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x33166651
// converted property getter: - (id)store;	// 0x331665bd
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x33166dbd
@end

