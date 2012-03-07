/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPTextObject.h"

@class NSArray, CPCharSequence;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence *charSequence;	// 76 = 0x4c
	XXStruct_NaTu4D *wordArray;	// 80 = 0x50
	unsigned wordCount;	// 84 = 0x54
	CPInlineContainer *inlineList;	// 88 = 0x58
	int lineNumber;	// 92 = 0x5c
	int columnNumber;	// 96 = 0x60
	float baseline;	// 100 = 0x64
	BOOL baseLineIsNull;	// 104 = 0x68
	BOOL hasBeenSplit;	// 105 = 0x69
	BOOL hasBeenProcessed;	// 106 = 0x6a
	BOOL maySplit;	// 107 = 0x6b
	BOOL hasTabs;	// 108 = 0x6c
	NSArray *columnBreaks;	// 112 = 0x70
	NSArray *xsegments;	// 116 = 0x74
	float minimumOffset;	// 120 = 0x78
	int levels;	// 124 = 0x7c
	float maximumLetterGap;	// 128 = 0x80
	float maximumWordGap;	// 132 = 0x84
	int tabsBefore;	// 136 = 0x88
	BOOL irregular;	// 140 = 0x8c
	unsigned leftSpacerIndex;	// 144 = 0x90
	unsigned rightSpacerIndex;	// 148 = 0x94
	BOOL isListItem;	// 152 = 0x98
	unsigned listSpacerIndex;	// 156 = 0x9c
	BOOL lineBreakAfter;	// 160 = 0xa0
	CPPDFStyle *uniformStyle;	// 164 = 0xa4
	unsigned short uniformStyleFlags;	// 168 = 0xa8
	float monospaceWidth;	// 172 = 0xac
	unsigned *spacesBefore;	// 176 = 0xb0
	BOOL disposed;	// 180 = 0xb4
}
@property(assign) float baseline;	// G=0x30ba1659; S=0x30ba01e1; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x30b9ff09; S=0x30ba0e89; converted property
@property(retain) NSArray *columnBreaks;	// G=0x30ba0189; S=0x30ba0a99; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x30ba0179; S=0x30ba0169; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x30ba0159; S=0x30ba0149; converted property
@property(assign) BOOL hasTabs;	// G=0x30ba01a9; S=0x30ba0199; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x30b9ffa9; converted property
@property(assign) BOOL irregular;	// G=0x30ba02b5; S=0x30ba02c5; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x30ba0321; S=0x30ba0331; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x30ba0361; S=0x30ba0371; @synthesize
@property(assign) int levels;	// G=0x30ba0239; S=0x30ba0249; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x30ba02e1; S=0x30ba02f1; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x30ba0301; S=0x30ba0311; @synthesize
@property(assign) float maximumLetterGap;	// G=0x30ba0275; S=0x30ba0285; converted property
@property(assign) float maximumWordGap;	// G=0x30ba0295; S=0x30ba02a5; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x30ba059d; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x30ba0341; S=0x30ba0351; @synthesize
@property(assign) int tabsBefore;	// G=0x30ba01c9; S=0x30ba01b9; converted property
@property(readonly, assign) XXStruct_NaTu4D *wordArray;	// G=0x30b9ff19; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x30b9ff29; converted property
- (id)init;	// 0x30ba03d5
- (void)accept:(id)accept;	// 0x30ba0a7d
- (int)align;	// 0x30ba0e09
- (CGPoint)anchor;	// 0x30ba096d
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x30ba12b5
- (id)attributes;	// 0x30ba02d5
- (int)baseLineAscending:(id)ascending;	// 0x30ba0a25
- (int)baseLineDescending:(id)descending;	// 0x30ba09cd
// converted property getter: - (float)baseline;	// 0x30ba1659
- (CGRect)bounds;	// 0x30ba1499
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x30ba121d
- (BOOL)changesFontAt:(id)at;	// 0x30ba13f5
// converted property getter: - (id)charSequence;	// 0x30b9ff09
// converted property getter: - (id)columnBreaks;	// 0x30ba0189
- (id)copyWithZone:(NSZone *)zone;	// 0x30ba10a5
- (void)dealloc;	// 0x30ba0ec5
- (void)dispose;	// 0x30ba0f69
- (void)finalize;	// 0x30ba0f2d
- (XXStruct_NaTu4D *)firstWord;	// 0x30b9ff39
- (void)fitBoundsToChildren;	// 0x30ba01d9
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x30ba0179
// converted property getter: - (BOOL)hasBeenSplit;	// 0x30ba0159
- (BOOL)hasDropCap;	// 0x30ba0499
- (BOOL)hasJustifiedAlignment;	// 0x30ba0de1
// converted property getter: - (BOOL)hasTabs;	// 0x30ba01a9
- (BOOL)hyphenated;	// 0x30ba01dd
- (unsigned)inlineCount;	// 0x30b9ff85
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x30b9ffa9
// converted property getter: - (BOOL)irregular;	// 0x30ba02b5
- (BOOL)isIndivisible;	// 0x30ba0201
// declared property getter: - (BOOL)isListItem;	// 0x30ba0321
- (BOOL)isMonospaced;	// 0x30ba06ed
- (XXStruct_NaTu4D *)lastWord;	// 0x30b9ff59
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x30ba0361
// converted property getter: - (int)levels;	// 0x30ba0239
// declared property getter: - (BOOL)lineBreakAfter;	// 0x30ba02e1
// declared property getter: - (unsigned)listSpacerIndex;	// 0x30ba0301
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x30ba0075
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30ba00d1
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x30b9ffc9
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x30ba001d
// converted property getter: - (float)maximumLetterGap;	// 0x30ba0275
// converted property getter: - (float)maximumWordGap;	// 0x30ba0295
- (float)medianFontSize;	// 0x30ba15d1
// converted property getter: - (float)monospaceWidth;	// 0x30ba059d
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x30ba0c51
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x30ba1545
- (BOOL)overlapsWith:(id)with;	// 0x30ba1271
- (id)properties;	// 0x30ba013d
- (void)recomputeBaseline;	// 0x30ba0815
- (void)recomputeLevels;	// 0x30ba0545
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x30ba0ad5
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x30ba0341
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x30ba01e1
- (void)setBaselineToNull;	// 0x30ba01f1
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x30ba0e89
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x30ba0a99
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x30ba0169
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x30ba0149
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x30ba0199
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x30ba02c5
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x30ba0331
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x30ba0371
// converted property setter: - (void)setLevels:(int)levels;	// 0x30ba0249
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x30ba02f1
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x30ba0311
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x30ba0285
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x30ba02a5
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x30ba0351
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x30ba0ff1
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x30ba01b9
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x30ba0205
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x30ba0715
// converted property getter: - (int)tabsBefore;	// 0x30ba01c9
- (int)topIsAbove:(id)above;	// 0x30ba1791
- (void)translateObjectYBy:(float)by;	// 0x30ba0381
// converted property getter: - (XXStruct_NaTu4D *)wordArray;	// 0x30b9ff19
- (XXStruct_NaTu4D *)wordArrayOfSize:(unsigned)size;	// 0x30ba1181
- (XXStruct_NaTu4D *)wordAtIndex:(unsigned)index;	// 0x30ba11d5
// converted property getter: - (unsigned)wordCount;	// 0x30b9ff29
- (long)zOrder;	// 0x30ba0e45
@end
