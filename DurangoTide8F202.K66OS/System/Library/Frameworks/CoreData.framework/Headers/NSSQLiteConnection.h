/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSSQLConnection.h"

@class NSMutableSet, NSString, NSMutableDictionary, NSSQLiteStatement, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLiteConnection : NSSQLConnection {
@private
	sqlite3 *_db;	// 28 = 0x1c
	sqlite3_stmt *_vmstatement;	// 32 = 0x20
	int _rowsProcessedCount;	// 36 = 0x24
	unsigned _lastEntityKey;	// 40 = 0x28
	NSString *_pathname;	// 44 = 0x2c
	NSSQLEntity *_finalEntity;	// 48 = 0x30
	NSSQLEntity *_lastEntity;	// 52 = 0x34
	sqlite3_stmt *_fetchPKStatement;	// 56 = 0x38
	sqlite3_stmt *_updatePKStatement;	// 60 = 0x3c
	NSSQLiteStatement *_beginStatement;	// 64 = 0x40
	NSSQLiteStatement *_commitStatement;	// 68 = 0x44
	NSSQLiteStatement *_rollbackStatement;	// 72 = 0x48
	NSMutableSet *_vmCachedStatements;	// 76 = 0x4c
	NSMutableDictionary *_pragmaSettings;	// 80 = 0x50
	CFDictionaryRef _cachedEntityUpdateStatements;	// 84 = 0x54
	double _timeOutOption;	// 88 = 0x58
	void *_extraBuffersForRegisteredFunctions[5];	// 96 = 0x60
	NSString *_dbPathRegisteredWithBackupd;	// 116 = 0x74
	long long _vacuumTracker;	// 120 = 0x78
	sqliteConnectionFlags _sqliteConnectionFlags;	// 128 = 0x80
}
+ (BOOL)_destroyPersistentStoreAtURL:(id)url error:(id *)error;	// 0x33187769
+ (BOOL)_preflightDatabaseAtURL:(id)url;	// 0x330f50b1
+ (void)_setDebugFlags:(int)flags;	// 0x331832b5
+ (void)initialize;	// 0x330f4cd5
+ (int)readMagicWordFromFD:(int)fd;	// 0x330f510d
- (id)initWithAdapter:(id)adapter;	// 0x330f4d15
- (id)_adapter;	// 0x330f5021
- (void)_bindVariablesWithDeletedRow:(id)deletedRow;	// 0x33183a05
- (void)_bindVariablesWithInsertedRow:(id)insertedRow;	// 0x33185c19
- (void)_bindVariablesWithUpdatedRow:(id)updatedRow andOriginalRow:(id)row forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x33186141
- (void **)_buffersForRegisteredFunctions;	// 0x330f5455
- (void)_clearBindVariablesForInsertedRow;	// 0x33185af1
- (void)_clearBindVariablesForUpdateStatement:(id)updateStatement forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x33185f31
- (void)_clearCachedStatements;	// 0x33108eb1
- (void)_clearOtherStatements;	// 0x33108f95
- (void)_clearTransactionCaches;	// 0x33108d31
- (void)_configureAutoVacuum;	// 0x3318341d
- (void)_configureIntegrityCheck;	// 0x330f548d
- (void)_configurePageSize;	// 0x331832f9
- (void)_configurePragmaOptions;	// 0x330f55a9
- (void)_configureSynchronousMode;	// 0x330f5465
- (void)_ensureDatabaseOpen;	// 0x330d621d
- (void)_ensureNoFetchInProgress;	// 0x330d6269
- (void)_ensureNoStatementPrepared;	// 0x330f6481
- (void)_ensureNoTransactionOpen;	// 0x33183d85
- (void)_executeSQLString:(id)string;	// 0x330f5acd
- (void)_finalizeStatement;	// 0x330d9ca9
- (void)_forceDisconnectOnError;	// 0x33185465
- (long long)_getCurrentAutoVacuumValue;	// 0x331857f1
- (BOOL)_hasTableWithName:(id)name;	// 0x33183685
- (id)_newValueForColumn:(id)column atIndex:(unsigned)index inStatement:(sqlite3_stmt *)statement;	// 0x330f6a09
- (void)_performPostSaveTasks;	// 0x33185849
- (void)_registerExtraFunctions;	// 0x330f5155
- (int)_rowsChangedByLastExecute;	// 0x331857d9
- (void)_setupVacuumIfNecessary;	// 0x33183a99
- (sqlite3_stmt *)_vmstatement;	// 0x331832c1
- (void)beginTransaction;	// 0x33184835
- (void)cacheCurrentDBStatementOn:(id)on;	// 0x331838c9
- (void)cacheUpdateStatement:(id)statement forEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x331864b1
- (id)cachedUpdateStatementForEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x33185441
- (BOOL)canConnect;	// 0x330f4fb1
- (void)commitTransaction;	// 0x33185665
- (void)connect;	// 0x330ceaa1
- (BOOL)databaseIsEmpty;	// 0x330f5041
- (void)dealloc;	// 0x3310910d
- (void)deleteCorrelation:(id)correlation;	// 0x3318392d
- (void)deleteRow:(id)row;	// 0x33183ec1
- (id)describeResults;	// 0x3318390d
- (void)disconnect;	// 0x33108be1
- (void)endFetch;	// 0x330d7ac9
- (void)endPrimaryKeyGeneration;	// 0x33183639
- (void)execute;	// 0x330d62e1
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x331845ad
- (int)fetchResultSet:(void *)set usingFetchPlan:(void *)plan;	// 0x330d71dd
- (id)fetchTableCreationSQL;	// 0x331871d5
- (id)fetchTableNames;	// 0x331874c1
- (void)finalize;	// 0x33183c8d
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x33186649
- (void)handleCorruptedDB:(id)db;	// 0x33183dd9
- (BOOL)hasMetadataTable;	// 0x33183661
- (BOOL)hasPrimaryKeyTable;	// 0x33183615
- (void)insertCorrelation:(id)correlation;	// 0x33183999
- (void)insertRow:(id)row;	// 0x331843c1
- (BOOL)isFetchInProgress;	// 0x330d5b69
- (BOOL)isOpen;	// 0x330d5bd9
- (id)newFetchedArray;	// 0x330f68c9
- (BOOL)performIntegrityCheck;	// 0x33186e45
- (void)prepareForPrimaryKeyGeneration;	// 0x3318364d
- (void)prepareSQLStatement:(id)statement;	// 0x330d5c39
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x33184929
- (void)releaseSQLStatement;	// 0x330d9c6d
- (void)resetSQLStatement;	// 0x331865fd
- (void)rollbackTransaction;	// 0x331854f5
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x331837d9
- (void)updateRow:(id)row;	// 0x331840e5
- (void)willCreateSchema;	// 0x331832d1
@end

