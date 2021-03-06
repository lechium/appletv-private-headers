/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x345feec1; 
@property(assign) __weak ML3MusicLibrary *library;	// G=0x345ebcf5; S=0x346019f5; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x345f0e2d; @synthesize=_persistentID
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)persistentIDs count:(unsigned)count library:(id)library table:(id)table usingColumn:(id)column;	// 0x34600d65
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x345ec55d
+ (id)allProperties;	// 0x346015bd
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x345e2bb5
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x346015b9
+ (id)defaultOrderingProperties;	// 0x3460029d
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x34600f85
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x34614d01
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x345e3165
+ (void)enumeratePersistentIDsInLibrary:(id)library afterRevision:(long long)revision usingBlock:(id)block;	// 0x34601765
+ (void)enumeratePersistentIDsInLibrary:(id)library matchingPredicate:(id)predicate orderingTerms:(id)terms persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x345ff1b9
+ (id)extraTablesToDelete;	// 0x346015b1
+ (id)extraTablesToInsert;	// 0x345f0c5d
+ (id)foreignColumnForProperty:(id)property;	// 0x346002a9
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x346002a5
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x345ecb01
+ (BOOL)incrementRevisionWithLibrary:(id)library persistentID:(long long)anId deletionType:(int)type revisionType:(int)type4;	// 0x345fe1cd
+ (id)indexableSQLForProperties:(id)properties;	// 0x346015c1
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x345f0881
+ (BOOL)insertionChangesLibraryContents;	// 0x345f0c65
+ (id)joinClausesForProperty:(id)property;	// 0x34600061
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x34600d5d
+ (BOOL)libraryDynamicChangeForProperty:(id)property;	// 0x34600d61
+ (id)newSelectSQLForProperties:(const id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x345ffaa1
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x345ee44d
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x3460014d
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x345eb9e9
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x345eafc5
+ (id)persistentIDColumnForTable:(id)table;	// 0x346015b5
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x345e9d71
+ (id)predisambiguatedProperties;	// 0x345e3275
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x345ed051
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x345ebd95
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x345ea07d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms;	// 0x34614dd5
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections;	// 0x34614e65
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x34614c51
+ (id)replacerWithProperties:(id)properties databaseConnection:(id)connection;	// 0x34638be1
+ (int)revisionTrackingCode;	// 0x3460175d
+ (id)sectionPropertyForProperty:(id)property;	// 0x346002a1
+ (id)subselectPropertyForProperty:(id)property;	// 0x345ffa9d
+ (id)subselectStatementForProperty:(id)property;	// 0x345e34a1
+ (id)unsettableProperties;	// 0x345f0859
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x345eefd9
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x345eba3d
- (void).cxx_destruct;	// 0x34601a09
- (id)copyInLibrary:(id)library;	// 0x345feb25
- (id)copyWithZone:(NSZone *)zone;	// 0x345fed09
- (BOOL)deleteFromLibrary;	// 0x34601551
- (id)description;	// 0x345fee45
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x345f1e15
// declared property getter: - (BOOL)existsInLibrary;	// 0x345feec1
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x345ebb4d
- (unsigned)hash;	// 0x345fee35
- (void)incrementRevision;	// 0x34601995
- (BOOL)isEqual:(id)equal;	// 0x345fed7d
// declared property getter: - (id)library;	// 0x345ebcf5
- (BOOL)matchesPredicate:(id)predicate;	// 0x345ff835
// declared property getter: - (long long)persistentID;	// 0x345f0e2d
// declared property setter: - (void)setLibrary:(id)library;	// 0x346019f5
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x345f1219
- (BOOL)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x345f1261
- (BOOL)setValuesForPropertiesWithDictionary:(id)dictionary;	// 0x345f1c6d
- (id)valueForProperty:(id)property;	// 0x345ed009
@end

