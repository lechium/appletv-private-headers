/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {
@private
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned __versionNumber;	// 8 = 0x8
	NSMutableDictionary *_propertyCache;	// 12 = 0xc
	void *_reserved1;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x33e7b639; converted property
@property(retain) NSMutableDictionary *propertyCache;	// G=0x33e7b66d; S=0x33e7b67d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33e7b635
+ (void)initialize;	// 0x33e7b711
- (id)init;	// 0x33e7b731
- (id)initWithObjectID:(id)objectID;	// 0x33e7b7e5
- (void)_setVersionNumber:(unsigned)number;	// 0x33e7b659
- (unsigned)_versionNumber;	// 0x33e7b649
- (void)dealloc;	// 0x33e7b771
- (BOOL)isEqual:(id)equal;	// 0x33e7b6b9
- (const id *)knownKeyValuesPointer;	// 0x33e7b669
// converted property getter: - (id)objectID;	// 0x33e7b639
// converted property getter: - (id)propertyCache;	// 0x33e7b66d
// converted property setter: - (void)setPropertyCache:(id)cache;	// 0x33e7b67d
- (void)setValue:(id)value forKey:(id)key;	// 0x33e7b885
- (id)valueForKey:(id)key;	// 0x33e7b975
@end

