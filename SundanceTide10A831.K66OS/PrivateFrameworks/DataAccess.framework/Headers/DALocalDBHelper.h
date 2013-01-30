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
@property(readonly, assign) void *abDB;	// G=0x32182949; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x32183899; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x32183889; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x32182f19; converted property
@property(readonly, assign) int noteConnectionCount;	// G=0x32184115; converted property
@property(readonly, retain) NoteContext *noteDB;	// G=0x32183d05; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x32184125
+ (id)abTestABDBDir;	// 0x321841a9
+ (void)calSetTestCalDBDir:(id)dir;	// 0x321841b9
+ (id)calTestCalDBDir;	// 0x3218423d
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x32182875
- (void)_registerForAddressBookYieldNotifications;	// 0x32182959
- (void)_registerForCalendarYieldNotifications;	// 0x32182fcd
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x32182de9
- (id)abConstraintPlistPath;	// 0x32182f15
// converted property getter: - (void *)abDB;	// 0x32182949
- (void)abOpenDB;	// 0x32182aa9
- (void)abProcessAddedImages;	// 0x32182c95
- (void)abProcessAddedRecords;	// 0x32182c29
- (BOOL)abSaveDB;	// 0x32182d01
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x32183b3d
// converted property getter: - (void *)bookmarkDB;	// 0x32183899
- (BOOL)bookmarkOpenDB;	// 0x3218394d
- (void)bookmarkSaveDB;	// 0x32183a81
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x321836b9
// converted property getter: - (int)calConnectionCount;	// 0x32183889
// converted property getter: - (CalDatabase *)calDB;	// 0x32182f19
- (void)calOpenDB;	// 0x3218311d
- (void)calOpenDBWithChangeLogging;	// 0x3218327d
- (BOOL)calSaveDB;	// 0x321833c1
- (BOOL)calSaveDBAndFlushCaches;	// 0x3218353d
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x3218424d
- (BOOL)noteCloseDBAndSave:(BOOL)save;	// 0x32183fdd
// converted property getter: - (int)noteConnectionCount;	// 0x32184115
// converted property getter: - (id)noteDB;	// 0x32183d05
- (void)noteOpenDB;	// 0x32183db9
- (BOOL)noteSaveDB;	// 0x32183f19
@end
