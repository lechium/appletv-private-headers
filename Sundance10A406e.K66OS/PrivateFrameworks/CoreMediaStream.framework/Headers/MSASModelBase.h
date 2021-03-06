/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MSASModelBase : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
	CFDictionaryRef _statements;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_statementQueue;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_dbQueue;	// 20 = 0x14
	BOOL _dbWasRecreated;	// 24 = 0x18
}
@property(readonly, assign) sqlite3 *db;	// G=0x371a0559; converted property
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;	// G=0x371a2d5d; @synthesize=_dbQueue
@property(readonly, assign, nonatomic) sqlite3 *dbQueueDB;	// G=0x371a2ce5; @synthesize=_db
@property(assign, nonatomic) BOOL dbWasRecreated;	// G=0x371a2d6d; S=0x371a2d7d; @synthesize=_dbWasRecreated
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x371a2cf5; @synthesize=_personID
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue;	// G=0x371a2d25; S=0x371a2d35; @synthesize=_statementQueue
@property(assign, nonatomic) CFDictionaryRef statements;	// G=0x371a2d05; S=0x371a2d15; @synthesize=_statements
- (id)initWithPersonID:(id)personID databasePath:(id)path currentVersion:(int)version;	// 0x371a0375
- (void).cxx_destruct;	// 0x371a2d8d
- (void)beginTransaction;	// 0x371a293d
// converted property getter: - (sqlite3 *)db;	// 0x371a0559
// declared property getter: - (id)dbQueue;	// 0x371a2d5d
- (void)dbQueueBeginTransaction;	// 0x371a29d9
// declared property getter: - (sqlite3 *)dbQueueDB;	// 0x371a2ce5
- (void)dbQueueDeletePersistentValueWithKey:(id)key;	// 0x371a27c1
- (void)dbQueueEndTransaction;	// 0x371a2b45
- (void)dbQueueInitializeDatabasePath:(id)path currentVersion:(int)version;	// 0x371a06d9
- (id)dbQueuePersistentDataForKey:(id)key;	// 0x371a2029
- (id)dbQueuePersistentObjectForKey:(id)key;	// 0x371a2321
- (id)dbQueuePersistentStringForKey:(id)key;	// 0x371a2211
- (void)dbQueueRollbackTransaction;	// 0x371a2c15
- (void)dbQueueSetPersistentData:(id)data forKey:(id)key;	// 0x371a2481
- (void)dbQueueSetPersistentObject:(id)object forKey:(id)key;	// 0x371a2749
- (void)dbQueueSetPersistentString:(id)string forKey:(id)key;	// 0x371a26dd
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x371a0fc5
// declared property getter: - (BOOL)dbWasRecreated;	// 0x371a2d6d
- (void)dealloc;	// 0x371a1615
- (void)deletePersistentValueWithKey:(id)key;	// 0x371a1f4d
- (void)endTransaction;	// 0x371a2aa9
- (id)persistentObjectForKey:(id)key;	// 0x371a1c1d
- (id)persistentStringForKey:(id)key;	// 0x371a1901
// declared property getter: - (id)personID;	// 0x371a2cf5
// declared property setter: - (void)setDbWasRecreated:(BOOL)recreated;	// 0x371a2d7d
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x371a1e15
- (void)setPersistentString:(id)string forKey:(id)key;	// 0x371a1b0d
// declared property setter: - (void)setStatementQueue:(id)queue;	// 0x371a2d35
// declared property setter: - (void)setStatements:(CFDictionaryRef)statements;	// 0x371a2d15
- (void)shutDownForDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x371a12b9
- (sqlite3_stmt *)statementForString:(id)string;	// 0x371a1641
// declared property getter: - (id)statementQueue;	// 0x371a2d25
// declared property getter: - (CFDictionaryRef)statements;	// 0x371a2d05
@end

