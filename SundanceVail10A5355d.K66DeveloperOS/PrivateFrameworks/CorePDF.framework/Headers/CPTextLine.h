/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPTextObject.h"
#import "CPDisposable.h"

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence *charSequence;	// 76 = 0x4c
	XXStruct_iDweLB *wordArray;	// 80 = 0x50
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
	int levels;	// 120 = 0x78
	float maximumLetterGap;	// 124 = 0x7c
	float maximumWordGap;	// 128 = 0x80
	int tabsBefore;	// 132 = 0x84
	BOOL irregular;	// 136 = 0x88
	unsigned leftSpacerIndex;	// 140 = 0x8c
	unsigned rightSpacerIndex;	// 144 = 0x90
	BOOL isListItem;	// 148 = 0x94
	unsigned listSpacerIndex;	// 152 = 0x98
	BOOL lineBreakAfter;	// 156 = 0x9c
	CPPDFStyle *uniformStyle;	// 160 = 0xa0
	unsigned short uniformStyleFlags;	// 164 = 0xa4
	float monospaceWidth;	// 168 = 0xa8
	unsigned *spacesBefore;	// 172 = 0xac
	BOOL disposed;	// 176 = 0xb0
}
@property(assign) float baseline;	// G=0x34cefa65; S=0x34cefb31; converted property
@property(retain) CPCharSequence *charSequence;	// G=0x34ceed7d; S=0x34ceed39; converted property
@property(retain) NSArray *columnBreaks;	// G=0x34cef719; S=0x34cef729; converted property
@property(assign) BOOL hasBeenProcessed;	// G=0x34cef709; S=0x34cef6f9; converted property
@property(assign) BOOL hasBeenSplit;	// G=0x34cef6e9; S=0x34cef6d9; converted property
@property(assign) BOOL hasTabs;	// G=0x34cef795; S=0x34cef785; converted property
@property(readonly, assign) CPInlineContainer *inlineList;	// G=0x34ceef29; converted property
@property(assign) BOOL irregular;	// G=0x34cf01e5; S=0x34cf01f5; converted property
@property(assign, nonatomic) BOOL isListItem;	// G=0x34cf0421; S=0x34cf0431; @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// G=0x34cf03e1; S=0x34cf03f1; @synthesize
@property(assign) int levels;	// G=0x34cf0111; S=0x34cf0121; converted property
@property(assign, nonatomic) BOOL lineBreakAfter;	// G=0x34cf0461; S=0x34cf0471; @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// G=0x34cf0441; S=0x34cf0451; @synthesize
@property(assign) float maximumLetterGap;	// G=0x34cf01a5; S=0x34cf01b5; converted property
@property(assign) float maximumWordGap;	// G=0x34cf01c5; S=0x34cf01d5; converted property
@property(readonly, assign) float monospaceWidth;	// G=0x34cefe35; converted property
@property(assign, nonatomic) unsigned rightSpacerIndex;	// G=0x34cf0401; S=0x34cf0411; @synthesize
@property(assign) int tabsBefore;	// G=0x34cef7b5; S=0x34cef7a5; converted property
@property(readonly, assign) XXStruct_iDweLB *wordArray;	// G=0x34ceed8d; converted property
@property(readonly, assign) unsigned wordCount;	// G=0x34ceeded; converted property
- (id)init;	// 0x34ceea49
- (void)accept:(id)accept;	// 0x34cef76d
- (int)align;	// 0x34cef0e1
- (CGPoint)anchor;	// 0x34cef9fd
- (void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;	// 0x34ceef39
- (id)attributes;	// 0x34cf0205
- (int)baseLineAscending:(id)ascending;	// 0x34cef889
- (int)baseLineDescending:(id)descending;	// 0x34cef8cd
// converted property getter: - (float)baseline;	// 0x34cefa65
- (CGRect)bounds;	// 0x34cef7c9
- (CGRect)boundsOfWordAtIndex:(unsigned)index;	// 0x34ceedfd
- (BOOL)changesFontAt:(id)at;	// 0x34cef159
// converted property getter: - (id)charSequence;	// 0x34ceed7d
// converted property getter: - (id)columnBreaks;	// 0x34cef719
- (id)copyWithZone:(NSZone *)zone;	// 0x34ceec5d
- (void)dealloc;	// 0x34ceebe9
- (void)dispose;	// 0x34ceeb1d
- (void)finalize;	// 0x34ceeba9
- (XXStruct_iDweLB *)firstWord;	// 0x34ceeeb1
- (void)fitBoundsToChildren;	// 0x34cef7c5
// converted property getter: - (BOOL)hasBeenProcessed;	// 0x34cef709
// converted property getter: - (BOOL)hasBeenSplit;	// 0x34cef6e9
- (BOOL)hasDropCap;	// 0x34cf02a5
- (BOOL)hasJustifiedAlignment;	// 0x34cef12d
// converted property getter: - (BOOL)hasTabs;	// 0x34cef795
- (BOOL)hyphenated;	// 0x34cefa61
- (unsigned)inlineCount;	// 0x34ceef01
// converted property getter: - (CPInlineContainer *)inlineList;	// 0x34ceef29
// converted property getter: - (BOOL)irregular;	// 0x34cf01e5
- (BOOL)isIndivisible;	// 0x34cefb55
// declared property getter: - (BOOL)isListItem;	// 0x34cf0421
- (BOOL)isMonospaced;	// 0x34cefe09
- (XXStruct_iDweLB *)lastWord;	// 0x34ceeed5
// declared property getter: - (unsigned)leftSpacerIndex;	// 0x34cf03e1
// converted property getter: - (int)levels;	// 0x34cf0111
// declared property getter: - (BOOL)lineBreakAfter;	// 0x34cf0461
// declared property getter: - (unsigned)listSpacerIndex;	// 0x34cf0441
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x34cef5f9
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34cef65d
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x34cef52d
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34cef58d
// converted property getter: - (float)maximumLetterGap;	// 0x34cf01a5
// converted property getter: - (float)maximumWordGap;	// 0x34cf01c5
- (float)medianFontSize;	// 0x34cf0359
// converted property getter: - (float)monospaceWidth;	// 0x34cefe35
- (id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;	// 0x34cef1e9
- (BOOL)overlapsHorizontally:(CGRect)horizontally;	// 0x34cef961
- (BOOL)overlapsWith:(id)with;	// 0x34cef911
- (id)properties;	// 0x34cef6cd
- (void)recomputeBaseline;	// 0x34cefbad
- (void)recomputeLevels;	// 0x34cf0131
- (BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34cef395
// declared property getter: - (unsigned)rightSpacerIndex;	// 0x34cf0401
// converted property setter: - (void)setBaseline:(float)baseline;	// 0x34cefb31
- (void)setBaselineToNull;	// 0x34cefb41
// converted property setter: - (void)setCharSequence:(id)sequence;	// 0x34ceed39
// converted property setter: - (void)setColumnBreaks:(id)breaks;	// 0x34cef729
// converted property setter: - (void)setHasBeenProcessed:(BOOL)processed;	// 0x34cef6f9
// converted property setter: - (void)setHasBeenSplit:(BOOL)split;	// 0x34cef6d9
// converted property setter: - (void)setHasTabs:(BOOL)tabs;	// 0x34cef785
// converted property setter: - (void)setIrregular:(BOOL)irregular;	// 0x34cf01f5
// declared property setter: - (void)setIsListItem:(BOOL)item;	// 0x34cf0431
// declared property setter: - (void)setLeftSpacerIndex:(unsigned)index;	// 0x34cf03f1
// converted property setter: - (void)setLevels:(int)levels;	// 0x34cf0121
// declared property setter: - (void)setLineBreakAfter:(BOOL)after;	// 0x34cf0471
// declared property setter: - (void)setListSpacerIndex:(unsigned)index;	// 0x34cf0451
// converted property setter: - (void)setMaximumLetterGap:(float)gap;	// 0x34cf01b5
// converted property setter: - (void)setMaximumWordGap:(float)gap;	// 0x34cf01d5
// declared property setter: - (void)setRightSpacerIndex:(unsigned)index;	// 0x34cf0411
- (void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;	// 0x34cf0069
// converted property setter: - (void)setTabsBefore:(int)before;	// 0x34cef7a5
- (unsigned)spacesBeforeWordAtIndex:(unsigned)index;	// 0x34cf0031
- (BOOL)styleIsUniform:(CPPDFStyle **)uniform styleFlags:(unsigned short)flags;	// 0x34cefd11
// converted property getter: - (int)tabsBefore;	// 0x34cef7b5
- (int)topIsAbove:(id)above;	// 0x34cf0211
- (void)translateObjectYBy:(float)by;	// 0x34cefb59
// converted property getter: - (XXStruct_iDweLB *)wordArray;	// 0x34ceed8d
- (XXStruct_iDweLB *)wordArrayOfSize:(unsigned)size;	// 0x34ceed9d
- (XXStruct_iDweLB *)wordAtIndex:(unsigned)index;	// 0x34ceee61
// converted property getter: - (unsigned)wordCount;	// 0x34ceeded
- (long)zOrder;	// 0x34cef089
@end

