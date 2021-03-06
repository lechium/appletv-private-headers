/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable {
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _callBacks;	// 4 = 0x4
	CFBasicHashRef _ht;	// 24 = 0x18
}
- (id)init;	// 0x355793f1
- (void)addObject:(id)object;	// 0x355795c9
- (id)allObjects;	// 0x355798d5
- (id)copy;	// 0x3557949d
- (unsigned)count;	// 0x35579719
- (void)dealloc;	// 0x355793f5
- (id)description;	// 0x3557972d
- (void *)getItem:(const void *)item;	// 0x35579549
- (void)getKeys:(const void **)keys count:(unsigned *)count;	// 0x35579b85
- (unsigned)hash;	// 0x35579449
- (void)insertItem:(const void *)item;	// 0x35579571
- (void)insertKnownAbsentItem:(const void *)item;	// 0x35579621
- (BOOL)isEqual:(id)equal;	// 0x35579459
- (void)removeAllItems;	// 0x35579435
- (void)removeItem:(const void *)item;	// 0x355796c1
@end

