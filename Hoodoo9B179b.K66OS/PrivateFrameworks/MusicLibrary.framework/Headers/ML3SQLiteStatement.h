/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ML3SQLiteStatement : NSObject {
@private
	sqlite3_stmt *_sqliteStatement;	// 4 = 0x4
	BOOL _inUse;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL inUse;	// G=0x300126dd; S=0x3000c901; @synthesize=_inUse
@property(readonly, assign, nonatomic) sqlite3_stmt *sqliteStatement;	// G=0x3000c8f1; @synthesize=_sqliteStatement
- (id)initWithSqliteStatement:(sqlite3_stmt *)sqliteStatement;	// 0x3000c8b1
- (void)dealloc;	// 0x300178f5
// declared property getter: - (BOOL)inUse;	// 0x300126dd
// declared property setter: - (void)setInUse:(BOOL)use;	// 0x3000c901
// declared property getter: - (sqlite3_stmt *)sqliteStatement;	// 0x3000c8f1
@end

