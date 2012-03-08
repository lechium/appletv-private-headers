/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface VMUProcList : NSObject {
	NSLock *procLock;	// 4 = 0x4
	NSMapTable *allProcs;	// 8 = 0x8
	NSMapTable *filteredProcs;	// 12 = 0xc
	BOOL appsOnly;	// 16 = 0x10
	BOOL ownedOnly;	// 17 = 0x11
}
@property(assign) BOOL appsOnly;	// G=0x34d2be91; S=0x34d2befd; converted property
- (id)init;	// 0x34d2bf51
- (void)_populateFromSystem;	// 0x34d2c7c1
- (void)addProcInfo:(id)info;	// 0x34d2cc7d
- (id)allNames;	// 0x34d2c529
- (id)allPIDs;	// 0x34d2c615
- (id)allPathNames;	// 0x34d2c43d
- (id)allProcInfos;	// 0x34d2c721
// converted property getter: - (BOOL)appsOnly;	// 0x34d2be91
- (unsigned)count;	// 0x34d2c771
- (void)dealloc;	// 0x34d2ce39
- (void)finalize;	// 0x34d2cddd
- (id)newestProcInfo;	// 0x34d2c335
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target;	// 0x34d2bf2d
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target withContext:(void *)context;	// 0x34d2c0f1
- (id)newestProcInfoWithName:(id)name;	// 0x34d2c205
- (BOOL)ownedOnly:(BOOL)only;	// 0x34d2be81
- (id)procInfoWithPID:(int)pid;	// 0x34d2c079
- (void)removeProcInfo:(id)info;	// 0x34d2cc05
// converted property setter: - (void)setAppsOnly:(BOOL)only;	// 0x34d2befd
- (void)setOwnedOnly:(BOOL)only;	// 0x34d2becd
- (void)setProcInfos:(id)infos;	// 0x34d2cd05
- (BOOL)update;	// 0x34d2c9d9
- (BOOL)updateFromSystem;	// 0x34d2bea1
@end

