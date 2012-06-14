/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSLock;

@interface MFWeakSet : NSMutableSet {
@private
	NSLock *_lock;	// 4 = 0x4
	unsigned long _gen;	// 8 = 0x8
	CFDictionaryRef _objects;	// 12 = 0xc
}
+ (id)set;	// 0x366d6a8d
+ (id)setWithArray:(id)array;	// 0x366d6c39
+ (id)setWithCapacity:(unsigned)capacity;	// 0x366d6c75
+ (id)setWithObject:(id)object;	// 0x366d6ac5
+ (id)setWithObjects:(id)objects;	// 0x366d6b25
+ (id)setWithObjects:(id *)objects count:(unsigned)count;	// 0x366d6ae5
+ (id)setWithSet:(id)set;	// 0x366d6bfd
- (id)init;	// 0x366d7005
- (id)initWithArray:(id)array;	// 0x366d6e75
- (id)initWithCapacity:(unsigned)capacity;	// 0x366d6f69
- (id)initWithCoder:(id)coder;	// 0x366d637d
- (id)initWithObjects:(id)objects;	// 0x366d6d19
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x366d6cb1
- (id)initWithSet:(id)set;	// 0x366d6dcd
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x366d6de1
- (id)_copyAllItems;	// 0x366d5fb1
- (void)addObject:(id)object;	// 0x366d707d
- (void)addObjectsFromArray:(id)array;	// 0x366d7165
- (id)allObjects;	// 0x366d60ed
- (id)anyObject;	// 0x366d619d
- (BOOL)containsObject:(id)object;	// 0x366d6281
- (id)copyWithZone:(NSZone *)zone;	// 0x366d6115
- (unsigned)count;	// 0x366d5e21
- (unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD *)state objects:(id *)objects count:(unsigned)count;	// 0x366d5f2d
- (void)dealloc;	// 0x366d7019
- (id)description;	// 0x366d629d
- (id)descriptionWithLocale:(id)locale;	// 0x366d62b1
- (void)encodeWithCoder:(id)coder;	// 0x366d6301
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x366d6851
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x366d6865
- (void)intersectSet:(id)set;	// 0x366d7289
- (BOOL)intersectsSet:(id)set;	// 0x366d63e5
- (BOOL)isEqualToSet:(id)set;	// 0x366d64c9
- (BOOL)isSubsetOfSet:(id)set;	// 0x366d65bd
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x366d6689
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x366d669d
- (id)member:(id)member;	// 0x366d5e71
- (void)minusSet:(id)set;	// 0x366d7385
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x366d6159
- (id)objectEnumerator;	// 0x366d5f05
- (id)objectsPassingTest:(id)test;	// 0x366d6941
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x366d6955
- (void)removeAllObjects;	// 0x366d7455
- (void)removeObject:(id)object;	// 0x366d7101
- (id)setByAddingObject:(id)object;	// 0x366d6751
- (id)setByAddingObjectsFromArray:(id)array;	// 0x366d67bd
- (id)setByAddingObjectsFromSet:(id)set;	// 0x366d678d
- (void)setSet:(id)set;	// 0x366d7571
- (void)unionSet:(id)set;	// 0x366d74b5
@end

