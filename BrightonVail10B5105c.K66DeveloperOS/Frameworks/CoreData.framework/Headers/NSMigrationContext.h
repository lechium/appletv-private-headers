/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSPropertyMapping, NSMutableDictionary, NSMigrationManager;

@interface NSMigrationContext : NSObject {
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x362c4701; S=0x362c4711; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x362c485d; S=0x362c486d; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x362c47bd; S=0x362c47cd; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x362c44dd
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x362c4a79
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x362c48cd
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x362c4c25
- (void)clearAssociationTables;	// 0x362c4671
// converted property getter: - (id)currentEntityMapping;	// 0x362c4701
// converted property getter: - (unsigned)currentMigrationStep;	// 0x362c485d
// converted property getter: - (id)currentPropertyMapping;	// 0x362c47bd
- (void)dealloc;	// 0x362c45d9
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x362c4c69
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x362c4711
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x362c486d
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x362c47cd
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x362c4e39
@end

