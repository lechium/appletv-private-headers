/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectContext, NSMigrationContext, NSDictionary, NSManagedObjectModel, NSMappingModel, NSError;

@interface NSMigrationManager : NSObject {
@private
	NSManagedObjectModel *_sourceModel;	// 4 = 0x4
	NSDictionary *_sourceEntitiesByVersionHash;	// 8 = 0x8
	NSManagedObjectModel *_destinationModel;	// 12 = 0xc
	NSDictionary *_destinationEntitiesByVersionHash;	// 16 = 0x10
	NSMappingModel *_mappingModel;	// 20 = 0x14
	NSManagedObjectContext *_sourceManagedObjectContext;	// 24 = 0x18
	NSManagedObjectContext *_destinationManagedObjectContext;	// 28 = 0x1c
	NSMigrationContext *_migrationContext;	// 32 = 0x20
	NSDictionary *_userInfo;	// 36 = 0x24
	migrationManagerFlags _migrationManagerFlags;	// 40 = 0x28
	NSError *_migrationCancellationError;	// 44 = 0x2c
	id _reserved1;	// 48 = 0x30
	id _reserved2;	// 52 = 0x34
	id _reserved3;	// 56 = 0x38
	id _reserved4;	// 60 = 0x3c
}
@property(readonly, retain) NSManagedObjectModel *destinationModel;	// G=0x32b738d9; converted property
@property(readonly, retain) NSMappingModel *mappingModel;	// G=0x32b738b9; converted property
@property(readonly, retain) NSManagedObjectModel *sourceModel;	// G=0x32b738c9; converted property
@property(retain) NSDictionary *userInfo;	// G=0x32b73909; S=0x32b73a89; converted property
@property(assign) BOOL usesStoreSpecificMigrationManager;	// G=0x32b73931; S=0x32b73919; converted property
+ (BOOL)_performSanityCheckForMapping:(id)mapping fromSourceModel:(id)sourceModel toDestinationModel:(id)destinationModel;	// 0x32b75155
+ (int)migrationDebugLevel;	// 0x32b74fe1
+ (void)setMigrationDebugLevel:(int)level;	// 0x32b74ffd
- (id)initWithSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x32b74c59
- (void)_doCleanupOnFailure:(id)failure;	// 0x32b74f41
- (BOOL)_doFirstPassForMapping:(id)mapping error:(id *)error;	// 0x32b752dd
- (BOOL)_doSecondPassForMapping:(id)mapping error:(id *)error;	// 0x32b75795
- (BOOL)_doThirdPassForMapping:(id)mapping error:(id *)error;	// 0x32b75d6d
- (id)_evaluateSourceExpressionForMapping:(id)mapping entityPolicy:(id)policy;	// 0x32b74e69
- (id)_mappingNamed:(id)named;	// 0x32b74e2d
- (BOOL)_migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x32b76081
- (id)_migrationContext;	// 0x32b73945
- (BOOL)_validateAllObjectsAfterMigration:(id *)migration;	// 0x32b77041
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x32b74901
- (void)cancelMigrationWithError:(id)error;	// 0x32b73a2d
- (id)currentEntityMapping;	// 0x32b73b89
- (id)currentPropertyMapping;	// 0x32b73b61
- (void)dealloc;	// 0x32b73955
- (id)destinationContext;	// 0x32b738f9
- (id)destinationEntityForEntityMapping:(id)entityMapping;	// 0x32b74979
- (id)destinationInstancesForEntityMappingNamed:(id)entityMappingNamed sourceInstances:(id)instances;	// 0x32b745e1
- (id)destinationInstancesForSourceRelationshipNamed:(id)sourceRelationshipNamed sourceInstances:(id)instances;	// 0x32b73ed9
// converted property getter: - (id)destinationModel;	// 0x32b738d9
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string;	// 0x32b74e09
- (id)fetchRequestForSourceEntityNamed:(id)sourceEntityNamed predicateString:(id)string includesSubentities:(BOOL)subentities;	// 0x32b75019
// converted property getter: - (id)mappingModel;	// 0x32b738b9
- (BOOL)migrateStoreFromURL:(id)url type:(id)type options:(id)options withMappingModel:(id)mappingModel toDestinationURL:(id)destinationURL destinationType:(id)type6 destinationOptions:(id)options7 error:(id *)error;	// 0x32b74a21
- (float)migrationProgress;	// 0x32b73ad1
- (void)reset;	// 0x32b74a01
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32b73a89
// converted property setter: - (void)setUsesStoreSpecificMigrationManager:(BOOL)manager;	// 0x32b73919
- (id)sourceContext;	// 0x32b738e9
- (id)sourceEntityForEntityMapping:(id)entityMapping;	// 0x32b749bd
- (id)sourceInstancesForEntityMappingNamed:(id)entityMappingNamed destinationInstances:(id)instances;	// 0x32b73bb1
// converted property getter: - (id)sourceModel;	// 0x32b738c9
// converted property getter: - (id)userInfo;	// 0x32b73909
// converted property getter: - (BOOL)usesStoreSpecificMigrationManager;	// 0x32b73931
@end

