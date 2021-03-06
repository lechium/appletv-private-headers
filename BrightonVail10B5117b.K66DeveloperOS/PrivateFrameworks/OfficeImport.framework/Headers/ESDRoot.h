/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

@interface ESDRoot : ESDObject {
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)init;	// 0x349e1cbd
- (id)initFromReader:(OcReader *)reader;	// 0x34b016c5
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x349e20ed
- (id)initWithPbState:(id)pbState;	// 0x349e1a8d
- (void)addChild:(id)child;	// 0x34c30fd1
- (id)childAt:(unsigned)at;	// 0x349ef7fd
- (unsigned)childCount;	// 0x349ef7dd
- (void)dealloc;	// 0x34a635a1
- (EshRoot *)eshRoot;	// 0x349e21c1
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x349ef729
- (void)writeToWriter:(OcWriter *)writer;	// 0x34c31029
@end

