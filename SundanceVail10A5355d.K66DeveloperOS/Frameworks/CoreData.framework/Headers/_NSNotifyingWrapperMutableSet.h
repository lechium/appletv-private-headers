/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x334a9bed
- (void)addObject:(id)object;	// 0x334a9f85
- (void)addObjectsFromArray:(id)array;	// 0x334aa04d
- (id)allObjects;	// 0x334a9d59
- (id)anyObject;	// 0x334a9d79
- (BOOL)containsObject:(id)object;	// 0x334a9d99
- (id)copyWithZone:(NSZone *)zone;	// 0x334a9c89
- (unsigned)count;	// 0x334a9ec5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x334a9f25
- (void)dealloc;	// 0x334a9b5d
- (id)description;	// 0x334a9d19
- (id)descriptionWithLocale:(id)locale;	// 0x334a9d39
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x334a9f45
- (void)getObjects:(id *)objects;	// 0x334a9de1
- (void)intersectSet:(id)set;	// 0x334aa115
- (BOOL)isEqualToSet:(id)set;	// 0x334a9dbd
- (BOOL)isSubsetOfSet:(id)set;	// 0x334a9e01
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x334a9e25
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x334a9e45
- (id)member:(id)member;	// 0x334a9ee5
- (void)minusSet:(id)set;	// 0x334aa199
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x334a9cd1
- (id)objectEnumerator;	// 0x334a9f05
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x334a9f65
- (void)removeAllObjects;	// 0x334aa21d
- (void)removeObject:(id)object;	// 0x334aa2ad
- (void)setSet:(id)set;	// 0x334aa375
- (void)setValue:(id)value forKey:(id)key;	// 0x334a9e65
- (void)unionSet:(id)set;	// 0x334aa3f9
- (id)valueForKey:(id)key;	// 0x334a9e85
- (id)valueForKeyPath:(id)keyPath;	// 0x334a9ea5
@end
