/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLConnection.h"
#import "CoreData-Structs.h"

@class NSString, NSSQLiteStatement, NSSQLEntity, NSMutableSet, NSMutableDictionary;

@interface NSSQLiteConnection : NSSQLConnection {
	sqlite3 *_db;	// 28 = 0x1c
	sqlite3_stmt *_vmstatement;	// 32 = 0x20
	int _rowsProcessedCount;	// 36 = 0x24
	unsigned _lastEntityKey;	// 40 = 0x28
	NSSQLEntity *_finalEntity;	// 44 = 0x2c
	NSSQLEntity *_lastEntity;	// 48 = 0x30
	sqlite3_stmt *_fetchPKStatement;	// 52 = 0x34
	sqlite3_stmt *_updatePKStatement;	// 56 = 0x38
	NSSQLiteStatement *_beginStatement;	// 60 = 0x3c
	NSSQLiteStatement *_commitStatement;	// 64 = 0x40
	NSSQLiteStatement *_rollbackStatement;	// 68 = 0x44
	NSMutableSet *_vmCachedStatements;	// 72 = 0x48
	NSMutableDictionary *_pragmaSettings;	// 76 = 0x4c
	CFDictionaryRef _cachedEntityUpdateStatements;	// 80 = 0x50
	double _timeOutOption;	// 84 = 0x54
	void *_extraBuffersForRegisteredFunctions[5];	// 92 = 0x5c
	NSString *_dbPathRegisteredWithBackupd;	// 112 = 0x70
	long long _vacuumTracker;	// 116 = 0x74
	sqliteConnectionFlags _sqliteConnectionFlags;	// 124 = 0x7c
	unsigned long long _debugInode;	// 128 = 0x80
}
+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;	// 0x30fa3b29
+ (const char *)_databaseOpenURLStringForURL:(id)url;	// 0x30fa5001
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x30fa59dd
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x30fa50d1
+ (void)_setDebugFlags:(int)flags;	// 0x30fa3b25
+ (void)initialize;	// 0x30eeee19
+ (int)readMagicWordFromPath:(const char *)path;	// 0x30fa4fa1
- (id)initWithAdapter:(id)adapter;	// 0x30eeee65
- (id)_adapter;	// 0x30eef1d1
- (id)_beginPowerAssertionWithAssert:(unsigned *)anAssert;	// 0x30fa646d
- (void)_bindVariablesWithDeletedRow:(id)deletedRow;	// 0x30fa7bd5
- (void)_bindVariablesWithInsertedRow:(id)insertedRow;	// 0x30fa6e29
- (void)_bindVariablesWithUpdatedRow:(id)updatedRow andOriginalRow:(id)row forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x30fa740d
- (void **)_buffersForRegisteredFunctions;	// 0x30ef004d
- (void)_clearBindVariablesForInsertedRow;	// 0x30fa7295
- (void)_clearBindVariablesForUpdateStatement:(id)updateStatement forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x30fa78e5
- (void)_clearCachedStatements;	// 0x30fa8729
- (void)_clearOtherStatements;	// 0x30fa86ed
- (void)_clearTransactionCaches;	// 0x30fa62e1
- (void)_configureAutoVacuum;	// 0x30faa0f5
- (void)_configureIntegrityCheck;	// 0x30ef0089
- (void)_configurePageSize;	// 0x30faa319
- (void)_configurePragmaOptions:(int)options;	// 0x30ef01bd
- (void)_configureSynchronousMode;	// 0x30ef0061
- (void)_configureUbiquityMetadataTable;	// 0x30ef1209
- (void)_endPowerAssertionWithAssert:(unsigned)anAssert andApp:(id)app;	// 0x30fa64fd
- (void)_ensureDatabaseOpen;	// 0x30ef10f1
- (void)_ensureNoFetchInProgress;	// 0x30ef11a9
- (void)_ensureNoStatementPrepared;	// 0x30ef114d
- (void)_ensureNoTransactionOpen;	// 0x30fa3e19
- (void)_executeSQLString:(id)string;	// 0x30ef0699
- (long long)_fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x30fa4b49
- (void)_finalizeStatement;	// 0x30ef3d99
- (void)_forceDisconnectOnError;	// 0x30fa6519
- (long long)_getCurrentAutoVacuumValue;	// 0x30faa7d9
- (BOOL)_hasTableWithName:(id)name;	// 0x30fa966d
- (id)_newValueForColumn:(id)column atIndex:(unsigned)index inStatement:(sqlite3_stmt *)statement;	// 0x30ef3239
- (void)_performPostSaveTasks;	// 0x30faa579
- (void)_registerExtraFunctions;	// 0x30eefc3d
- (int)_rowsChangedByLastExecute;	// 0x30fa6e0d
- (void)_setupVacuumIfNecessary;	// 0x30faa83d
- (sqlite3_stmt *)_vmstatement;	// 0x30fa8ac5
- (void)addPeerRange:(id)range;	// 0x30fab831
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x30fab8dd
- (id)allPeerRanges;	// 0x30faba55
- (void)beginTransaction;	// 0x30fa6a11
- (void)cacheCurrentDBStatementOn:(id)on;	// 0x30fa883d
- (void)cacheUpdateStatement:(id)statement forEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x30fa8001
- (id)cachedUpdateStatementForEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x30fa814d
- (BOOL)canConnect;	// 0x30eef135
- (void)commitTransaction;	// 0x30fa6b1d
- (void)connect;	// 0x30eef23d
- (id)createMapOfEntityNameToPKMaxForEntities:(id)entities;	// 0x30fad29d
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)pktable;	// 0x30fac2b5
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)ubrangeTable;	// 0x30facaa9
- (BOOL)databaseIsEmpty;	// 0x30ef52e1
- (void)dealloc;	// 0x30fa3b2d
- (void)deleteCorrelation:(id)correlation;	// 0x30fa7f85
- (void)deleteRow:(id)row;	// 0x30fa8451
- (id)describeResults;	// 0x30fa881d
- (void)disconnect;	// 0x30fa6709
- (void)dropUbiquityTables;	// 0x30fae4cd
- (void)endFetch;	// 0x30ef3cf9
- (void)endPrimaryKeyGeneration;	// 0x30fa9821
- (void)execute;	// 0x30ef1fed
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x30fa4ded
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x30f02495
- (id)fetchTableCreationSQL;	// 0x30fa92b5
- (id)fetchTableNames;	// 0x30fa8f79
- (id)fetchUbiquityKnowledgeVector;	// 0x30faaa79
- (void)finalize;	// 0x30fa3cd9
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x30fa9831
- (void)handleCorruptedDB:(id)db;	// 0x30fa8891
- (BOOL)hasMetadataTable;	// 0x30fa97e9
- (BOOL)hasPrimaryKeyTable;	// 0x30faa0d1
- (void)insertCorrelation:(id)correlation;	// 0x30fa7e8d
- (void)insertRow:(id)row;	// 0x30fa7c75
- (BOOL)isFetchInProgress;	// 0x30fa3e05
- (BOOL)isLocalFS;	// 0x30faaa5d
- (BOOL)isOpen;	// 0x30eef1b5
- (id)newFetchedArray;	// 0x30ef30e1
- (BOOL)performIntegrityCheck;	// 0x30fa8ad5
- (void)prepareForPrimaryKeyGeneration;	// 0x30fa9811
- (void)prepareSQLStatement:(id)statement;	// 0x30ef18c1
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x30fa3e79
- (void)releaseSQLStatement;	// 0x30ef3d55
- (void)resetSQLStatement;	// 0x30fa86a1
- (void)rollbackTransaction;	// 0x30fa6c91
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x30fa8985
- (void)setUbiquityTableValue:(id)value forKey:(id)key;	// 0x30fad7fd
- (id)ubiquityTableKeysAndValues;	// 0x30fad961
- (id)ubiquityTableValueForKey:(id)key;	// 0x30fadf45
- (void)updateCorrelation:(id)correlation;	// 0x30fa7f09
- (void)updateRow:(id)row;	// 0x30fa817d
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x30fab5b5
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x30fab1bd
- (void)willCreateSchema;	// 0x30faa45d
@end
