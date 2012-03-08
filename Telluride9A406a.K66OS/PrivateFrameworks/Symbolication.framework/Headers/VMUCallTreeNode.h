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
		VMUCallTreeNode **theChildren;
	} un;	// 32 = 0x20
	VMUCallTreeNode *parent;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long address;	// G=0x32cb217d; converted property
@property(readonly, assign) unsigned count;	// G=0x32cb214d; converted property
@property(readonly, retain) NSString *name;	// G=0x32cb216d; converted property
@property(readonly, assign) unsigned numBytes;	// G=0x32cb215d; converted property
@property(readonly, retain) VMUCallTreeNode *parent;	// G=0x32cb2195; converted property
@property(readonly, retain) NSArray *sortedChildrenWithPseudoNode;	// G=0x32cb39f9; converted property
+ (void)compareChildrenOf:(id)of toChildrenOf:(id)of2 storeDiffIn:(id)anIn;	// 0x32cb29f9
+ (id)makeFakeRootForNode:(id)node;	// 0x32cb33e1
+ (id)rootForCompare:(id)compare to:(id)to;	// 0x32cb2945
+ (id)rootForSampleFile:(FILE *)sampleFile;	// 0x32cb2ebd
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator;	// 0x32cb3145
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler options:(unsigned)options;	// 0x32cb3171
+ (id)rootForTraceData:(id)traceData;	// 0x32cb3019
- (void)addStackEntry:(id)entry symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler numBytes:(unsigned)bytes options:(unsigned)options uniqueStrings:(id)strings addressToSymbolNameMap:(id)symbolNameMap threadPortToNameMap:(id)nameMap dispatchQueueSerialNumToNameMap:(id)nameMap9;	// 0x32cb4b35
- (char *)addSubTreeFromFile:(FILE *)file withIndent:(int)indent withLine:(char *)line withLen:(unsigned *)len;	// 0x32cb49b1
- (void)addTraceEvent:(id)event forTraceData:(id)traceData;	// 0x32cb25d9
// converted property getter: - (unsigned long long)address;	// 0x32cb217d
- (id)browserName;	// 0x32cb2301
- (int)compare:(id)compare;	// 0x32cb2781
- (int)compareNames:(id)names;	// 0x32cb27f5
- (int)comparePuttingMainThreadFirst:(id)first;	// 0x32cb485d
- (id)copyWithZone:(NSZone *)zone;	// 0x32cb5329
// converted property getter: - (unsigned)count;	// 0x32cb214d
- (void)dealloc;	// 0x32cb4fcd
- (id)filterOutSymbols:(id)symbols;	// 0x32cb47c5
- (id)filterOutSymbols:(id)symbols required:(id)required;	// 0x32cb4141
- (id)filterOutWaiting;	// 0x32cb22f5
- (id)findNodeMatching:(id)matching searchForward:(BOOL)forward ignoreCase:(BOOL)aCase wholeWords:(BOOL)words;	// 0x32cb22fd
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address;	// 0x32cb2571
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address compareSymbolNames:(BOOL)names;	// 0x32cb50a9
- (id)fullOutputWithThreshold:(unsigned)threshold;	// 0x32cb35c9
- (id)invertedNode;	// 0x32cb4075
- (BOOL)isPseudo;	// 0x32cb21a5
- (id)largestTopOfStackPath;	// 0x32cb349d
// converted property getter: - (id)name;	// 0x32cb216d
- (id)nextNode;	// 0x32cb3cf5
// converted property getter: - (unsigned)numBytes;	// 0x32cb215d
// converted property getter: - (id)parent;	// 0x32cb2195
- (id)prevNode;	// 0x32cb22f9
- (id)prune:(unsigned)prune;	// 0x32cb3d9d
- (id)pseudoName;	// 0x32cb22b9
- (id)pseudoNodeTopOfStackChild;	// 0x32cb281d
- (void)release;	// 0x32cb2595
- (id)retain;	// 0x32cb21b9
- (unsigned)retainCount;	// 0x32cb21dd
- (void)setNameToCount:(id)count;	// 0x32cb3c0d
- (id)sortedChildrenByNameWithPseudoNode;	// 0x32cb391d
// converted property getter: - (id)sortedChildrenWithPseudoNode;	// 0x32cb39f9
- (id)sortedChildrenWithPseudoNode:(id)pseudoNode withCompare:(SEL)compare;	// 0x32cb3add
- (unsigned)sumOfChildrenCounts;	// 0x32cb225d
@end

