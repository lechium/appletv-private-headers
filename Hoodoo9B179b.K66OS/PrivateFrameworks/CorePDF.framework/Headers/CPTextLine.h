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
@property(assign) float baseline;	// G=0x3484d50d; S=0x3484cb4d; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x3484c839; S=0x3484e045; converted property
@property(retain) NSArray *columnBreaks;	// G=0x3484caf5; S=0x3484d8d5; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x3484cae5; S=0x3484cad5; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x3484cac5; S=0x3484cab5; converted property
@property(assign) BOOL hasTabs;	// G=0x3484cb15; S=0x3484cb05; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x3484c8dd; converted property
@property(assign) BOOL irregular;	// G=0x3484cc21; S=0x3484cc31; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x3484cc8d; S=0x3484cc9d; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x3484cccd; S=0x3484ccdd; @synthesize
@property(assign) int levels;	// G=0x3484cbad; S=0x3484cbbd; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x3484cc4d; S=0x3484cc5d; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x3484cc6d; S=0x3484cc7d; @synthesize
@property(assign) float maximumLetterGap;	// G=0x3484cbe1; S=0x3484cbf1; converted property
@property(assign) float maximumWordGap;	// G=0x3484cc01; S=0x3484cc11; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x3484d0b1; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x3484ccad; S=0x3484ccbd; @synthesize
@property(assign) int tabsBefore;	// G=0x3484cb35; S=0x3484cb25; converted property
@property(readonly, assign) XXStruct_NaTu4D *wordArray;	// G=0x3484c849; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x3484c859; converted property
- (id)init;	// 0x3484cced
- (void)accept:(id)accept;	// 0x3484d8bd
- (int)align;	// 0x3484dd71
- (CGPoint)anchor;	// 0x3484d5c9
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x3484de05
- (id)attributes;	// 0x3484cc41
- (int)baseLineAscending:(id)ascending;	// 0x3484d775
- (int)baseLineDescending:(id)descending;	// 0x3484d729
// converted property getter: - (float)baseline;	// 0x3484d50d
- (CGRect)bounds;	// 0x3484d7c1
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x3484df81
- (BOOL)changesFontAt:(id)at;	// 0x3484dca9
// converted property getter: - (id)charSequence;	// 0x3484c839
// converted property getter: - (id)columnBreaks;	// 0x3484caf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3484e08d
- (void)dealloc;	// 0x3484e17d
- (void)dispose;	// 0x3484e22d
- (void)finalize;	// 0x3484e1ed
- (XXStruct_NaTu4D *)firstWord;	// 0x3484c869
- (void)fitBoundsToChildren;	// 0x3484cb45
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x3484cae5
// converted property getter: - (BOOL)hasBeenSplit;	// 0x3484cac5
- (BOOL)hasDropCap;	// 0x3484ce59
- (BOOL)hasJustifiedAlignment;	// 0x3484dd3d
// converted property getter: - (BOOL)hasTabs;	// 0x3484cb15
- (BOOL)hyphenated;	// 0x3484cb49
- (unsigned)inlineCount;	// 0x3484c8b9
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x3484c8dd
// converted property getter: - (BOOL)irregular;	// 0x3484cc21
- (BOOL)isIndivisible;	// 0x3484cb71
// declared property getter: - (BOOL)isListItem;	// 0x3484cc8d
- (BOOL)isMonospaced;	// 0x3484d221
- (XXStruct_NaTu4D *)lastWord;	// 0x3484c88d
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x3484cccd
// converted property getter: - (int)levels;	// 0x3484cbad
// declared property getter: - (BOOL)lineBreakAfter;	// 0x3484cc4d
// declared property getter: - (unsigned)listSpacerIndex;	// 0x3484cc6d
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x3484c9cd
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x3484ca35
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x3484c8fd
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x3484c965
// converted property getter: - (float)maximumLetterGap;	// 0x3484cbe1
// converted property getter: - (float)maximumWordGap;	// 0x3484cc01
- (float)medianFontSize;	// 0x3484cdc5
// converted property getter: - (float)monospaceWidth;	// 0x3484d0b1
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x3484daf1
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x3484d639
- (BOOL)overlapsWith:(id)with;	// 0x3484d6d9
- (id)properties;	// 0x3484caa9
- (void)recomputeBaseline;	// 0x3484d345
- (void)recomputeLevels;	// 0x3484cf91
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3484d91d
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x3484ccad
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x3484cb4d
- (void)setBaselineToNull;	// 0x3484cb5d
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x3484e045
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x3484d8d5
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x3484cad5
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x3484cab5
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x3484cb05
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x3484cc31
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x3484cc9d
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x3484ccdd
// converted property setter: - (void)setLevels:(int)levels;	// 0x3484cbbd
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x3484cc5d
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x3484cc7d
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x3484cbf1
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x3484cc11
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x3484ccbd
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x3484cff1
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x3484cb25
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x3484cb75
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x3484d249
// converted property getter: - (int)tabsBefore;	// 0x3484cb35
- (int)topIsAbove:(id)above;	// 0x3484cf05
- (void)translateObjectYBy:(float)by;	// 0x3484d4b9
// converted property getter: - (XXStruct_NaTu4D *)wordArray;	// 0x3484c849
- (XXStruct_NaTu4D *)wordArrayOfSize:(unsigned)size;	// 0x3484dfe1
- (XXStruct_NaTu4D *)wordAtIndex:(unsigned)index;	// 0x3484df31
// converted property getter: - (unsigned)wordCount;	// 0x3484c859
- (long)zOrder;	// 0x3484ddb9
@end

