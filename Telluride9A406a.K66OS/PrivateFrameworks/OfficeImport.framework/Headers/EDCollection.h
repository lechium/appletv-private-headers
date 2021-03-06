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
+ (id)collection;	// 0x32901ca1
+ (id)collectionWithObject:(id)object;	// 0x32a6a00d
- (id)init;	// 0x328f4ff9
- (id)initWithObject:(id)object;	// 0x32a09d2d
- (unsigned)addObject:(id)object;	// 0x328f5865
- (unsigned)addOrEquivalentObject:(id)object;	// 0x328fa3dd
- (id)copyWithZone:(NSZone *)zone;	// 0x32a16035
- (unsigned)count;	// 0x328f5c7d
- (void)dealloc;	// 0x328fe6d5
- (unsigned)hash;	// 0x32a6a0cd
- (unsigned)indexOfObject:(id)object;	// 0x328fa415
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32901f51
- (BOOL)isEqual:(id)equal;	// 0x32a081ad
- (BOOL)isEqualToCollection:(id)collection;	// 0x32a08209
- (id)objectAtIndex:(unsigned)index;	// 0x32901fa5
- (void)removeAllObjects;	// 0x32a6a0ad
- (void)removeObjectAtIndex:(unsigned)index;	// 0x329f1d49
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32a6a059
@end

