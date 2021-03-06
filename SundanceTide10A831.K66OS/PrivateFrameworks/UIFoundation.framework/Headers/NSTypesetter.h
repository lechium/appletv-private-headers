/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"


@interface NSTypesetter : NSObject {
	void *_reserved;	// 4 = 0x4
}
@property(retain) id attributedString;	// G=0x32cbe45d; S=0x32cbe42d; converted property
@property(assign) BOOL bidiProcessingEnabled;	// G=0x32cbe351; S=0x32cbe381; converted property
@property(assign) float hyphenationFactor;	// G=0x32cbe0ad; S=0x32cbe0d9; converted property
@property(assign) float lineFragmentPadding;	// G=0x32cbe119; S=0x32cbe149; converted property
@property(assign) float tightenThresholdForTruncation;	// G=0x32cbe3c1; S=0x32cbe3ed; converted property
@property(assign) int typesetterBehavior;	// G=0x32cbe045; S=0x32cbe075; converted property
@property(assign) BOOL usesFontLeading;	// G=0x32cbdfd5; S=0x32cbe005; converted property
+ (BOOL)_usesATSTypesetter;	// 0x32cbd6f5
+ (int)defaultStringDrawingTypesetterBehavior;	// 0x32cbd71d
+ (int)defaultTypesetterBehavior;	// 0x32cbd70d
+ (void)initialize;	// 0x32cbd4f9
+ (id)sharedSystemTypesetter;	// 0x32cbd749
+ (id)sharedSystemTypesetterForBehavior:(int)behavior;	// 0x32cbd72d
- (XXStruct__MnFEB *)_allocateAuxData;	// 0x32cbd765
- (BOOL)_allowsEllipsisGlyphSubstitution;	// 0x32cbdf55
- (id)_ellipsisFontForFont:(id)font;	// 0x32cbdf71
- (BOOL)_forceOriginalFontBaseline;	// 0x32cbd8b1
- (XXStruct__MnFEB *)_getAuxData;	// 0x32cbd785
- (unsigned)_getRemainingNominalParagraphRange:(NSRange *)range andParagraphSeparatorRange:(NSRange *)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;	// 0x32cbd921
- (void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned *)index5 nextCharacterIndex:(unsigned *)index6;	// 0x32cbf45d
- (XXUnion_5c6s2D *)_lineFragmentRectForProposedRectArgs;	// 0x32cbdf4d
- (void)_setForceOriginalFontBaseline:(BOOL)baseline;	// 0x32cbd8e1
- (unsigned)_sweepDirectionForGlyphAtIndex:(long)index;	// 0x32cbdf51
- (void)_updateParagraphStyleCache:(id)cache;	// 0x32cbdd55
- (unsigned)actionForControlCharacterAtIndex:(unsigned)index;	// 0x32cbf39d
// converted property getter: - (id)attributedString;	// 0x32cbe45d
- (id)attributesForExtraLineFragment;	// 0x32cbf351
- (float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;	// 0x32cc16b9
- (void)beginLineWithGlyphAtIndex:(unsigned)index;	// 0x32cbe7c9
- (void)beginParagraph;	// 0x32cbe6b5
// converted property getter: - (BOOL)bidiProcessingEnabled;	// 0x32cbe351
- (NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange *)range;	// 0x32cc19a1
- (id)currentParagraphStyle;	// 0x32cbea49
- (id)currentTextContainer;	// 0x32cbea19
- (void)dealloc;	// 0x32cbd7f5
- (void)deleteGlyphsInRange:(NSRange)range;	// 0x32cc2a85
- (void)endLineWithGlyphRange:(NSRange)glyphRange;	// 0x32cbe859
- (void)endParagraph;	// 0x32cbe791
- (void)finalize;	// 0x32cbd869
- (unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned *)glyphs characterIndexes:(unsigned *)indexes glyphInscriptions:(unsigned *)inscriptions elasticBits:(BOOL *)bits bidiLevels:(char *)levels;	// 0x32cc1b01
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;	// 0x32cbeab1
- (void)getLineFragmentRect:(CGRect *)rect usedRect:(CGRect *)rect2 remainingRect:(CGRect *)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;	// 0x32cc1b51
- (NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange *)range;	// 0x32cc1a51
// converted property getter: - (float)hyphenationFactor;	// 0x32cbe0ad
- (void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;	// 0x32cc2a09
- (NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;	// 0x32cc15dd
- (void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned *)index;	// 0x32cc1581
- (id)layoutManager;	// 0x32cbe9b9
- (unsigned)layoutParagraphAtPoint:(CGPoint *)point;	// 0x32cbe665
// converted property getter: - (float)lineFragmentPadding;	// 0x32cbe119
- (float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x32cbe8c9
- (NSRange)paragraphCharacterRange;	// 0x32cbe5f5
- (NSRange)paragraphGlyphRange;	// 0x32cbe585
- (NSRange)paragraphSeparatorCharacterRange;	// 0x32cbe62d
- (NSRange)paragraphSeparatorGlyphRange;	// 0x32cbe5bd
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x32cbe989
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;	// 0x32cbe949
- (void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;	// 0x32cc2cb9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32cbe42d
- (void)setBidiLevels:(const char *)levels forGlyphRange:(NSRange)glyphRange;	// 0x32cc2d19
// converted property setter: - (void)setBidiProcessingEnabled:(BOOL)enabled;	// 0x32cbe381
- (void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;	// 0x32cc2b91
- (void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;	// 0x32cbea79
// converted property setter: - (void)setHyphenationFactor:(float)factor;	// 0x32cbe0d9
// converted property setter: - (void)setLineFragmentPadding:(float)padding;	// 0x32cbe149
- (void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;	// 0x32cc28c9
- (void)setLocation:(CGPoint)location withAdvancements:(const float *)advancements forStartOfGlyphRange:(NSRange)glyphRange;	// 0x32cc2c2d
- (void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;	// 0x32cc2af5
- (void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;	// 0x32cbe48d
// converted property setter: - (void)setTightenThresholdForTruncation:(float)truncation;	// 0x32cbe3ed
// converted property setter: - (void)setTypesetterBehavior:(int)behavior;	// 0x32cbe075
// converted property setter: - (void)setUsesFontLeading:(BOOL)leading;	// 0x32cbe005
- (id)substituteFontForFont:(id)font;	// 0x32cbe189
- (void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned *)glyphs;	// 0x32cc29a1
- (id)textContainers;	// 0x32cbe9e9
- (id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;	// 0x32cbe1bd
// converted property getter: - (float)tightenThresholdForTruncation;	// 0x32cbe3c1
// converted property getter: - (int)typesetterBehavior;	// 0x32cbe045
// converted property getter: - (BOOL)usesFontLeading;	// 0x32cbdfd5
@end

