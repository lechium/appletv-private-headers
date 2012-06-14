/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMapTable.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
@private
	NSSlice keys;	// 4 = 0x4
	NSSlice values;	// 68 = 0x44
	unsigned count;	// 132 = 0x84
	unsigned capacity;	// 136 = 0x88
	unsigned keyOptions;	// 140 = 0x8c
	unsigned valueOptions;	// 144 = 0x90
	unsigned mutations;	// 148 = 0x94
	int growLock;	// 152 = 0x98
	bool shouldRehash;	// 156 = 0x9c
}
@property(readonly, assign) unsigned count;	// G=0x35e0cd61; converted property
- (id)init;	// 0x35e5dda5
- (id)initWithCoder:(id)coder;	// 0x35e5e4b5
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x35ddb355
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x35e5e295
- (void)_initBlock;	// 0x35ddb4d1
- (void)_setBackingStore;	// 0x35ddb4f5
- (id)allKeys;	// 0x35e5f0fd
- (id)allValues;	// 0x35e5f1a1
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x35ddb615
- (void)checkCount:(const char *)count;	// 0x35e5de8d
- (Class)classForCoder;	// 0x35e5e499
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x35e5e7d1
- (id)copy;	// 0x35e5e021
// converted property getter: - (unsigned)count;	// 0x35e0cd61
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35e5ee95
- (void)dealloc;	// 0x35ddb7fd
- (id)description;	// 0x35e5ed61
- (id)dump;	// 0x35e5e899
- (void)encodeWithCoder:(id)coder;	// 0x35e5e559
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x35e5eaa5
- (void)finalize;	// 0x35e5ecfd
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x35e0cdbd
- (void)grow;	// 0x35dfefd1
- (unsigned)hash;	// 0x35e5efb5
- (BOOL)isEqual:(id)equal;	// 0x35e5efe9
- (id)keyEnumerator;	// 0x35e5ef39
- (id)keyPointerFunctions;	// 0x35e5e709
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x35e5eb59
- (id)objectEnumerator;	// 0x35e5ef95
- (id)objectForKey:(id)key;	// 0x35ddb0c5
- (void)raiseCountUnderflowException;	// 0x35e5ddc9
- (unsigned)realCount;	// 0x35e5de0d
- (void)rehash;	// 0x35e5ec45
- (unsigned)rehashAround:(unsigned)around;	// 0x35dfcbb1
- (void)removeAllItems;	// 0x35ded0c5
- (void)removeObjectForKey:(id)key;	// 0x35dfa829
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x35e5ebd1
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x35e5e95d
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x35e5e9ed
- (void)setObject:(id)object forKey:(id)key;	// 0x35ddb57d
- (id)valuePointerFunctions;	// 0x35e5e76d
- (void)zeroPairedEntries;	// 0x35e5df15
@end
