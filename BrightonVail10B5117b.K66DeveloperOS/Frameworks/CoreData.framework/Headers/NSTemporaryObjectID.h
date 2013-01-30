/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x30fc4655; converted property
+ (id)initWithEntity:(id)entity;	// 0x30fc44ad
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x30fc44f9
+ (void)_release_1;	// 0x30fc4261
+ (id)_retain_1;	// 0x30fc423d
+ (void)_storeDeallocated;	// 0x30fc3ed5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30fc4229
+ (id)alloc;	// 0x30fc4225
+ (id)allocWithZone:(NSZone *)zone;	// 0x30fc4221
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x30fc442d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30fc3ed1
+ (Class)classForStore:(id)store;	// 0x30fc3f75
+ (void)initialize;	// 0x30edf2c9
+ (void)release;	// 0x30fc425d
+ (id)retain;	// 0x30fc4239
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x30fc3f2d
+ (int)version;	// 0x30fc422d
- (id)initWithEntity:(id)entity;	// 0x30fc4515
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x30fc4531
- (id)URIRepresentation;	// 0x30fc47ed
- (BOOL)_isPersistentStoreAlive;	// 0x30fc46c9
- (id)_referenceData;	// 0x30fc4839
- (id)_retainedURIString;	// 0x30fc46ed
- (void)_setPersistentStore:(id)store;	// 0x30fc4615
- (id)_storeIdentifier;	// 0x30fc4669
- (void)dealloc;	// 0x30fc430d
// converted property getter: - (id)entity;	// 0x30fc4655
- (void)finalize;	// 0x30fc4379
- (unsigned)hash;	// 0x30fc454d
- (BOOL)isEqual:(id)equal;	// 0x30fc45ad
- (BOOL)isTemporaryID;	// 0x30fc4665
- (id)persistentStore;	// 0x30fc45f9
- (void)release;	// 0x30fc42bd
- (id)retain;	// 0x30fc429d
- (unsigned)retainCount;	// 0x30fc42f9
@end
