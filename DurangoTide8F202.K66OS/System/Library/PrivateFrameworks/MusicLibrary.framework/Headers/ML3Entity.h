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
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign) BOOL existsInLibrary;	// G=0x317ed625; 
@property(assign) ML3MusicLibrary *library;	// G=0x317eb711; S=0x31811cd5; @synthesize=_library
@property(readonly, assign) long long persistentID;	// G=0x317ed2b9; @synthesize=_persistentID
+ (id)aggregateQueryWithUnitQuery:(id)unitQuery foreignPersistentIDProperty:(id)property;	// 0x317e438d
+ (id)anyInLibrary:(id)library predicate:(id)predicate;	// 0x317e0861
+ (id)defaultOrderingProperties;	// 0x31811cbd
+ (id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery predicate:(id)predicate usingSections:(BOOL)sections;	// 0x31817ea9
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x317e10f9
+ (id)extraTablesToDelete;	// 0x31811ccd
+ (id)foreignColumnForProperty:(id)property;	// 0x31811cc5
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x31811cc1
+ (id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;	// 0x317e53c9
+ (id)indexableSQLForProperties:(id)properties;	// 0x31812a11
+ (BOOL)insertValues:(id)values intoTable:(id)table persistentID:(long long)anId library:(id)library;	// 0x317ecd11
+ (id)joinClauseForProperty:(id)property;	// 0x31811cb9
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x31811cc9
+ (id)newWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x317ec5b1
+ (id)newWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x317eb155
+ (id)orderingSQLForProperties:(id)properties directionality:(id)directionality;	// 0x317e49c1
+ (id)persistentIDColumnForTable:(id)table;	// 0x31811cd1
+ (void)predisambiguateProperties:(id)properties toDictionary:(id)dictionary;	// 0x317e3dcd
+ (id)predisambiguatedProperties;	// 0x317e1189
+ (id)queryWithLibrary:(id)library predicate:(id)predicate;	// 0x317eb77d
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties;	// 0x317eabe5
+ (id)queryWithLibrary:(id)library predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections;	// 0x317e4075
+ (id)queryWithLibrary:(id)library predicate:(id)predicate usingSections:(BOOL)sections;	// 0x31817f35
+ (id)representativeEntityOfEntity:(id)entity persistentIDProperty:(id)property foreignPersistentIDProperty:(id)property3;	// 0x31819735
+ (id)subselectPropertyForProperty:(id)property;	// 0x31811cb5
+ (id)subselectStatementForProperty:(id)property;	// 0x317e16ed
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x317ecb65
- (id)initWithPersistentID:(long long)persistentID inLibrary:(id)library;	// 0x317eb189
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x318120e9
- (id)copyWithZone:(NSZone *)zone;	// 0x318128d9
- (BOOL)deleteFromLibrary;	// 0x31812055
// declared property getter: - (BOOL)existsInLibrary;	// 0x317ed625
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x317eb251
- (unsigned)hash;	// 0x31811ca5
- (BOOL)isEqual:(id)equal;	// 0x31811ce5
// declared property getter: - (id)library;	// 0x317eb711
- (BOOL)matchesPredicate:(id)predicate;	// 0x3181256d
- (id)newSelectSQLForProperties:(id *)properties count:(unsigned)count predicate:(id)predicate;	// 0x317eb349
// declared property getter: - (long long)persistentID;	// 0x317ed2b9
// declared property setter: - (void)setLibrary:(id)library;	// 0x31811cd5
- (void)setValue:(id)value forProperty:(id)property;	// 0x317f0595
- (id)valueForProperty:(id)property;	// 0x317ec409
@end

