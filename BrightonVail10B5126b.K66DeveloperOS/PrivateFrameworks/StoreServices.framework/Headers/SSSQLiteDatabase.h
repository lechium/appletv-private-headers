/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSString *_databasePath;	// 12 = 0xc
	BOOL _readOnly;	// 16 = 0x10
	BOOL _isInTransaction;	// 17 = 0x11
	id _setupBlock;	// 20 = 0x14
	CFDictionaryRef _statementCache;	// 24 = 0x18
	BOOL _takesTaskCompletionAssertions;	// 28 = 0x1c
	SBSProcessAssertionRef _taskAssertion;	// 32 = 0x20
	int _taskAssertionCount;	// 36 = 0x24
}
@property(copy, nonatomic) id setupBlock;	// G=0x355079ad; S=0x355079c1; @synthesize=_setupBlock
@property(assign) BOOL takesTaskCompletionAssertions;	// G=0x35507129; S=0x355070a9; 
+ (void)_setTakesTaskCompletionAssertions:(BOOL)assertions;	// 0x35506fa1
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x355071f5
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x35506735
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x35506761
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x355063f5
- (id)initWithDatabaseURL:(id)databaseURL readOnly:(BOOL)only;	// 0x35506409
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x3550729d
- (void)_beginTaskCompletionAssertion;	// 0x355073a5
- (void)_endTaskCompletionAssertion;	// 0x3550742d
- (int)_openDatabase;	// 0x35507529
- (int)_openFlags;	// 0x355076c5
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x355076dd
- (void)_resetCorruptDatabase;	// 0x35507755
- (BOOL)_resetDatabaseWithPath:(id)path;	// 0x355077e5
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x35507875
- (void)accessDatabaseUsingBlock:(id)block;	// 0x35506789
- (void)beginTaskCompletionAssertion;	// 0x35506fb1
- (void)dealloc;	// 0x35506661
- (void)dispatchAfter:(unsigned long long)after block:(id)block;	// 0x35506835
- (void)dispatchBlockAsync:(id)async;	// 0x35506855
- (void)dispatchBlockSync:(id)sync;	// 0x35506891
- (void)endTaskCompletionAssertion;	// 0x3550702d
- (BOOL)executeSQL:(id)sql;	// 0x355068cd
- (id)newDispatchSourceWithType:(dispatch_source_type_s *)type;	// 0x35506af1
- (void)performTransactionWithBlock:(id)block;	// 0x35506b09
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x35506d51
// declared property setter: - (void)setSetupBlock:(id)block;	// 0x355079c1
// declared property setter: - (void)setTakesTaskCompletionAssertions:(BOOL)assertions;	// 0x355070a9
- (BOOL)setUserVersion:(int)version;	// 0x35506f31
// declared property getter: - (id)setupBlock;	// 0x355079ad
// declared property getter: - (BOOL)takesTaskCompletionAssertions;	// 0x35507129
@end

