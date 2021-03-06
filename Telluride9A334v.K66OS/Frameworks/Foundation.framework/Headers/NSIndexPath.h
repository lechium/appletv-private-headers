/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSIndexPath : NSObject <NSCopying, NSCoding> {
@private
	unsigned *_indexes;	// 4 = 0x4
	unsigned _hash;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
@property(readonly, assign) unsigned hash;	// G=0x30639585; converted property
@property(readonly, assign) unsigned length;	// G=0x3062099d; converted property
+ (id)indexPathWithIndex:(unsigned)index;	// 0x3066ef81
+ (id)indexPathWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x306209ad
- (id)init;	// 0x30645f41
- (id)initWithCoder:(id)coder;	// 0x3066ec51
- (id)initWithIndex:(unsigned)index;	// 0x3066ea85
- (id)initWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x306208dd
- (int)compare:(id)compare;	// 0x30639fed
- (id)copyWithZone:(NSZone *)zone;	// 0x30639575
- (void)dealloc;	// 0x30621749
- (id)description;	// 0x3066f071
- (void)encodeWithCoder:(id)coder;	// 0x3066eaa5
- (void)getIndexes:(unsigned *)indexes;	// 0x3066f045
// converted property getter: - (unsigned)hash;	// 0x30639585
- (unsigned)indexAtPosition:(unsigned)position;	// 0x306209ed
- (id)indexPathByAddingIndex:(unsigned)index;	// 0x30645f55
- (id)indexPathByRemovingLastIndex;	// 0x3066efbd
- (BOOL)isEqual:(id)equal;	// 0x306395d5
// converted property getter: - (unsigned)length;	// 0x3062099d
@end

