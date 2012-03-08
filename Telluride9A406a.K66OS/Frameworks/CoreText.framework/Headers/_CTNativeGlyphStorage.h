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
@property(readonly, assign) unsigned retainCount;	// G=0x32e8e819; converted property
+ (id)newWithCount:(long)count;	// 0x32e696e1
- (void)initGlyphStackWithCapacity:(long)capacity;	// 0x32e8ebc1
- (id)initWithCount:(long)count;	// 0x32e697bd
- (BOOL)_isDeallocating;	// 0x32e8e815
- (BOOL)_tryRetain;	// 0x32e8e811
- (long)attachmentCountAtIndex:(long)index;	// 0x32e6ad19
- (id)copyWithRange:(XXStruct_K5nmsA)range;	// 0x32e8e70d
- (void)dealloc;	// 0x32e702d1
- (void)finalize;	// 0x32e8e82d
- (void)insertGlyphsAtRange:(XXStruct_K5nmsA)range;	// 0x32e8e9b1
- (void)moveGlyphsFromRange:(XXStruct_K5nmsA)range toIndex:(long)index;	// 0x32e8eb11
- (void)popGlyphAtIndex:(long)index;	// 0x32e8ecd9
- (void)prepareWithCapacity:(long)capacity preallocated:(bool)preallocated;	// 0x32e69861
- (void)puntStringIndicesInRange:(XXStruct_K5nmsA)range by:(long)by;	// 0x32e8e96d
- (void)pushGlyphAtIndex:(long)index;	// 0x32e8ec25
- (oneway void)release;	// 0x32e6cd65
- (id)retain;	// 0x32e6ace1
// converted property getter: - (unsigned)retainCount;	// 0x32e8e819
- (void)setAdvance:(CGSize)advance atIndex:(long)index;	// 0x32e8e935
- (void)setAttachmentCount:(long)count atIndex:(long)index;	// 0x32e8e8b9
- (void)setCapacity:(long)capacity;	// 0x32e8eda1
- (void)setGlyph:(unsigned short)glyph atIndex:(long)index;	// 0x32e8e91d
- (void)setProps:(unsigned)props atIndex:(long)index;	// 0x32e8e905
- (void)setStringIndex:(long)index atIndex:(long)index2;	// 0x32e8e955
- (const int *)stringIndices;	// 0x32e8e8a5
- (void)swapGlyphsAtIndex:(long)index withIndex:(long)index2;	// 0x32e8ea1d
@end

