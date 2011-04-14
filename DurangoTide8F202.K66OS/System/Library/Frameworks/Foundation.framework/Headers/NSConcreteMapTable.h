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
@property(readonly, assign) unsigned count;	// G=0x32486871; converted property
- (id)init;	// 0x32486a2d
- (id)initWithCoder:(id)coder;	// 0x324868bd
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x324222b1
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x324874fd
- (void)_initBlock;	// 0x324223f5
- (void)_setBackingStore;	// 0x32422675
- (id)allKeys;	// 0x32486289
- (id)allValues;	// 0x324861d9
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x3243fbd1
- (void)checkCount:(const char *)count;	// 0x32486975
- (Class)classForCoder;	// 0x32486955
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x3248773d
- (id)copy;	// 0x32487329
// converted property getter: - (unsigned)count;	// 0x32486871
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32487811
- (void)dealloc;	// 0x32486c19
- (id)description;	// 0x32486359
- (id)dump;	// 0x324864dd
- (void)encodeWithCoder:(id)coder;	// 0x32486f95
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x32486689
- (void)finalize;	// 0x32486bbd
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x32487929
- (void)grow;	// 0x32440a35
- (unsigned)hash;	// 0x32485ecd
- (BOOL)isEqual:(id)equal;	// 0x32486cc9
- (id)keyEnumerator;	// 0x324878d9
- (id)keyPointerFunctions;	// 0x324876ed
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x32486611
- (id)objectEnumerator;	// 0x32486339
- (id)objectForKey:(id)key;	// 0x3243fcf1
- (void)raiseCountUnderflowException;	// 0x324869ed
- (unsigned)realCount;	// 0x32485dd9
- (void)rehash;	// 0x3248645d
- (unsigned)rehashAround:(unsigned)around;	// 0x3243fd7d
- (void)removeAllItems;	// 0x32485e75
- (void)removeObjectForKey:(id)key;	// 0x32422771
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x32486595
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x324867ed
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x32486739
- (void)setObject:(id)object forKey:(id)key;	// 0x3243fb45
- (id)valuePointerFunctions;	// 0x3248769d
- (void)zeroPairedEntries;	// 0x324886c1
@end

