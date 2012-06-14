/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSPersistentStoreRequest.h"

@class NSPredicate, NSArray, NSEntityDescription;

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
@property(retain) id affectedStores;	// G=0x32d16fc5; S=0x32d62b59; converted property
@property(retain) NSEntityDescription *entity;	// G=0x32d15d75; S=0x32d14af1; converted property
@property(assign) unsigned fetchBatchSize;	// G=0x32d179f1; S=0x32d62b2d; converted property
@property(assign) unsigned fetchLimit;	// G=0x32d15f19; S=0x32d14be1; converted property
@property(assign) unsigned fetchOffset;	// G=0x32d1b709; S=0x32d62b01; converted property
@property(retain) NSArray *groupByProperties;	// G=0x32d62c25; S=0x32d62c35; converted property
@property(retain) NSPredicate *havingPredicate;	// G=0x32d1a059; S=0x32d62d4d; converted property
@property(assign) BOOL includesPendingChanges;	// G=0x32d62aad; S=0x32d14ba1; converted property
@property(assign) BOOL includesPropertyValues;	// G=0x32d15f29; S=0x32d62a7d; converted property
@property(assign) BOOL includesSubentities;	// G=0x32d18ebd; S=0x32d62a4d; converted property
@property(retain) NSPredicate *predicate;	// G=0x32d18ead; S=0x32d09151; converted property
@property(retain) id propertiesToFetch;	// G=0x32d17a01; S=0x32d2ea55; converted property
@property(retain) id propertiesToGroupBy;	// G=0x32d1ac35; S=0x32d62c45; converted property
@property(retain) NSArray *relationshipKeyPathsForPrefetching;	// G=0x32d17ded; S=0x32d350ad; converted property
@property(assign) unsigned resultType;	// G=0x32d15e15; S=0x32d2f519; converted property
@property(assign) BOOL returnsDistinctResults;	// G=0x32d2fcdd; S=0x32d62ad1; converted property
@property(assign) BOOL returnsObjectsAsFaults;	// G=0x32d17a11; S=0x32d62a1d; converted property
@property(assign) BOOL shouldRefreshRefetchedObjects;	// G=0x32d62b9d; S=0x32d62bb1; converted property
@property(retain) NSArray *sortDescriptors;	// G=0x32d1b559; S=0x32d14c0d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d61d35
+ (id)fetchRequestWithEntityName:(id)entityName;	// 0x32d0903d
+ (void)initialize;	// 0x32d33a91
- (id)init;	// 0x32d090dd
- (id)initWithCoder:(id)coder;	// 0x32d62019
- (id)initWithEntityName:(id)entityName;	// 0x32d09089
- (void)_incrementInUseCounter;	// 0x32d62da5
- (BOOL)_isEditable;	// 0x32d09205
- (id)_newValidatedProperties:(id)properties groupBy:(BOOL)by error:(id *)error;	// 0x32d2eb5d
- (void)_resolveEntityWithContext:(id)context;	// 0x32d15bc5
- (void)_throwIfNotEditable;	// 0x32d091a5
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 uniquedMappings:(id)mappings entities:(id)entities;	// 0x32d63531
// converted property getter: - (id)affectedStores;	// 0x32d16fc5
- (id)copyWithZone:(NSZone *)zone;	// 0x32d622f1
- (void)dealloc;	// 0x32d2c40d
- (id)description;	// 0x32d625ed
- (void)encodeWithCoder:(id)coder;	// 0x32d61d39
// converted property getter: - (id)entity;	// 0x32d15d75
- (id)entityName;	// 0x32d62bed
// converted property getter: - (unsigned)fetchBatchSize;	// 0x32d179f1
// converted property getter: - (unsigned)fetchLimit;	// 0x32d15f19
// converted property getter: - (unsigned)fetchOffset;	// 0x32d1b709
// converted property getter: - (id)groupByProperties;	// 0x32d62c25
- (BOOL)hasChanges;	// 0x32d62dcd
- (unsigned)hash;	// 0x32d62449
// converted property getter: - (id)havingPredicate;	// 0x32d1a059
// converted property getter: - (BOOL)includesPendingChanges;	// 0x32d62aad
// converted property getter: - (BOOL)includesPropertyValues;	// 0x32d15f29
// converted property getter: - (BOOL)includesSubentities;	// 0x32d18ebd
- (BOOL)isEqual:(id)equal;	// 0x32d62471
// converted property getter: - (id)predicate;	// 0x32d18ead
// converted property getter: - (id)propertiesToFetch;	// 0x32d17a01
// converted property getter: - (id)propertiesToGroupBy;	// 0x32d1ac35
// converted property getter: - (id)relationshipKeyPathsForPrefetching;	// 0x32d17ded
- (unsigned)requestType;	// 0x32d16fc1
// converted property getter: - (unsigned)resultType;	// 0x32d15e15
// converted property getter: - (BOOL)returnsDistinctResults;	// 0x32d2fcdd
// converted property getter: - (BOOL)returnsObjectsAsFaults;	// 0x32d17a11
// converted property setter: - (void)setAffectedStores:(id)stores;	// 0x32d62b59
// converted property setter: - (void)setEntity:(id)entity;	// 0x32d14af1
// converted property setter: - (void)setFetchBatchSize:(unsigned)size;	// 0x32d62b2d
// converted property setter: - (void)setFetchLimit:(unsigned)limit;	// 0x32d14be1
// converted property setter: - (void)setFetchOffset:(unsigned)offset;	// 0x32d62b01
// converted property setter: - (void)setGroupByProperties:(id)properties;	// 0x32d62c35
// converted property setter: - (void)setHavingPredicate:(id)predicate;	// 0x32d62d4d
// converted property setter: - (void)setIncludesPendingChanges:(BOOL)changes;	// 0x32d14ba1
// converted property setter: - (void)setIncludesPropertyValues:(BOOL)values;	// 0x32d62a7d
// converted property setter: - (void)setIncludesSubentities:(BOOL)subentities;	// 0x32d62a4d
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x32d09151
// converted property setter: - (void)setPropertiesToFetch:(id)fetch;	// 0x32d2ea55
// converted property setter: - (void)setPropertiesToGroupBy:(id)groupBy;	// 0x32d62c45
// converted property setter: - (void)setRelationshipKeyPathsForPrefetching:(id)prefetching;	// 0x32d350ad
// converted property setter: - (void)setResultType:(unsigned)type;	// 0x32d2f519
// converted property setter: - (void)setReturnsDistinctResults:(BOOL)results;	// 0x32d62ad1
// converted property setter: - (void)setReturnsObjectsAsFaults:(BOOL)faults;	// 0x32d62a1d
// converted property setter: - (void)setShouldRefreshRefetchedObjects:(BOOL)refreshRefetchedObjects;	// 0x32d62bb1
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x32d14c0d
// converted property getter: - (BOOL)shouldRefreshRefetchedObjects;	// 0x32d62b9d
// converted property getter: - (id)sortDescriptors;	// 0x32d1b559
- (id)stores;	// 0x32d62dbd
@end

