/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
	unsigned length;	// 4 = 0x4
	CPPDFChar **charArray;	// 8 = 0x8
	unsigned previousSize;	// 12 = 0xc
	unsigned size;	// 16 = 0x10
	CPMemoryOwner *sharedMemory;	// 20 = 0x14
	BOOL wasMerged;	// 24 = 0x18
}
@property(readonly, assign) CPPDFChar **charArray;	// G=0x32af1165; converted property
@property(readonly, assign) unsigned length;	// G=0x32af1105; converted property
@property(readonly, assign) BOOL wasMerged;	// G=0x32af17f9; converted property
- (id)initSuper;	// 0x32af0df5
- (id)initWithChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x32af0d9d
- (id)initWithSizeFor:(unsigned)aFor;	// 0x32af0d35
- (void)addChar:(CPPDFChar *)aChar;	// 0x32af1175
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length;	// 0x32af11dd
- (void)addChars:(CPPDFChar *)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x32af124d
- (void)addCharsFromSequence:(id)sequence;	// 0x32af12e5
- (CGRect)bounds;	// 0x32af2059
- (CGRect)boundsFrom:(unsigned)from length:(unsigned)length;	// 0x32af2095
// converted property getter: - (CPPDFChar **)charArray;	// 0x32af1165
- (CPPDFChar *)charAtIndex:(unsigned)index;	// 0x32af1115
- (void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;	// 0x32af1b71
- (void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x32af1c0d
- (id)copyWithZone:(NSZone *)zone;	// 0x32af0ef9
- (void)dealloc;	// 0x32af0e99
- (void)dispose;	// 0x32af0e21
- (void)finalize;	// 0x32af0e59
// converted property getter: - (unsigned)length;	// 0x32af1105
- (BOOL)map:(/*function-pointer*/ void *)map passing:(void *)passing;	// 0x32af1da1
- (BOOL)map:(/*function-pointer*/ void *)map whereNeighborsWith:(id)with passing:(void *)passing;	// 0x32af1f6d
- (BOOL)mapToPairs:(/*function-pointer*/ void *)pairs passing:(void *)passing;	// 0x32af1ec1
- (BOOL)mapToPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x32af1f11
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index from:(unsigned)from length:(unsigned)length passing:(void *)passing;	// 0x32af1e41
- (BOOL)mapWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x32af1ded
- (void)merge:(id)merge by:(/*function-pointer*/ void *)by;	// 0x32af1729
- (void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;	// 0x32af170d
- (void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;	// 0x32af16f1
- (id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;	// 0x32af1809
- (void)removeAllChars;	// 0x32af1389
- (void)removeChar;	// 0x32af1345
- (void)removeCharAtIndex:(unsigned)index;	// 0x32af147d
- (void)removeFrom:(unsigned)from;	// 0x32af1529
- (BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x32af1a55
- (BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x32af1ca9
- (void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar *)aChar;	// 0x32af1405
- (void)resize:(unsigned)resize;	// 0x32af0fdd
- (void)sortBy:(/*function-pointer*/ void *)by;	// 0x32af1691
- (void)sortByAnchorXIncreasingYDecreasing;	// 0x32af1609
- (void)sortByAnchorYDecreasingXIncreasing;	// 0x32af1581
- (void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void *)aTrue passing:(void *)passing;	// 0x32af1949
// converted property getter: - (BOOL)wasMerged;	// 0x32af17f9
@end
