/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID {
@private
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x32bc2611; converted property
+ (id)initWithEntity:(id)entity;	// 0x32bc27d1
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x32bc27b1
+ (void)_release_1;	// 0x32bc28ad
+ (id)_retain_1;	// 0x32bc28e9
+ (void)_storeDeallocated;	// 0x32bc2bfd
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32bc2535
+ (id)alloc;	// 0x32bc2531
+ (id)allocWithZone:(NSZone *)zone;	// 0x32bc252d
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x32bc2821
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32bc2529
+ (Class)classForStore:(id)store;	// 0x32bc2909
+ (void)initialize;	// 0x32b07a39
+ (void)release;	// 0x32bc2549
+ (id)retain;	// 0x32bc2545
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x32bc2bb5
+ (int)version;	// 0x32bc2539
- (id)initWithEntity:(id)entity;	// 0x32bc2795
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x32bc2e3d
- (id)URIRepresentation;	// 0x32bc2c51
- (BOOL)_isPersistentStoreAlive;	// 0x32bc2625
- (id)_referenceData;	// 0x32bc2645
- (id)_retainedURIString;	// 0x32bc2c9d
- (void)_setPersistentStore:(id)store;	// 0x32bc2e01
- (id)_storeIdentifier;	// 0x32bc2d95
- (void)dealloc;	// 0x32bc2ec5
// converted property getter: - (id)entity;	// 0x32bc2611
- (void)finalize;	// 0x32bc2e5d
- (unsigned)hash;	// 0x32bc2561
- (BOOL)isEqual:(id)equal;	// 0x32bc25c1
- (BOOL)isTemporaryID;	// 0x32bc2621
- (id)persistentStore;	// 0x32bc25f5
- (void)release;	// 0x32bc2f35
- (id)retain;	// 0x32bc2f6d
- (unsigned)retainCount;	// 0x32bc254d
@end

