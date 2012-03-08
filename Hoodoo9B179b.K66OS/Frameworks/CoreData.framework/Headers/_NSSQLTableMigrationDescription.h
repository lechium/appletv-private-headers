/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNumber, NSSQLEntity, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSSQLTableMigrationDescription : NSObject {
@private
	NSSQLEntity *_rootEntity;	// 4 = 0x4
	NSSQLEntity *_sourceRootEntity;	// 8 = 0x8
	int _migrationType;	// 12 = 0xc
	NSMutableArray *_addedEntityMigrations;	// 16 = 0x10
	NSMutableArray *_removedEntityMigrations;	// 20 = 0x14
	NSMutableArray *_copiedEntityMigrations;	// 24 = 0x18
	NSMutableArray *_transformedEntityMigrations;	// 28 = 0x1c
	NSMutableDictionary *_migrationByEntity;	// 32 = 0x20
	NSMutableArray *_addedManyToManys;	// 36 = 0x24
	NSMutableArray *_removedManyToManys;	// 40 = 0x28
	NSMutableArray *_transformedManyToManys;	// 44 = 0x2c
	NSMutableDictionary *_tempTableNames;	// 48 = 0x30
	NSNumber *_hasTransformedTableSchema;	// 52 = 0x34
}
@property(readonly, assign) int migrationType;	// G=0x32bd18d1; @synthesize=_migrationType
@property(readonly, assign) NSSQLEntity *rootEntity;	// G=0x32bd18c1; @synthesize=_rootEntity
- (id)initWithRootEntity:(id)rootEntity migrationType:(int)type;	// 0x32bd18e1
- (id)_addedManyToManys;	// 0x32bd1db5
- (BOOL)_hasTransformedTableSchema;	// 0x32bd4ce5
- (id)_removedManyToManys;	// 0x32bd2099
- (id)_retainedRemovedSubEntitiesOfEntity:(id)entity;	// 0x32bd237d
- (id)_sourceRootEntity;	// 0x32bd19b1
- (id)_tempNameForTableName:(id)tableName;	// 0x32bd1b11
- (id)_transformedManyToManys;	// 0x32bd1ba9
- (void)addEntityMigrationDescription:(id)description;	// 0x32bd4f89
- (void)appendStatementsToCompleteMigration:(id)completeMigration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd3be5
- (void)appendStatementsToPerformMigration:(id)performMigration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd3d65
- (void)appendStatementsToPrepareForMigration:(id)migration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd43f5
- (id)createFEKUpdateStatementsForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd2ff1
- (id)createInsertStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd33b5
- (id)createUpdateStatementForEntityMigration:(id)entityMigration migrationContext:(NSSQLMigrationContext)context;	// 0x32bd2c19
- (void)dealloc;	// 0x32bd51ed
// declared property getter: - (int)migrationType;	// 0x32bd18d1
- (id)newCopyAndInsertStatementForToOne:(id)one toManyToMany:(id)many fromTableName:(id)tableName invertColumns:(BOOL)columns migrationContext:(NSSQLMigrationContext)context;	// 0x32bd24c1
// declared property getter: - (id)rootEntity;	// 0x32bd18c1
@end

