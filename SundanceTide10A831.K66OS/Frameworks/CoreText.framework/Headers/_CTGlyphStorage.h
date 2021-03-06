/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import <NSObject.h> // Unknown library


@interface _CTGlyphStorage : NSObject {
	long _count;	// 4 = 0x4
	const unsigned short *_glyphs;	// 8 = 0x8
	const CGSize *_advances;	// 12 = 0xc
	const unsigned *_props;	// 16 = 0x10
	const int *_stringIndices;	// 20 = 0x14
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x34690db9
- (id)initWithCount:(long)count;	// 0x34677a39
- (long)attachmentCountAtIndex:(long)index;	// 0x34690bd5
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x34690ba1
- (void)disposeGlyphStack;	// 0x34690e49
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x34690d25
- (BOOL)isEqual:(id)equal;	// 0x34690add
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x34690d85
- (void)popGlyphAtIndex:(long)index;	// 0x34690e19
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x34690cf5
- (void)pushGlyphAtIndex:(long)index;	// 0x34690de9
- (void *)refCon;	// 0x34690bd1
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x34690c95
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x34690c05
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x34690c65
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x34690c35
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x34690cc5
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x34690d55
- (void)sync;	// 0x34690db5
@end

