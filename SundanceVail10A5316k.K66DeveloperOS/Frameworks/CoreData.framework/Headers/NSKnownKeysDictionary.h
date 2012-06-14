/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableDictionary.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSKnownKeysDictionary : NSMutableDictionary {
}
+ (id)alloc;	// 0x32d04949
+ (id)allocWithZone:(NSZone *)zone;	// 0x32d66039
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x32d66055
- (id)initForKeys:(id)keys;	// 0x32d6605d
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x32d66059
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x32d66075
- (void)getKeys:(id *)keys;	// 0x32d66079
- (void)getObjects:(id *)objects;	// 0x32d6607d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x32d66081
- (id)mapping;	// 0x32d66061
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x32d6606d
- (void)setValues:(id *)values;	// 0x32d66071
- (id)valueAtIndex:(unsigned)index;	// 0x32d66069
- (const id *)values;	// 0x32d66065
@end

