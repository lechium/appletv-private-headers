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
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x342eb639; converted property
@property(retain) NSMutableDictionary *propertyCache;	// G=0x342eb66d; S=0x342eb67d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x342eb635
+ (void)initialize;	// 0x342eb711
- (id)init;	// 0x342eb731
- (id)initWithObjectID:(id)objectID;	// 0x342eb7e5
- (void)_setVersionNumber:(unsigned)number;	// 0x342eb659
- (unsigned)_versionNumber;	// 0x342eb649
- (void)dealloc;	// 0x342eb771
- (BOOL)isEqual:(id)equal;	// 0x342eb6b9
- (const id *)knownKeyValuesPointer;	// 0x342eb669
// converted property getter: - (id)objectID;	// 0x342eb639
// converted property getter: - (id)propertyCache;	// 0x342eb66d
// converted property setter: - (void)setPropertyCache:(id)cache;	// 0x342eb67d
- (void)setValue:(id)value forKey:(id)key;	// 0x342eb885
- (id)valueForKey:(id)key;	// 0x342eb975
@end

