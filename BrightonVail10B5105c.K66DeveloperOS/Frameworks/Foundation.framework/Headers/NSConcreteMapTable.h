/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMapTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteMapTable : NSMapTable {
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
@property(readonly, assign) unsigned count;	// G=0x360781b9; converted property
- (id)init;	// 0x36102885
- (id)initWithCoder:(id)coder;	// 0x36102f91
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x36075c09
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x36102d81
- (void)_initBlock;	// 0x36075d75
- (void)_setBackingStore;	// 0x36075d99
- (id)allKeys;	// 0x36103bb1
- (id)allValues;	// 0x36103c71
- (void)assign:(unsigned)assign key:(const void *)key value:(const void *)value isNew:(BOOL)aNew;	// 0x36075eb5
- (void)checkCount:(const char *)count;	// 0x36102985
- (Class)classForCoder;	// 0x36102f75
- (BOOL)containsKeys:(const void **)keys values:(const void **)values count:(unsigned)count;	// 0x361032d9
- (id)copy;	// 0x36102b21
// converted property getter: - (unsigned)count;	// 0x360781b9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x360a5cc9
- (void)dealloc;	// 0x360765fd
- (id)description;	// 0x361038c9
- (id)dump;	// 0x361033bd
- (void)encodeWithCoder:(id)coder;	// 0x36103039
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x361035bd
- (void)finalize;	// 0x36103865
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x360a654d
- (void)grow;	// 0x360a5a95
- (unsigned)hash;	// 0x36103a45
- (BOOL)isEqual:(id)equal;	// 0x36103a7d
- (id)keyEnumerator;	// 0x361039e9
- (id)keyPointerFunctions;	// 0x36103211
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x36103661
- (id)objectEnumerator;	// 0x360bac31
- (id)objectForKey:(id)key;	// 0x36071e75
- (void)raiseCountUnderflowException;	// 0x361028a9
- (unsigned)realCount;	// 0x361028ed
- (void)rehash;	// 0x3610374d
- (unsigned)rehashAround:(unsigned)around;	// 0x36077fa5
- (void)removeAllItems;	// 0x361037cd
- (void)removeObjectForKey:(id)key;	// 0x36077edd
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x361036d9
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x36103479
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x36103505
- (void)setObject:(id)object forKey:(id)key;	// 0x36075e21
- (id)valuePointerFunctions;	// 0x36103275
- (void)zeroPairedEntries;	// 0x36102a0d
@end

