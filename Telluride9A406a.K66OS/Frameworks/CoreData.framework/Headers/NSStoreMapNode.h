/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID, NSMutableDictionary, NSString, NSPersistentStoreMap;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject {
@private
	NSPersistentStoreMap *_map;	// 4 = 0x4
	NSManagedObjectID *_objectID;	// 8 = 0x8
	NSMutableDictionary *_relatedNodes;	// 12 = 0xc
	NSString *_entityName;	// 16 = 0x10
	unsigned _version;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x348400a9; converted property
+ (void)initialize;	// 0x348401a5
- (id)initWithCoder:(id)coder;	// 0x34840681
- (id)initWithObjectID:(id)objectID;	// 0x348400f1
- (id)_relatedNodes;	// 0x348400b9
- (void)_setMap:(id)map;	// 0x348401c1
- (void)_setVersionNumber:(unsigned)number;	// 0x348400d9
- (id)_snapshot_;	// 0x348400ed
- (unsigned)_versionNumber;	// 0x348400c9
- (id)configurationName;	// 0x34840395
- (void)dealloc;	// 0x3484049d
- (id)destinationsForRelationship:(id)relationship;	// 0x34840371
- (void)encodeWithCoder:(id)coder;	// 0x3484053d
- (id)entity;	// 0x348403b5
- (BOOL)isEqual:(id)equal;	// 0x348403f5
- (id)key;	// 0x348403d5
- (const id *)knownKeyValuesPointer;	// 0x348400e9
// converted property getter: - (id)objectID;	// 0x348400a9
- (void)setDestinations:(id)destinations forRelationship:(id)relationship;	// 0x34840345
@end

