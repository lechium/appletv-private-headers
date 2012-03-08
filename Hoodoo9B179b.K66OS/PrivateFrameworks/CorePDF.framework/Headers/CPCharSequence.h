/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"
#import "NSCopying.h"

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x34861eb9; converted property
@property(readonly, assign) unsigned length;	// G=0x34861ea9; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x34861ec9; converted property
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x348622b9
- (id)initWithSizeFor:(unsigned)aFor;	// 0x3486337d
- (void)addChar:(CPPDFChar *)aChar;	// 0x34863039
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x34862fcd
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34862f41
- (void)addCharsFromSequence:(id)sequence;	// 0x34862edd
- (CGRect)bounds;	// 0x34862459
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x3486234d
// converted property getter: - (CPPDFChar **)charArray;	// 0x34861eb9
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x34863095
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x348626c9
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34862621
- (id)copyWithZone:(NSZone *)zone;	// 0x34863229
- (void)dealloc;	// 0x3486331d
- (void)dispose;	// 0x34862281
- (void)finalize;	// 0x3486230d
// converted property getter: - (unsigned)length;	// 0x34861ea9
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x34861ed9
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x34862045
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x34861f81
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34861fe1
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x34862489
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x34861f29
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x34862af5
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x34862bdd
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x34862bf9
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x348629a5
- (void)removeAllChars;	// 0x34862e21
- (void)removeChar;	// 0x34862e9d
- (void)removeCharAtIndex:(unsigned)index;	// 0x34862d01
- (void)removeFrom:(unsigned)from;	// 0x34862cad
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x34862769
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x3486250d
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x34862da9
- (void)resize:(unsigned)resize;	// 0x348630e5
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x34862c15
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x34862c75
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x34862c91
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x348628ad
// converted property getter: - (BOOL)wasMerged;	// 0x34861ec9
@end

