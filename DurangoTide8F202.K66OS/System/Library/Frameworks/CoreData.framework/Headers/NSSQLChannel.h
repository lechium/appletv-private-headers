/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLConnection, NSManagedObjectContext, NSSQLCore, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLChannel : NSObject {
@private
	NSSQLConnection *_connection;	// 4 = 0x4
	NSSQLCore *_sqlCore;	// 8 = 0x8
	NSSQLEntity *_currentEntity;	// 12 = 0xc
	NSMutableArray *_fetchProperties;	// 16 = 0x10
	NSManagedObjectContext *_currentMOCon;	// 20 = 0x14
}
@property(readonly, retain) NSSQLConnection *connection;	// G=0x330d715d; converted property
@property(retain) id currentContext;	// G=0x3316bb7d; S=0x330d5b8d; converted property
@property(readonly, retain) NSSQLCore *sqlCore;	// G=0x330f9681; converted property
- (id)initWithSQLCore:(id)sqlcore;	// 0x330f94c5
- (void)_closeChannel;	// 0x3316bb8d
- (void)_openChannel;	// 0x330d5b9d
- (id)_propertiesToFetch;	// 0x3316bd55
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)fetchRequest;	// 0x3316bdb1
// converted property getter: - (id)connection;	// 0x330d715d
// converted property getter: - (id)currentContext;	// 0x3316bb7d
- (void)dealloc;	// 0x33108fdd
- (void)endFetch;	// 0x33109051
- (void)endFetchAndRecycleStatement:(BOOL)statement;	// 0x330d9bdd
- (void)finalize;	// 0x3316bd75
- (BOOL)isFetchInProgress;	// 0x330d5b45
- (BOOL)selectCountWithFetchRequest:(id)fetchRequest;	// 0x3316bbad
- (void)selectRowsWithCachedStatement:(id)cachedStatement;	// 0x3316bc51
- (void)selectRowsWithFetchRequest:(id)fetchRequest;	// 0x3316bccd
- (void)selectRowsWithStatement:(id)statement;	// 0x330d5bed
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x330d5b8d
- (void)setCurrentEntity:(id)entity;	// 0x3316bb6d
// converted property getter: - (id)sqlCore;	// 0x330f9681
@end

