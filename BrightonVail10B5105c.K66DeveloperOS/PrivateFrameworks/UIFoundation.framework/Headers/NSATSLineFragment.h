/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSATSTypesetter;

__attribute__((visibility("hidden")))
@interface NSATSLineFragment : NSObject {
	void *_line;	// 4 = 0x4
	NSATSTypesetter *_typesetter;	// 8 = 0x8
	NSRange _glyphRange;	// 12 = 0xc
	NSRange _characterRange;	// 20 = 0x14
	float _minPosition;	// 28 = 0x1c
	float _maxPosition;	// 32 = 0x20
	long _elasticCharIndex;	// 36 = 0x24
	float _elasticRangeWidth;	// 40 = 0x28
	unsigned _hyphenGlyph;	// 44 = 0x2c
	float _hyphenGlyphWidth;	// 48 = 0x30
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _isLineArray : 1;
		unsigned _reserved : 28;
	} _flags;	// 52 = 0x34
}
@property(readonly, assign) NSRange characterRange;	// G=0x37535191; converted property
@property(readonly, assign) NSRange glyphRange;	// G=0x37535179; converted property
- (id)initWithTypesetter:(id)typesetter;	// 0x37534591
- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)index lineFragmentWidth:(float)width hyphenate:(BOOL *)hyphenate;	// 0x37534285
- (id)_copyRenderingContextWithGlyphOrigin:(float)glyphOrigin;	// 0x3753418d
- (void)_flushCachedObjects;	// 0x37534151
- (void)_invalidate;	// 0x37534155
// converted property getter: - (NSRange)characterRange;	// 0x37535191
- (void)dealloc;	// 0x37534511
- (void)finalize;	// 0x37534551
- (void)getTypographicLineHeight:(float *)height baselineOffset:(float *)offset leading:(float *)leading;	// 0x375352a1
// converted property getter: - (NSRange)glyphRange;	// 0x37535179
- (BOOL)hasElasticRange;	// 0x37536fcd
- (void)justifyWithFactor:(float)factor;	// 0x37536ec5
- (void)layoutForStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index2 minPosition:(float)position maxPosition:(float)position4 lineFragmentRect:(CGRect)rect;	// 0x375345a1
- (float)lineWidthForType:(int)type;	// 0x375351a9
- (void)saveMorphedGlyphs:(NSRange *)glyphs;	// 0x375356e1
- (void)saveWithGlyphOrigin:(float)glyphOrigin;	// 0x37536221
@end
