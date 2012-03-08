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
+ (void)pbReadChildrenOfObject:(EshObject *)object toArray:(id)array state:(id)state;	// 0x327e150d
+ (void)readChildrenOfObject:(EshObject *)object reader:(OcReader *)reader toArray:(id)array;	// 0x3286bea5
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x3286bf89
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x327b2465
- (EshObject *)addAtomChildOfType:(unsigned short)type;	// 0x329e0f61
- (void)addCStringWithChar2String:(const unsigned short *)char2String instance:(int)instance;	// 0x32950699
- (void)addCStringWithNSString:(id)nsstring instance:(int)instance;	// 0x329505a9
- (void)addChild:(id)child;	// 0x327b2551
- (id)addChildOfType:(unsigned short)type;	// 0x329e1059
- (id)addContainerChildOfType:(unsigned short)type;	// 0x329e0f89
- (id)addEshChild:(EshObject *)child;	// 0x329e1095
- (EshObject *)addPptAtomChildOfType:(unsigned short)type;	// 0x32950291
- (id)addPptContainerChildOfType:(unsigned short)type;	// 0x3295019d
- (id)addPptEshClientChildOfType:(unsigned short)type;	// 0x329502b9
- (id)childAt:(unsigned)at;	// 0x3273cd05
- (unsigned)childCount;	// 0x3273d869
- (id)childOfType:(unsigned short)type instance:(short)instance;	// 0x327b8311
- (void)dealloc;	// 0x327b606d
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x32819e01
- (EshContainer *)eshContainer;	// 0x327b25b9
- (EshGroup *)eshGroup;	// 0x328018e9
- (id)firstChildOfType:(unsigned short)type;	// 0x3273d085
- (id)firstChildOfType:(unsigned short)type afterChild:(id)child;	// 0x329e0d15
- (id)firstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x329e0cd9
- (unsigned)indexOfFirstChildOfType:(unsigned short)type afterIndex:(unsigned)index;	// 0x327f3e69
- (void)insertChild:(id)child at:(unsigned)at;	// 0x329e0ef5
- (id)insertEshChild:(EshObject *)child at:(unsigned)at;	// 0x329e0e11
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x327e180d
- (void)removeChild:(id)child;	// 0x329e0d99
- (id)shapeContainer;	// 0x32835785
@end

