/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSGlyphStorage.h"
#import "NSATSTypesetter.h"


__attribute__((visibility("hidden")))
@interface NSSingleLineTypesetter : NSATSTypesetter <NSGlyphStorage> {
	float _lineWidth;	// 96 = 0x60
	NSRange _currentBufferRange;	// 100 = 0x64
	unsigned short *_glyphs;	// 108 = 0x6c
	int *_props;	// 112 = 0x70
	unsigned *_charIndexes;	// 116 = 0x74
	struct {
		unsigned _usesScreenFonts : 1;
		unsigned _reserved : 31;
	} _slFlags;	// 120 = 0x78
}
+ (bool)_validateAttributes:(id)attributes;	// 0x32c63d6d
+ (void)initialize;	// 0x32c63c75
+ (id)singleLineTypesetter;	// 0x32c63bb1
- (id)init;	// 0x32c63dfd
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x32c63df9
- (BOOL)_usesScreenFonts;	// 0x32c63de5
- (id)attributedString;	// 0x32c6409d
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSAttributeDictionaryElement *)range;	// 0x32c640ad
- (id)createRenderingContextForCharacterRange:(NSRange)characterRange typesetterBehavior:(int)behavior usesScreenFonts:(BOOL)fonts hasStrongRight:(BOOL)right maximumWidth:(float)width;	// 0x32c63e69
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x32c64275
- (void)done;	// 0x32c63c21
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned short *)glyphs properties:(int *)properties characterIndexes:(unsigned *)indexes bidiLevels:(char *)levels;	// 0x32c640c5
- (void)getLineFragmentRect:(NSAttributeDictionaryElement *)rect usedRect:(NSAttributeDictionaryElement *)rect2 remainingRect:(NSAttributeDictionaryElement *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x32c64185
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSAttributeDictionaryElement *)range;	// 0x32c640b9
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x32c64271
- (unsigned)layoutOptions;	// 0x32c64099
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x32c64285
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x32c64289
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x32c6427d
- (void)setGlyphs:(const unsigned short *)glyphs properties:(const int *)properties characterIndexes:(const unsigned *)indexes font:(id)font forGlyphRange:(NSRange)glyphRange;	// 0x32c64009
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x32c64269
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x32c64281
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x32c64279
- (id)substituteFontForFont:(id)font;	// 0x32c6423d
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x32c6426d
@end
