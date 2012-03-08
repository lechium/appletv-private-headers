/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreMap.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap : NSPersistentStoreMap {
@private
	NSMutableDictionary *_theMap;	// 28 = 0x1c
}
+ (void)initialize;	// 0x347b26c1
- (id)initWithStore:(id)store;	// 0x347b2279
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x347b3539
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x347b391d
- (id)_archivedData;	// 0x347b24c1
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x347b2b0d
- (id)_theDictionary;	// 0x347b2269
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x347b22b1
- (id)dataForKey:(id)key;	// 0x347b228d
- (void)dealloc;	// 0x347b26dd
- (id)handleFetchRequest:(id)request;	// 0x347b2731
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x347b2349
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x347b2395
- (void)saveToPath:(id)path;	// 0x347b3185
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x347b29bd
@end

