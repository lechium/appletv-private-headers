/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x30f0d1d5
- (void)addObject:(id)object;	// 0x30f0d56d
- (void)addObjectsFromArray:(id)array;	// 0x30f0d635
- (id)allObjects;	// 0x30f0d341
- (id)anyObject;	// 0x30f0d361
- (BOOL)containsObject:(id)object;	// 0x30f0d381
- (id)copyWithZone:(NSZone *)zone;	// 0x30f0d271
- (unsigned)count;	// 0x30f0d4ad
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30f0d50d
- (void)dealloc;	// 0x30f0d145
- (id)description;	// 0x30f0d301
- (id)descriptionWithLocale:(id)locale;	// 0x30f0d321
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x30f0d52d
- (void)getObjects:(id *)objects;	// 0x30f0d3c9
- (void)intersectSet:(id)set;	// 0x30f0d6fd
- (BOOL)isEqualToSet:(id)set;	// 0x30f0d3a5
- (BOOL)isSubsetOfSet:(id)set;	// 0x30f0d3e9
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x30f0d40d
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x30f0d42d
- (id)member:(id)member;	// 0x30f0d4cd
- (void)minusSet:(id)set;	// 0x30f0d781
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f0d2b9
- (id)objectEnumerator;	// 0x30f0d4ed
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x30f0d54d
- (void)removeAllObjects;	// 0x30f0d805
- (void)removeObject:(id)object;	// 0x30f0d895
- (void)setSet:(id)set;	// 0x30f0d95d
- (void)setValue:(id)value forKey:(id)key;	// 0x30f0d44d
- (void)unionSet:(id)set;	// 0x30f0d9e1
- (id)valueForKey:(id)key;	// 0x30f0d46d
- (id)valueForKeyPath:(id)keyPath;	// 0x30f0d48d
@end

