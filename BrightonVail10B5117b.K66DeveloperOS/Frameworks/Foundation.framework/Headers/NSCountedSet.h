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
+ (BOOL)supportsSecureCoding;	// 0x319f15e5
- (id)init;	// 0x31962de9
- (id)initWithArray:(id)array;	// 0x319f1db9
- (id)initWithCapacity:(unsigned)capacity;	// 0x31962dfd
- (id)initWithCoder:(id)coder;	// 0x319f15e9
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x3197a0dd
- (id)initWithSet:(id)set;	// 0x319f1de5
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x319f1ca9
- (void)addObject:(id)object;	// 0x3197a191
- (Class)classForCoder;	// 0x319f1c3d
- (id)copyWithZone:(NSZone *)zone;	// 0x319f1201
- (unsigned)count;	// 0x31954d45
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31954e19
- (unsigned)countForObject:(id)object;	// 0x319f1c4d
- (void)dealloc;	// 0x3195488d
- (id)descriptionWithLocale:(id)locale;	// 0x319f18e9
- (void)encodeWithCoder:(id)coder;	// 0x319f1329
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x319f1271
- (id)member:(id)member;	// 0x3197a2d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x319f123d
- (id)objectEnumerator;	// 0x319f1175
- (void)removeObject:(id)object;	// 0x3197a231
@end
