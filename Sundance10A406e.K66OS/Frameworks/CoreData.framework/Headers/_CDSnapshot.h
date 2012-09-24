/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
	int _cd_rc;	// 4 = 0x4
	int _cd_version;	// 8 = 0x8
	NSManagedObjectID *_cd_objectID;	// 12 = 0xc
	snapshotFlags_st _cd_flags;	// 16 = 0x10
	unsigned _cd_nullFlags_;	// 20 = 0x14
}
+ (void)_entityDeallocated;	// 0x33dbb8d1
+ (id)alloc;	// 0x33dbb8c1
+ (id)allocWithZone:(NSZone *)zone;	// 0x33dbb8c9
+ (Class)classForEntity:(id)entity;	// 0x33cdd5cd
+ (void)initialize;	// 0x33cdd545
+ (unsigned)newBatchAllocation:(id *)allocation count:(unsigned)count withOwnedObjectIDs:(id *)ownedObjectIDs;	// 0x33cdddfd
- (id)initWithObjectID:(id)objectID;	// 0x33dbb8d9
- (id)_descriptionValues;	// 0x33dbbcd1
- (BOOL)_isDeallocating;	// 0x33dbbbf5
- (BOOL)_tryRetain;	// 0x33dbbba5
- (id)copy;	// 0x33dbb93d
- (id)copyWithZone:(NSZone *)zone;	// 0x33dbb92d
- (void)dealloc;	// 0x33dbbc4d
- (id)description;	// 0x33dbc1c1
- (id)entity;	// 0x33dbc521
- (void)finalize;	// 0x33dbbc21
- (unsigned)hash;	// 0x33dbba6d
- (BOOL)isEqual:(id)equal;	// 0x33dbbad5
- (id)mutableCopy;	// 0x33dbb999
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33dbb989
- (id)objectID;	// 0x33dbc541
- (oneway void)release;	// 0x33dbbb19
- (id)retain;	// 0x33dbbae1
- (unsigned)retainCount;	// 0x33dbbb91
- (void)setValue:(id)value forKey:(id)key;	// 0x33dbc389
- (id)valueForKey:(id)key;	// 0x33dbc275
@end
