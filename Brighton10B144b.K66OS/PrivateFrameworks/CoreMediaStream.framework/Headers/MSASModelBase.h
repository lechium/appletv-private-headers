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
@property(readonly, assign) sqlite3 *db;	// G=0x337afefd; converted property
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;	// G=0x337b2701; @synthesize=_dbQueue
@property(readonly, assign, nonatomic) sqlite3 *dbQueueDB;	// G=0x337b2689; @synthesize=_db
@property(assign, nonatomic) BOOL dbWasRecreated;	// G=0x337b2711; S=0x337b2721; @synthesize=_dbWasRecreated
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x337b2699; @synthesize=_personID
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statementQueue;	// G=0x337b26c9; S=0x337b26d9; @synthesize=_statementQueue
@property(assign, nonatomic) CFDictionaryRef statements;	// G=0x337b26a9; S=0x337b26b9; @synthesize=_statements
- (id)initWithPersonID:(id)personID databasePath:(id)path currentVersion:(int)version;	// 0x337afd19
- (void).cxx_destruct;	// 0x337b2731
- (void)beginTransaction;	// 0x337b22e1
// converted property getter: - (sqlite3 *)db;	// 0x337afefd
// declared property getter: - (id)dbQueue;	// 0x337b2701
- (void)dbQueueBeginTransaction;	// 0x337b237d
// declared property getter: - (sqlite3 *)dbQueueDB;	// 0x337b2689
- (void)dbQueueDeletePersistentValueWithKey:(id)key;	// 0x337b2165
- (void)dbQueueEndTransaction;	// 0x337b24e9
- (void)dbQueueInitializeDatabasePath:(id)path currentVersion:(int)version;	// 0x337b007d
- (id)dbQueuePersistentDataForKey:(id)key;	// 0x337b19cd
- (id)dbQueuePersistentObjectForKey:(id)key;	// 0x337b1cc5
- (id)dbQueuePersistentStringForKey:(id)key;	// 0x337b1bb5
- (void)dbQueueRollbackTransaction;	// 0x337b25b9
- (void)dbQueueSetPersistentData:(id)data forKey:(id)key;	// 0x337b1e25
- (void)dbQueueSetPersistentObject:(id)object forKey:(id)key;	// 0x337b20ed
- (void)dbQueueSetPersistentString:(id)string forKey:(id)key;	// 0x337b2081
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;	// 0x337b0969
// declared property getter: - (BOOL)dbWasRecreated;	// 0x337b2711
- (void)dealloc;	// 0x337b0fb9
- (void)deletePersistentValueWithKey:(id)key;	// 0x337b18f1
- (void)endTransaction;	// 0x337b244d
- (id)persistentObjectForKey:(id)key;	// 0x337b15c1
- (id)persistentStringForKey:(id)key;	// 0x337b12a5
// declared property getter: - (id)personID;	// 0x337b2699
// declared property setter: - (void)setDbWasRecreated:(BOOL)recreated;	// 0x337b2721
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x337b17b9
- (void)setPersistentString:(id)string forKey:(id)key;	// 0x337b14b1
// declared property setter: - (void)setStatementQueue:(id)queue;	// 0x337b26d9
// declared property setter: - (void)setStatements:(CFDictionaryRef)statements;	// 0x337b26b9
- (void)shutDownForDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x337b0c5d
- (sqlite3_stmt *)statementForString:(id)string;	// 0x337b0fe5
// declared property getter: - (id)statementQueue;	// 0x337b26c9
// declared property getter: - (CFDictionaryRef)statements;	// 0x337b26a9
@end
