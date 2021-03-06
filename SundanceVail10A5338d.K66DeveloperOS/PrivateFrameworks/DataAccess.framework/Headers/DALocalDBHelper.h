/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library

@class NoteContext;

@interface DALocalDBHelper : NSObject {
	void *_abDB;	// 4 = 0x4
	int _abConnectionCount;	// 8 = 0x8
	CalDatabase *_calDB;	// 12 = 0xc
	int _calConnectionCount;	// 16 = 0x10
	void *_bookmarkDB;	// 20 = 0x14
	int _bookmarkConnectionCount;	// 24 = 0x18
	NoteContext *_noteDB;	// 28 = 0x1c
	int _noteConnectionCount;	// 32 = 0x20
	id _calUnitTestCallbackBlock;	// 36 = 0x24
}
@property(readonly, assign) void *abDB;	// G=0x3097497d; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x309758cd; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x309758bd; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x30974f4d; converted property
@property(readonly, assign) int noteConnectionCount;	// G=0x30976149; converted property
@property(readonly, retain) NoteContext *noteDB;	// G=0x30975d39; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x30976159
+ (id)abTestABDBDir;	// 0x309761dd
+ (void)calSetTestCalDBDir:(id)dir;	// 0x309761ed
+ (id)calTestCalDBDir;	// 0x30976271
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x309748a9
- (void)_registerForAddressBookYieldNotifications;	// 0x3097498d
- (void)_registerForCalendarYieldNotifications;	// 0x30975001
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x30974e1d
- (id)abConstraintPlistPath;	// 0x30974f49
// converted property getter: - (void *)abDB;	// 0x3097497d
- (void)abOpenDB;	// 0x30974add
- (void)abProcessAddedImages;	// 0x30974cc9
- (void)abProcessAddedRecords;	// 0x30974c5d
- (BOOL)abSaveDB;	// 0x30974d35
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x30975b71
// converted property getter: - (void *)bookmarkDB;	// 0x309758cd
- (BOOL)bookmarkOpenDB;	// 0x30975981
- (void)bookmarkSaveDB;	// 0x30975ab5
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x309756ed
// converted property getter: - (int)calConnectionCount;	// 0x309758bd
// converted property getter: - (CalDatabase *)calDB;	// 0x30974f4d
- (void)calOpenDB;	// 0x30975151
- (void)calOpenDBWithChangeLogging;	// 0x309752b1
- (BOOL)calSaveDB;	// 0x309753f5
- (BOOL)calSaveDBAndFlushCaches;	// 0x30975571
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x30976281
- (BOOL)noteCloseDBAndSave:(BOOL)save;	// 0x30976011
// converted property getter: - (int)noteConnectionCount;	// 0x30976149
// converted property getter: - (id)noteDB;	// 0x30975d39
- (void)noteOpenDB;	// 0x30975ded
- (BOOL)noteSaveDB;	// 0x30975f4d
@end

