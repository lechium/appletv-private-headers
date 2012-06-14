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
@property(assign) BOOL appsOnly;	// G=0x32cb6e91; S=0x32cb6efd; converted property
- (id)init;	// 0x32cb6f51
- (void)_populateFromSystem;	// 0x32cb77c1
- (void)addProcInfo:(id)info;	// 0x32cb7c7d
- (id)allNames;	// 0x32cb7529
- (id)allPIDs;	// 0x32cb7615
- (id)allPathNames;	// 0x32cb743d
- (id)allProcInfos;	// 0x32cb7721
// converted property getter: - (BOOL)appsOnly;	// 0x32cb6e91
- (unsigned)count;	// 0x32cb7771
- (void)dealloc;	// 0x32cb7e39
- (void)finalize;	// 0x32cb7ddd
- (id)newestProcInfo;	// 0x32cb7335
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target;	// 0x32cb6f2d
- (id)newestProcInfoSatisfyingCondition:(SEL)condition forTarget:(id)target withContext:(void *)context;	// 0x32cb70f1
- (id)newestProcInfoWithName:(id)name;	// 0x32cb7205
- (BOOL)ownedOnly:(BOOL)only;	// 0x32cb6e81
- (id)procInfoWithPID:(int)pid;	// 0x32cb7079
- (void)removeProcInfo:(id)info;	// 0x32cb7c05
// converted property setter: - (void)setAppsOnly:(BOOL)only;	// 0x32cb6efd
- (void)setOwnedOnly:(BOOL)only;	// 0x32cb6ecd
- (void)setProcInfos:(id)infos;	// 0x32cb7d05
- (BOOL)update;	// 0x32cb79d9
- (BOOL)updateFromSystem;	// 0x32cb6ea1
@end
