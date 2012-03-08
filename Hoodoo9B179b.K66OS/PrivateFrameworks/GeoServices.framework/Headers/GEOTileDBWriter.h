/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSMutableSet, GEOTileDBMRU, NSLock, NSString;

@interface GEOTileDBWriter : NSObject {
	NSString *_path;	// 4 = 0x4
	sqlite3 *_db;	// 8 = 0x8
	sqlite3_stmt *_versionQuery;	// 12 = 0xc
	sqlite3_stmt *_versionInsert;	// 16 = 0x10
	sqlite3_stmt *_editionQuery;	// 20 = 0x14
	sqlite3_stmt *_editionDelete;	// 24 = 0x18
	sqlite3_stmt *_editionUpdate;	// 28 = 0x1c
	sqlite3_stmt *_tileInsert;	// 32 = 0x20
	sqlite3_stmt *_sizeQuery;	// 36 = 0x24
	long long _lastRowID;	// 40 = 0x28
	unsigned long long _databaseSize;	// 48 = 0x30
	BOOL _closed;	// 56 = 0x38
	BOOL _defunct;	// 57 = 0x39
	NSMutableArray *_writeList;	// 60 = 0x3c
	NSMutableSet *_uncommitedWriteSet;	// 64 = 0x40
	unsigned _pendingWriteBytes;	// 68 = 0x44
	NSLock *_writeListLock;	// 72 = 0x48
	dispatch_queue_s *_writeQueue;	// 76 = 0x4c
	void *_editionMap;	// 80 = 0x50
	long long _evictionRowsThreshold;	// 84 = 0x54
	GEOTileDBMRU *_tileDBMRU;	// 92 = 0x5c
}
@property(assign) BOOL closed;	// G=0x32ce3c15; S=0x32ce3b2d; 
@property(readonly, assign, nonatomic) unsigned long long databaseSize;	// G=0x32ce5401; @synthesize=_databaseSize
@property(readonly, assign, nonatomic) NSString *path;	// G=0x32ce53bd; @synthesize=_path
@property(retain, nonatomic) GEOTileDBMRU *tileDBMRU;	// G=0x32ce53cd; S=0x32ce53dd; @synthesize=_tileDBMRU
- (id)initWithPath:(id)path;	// 0x32ce2c39
- (void)_closeDB;	// 0x32ce3071
- (void)_createTables;	// 0x32ce315d
- (void)_deviceLocked;	// 0x32ce2f25
- (void)_evict;	// 0x32ce3c25
- (void)_localeChanged:(id)changed;	// 0x32ce2e89
- (void)_openDBForceRecreate:(BOOL)recreate;	// 0x32ce35ed
- (void)_openIfNecessary;	// 0x32ce3b01
- (void)_performWrites:(BOOL)writes;	// 0x32ce4a55
- (void)_prepareStatements;	// 0x32ce31c9
- (BOOL)_readEditions;	// 0x32ce34cd
- (void)_updateEdition:(id)edition;	// 0x32ce466d
- (void)_updateSize;	// 0x32ce35a1
- (void)_writeEntry:(id)entry;	// 0x32ce440d
- (void)_writeVersion;	// 0x32ce341d
- (void)addTile:(id)tile forKey:(GEOTileKey *)key edition:(unsigned)edition tileSet:(unsigned)set;	// 0x32ce4dc1
// declared property getter: - (BOOL)closed;	// 0x32ce3c15
// declared property getter: - (unsigned long long)databaseSize;	// 0x32ce5401
- (void)dealloc;	// 0x32ce522d
- (void)flushPendingWrites;	// 0x32ce2fd5
// declared property getter: - (id)path;	// 0x32ce53bd
- (id)pendingWriteForKey:(GEOTileKey *)key;	// 0x32ce4f59
- (void)pendingWritesForKeys:(id)keys handler:(id)handler;	// 0x32ce50b5
// declared property setter: - (void)setClosed:(BOOL)closed;	// 0x32ce3b2d
// declared property setter: - (void)setTileDBMRU:(id)dbmru;	// 0x32ce53dd
// declared property getter: - (id)tileDBMRU;	// 0x32ce53cd
@end

