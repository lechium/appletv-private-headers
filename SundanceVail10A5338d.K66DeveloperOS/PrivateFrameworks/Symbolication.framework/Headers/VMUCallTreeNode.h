/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, VMUCallTreeNode;

@interface VMUCallTreeNode : NSObject {
	unsigned flags;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	unsigned long long address;	// 12 = 0xc
	NSArray *sortedChildrenWithPseudoNode;	// 20 = 0x14
	unsigned numBytes;	// 24 = 0x18
	unsigned count;	// 28 = 0x1c
	union {
		NSString *thePseudoName;
		VMUCallTreeNode *theChild;
		id *theChildren;
	} un;	// 32 = 0x20
	VMUCallTreeNode *parent;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long address;	// G=0x34ca9ce1; converted property
@property(readonly, assign) unsigned count;	// G=0x34ca9cb1; converted property
@property(readonly, retain) NSString *name;	// G=0x34ca9cd1; converted property
@property(readonly, assign) unsigned numBytes;	// G=0x34ca9cc1; converted property
@property(readonly, retain) VMUCallTreeNode *parent;	// G=0x34ca9cf9; converted property
@property(readonly, retain) NSArray *sortedChildrenWithPseudoNode;	// G=0x34cac899; converted property
+ (void)compareChildrenOf:(id)of toChildrenOf:(id)of2 storeDiffIn:(id)anIn;	// 0x34cab0dd
+ (id)makeFakeRootForNode:(id)node;	// 0x34caa2fd
+ (id)rootForCompare:(id)compare to:(id)to;	// 0x34cab561
+ (id)rootForSampleFile:(FILE *)sampleFile;	// 0x34caaf21
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator;	// 0x34caaabd
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler options:(unsigned)options;	// 0x34caa85d
+ (id)rootForTraceData:(id)traceData;	// 0x34caac65
- (void)addStackEntry:(id)entry symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler numBytes:(unsigned)bytes options:(unsigned)options uniqueStrings:(id)strings addressToSymbolNameMap:(id)symbolNameMap threadPortToNameMap:(id)nameMap dispatchQueueSerialNumToNameMap:(id)nameMap9;	// 0x34caa3b9
- (char *)addSubTreeFromFile:(FILE *)file withIndent:(int)indent withLine:(char *)line withLen:(unsigned *)len;	// 0x34caad89
- (void)addTraceEvent:(id)event forTraceData:(id)traceData;	// 0x34caaaed
// converted property getter: - (unsigned long long)address;	// 0x34ca9ce1
- (id)browserName;	// 0x34ca9d09
- (int)compare:(id)compare;	// 0x34cab611
- (int)compareNames:(id)names;	// 0x34cab7d5
- (int)comparePuttingMainThreadFirst:(id)first;	// 0x34cab671
- (id)copyWithZone:(NSZone *)zone;	// 0x34ca9f3d
// converted property getter: - (unsigned)count;	// 0x34ca9cb1
- (void)dealloc;	// 0x34caa201
- (id)filterOutSymbols:(id)symbols;	// 0x34cab9b5
- (id)filterOutSymbols:(id)symbols required:(id)required;	// 0x34caba45
- (id)filterOutWaiting;	// 0x34cab9b1
- (id)findNodeMatching:(id)matching searchForward:(BOOL)forward ignoreCase:(BOOL)aCase wholeWords:(BOOL)words;	// 0x34cac665
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address;	// 0x34caa161
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address compareSymbolNames:(BOOL)names;	// 0x34ca9f69
- (id)fullOutputWithThreshold:(unsigned)threshold;	// 0x34caca55
- (id)invertedNode;	// 0x34cac099
- (BOOL)isPseudo;	// 0x34ca9f55
- (id)largestTopOfStackPath;	// 0x34cacee9
// converted property getter: - (id)name;	// 0x34ca9cd1
- (id)nextNode;	// 0x34cac5c5
// converted property getter: - (unsigned)numBytes;	// 0x34ca9cc1
// converted property getter: - (id)parent;	// 0x34ca9cf9
- (id)prevNode;	// 0x34cac661
- (id)prune:(unsigned)prune;	// 0x34cac325
- (id)pseudoName;	// 0x34cab865
- (id)pseudoNodeTopOfStackChild;	// 0x34cab8a1
- (void)release;	// 0x34caa1c5
- (id)retain;	// 0x34caa185
- (unsigned)retainCount;	// 0x34caa1ad
- (void)setNameToCount:(id)count;	// 0x34cac669
- (id)sortedChildrenByNameWithPseudoNode;	// 0x34cac97d
// converted property getter: - (id)sortedChildrenWithPseudoNode;	// 0x34cac899
- (id)sortedChildrenWithPseudoNode:(id)pseudoNode withCompare:(SEL)compare;	// 0x34cac751
- (unsigned)sumOfChildrenCounts;	// 0x34cab7f5
@end

