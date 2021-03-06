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
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x34014fd9
- (id)initWithCount:(long)count;	// 0x33ffd821
- (long)attachmentCountAtIndex:(long)index;	// 0x34014df5
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x34014dc1
- (void)disposeGlyphStack;	// 0x34015069
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x34014f45
- (BOOL)isEqual:(id)equal;	// 0x34014cf9
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x34014fa5
- (void)popGlyphAtIndex:(long)index;	// 0x34015039
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x34014f15
- (void)pushGlyphAtIndex:(long)index;	// 0x34015009
- (void *)refCon;	// 0x34014df1
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x34014eb5
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x34014e25
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x34014e85
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x34014e55
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x34014ee5
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x34014f75
- (void)sync;	// 0x34014fd5
@end

