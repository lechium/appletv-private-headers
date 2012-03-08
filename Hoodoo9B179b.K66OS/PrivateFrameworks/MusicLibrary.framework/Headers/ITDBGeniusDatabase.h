/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3SqliteDatabase;

__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject {
@private
	ML3SqliteDatabase *_db;	// 4 = 0x4
	double _connectionFailedTime;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 16 = 0x10
	BOOL _isInTransaction;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x3002037d; S=0x3002038d; @synthesize=_isInTransaction
+ (id)fallbackGeniusDatabaseFilePath;	// 0x3001f231
+ (id)geniusDatabaseFilePath;	// 0x30013ce9
+ (id)sharedGeniusDatabase;	// 0x30013b41
- (id)init;	// 0x30013b8d
- (void)_connect;	// 0x30013c21
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x3001f975
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x3001fda9
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x3001f331
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x3001f50d
- (BOOL)_hasAnySongs;	// 0x30020049
- (unsigned)_hasRowsInTable:(id)table;	// 0x30013d9d
- (void)_loadDatabaseAtPath:(id)path;	// 0x30013d05
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x3001fe05
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x3001fdd9
- (id)copyGeniusConfigrationDataAndBytes;	// 0x300201a9
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30020201
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x30020265
- (id)database;	// 0x30013ee1
- (unsigned)defaultMinTrackCount;	// 0x30020149
- (unsigned)defaultTrackCount;	// 0x30020179
- (unsigned)geniusConfigurationVersion;	// 0x300201dd
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x300202c9
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x300202fd
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x3002033d
- (BOOL)hasDatabase;	// 0x30020019
- (BOOL)hasGeniusDataAvailable;	// 0x300200dd
- (BOOL)hasGeniusFeatureEnabled;	// 0x30013bd5
// declared property getter: - (BOOL)isInTransaction;	// 0x3002037d
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x3002038d
@end

