/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDCollection : NSObject <NSCopying> {
@private
	NSMutableArray *mObjects;	// 4 = 0x4
}
+ (id)collection;	// 0x319e6361
+ (id)collectionWithObject:(id)object;	// 0x31ace8b1
- (id)init;	// 0x318cca7d
- (id)initWithObject:(id)object;	// 0x31a7267d
- (unsigned)addObject:(id)object;	// 0x318d2089
- (unsigned)addOrEquivalentObject:(id)object;	// 0x319de49d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a98875
- (unsigned)count;	// 0x318cc17d
- (void)dealloc;	// 0x318f0fd5
- (unsigned)hash;	// 0x31ace891
- (unsigned)indexOfObject:(id)object;	// 0x319de4cd
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x318cc1f5
- (BOOL)isEqual:(id)equal;	// 0x31a70e91
- (BOOL)isEqualToCollection:(id)collection;	// 0x31a731b1
- (id)objectAtIndex:(unsigned)index;	// 0x318cc429
- (void)removeAllObjects;	// 0x31ace871
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31a75d79
@end

