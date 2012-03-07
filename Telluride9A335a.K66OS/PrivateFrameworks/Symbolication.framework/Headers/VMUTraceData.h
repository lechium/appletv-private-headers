/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMapTable;

@interface VMUTraceData : NSObject {
	NSMapTable *pcMap;	// 4 = 0x4
	NSMapTable *threadTraces;	// 8 = 0x8
	NSMapTable *libXrefs;	// 12 = 0xc
	NSMapTable *fnXrefs;	// 16 = 0x10
	NSMutableSet *threadIDnumbers;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	unsigned threadCount;	// 28 = 0x1c
}
@property(readonly, assign) unsigned maxDepth;	// G=0x31f7fdd1; converted property
- (id)init;	// 0x31f803b1
- (id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;	// 0x31f81365
- (id)initWithLogRecords:(XXStruct_KGqEpA *)logRecords forTask:(unsigned)task;	// 0x31f817c5
- (void)addEvent:(id)event;	// 0x31f81bcd
- (void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x31f807f9
- (void)buildPCMap:(long *)map withNumPages:(unsigned)numPages forTask:(unsigned)task;	// 0x31f81a7d
- (void)dealloc;	// 0x31f81d4d
- (void)finalize;	// 0x31f81cbd
- (void)freeXrefTable:(id)table;	// 0x31f81dfd
- (id)functionXref;	// 0x31f8064d
- (void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x31f806ed
- (id)libraryXref;	// 0x31f805ad
// converted property getter: - (unsigned)maxDepth;	// 0x31f7fdd1
- (id)numberForThread:(unsigned)thread;	// 0x31f7fe25
- (void)printXrefs:(id)xrefs toString:(id)string;	// 0x31f804dd
- (unsigned long long)readAddressFromFile:(FILE *)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;	// 0x31f80fa5
- (BOOL)readFromFile:(FILE *)file;	// 0x31f808e5
- (id)symbolForPC:(unsigned long long)pc;	// 0x31f81325
- (id)threadIDs;	// 0x31f7fe05
- (id)traceForThread:(unsigned)thread;	// 0x31f812e5
- (void)writeToFile:(FILE *)file;	// 0x31f81009
@end
