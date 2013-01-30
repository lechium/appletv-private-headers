/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

@interface ESDContainer : ESDObject {
	NSMutableArray *mChildren;	// 16 = 0x10
}
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x369cfc8d
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x36aeebd5
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x36aeed91
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x369d32d1
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x36c1db11
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x36c3bc59
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x36c3bb5d
- (void)addChild:(id)child;	// 0x36a3ec35
- (id)addChildOfType:(unsigned short)type;	// 0x36c1d9fd
- (id)addContainerChildOfType:(unsigned short)type;	// 0x36c1da39
- (id)addEshChild:(EshObject *)child;	// 0x36c1d971
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x36c3b851
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x36c3b751
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x36c3b879
- (id)childAt:(unsigned)at;	// 0x369dca35
- (unsigned)childCount;	// 0x369dca15
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x369e6155
- (id)containerChildAt:(unsigned)at;	// 0x36c1de79
- (id)containerChildOfType:(unsigned short)type instance:(short)instance mustExist:(BOOL)exist;	// 0x36c1de45
- (id)containerFromObject:(id)object mustExist:(BOOL)exist;	// 0x36c1ddbd
- (void)dealloc;	// 0x36a3ef89
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x36a6b3b1
- (EshContainer *)eshContainer;	// 0x36a3ec9d
- (EshGroup *)eshGroup;	// 0x36a4cf45
- (id)firstChildOfType:(unsigned short)type;	// 0x369dc865
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x36c1dcf9
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x36c1dd81
- (id)firstContainerChildOfType:(unsigned short)type mustExist:(BOOL)exist;	// 0x36c1de11
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x369e7231
- (void)insertChild:(id)child at:(unsigned)at;	// 0x36c1db39
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x36c1dba5
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x369d0051
- (void)removeChild:(id)child;	// 0x36c1dc81
- (id)shapeContainer;	// 0x36a7ab35
- (void)writeToWriter:(OcWriter *)writer;	// 0x36c1dead
@end
