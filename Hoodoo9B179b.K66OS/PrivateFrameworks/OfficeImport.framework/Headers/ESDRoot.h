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
@interface ESDRoot : ESDObject {
@private
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)init;	// 0x327e08cd
- (id)initFromReader:(OcReader *)reader;	// 0x3286b991
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x327e09f1
- (void)addChild:(id)child;	// 0x329e11a1
- (id)childAt:(unsigned)at;	// 0x3273ce69
- (unsigned)childCount;	// 0x3273ce49
- (void)dealloc;	// 0x327c0b29
- (EshRoot *)eshRoot;	// 0x327e0a61
- (id)pbInitWithState:(id)state;	// 0x327e0685
- (id)pbReferenceWithID:(unsigned long)anId;	// 0x3273cda9
@end

