/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import <NSObject.h> // Unknown library
#import "CoreText-Structs.h"


__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject {
@private
	long _count;	// 4 = 0x4
	const unsigned short *_glyphs;	// 8 = 0x8
	const CGSize *_advances;	// 12 = 0xc
	const unsigned *_props;	// 16 = 0x10
	const int *_stringIndices;	// 20 = 0x14
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x34e66c85
- (id)initWithCount:(long)count;	// 0x34e4f499
- (long)attachmentCountAtIndex:(long)index;	// 0x34e66aa1
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x34e66a6d
- (void)disposeGlyphStack;	// 0x34e66d15
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x34e66bf1
- (BOOL)isEqual:(id)equal;	// 0x34e669a5
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x34e66c51
- (void)popGlyphAtIndex:(long)index;	// 0x34e66ce5
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x34e66bc1
- (void)pushGlyphAtIndex:(long)index;	// 0x34e66cb5
- (void *)refCon;	// 0x34e66a9d
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x34e66b61
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x34e66ad1
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x34e66b31
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x34e66b01
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x34e66b91
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x34e66c21
- (void)sync;	// 0x34e66c81
@end

