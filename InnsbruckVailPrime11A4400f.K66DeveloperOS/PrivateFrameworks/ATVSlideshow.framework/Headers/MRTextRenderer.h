/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import </libobjc.A.h>

@class NSAttributedString;

@interface MRTextRenderer : NSObject {
	NSAttributedString *_text;	// 4 = 0x4
	NSAttributedString *_cachedText;	// 8 = 0x8
	NSAttributedString *_placeholderText;	// 12 = 0xc
	CGSize _definedSize;	// 16 = 0x10
	CGSize _resolution;	// 24 = 0x18
	int _maxNumberOfLines;	// 32 = 0x20
	int _lastGlyphIndex;	// 36 = 0x24
	BOOL _truncate;	// 40 = 0x28
	BOOL _renderAtDefinedSize;	// 41 = 0x29
	float _lineSpacingFactor;	// 44 = 0x2c
	CGSize _inset;	// 48 = 0x30
	float _scale;	// 56 = 0x38
	int _columnCount;	// 60 = 0x3c
	float _columnMargin;	// 64 = 0x40
	float _extraFooter;	// 68 = 0x44
	BOOL _centerVertically;	// 72 = 0x48
	CGSize _cachedSize;	// 76 = 0x4c
	CGSize _originalCacheSize;	// 84 = 0x54
	CGRect _imageRect;	// 92 = 0x5c
}
@property(assign, nonatomic) BOOL centerVertically;	// G=0x2fc9f8b5; S=0x2fc9f8c5; @synthesize=_centerVertically
@property(assign, nonatomic) int columnCount;	// G=0x2fc9f855; S=0x2fc9f865; @synthesize=_columnCount
@property(assign, nonatomic) float columnMargin;	// G=0x2fc9f875; S=0x2fc9f885; @synthesize=_columnMargin
@property(assign, nonatomic) CGSize definedSize;	// G=0x2fc9f79d; S=0x2fc9f7b5; @synthesize=_definedSize
@property(assign, nonatomic) float extraFooter;	// G=0x2fc9f895; S=0x2fc9f8a5; @synthesize=_extraFooter
@property(assign, nonatomic) CGRect imageRect;	// G=0x2fc9f8d5; S=0x2fc9f8ed; @synthesize=_imageRect
@property(assign, nonatomic) CGSize inset;	// G=0x2fc9f809; S=0x2fc9f821; @synthesize=_inset
@property(assign, nonatomic) float lineSpacingFactor;	// G=0x2fc9f7e9; S=0x2fc9f7f9; @synthesize=_lineSpacingFactor
@property(assign, nonatomic) int maxNumberOfLines;	// G=0x2fc9f75d; S=0x2fc9f76d; @synthesize=_maxNumberOfLines
@property(assign, nonatomic) NSAttributedString *placeholderText;	// G=0x2fc9f735; S=0x2fc9b709; @synthesize=_placeholderText
@property(assign, nonatomic) BOOL renderAtDefinedSize;	// G=0x2fc9f7c9; S=0x2fc9f7d9; @synthesize=_renderAtDefinedSize
@property(assign, nonatomic) CGSize resolution;	// G=0x2fc9f745; S=0x2fc9b865; @synthesize=_resolution
@property(assign, nonatomic) float scale;	// G=0x2fc9f835; S=0x2fc9f845; @synthesize=_scale
@property(assign, nonatomic) NSAttributedString *text;	// G=0x2fc9b6c5; S=0x2fc9b7a5; @synthesize=_text
@property(assign, nonatomic) BOOL truncate;	// G=0x2fc9f77d; S=0x2fc9f78d; @synthesize=_truncate
- (id)init;	// 0x2fc9b449
- (id)initWithText:(id)text resolution:(CGSize)resolution;	// 0x2fc9b579
- (void)_drawInContext:(CGContextRef)context withAttributedString:(id)attributedString withSize:(CGSize)size andScale:(float)scale;	// 0x2fc9c311
- (id)_invertRect:(CGRect)rect inRect:(CGRect)rect2;	// 0x2fc9f911
- (int)_numberOfLinesInString:(id)string;	// 0x2fc9ec39
- (CGContextRef)_retainedContextFromAttributedString:(id)attributedString withSize:(CGSize)size;	// 0x2fc9c181
- (float)_scale;	// 0x2fc9be51
- (CGSize)_shadowSizeOffsetForString:(id)string;	// 0x2fc9ef11
- (CGSize)_sizeOfString:(id)string;	// 0x2fc9e729
- (CGSize)_sizeToRendererAt;	// 0x2fc9bc65
- (float)_strikethroughThinkness:(int)thinkness baselineOffset:(float)offset lineRect:(CGRect)rect;	// 0x2fc9c2a1
- (CGRect)_textClipRectForString:(id)string;	// 0x2fc9ccd9
- (CGRect)_tightFrameOfLineAtIndex:(int)index inString:(id)string withSize:(CGSize)size;	// 0x2fc9bf6d
- (id)_truncateTextToFitInSize:(CGSize)size fromCenter:(BOOL)center outSize:(CGSize *)size3;	// 0x2fc9f301
- (void)cacheText;	// 0x2fc9b88d
// declared property getter: - (BOOL)centerVertically;	// 0x2fc9f8b5
- (void)cleanup;	// 0x2fc9b671
- (void)clearCache;	// 0x2fc9b941
// declared property getter: - (int)columnCount;	// 0x2fc9f855
// declared property getter: - (float)columnMargin;	// 0x2fc9f875
- (int)countOfGlyphs;	// 0x2fc9daf1
- (int)countOfWords;	// 0x2fc9ce55
- (void)dealloc;	// 0x2fc9b5f1
// declared property getter: - (CGSize)definedSize;	// 0x2fc9f79d
// declared property getter: - (float)extraFooter;	// 0x2fc9f895
- (void)finalize;	// 0x2fc9b631
- (CGRect)frameOfLineWithGlyphAtIndex:(int)index range:(NSRange *)range;	// 0x2fc9e2a9
- (int)glyphIndexForStringIndex:(int)stringIndex;	// 0x2fc9dedd
// declared property getter: - (CGRect)imageRect;	// 0x2fc9f8d5
// declared property getter: - (CGSize)inset;	// 0x2fc9f809
// declared property getter: - (float)lineSpacingFactor;	// 0x2fc9f7e9
// declared property getter: - (int)maxNumberOfLines;	// 0x2fc9f75d
- (int)numberOfLines;	// 0x2fc9eb71
- (int)numberOfLinesForTruncatedText;	// 0x2fc9eba1
- (CGPoint)originOfGlyphAtIndex:(int)index;	// 0x2fc9e091
- (CGPoint)originOfWordAtIndex:(int)index;	// 0x2fc9d8d1
// declared property getter: - (id)placeholderText;	// 0x2fc9f735
- (XXStruct_K5nmsA)rangeOfGlyphsForWordsInRange:(XXStruct_K5nmsA)range;	// 0x2fc9d479
- (XXStruct_K5nmsA)rangeOfGlyphsOnLine:(int)glyphsOnLine;	// 0x2fc9d305
- (XXStruct_K5nmsA)rangeOfStringForGlyphIndex:(int)glyphIndex;	// 0x2fc9dcc9
- (XXStruct_K5nmsA)rangeOfWordsOnLine:(int)wordsOnLine;	// 0x2fc9cfdd
// declared property getter: - (BOOL)renderAtDefinedSize;	// 0x2fc9f7c9
// declared property getter: - (CGSize)resolution;	// 0x2fc9f745
- (CGContextRef)retainedContext;	// 0x2fc9b9a1
- (CGContextRef)retainedContextOfGlyphAtIndex:(int)index;	// 0x2fc9dbf1
- (CGContextRef)retainedContextOfWordsInRange:(XXStruct_K5nmsA)range;	// 0x2fc9d671
// declared property getter: - (float)scale;	// 0x2fc9f835
// declared property setter: - (void)setCenterVertically:(BOOL)vertically;	// 0x2fc9f8c5
// declared property setter: - (void)setColumnCount:(int)count;	// 0x2fc9f865
// declared property setter: - (void)setColumnMargin:(float)margin;	// 0x2fc9f885
// declared property setter: - (void)setDefinedSize:(CGSize)size;	// 0x2fc9f7b5
// declared property setter: - (void)setExtraFooter:(float)footer;	// 0x2fc9f8a5
// declared property setter: - (void)setImageRect:(CGRect)rect;	// 0x2fc9f8ed
// declared property setter: - (void)setInset:(CGSize)inset;	// 0x2fc9f821
// declared property setter: - (void)setLineSpacingFactor:(float)factor;	// 0x2fc9f7f9
// declared property setter: - (void)setMaxNumberOfLines:(int)lines;	// 0x2fc9f76d
// declared property setter: - (void)setPlaceholderText:(id)text;	// 0x2fc9b709
// declared property setter: - (void)setRenderAtDefinedSize:(BOOL)definedSize;	// 0x2fc9f7d9
// declared property setter: - (void)setResolution:(CGSize)resolution;	// 0x2fc9b865
// declared property setter: - (void)setScale:(float)scale;	// 0x2fc9f845
// declared property setter: - (void)setText:(id)text;	// 0x2fc9b7a5
// declared property setter: - (void)setTruncate:(BOOL)truncate;	// 0x2fc9f78d
- (CGSize)shadowOffset;	// 0x2fc9ed99
- (CGSize)sizeOfContext;	// 0x2fc9bb7d
- (CGSize)sizeOfText;	// 0x2fc9ba99
- (void)squeezeWidthForLineCount:(int)lineCount;	// 0x2fc9f041
// declared property getter: - (id)text;	// 0x2fc9b6c5
- (CGRect)tightFrameOfAllLines;	// 0x2fc9bd1d
- (CGRect)tightFrameOfLineAtIndex:(int)index;	// 0x2fc9be61
- (void)trimWhitespace;	// 0x2fc9f645
// declared property getter: - (BOOL)truncate;	// 0x2fc9f77d
- (id)truncatedText;	// 0x2fc9ebf9
- (void)updateLineSpacing;	// 0x2fc9f0f1
@end
