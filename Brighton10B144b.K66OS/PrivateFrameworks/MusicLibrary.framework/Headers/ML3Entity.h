/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3MusicLibrary;

@interface ML3Entity : NSObject {
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x346a1f5d; 
@property(assign) __weak ML3MusicLibrary *library;	// G=0x346abc9d; S=0x346c0639; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x346c064d; @synthesize=_persistentID
+ (BOOL)_deleteRowForPersistentIDs:(const long long *)persistentIDs count:(unsigned)count library:(id)library table:(id)table usingColumn:(id)column;	// 0x346bf87d
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x346a9845
+ (id)allProperties;	// 0x346c00d1
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x3469fa75
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x346c00cd
+ (id)defaultOrderingProperties;	// 0x346bf6c5
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x346bfa95
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x346d30a9
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x3469ba81
+ (void)enumeratePersistentIDsInLibrary:(id)library afterRevision:(long long)revision usingBlock:(id)block;	// 0x346c04e5
+ (void)enumeratePersistentIDsInLibrary:(id)library matchingPredicate:(id)predicate orderingTerms:(id)terms persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x346becf1
+ (id)extraTablesToDelete;	// 0x346c00c1
+ (id)extraTablesToInsert;	// 0x346c00c5
+ (id)foreignColumnForProperty:(id)property;	// 0x346bf6d1
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x346bf6cd
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x346a9da9
+ (BOOL)incrementRevisionWithLibrary:(id)library persistentID:(long long)anId deletionType:(int)type revisionType:(int)type4;	// 0x346ac6b1
+ (id)indexableSQLForProperties:(id)properties;	// 0x346c00d5
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x346bd949
+ (BOOL)insertionChangesLibraryContents;	// 0x346be911
+ (id)joinClausesForProperty:(id)property;	// 0x3469bc31
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x346a8f05
+ (BOOL)libraryDynamicChangeForProperty:(id)property;	// 0x346bf879
+ (id)newSelectSQLForProperties:(const id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x346a1689
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x346bf5dd
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x346bf641
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x346a1f09
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x346c0271
+ (id)persistentIDColumnForTable:(id)table;	// 0x346c00c9
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x3469b985
+ (id)predisambiguatedProperties;	// 0x346a8f09
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x346ae439
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x346d2fa1
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x346a2949
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms;	// 0x346d3189
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms propertyToCount:(id)count;	// 0x346d3215
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections;	// 0x346d32b1
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x346d2ff9
+ (id)replacerWithProperties:(id)properties databaseConnection:(id)connection;	// 0x346fb0bd
+ (int)revisionTrackingCode;	// 0x346c04dd
+ (id)sectionPropertyForProperty:(id)property;	// 0x346bf6c9
+ (id)subselectPropertyForProperty:(id)property;	// 0x346bf5d9
+ (id)subselectStatementForProperty:(id)property;	// 0x346a8fad
+ (id)unsettableProperties;	// 0x346bdea5
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x346bdf09
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x346a12e5
- (void).cxx_destruct;	// 0x346a2215
- (id)copyInLibrary:(id)library;	// 0x346be915
- (id)copyWithZone:(NSZone *)zone;	// 0x346beaf9
- (BOOL)deleteFromLibrary;	// 0x346c0061
- (id)description;	// 0x346bec35
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x346acc91
// declared property getter: - (BOOL)existsInLibrary;	// 0x346a1f5d
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x346a14ad
- (unsigned)hash;	// 0x346bec25
- (void)incrementRevision;	// 0x346c05d9
- (BOOL)isEqual:(id)equal;	// 0x346beb6d
// declared property getter: - (id)library;	// 0x346abc9d
- (BOOL)matchesPredicate:(id)predicate;	// 0x346bf371
// declared property getter: - (long long)persistentID;	// 0x346c064d
// declared property setter: - (void)setLibrary:(id)library;	// 0x346c0639
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x346aa381
- (BOOL)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x346aa3c9
- (BOOL)setValuesForPropertiesWithDictionary:(id)dictionary;	// 0x346abaed
- (id)valueForProperty:(id)property;	// 0x346a1465
@end
