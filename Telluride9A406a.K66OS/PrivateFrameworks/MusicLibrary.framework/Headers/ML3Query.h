/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ML3AggregateQuery, ML3MusicLibrary, NSArray, NSString, ML3Predicate;

@interface ML3Query : NSObject <NSCoding> {
@private
	ML3MusicLibrary *_library;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	ML3Predicate *_predicate;	// 12 = 0xc
	NSArray *_orderingProperties;	// 16 = 0x10
	BOOL _usingSections;	// 20 = 0x14
	ML3AggregateQuery *_nonDirectAggregateQuery;	// 24 = 0x18
}
@property(readonly, assign) unsigned countOfEntities;	// G=0x364b9b91; 
@property(readonly, assign) Class entityClass;	// G=0x364b76fd; @synthesize=_entityClass
@property(readonly, assign) BOOL hasEntities;	// G=0x364b7f1d; 
@property(readonly, assign) ML3MusicLibrary *library;	// G=0x364b1abd; @synthesize=_library
@property(readonly, assign) ML3AggregateQuery *nonDirectAggregateQuery;	// G=0x364d89c9; @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) NSArray *orderingProperties;	// G=0x364b93f9; @synthesize=_orderingProperties
@property(readonly, assign) ML3Predicate *predicate;	// G=0x364b93e9; @synthesize=_predicate
@property(readonly, assign) NSString *sectionProperty;	// G=0x364b7185; 
@property(readonly, assign) BOOL usingSections;	// G=0x364b9409; @synthesize=_usingSections
- (id)initWithCoder:(id)coder;	// 0x364d705d
- (id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingProperties:(id)properties usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query;	// 0x364b0a99
- (void)bindToCountSqlite3Statement:(sqlite3_stmt *)countSqlite3Statement bindingIndex:(inout int *)index;	// 0x364d89a9
- (void)bindToPersistentIDsSqlite3Statement:(sqlite3_stmt *)persistentIDsSqlite3Statement bindingIndex:(inout int *)index;	// 0x364b2c01
- (void)bindToSectionsSqlite3Statement:(sqlite3_stmt *)sectionsSqlite3Statement bindingIndex:(inout int *)index;	// 0x364b7251
// declared property getter: - (unsigned)countOfEntities;	// 0x364b9b91
- (void)dealloc;	// 0x364b3189
- (BOOL)deleteAllEntitiesFromLibrary;	// 0x364d75bd
- (BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)deletionType;	// 0x364d75d5
- (id)description;	// 0x364d7391
- (BOOL)distinctPersistentIDProperty;	// 0x364b0cf9
- (void)encodeWithCoder:(id)coder;	// 0x364d7135
// declared property getter: - (Class)entityClass;	// 0x364b76fd
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;	// 0x364b0b99
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;	// 0x364b0b69
- (void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;	// 0x364b770d
- (void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;	// 0x364d7d55
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x364b8941
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x364b6e1d
// declared property getter: - (BOOL)hasEntities;	// 0x364b7f1d
- (BOOL)isEqual:(id)equal;	// 0x364d7219
// declared property getter: - (id)library;	// 0x364b1abd
// declared property getter: - (id)nonDirectAggregateQuery;	// 0x364d89c9
// declared property getter: - (id)orderingProperties;	// 0x364b93f9
- (id)persistentIDProperty;	// 0x364b0e5d
// declared property getter: - (id)predicate;	// 0x364b93e9
// declared property getter: - (id)sectionProperty;	// 0x364b7185
- (id)sections;	// 0x364d7521
- (id)selectCountSQL;	// 0x364d88d5
- (id)selectPersistentIDsSQL;	// 0x364d88c1
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x364b0cfd
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by;	// 0x364b7765
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties;	// 0x364b1019
- (id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingProperties:(id)properties directionality:(id)directionality;	// 0x364b103d
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties;	// 0x364b0ff9
- (id)selectSQLWithColumns:(id)columns orderingProperties:(id)properties directionality:(id)directionality;	// 0x364d8889
- (id)selectSectionsSQLWithDistinctPersistentIDProperty:(BOOL)distinctPersistentIDProperty;	// 0x364b7001
- (id)selectUnorderedPersistentIDsSQL;	// 0x364d88ad
// declared property getter: - (BOOL)usingSections;	// 0x364b9409
- (id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;	// 0x364d8599
@end

