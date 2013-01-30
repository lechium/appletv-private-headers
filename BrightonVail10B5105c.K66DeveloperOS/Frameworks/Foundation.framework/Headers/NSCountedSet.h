/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableSet.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSCountedSet : NSMutableSet {
	id _table;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
+ (BOOL)supportsSecureCoding;	// 0x361155e5
- (id)init;	// 0x36086de9
- (id)initWithArray:(id)array;	// 0x36115db9
- (id)initWithCapacity:(unsigned)capacity;	// 0x36086dfd
- (id)initWithCoder:(id)coder;	// 0x361155e9
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x3609e0dd
- (id)initWithSet:(id)set;	// 0x36115de5
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x36115ca9
- (void)addObject:(id)object;	// 0x3609e191
- (Class)classForCoder;	// 0x36115c3d
- (id)copyWithZone:(NSZone *)zone;	// 0x36115201
- (unsigned)count;	// 0x36078d45
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x36078e19
- (unsigned)countForObject:(id)object;	// 0x36115c4d
- (void)dealloc;	// 0x3607888d
- (id)descriptionWithLocale:(id)locale;	// 0x361158e9
- (void)encodeWithCoder:(id)coder;	// 0x36115329
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x36115271
- (id)member:(id)member;	// 0x3609e2d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3611523d
- (id)objectEnumerator;	// 0x36115175
- (void)removeObject:(id)object;	// 0x3609e231
@end
