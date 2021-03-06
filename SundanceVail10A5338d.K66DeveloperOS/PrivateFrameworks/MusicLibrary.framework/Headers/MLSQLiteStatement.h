/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, MLSQLiteConnection;

@interface MLSQLiteStatement : NSObject {
	MLSQLiteConnection *_connection;	// 4 = 0x4
	NSString *_sql;	// 8 = 0x8
	sqlite3_stmt *_stmt;	// 12 = 0xc
	BOOL _clearBindingsAfterRunning;	// 16 = 0x10
	BOOL _hasBindings;	// 17 = 0x11
	BOOL _readonly;	// 18 = 0x12
}
@property(assign, nonatomic) BOOL clearBindingsAfterRunning;	// G=0x30b1c161; S=0x30b1c171; @synthesize=_clearBindingsAfterRunning
@property(readonly, assign, nonatomic) sqlite3_stmt *stmt;	// G=0x30b1a3e1; 
- (id)initWithConnection:(id)connection SQL:(id)sql;	// 0x30b1a209
- (void).cxx_destruct;	// 0x30b1c181
- (void)bindBytes:(const void *)bytes length:(int)length forParameterAtPosition:(int)position;	// 0x30b1a789
- (void)bindBytesNoCopy:(const void *)copy length:(int)length forParameterAtPosition:(int)position;	// 0x30b1a839
- (void)bindDBValue:(MLDBValue *)value forParameterAtPosition:(int)position;	// 0x30b1aaed
- (void)bindDouble:(double)aDouble forParameterAtPosition:(int)position;	// 0x30b1a705
- (void)bindInt64:(long long)a64 forParameterAtPosition:(int)position;	// 0x30b1a661
- (void)bindInt:(int)int forParameterAtPosition:(int)position;	// 0x30b1a5c1
- (void)bindNullForParameterAtPosition:(int)position;	// 0x30b1a70d
- (void)bindUTF8String:(const char *)string forParameterAtPosition:(int)position;	// 0x30b1a8e9
- (void)bindUTF8StringNoCopy:(const char *)copy forParameterAtPosition:(int)position;	// 0x30b1a995
- (void)bindUTF8StringNoCopy:(const char *)copy length:(int)length forParameterAtPosition:(int)position;	// 0x30b1aa3d
- (void)bindValue:(id)value forParameterAtPosition:(int)position;	// 0x30b1ab89
- (void)bindValuesForParameterNames:(id)parameterNames;	// 0x30b1ac61
- (void)clearBindings;	// 0x30b1a3b5
// declared property getter: - (BOOL)clearBindingsAfterRunning;	// 0x30b1c161
- (void)close;	// 0x30b1a369
- (void)dealloc;	// 0x30b1a2b1
- (id)description;	// 0x30b1a2f1
- (BOOL)enumerateRowsWithBusyHandler:(id)busyHandler cancelHandler:(id)handler valueHandler:(id)handler3;	// 0x30b1b5bd
- (BOOL)enumerateRowsWithBusyHandler:(id)busyHandler handler:(id)handler;	// 0x30b1adc9
- (BOOL)enumerateRowsWithHandler:(id)handler;	// 0x30b1ad95
- (BOOL)enumerateRowsWithValueHandler:(id)valueHandler;	// 0x30b1b59d
- (BOOL)hasAtLeastOneRow;	// 0x30b1b955
- (long long)int64ValueForFirstRowAndColumn;	// 0x30b1ba85
- (id)objectValueForFirstRowAndColumn;	// 0x30b1bf0d
- (int)positionForParameterWithName:(const char *)name;	// 0x30b1ad49
- (BOOL)run;	// 0x30b1ad79
- (BOOL)runWithBusyHandler:(id)busyHandler;	// 0x30b1adb1
// declared property setter: - (void)setClearBindingsAfterRunning:(BOOL)running;	// 0x30b1c171
// declared property getter: - (sqlite3_stmt *)stmt;	// 0x30b1a3e1
- (id)stringValueForFirstRowAndColumn;	// 0x30b1bca5
@end

