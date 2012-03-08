/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDContainer : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x328ca50d
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x32954ea5
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x32954f89
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x3289b465
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x32ac9f61
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x32a39699
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x32a395a9
- (void)addChild:(id)child;	// 0x3289b551
- (id)addChildOfType:(unsigned short)type;	// 0x32aca059
- (id)addContainerChildOfType:(unsigned short)type;	// 0x32ac9f89
- (id)addEshChild:(EshObject *)child;	// 0x32aca095
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x32a39291
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x32a3919d
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x32a392b9
- (id)childAt:(unsigned)at;	// 0x32825d05
- (unsigned)childCount;	// 0x32826869
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x328a1311
- (void)dealloc;	// 0x3289f06d
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x32902e01
- (EshContainer *)eshContainer;	// 0x3289b5b9
- (EshGroup *)eshGroup;	// 0x328ea8e9
- (id)firstChildOfType:(unsigned short)type;	// 0x32826085
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x32ac9d15
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x32ac9cd9
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x328dce69
- (void)insertChild:(id)child at:(unsigned)at;	// 0x32ac9ef5
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x32ac9e11
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x328ca80d
- (void)removeChild:(id)child;	// 0x32ac9d99
- (id)shapeContainer;	// 0x3291e785
@end

