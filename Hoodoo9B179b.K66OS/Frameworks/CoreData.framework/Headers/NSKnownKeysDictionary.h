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
+ (id)alloc;	// 0x32ad4d05
+ (id)allocWithZone:(NSZone *)zone;	// 0x32b3eda5
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x32b3d04d
- (id)initForKeys:(id)keys;	// 0x32b3d055
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x32b3d051
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x32b3d06d
- (void)getKeys:(id *)keys;	// 0x32b3d071
- (void)getObjects:(id *)objects;	// 0x32b3d075
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x32b3d079
- (const id)mapping;	// 0x32b3d059
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x32b3d065
- (void)setValues:(id *)values;	// 0x32b3d069
- (id)valueAtIndex:(unsigned)index;	// 0x32b3d061
- (const id *)values;	// 0x32b3d05d
@end

