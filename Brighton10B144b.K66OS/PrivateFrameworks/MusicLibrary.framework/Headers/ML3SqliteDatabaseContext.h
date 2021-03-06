/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface ML3SqliteDatabaseContext : NSObject {
	sqlite3 **_dbStack;	// 4 = 0x4
	unsigned _dbStackCurrentIndex;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 12 = 0xc
	BOOL _isInTransaction;	// 16 = 0x10
	NSString *_path;	// 20 = 0x14
	BOOL _enableWrites;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) sqlite3 *db;	// G=0x3469f7c1; 
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x346e8af9; S=0x346e8b09; @synthesize=_isInTransaction
- (id)initWithDB:(sqlite3 *)db;	// 0x3469f6e1
- (void).cxx_destruct;	// 0x346e8b19
// declared property getter: - (sqlite3 *)db;	// 0x3469f7c1
- (void)dealloc;	// 0x346e8911
- (BOOL)executeSQL:(id)sql;	// 0x346e8999
// declared property getter: - (BOOL)isInTransaction;	// 0x346e8af9
- (void)popDB;	// 0x346e8a3d
- (void)pushDB:(sqlite3 *)db;	// 0x346e89f5
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x346e8b09
- (sqlite3_stmt *)statementForSQL:(id)sql;	// 0x346aee71
@end

