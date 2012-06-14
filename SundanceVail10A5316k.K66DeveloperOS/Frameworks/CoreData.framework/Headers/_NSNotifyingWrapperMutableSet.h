/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
@private
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x32d3a92d
- (void)addObject:(id)object;	// 0x32d3acc5
- (void)addObjectsFromArray:(id)array;	// 0x32d3ad8d
- (id)allObjects;	// 0x32d3aa99
- (id)anyObject;	// 0x32d3aab9
- (BOOL)containsObject:(id)object;	// 0x32d3aad9
- (id)copyWithZone:(NSZone *)zone;	// 0x32d3a9c9
- (unsigned)count;	// 0x32d3ac05
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d3ac65
- (void)dealloc;	// 0x32d3a89d
- (id)description;	// 0x32d3aa59
- (id)descriptionWithLocale:(id)locale;	// 0x32d3aa79
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32d3ac85
- (void)getObjects:(id *)objects;	// 0x32d3ab21
- (void)intersectSet:(id)set;	// 0x32d3ae55
- (BOOL)isEqualToSet:(id)set;	// 0x32d3aafd
- (BOOL)isSubsetOfSet:(id)set;	// 0x32d3ab41
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x32d3ab65
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x32d3ab85
- (id)member:(id)member;	// 0x32d3ac25
- (void)minusSet:(id)set;	// 0x32d3aed9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32d3aa11
- (id)objectEnumerator;	// 0x32d3ac45
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32d3aca5
- (void)removeAllObjects;	// 0x32d3af5d
- (void)removeObject:(id)object;	// 0x32d3afed
- (void)setSet:(id)set;	// 0x32d3b0b5
- (void)setValue:(id)value forKey:(id)key;	// 0x32d3aba5
- (void)unionSet:(id)set;	// 0x32d3b139
- (id)valueForKey:(id)key;	// 0x32d3abc5
- (id)valueForKeyPath:(id)keyPath;	// 0x32d3abe5
@end

