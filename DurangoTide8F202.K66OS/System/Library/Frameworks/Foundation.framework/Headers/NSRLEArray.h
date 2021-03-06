/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
@private
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x324d86c1
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x324da951
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x324daa65
- (id)copyWithZone:(NSZone *)zone;	// 0x324d86ad
- (unsigned)count;	// 0x324d8301
- (void)dealloc;	// 0x324da9bd
- (id)description;	// 0x324d85c9
- (void)finalize;	// 0x324da8f5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x324d8671
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x324d8d5d
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x324d8cad
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x324d82c1
@end

