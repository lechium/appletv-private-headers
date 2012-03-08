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
@property(readonly, assign) unsigned hash;	// G=0x35e14585; converted property
@property(readonly, assign) unsigned length;	// G=0x35dfb99d; converted property
+ (id)indexPathWithIndex:(unsigned)index;	// 0x35e49f81
+ (id)indexPathWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x35dfb9ad
- (id)init;	// 0x35e20f41
- (id)initWithCoder:(id)coder;	// 0x35e49c51
- (id)initWithIndex:(unsigned)index;	// 0x35e49a85
- (id)initWithIndexes:(unsigned *)indexes length:(unsigned)length;	// 0x35dfb8dd
- (int)compare:(id)compare;	// 0x35e14fed
- (id)copyWithZone:(NSZone *)zone;	// 0x35e14575
- (void)dealloc;	// 0x35dfc749
- (id)description;	// 0x35e4a071
- (void)encodeWithCoder:(id)coder;	// 0x35e49aa5
- (void)getIndexes:(unsigned *)indexes;	// 0x35e4a045
// converted property getter: - (unsigned)hash;	// 0x35e14585
- (unsigned)indexAtPosition:(unsigned)position;	// 0x35dfb9ed
- (id)indexPathByAddingIndex:(unsigned)index;	// 0x35e20f55
- (id)indexPathByRemovingLastIndex;	// 0x35e49fbd
- (BOOL)isEqual:(id)equal;	// 0x35e145d5
// converted property getter: - (unsigned)length;	// 0x35dfb99d
@end

