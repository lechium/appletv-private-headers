/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableArray.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray {
@private
	NSMutableArray *_mutableArray;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31a65735
+ (id)_proxyShare;	// 0x31a65745
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a65775
- (void)_proxyNonGCFinalize;	// 0x31a657f1
- (void)addObject:(id)object;	// 0x31a658d5
- (unsigned)count;	// 0x31a65841
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31a65861
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31a659bd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31a65a8d
- (id)objectAtIndex:(unsigned)index;	// 0x31a65895
- (id)objectsAtIndexes:(id)indexes;	// 0x31a658b5
- (void)removeLastObject;	// 0x31a65b19
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31a65bfd
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31a65cc9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31a65d51
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31a65e21
@end

