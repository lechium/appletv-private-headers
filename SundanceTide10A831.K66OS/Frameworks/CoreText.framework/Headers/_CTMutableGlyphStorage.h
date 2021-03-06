/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorageAdvanceLookup.h"
#import "_CTGlyphStorage.h"

@class CTGlyphStorageInterface;

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {
	CTGlyphStorageInterface *_interface;	// 24 = 0x18
}
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x346b5ee1
- (id)initWithInterface:(id)interface;	// 0x346b5b11
- (long)attachmentCountAtIndex:(long)index;	// 0x346b5c69
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x346b5c0d
- (CGSize)customAdvanceForIndex:(long)index;	// 0x346b5c3d
- (void)disposeGlyphStack;	// 0x346b5f41
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x346b5d95
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x346b5dd5
- (void)popGlyphAtIndex:(long)index;	// 0x346b5f21
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x346b5d35
- (void)pushGlyphAtIndex:(long)index;	// 0x346b5f01
- (void *)refCon;	// 0x346b5c2d
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x346b5cf5
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x346b5c95
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x346b5cd5
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x346b5cb5
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x346b5d15
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x346b5db5
- (void)sync;	// 0x346b5e05
@end

