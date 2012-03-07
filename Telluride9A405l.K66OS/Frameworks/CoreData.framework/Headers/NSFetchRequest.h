/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSPersistentStoreRequest.h"

@class NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {
@private
	NSArray *_groupByProperties;	// 8 = 0x8
	NSPredicate *_havingPredicate;	// 12 = 0xc
	unsigned _offset;	// 16 = 0x10
	NSArray *_valuesToFetch;	// 20 = 0x14
	NSEntityDescription *_entity;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	NSArray *_sortDescriptors;	// 32 = 0x20
	unsigned _batchSize;	// 36 = 0x24
	unsigned long _fetchLimit;	// 40 = 0x28
	NSArray *_relationshipKeyPathsForPrefetching;	// 44 = 0x2c
	fetchRequestFlags _flags;	// 48 = 0x30
}
@property(retain) id affectedStores;	// G=0x33f47a3d; S=0x33f98a9d; converted property
@property(retain) NSEntityDescription *entity;	// G=0x33f4686d; S=0x33f4542d; converted property
@property(assign) unsigned fetchBatchSize;	// G=0x33f48429; S=0x33f98ae1; converted property
@property(assign) unsigned fetchLimit;	// G=0x33f46a21; S=0x33f4551d; converted property
@property(assign) unsigned fetchOffset;	// G=0x33f4c87d; S=0x33f98b09; converted property
@property(retain) NSArray *groupByProperties;	// G=0x33f98a11; S=0x33f98a01; converted property
@property(retain) NSPredicate *havingPredicate;	// G=0x33f4af85; S=0x33f98891; converted property
@property(assign) BOOL includesPendingChanges;	// G=0x33f9883d; S=0x33f454e1; converted property
@property(assign) BOOL includesPropertyValues;	// G=0x33f46a31; S=0x33f98b65; converted property
@property(assign) BOOL includesSubentities;	// G=0x33f49c09; S=0x33f98b9d; converted property
@property(retain) NSPredicate *predicate;	// G=0x33f49bf9; S=0x33f37af9; converted property
@property(retain) id propertiesToFetch;	// G=0x33f48439; S=0x33f60da5; converted property
@property(retain) id propertiesToGroupBy;	// G=0x33f4bd4d; S=0x33f988e9; converted property
@property(retain) NSArray *relationshipKeyPathsForPrefetching;	// G=0x33f48961; S=0x33f68341; converted property
@property(assign) unsigned resultType;	// G=0x33f46921; S=0x33f61ec5; converted property
@property(assign) BOOL returnsDistinctResults;	// G=0x33f626c5; S=0x33f98b31; converted property
@property(assign) BOOL returnsObjectsAsFaults;	// G=0x33f48449; S=0x33f98bd5; converted property
@property(assign) BOOL shouldRefreshRefetchedObjects;	// G=0x33f98861; S=0x33f98a61; converted property
@property(retain) NSArray *sortDescriptors;	// G=0x33f4c6c5; S=0x33f45545; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33f98839
+ (id)fetchRequestWithEntityName:(id)entityName;	// 0x33f379d5
+ (void)initialize;	// 0x33f66ad1
- (id)init;	// 0x33f37a79
- (id)initWithCoder:(id)coder;	// 0x33f99371
- (id)initWithEntityName:(id)entityName;	// 0x33f37a21
- (void)_incrementInUseCounter;	// 0x33f98875
- (BOOL)_isEditable;	// 0x33f37bad
- (id)_newValidatedProperties:(id)properties groupBy:(BOOL)by error:(id *)error;	// 0x33f60eb9
- (void)_resolveEntityWithContext:(id)context;	// 0x33f46679
- (void)_throwIfNotEditable;	// 0x33f37b4d
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x33f999c9
// converted property getter: - (id)affectedStores;	// 0x33f47a3d
- (id)copyWithZone:(NSZone *)zone;	// 0x33f9920d
- (void)dealloc;	// 0x33f5e66d
- (id)description;	// 0x33f98c0d
- (void)encodeWithCoder:(id)coder;	// 0x33f996ad
// converted property getter: - (id)entity;	// 0x33f4686d
- (id)entityName;	// 0x33f98a21
// converted property getter: - (unsigned)fetchBatchSize;	// 0x33f48429
// converted property getter: - (unsigned)fetchLimit;	// 0x33f46a21
// converted property getter: - (unsigned)fetchOffset;	// 0x33f4c87d
// converted property getter: - (id)groupByProperties;	// 0x33f98a11
- (BOOL)hasChanges;	// 0x33f9888d
- (unsigned)hash;	// 0x33f991e5
// converted property getter: - (id)havingPredicate;	// 0x33f4af85
// converted property getter: - (BOOL)includesPendingChanges;	// 0x33f9883d
// converted property getter: - (BOOL)includesPropertyValues;	// 0x33f46a31
// converted property getter: - (BOOL)includesSubentities;	// 0x33f49c09
- (BOOL)isEqual:(id)equal;	// 0x33f9905d
// converted property getter: - (id)predicate;	// 0x33f49bf9
// converted property getter: - (id)propertiesToFetch;	// 0x33f48439
// converted property getter: - (id)propertiesToGroupBy;	// 0x33f4bd4d
// converted property getter: - (id)relationshipKeyPathsForPrefetching;	// 0x33f48961
- (unsigned)requestType;	// 0x33f47a39
// converted property getter: - (unsigned)resultType;	// 0x33f46921
// converted property getter: - (BOOL)returnsDistinctResults;	// 0x33f626c5
// converted property getter: - (BOOL)returnsObjectsAsFaults;	// 0x33f48449
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x33f98a9d
// converted property setter: - (void)setEntity:(id)entity;	// 0x33f4542d
// converted property setter: - (void)setFetchBatchSize:(unsigned)size;	// 0x33f98ae1
// converted property setter: - (void)setFetchLimit:(unsigned)limit;	// 0x33f4551d
// converted property setter: - (void)setFetchOffset:(unsigned)offset;	// 0x33f98b09
// converted property setter: - (void)setGroupByProperties:(id)properties;	// 0x33f98a01
// converted property setter: - (void)setHavingPredicate:(id)predicate;	// 0x33f98891
// converted property setter: - (void)setIncludesPendingChanges:(BOOL)changes;	// 0x33f454e1
// converted property setter: - (void)setIncludesPropertyValues:(BOOL)values;	// 0x33f98b65
// converted property setter: - (void)setIncludesSubentities:(BOOL)subentities;	// 0x33f98b9d
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x33f37af9
// converted property setter: - (void)setPropertiesToFetch:(id)fetch;	// 0x33f60da5
// converted property setter: - (void)setPropertiesToGroupBy:(id)groupBy;	// 0x33f988e9
// converted property setter: - (void)setRelationshipKeyPathsForPrefetching:(id)prefetching;	// 0x33f68341
// converted property setter: - (void)setResultType:(unsigned)type;	// 0x33f61ec5
// converted property setter: - (void)setReturnsDistinctResults:(BOOL)results;	// 0x33f98b31
// converted property setter: - (void)setReturnsObjectsAsFaults:(BOOL)faults;	// 0x33f98bd5
// converted property setter: - (void)setShouldRefreshRefetchedObjects:(BOOL)refreshRefetchedObjects;	// 0x33f98a61
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x33f45545
// converted property getter: - (BOOL)shouldRefreshRefetchedObjects;	// 0x33f98861
// converted property getter: - (id)sortDescriptors;	// 0x33f4c6c5
- (id)stores;	// 0x33f999b9
@end
