/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreText.framework/CoreText
 */

#import "CoreText-Structs.h"
#import "_CTGlyphStorage.h"


__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage : _CTGlyphStorage {
@private
	const int *_attachCounts;	// 24 = 0x18
	unsigned _retainCount;	// 28 = 0x1c
	GlyphStack *_stack;	// 32 = 0x20
	long _capacity;	// 36 = 0x24
	void *_preallocatedStorage;	// 40 = 0x28
}
@property(readonly, assign) unsigned retainCount;	// G=0x350e2819; converted property
+ (id)newWithCount:(long)count;	// 0x350bd6e1
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x350e2bc1
- (id)initWithCount:(long)count;	// 0x350bd7bd
- (BOOL)_isDeallocating;	// 0x350e2815
- (BOOL)_tryRetain;	// 0x350e2811
- (long)attachmentCountAtIndex:(long)index;	// 0x350bed19
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x350e270d
- (void)dealloc;	// 0x350c42d1
- (void)finalize;	// 0x350e282d
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x350e29b1
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x350e2b11
- (void)popGlyphAtIndex:(long)index;	// 0x350e2cd9
- (void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;	// 0x350bd861
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x350e296d
- (void)pushGlyphAtIndex:(long)index;	// 0x350e2c25
- (oneway void)release;	// 0x350c0d65
- (id)retain;	// 0x350bece1
// converted property getter: - (unsigned)retainCount;	// 0x350e2819
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x350e2935
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x350e28b9
- (void)setCapacity:(long)capacity;	// 0x350e2da1
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x350e291d
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x350e2905
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x350e2955
- (const int *)stringIndices;	// 0x350e28a5
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x350e2a1d
@end
