/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import </libobjc.A.h>

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x3290a075; converted property
@property(readonly, retain) NSString *path;	// G=0x32909ddd; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x32909a05; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x3290a419
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x3290ad29
+ (BOOL)isIgnoreFunctionSymbols;	// 0x3290ad39
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x32907641
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x329074f5
+ (id)symbolicatorForPid:(int)pid;	// 0x32907605
+ (id)symbolicatorForSignature:(id)signature;	// 0x329076bd
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x3290a8a9
+ (id)symbolicatorForTask:(unsigned)task;	// 0x329075c9
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x3290a4c5
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x3290a60d
+ (id)symbolicatorsForPath:(id)path;	// 0x32907249
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x3290a655
- (BOOL)addSymbolRichFile:(id)file;	// 0x32907add
- (id)architecture;	// 0x3290a1bd
- (BOOL)containsAddress:(unsigned long long)address;	// 0x32908155
- (void)dealloc;	// 0x3290a371
- (id)description;	// 0x3290a2bd
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x32907875
- (void)forceFullSymbolExtraction;	// 0x3290a085
// converted property getter: - (BOOL)isProtected;	// 0x3290a075
// converted property getter: - (id)path;	// 0x32909ddd
- (int)pid;	// 0x32909ded
- (id)programTextForAddress:(unsigned long long)address;	// 0x3290abe5
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x3290ac31
- (id)regionForAddress:(unsigned long long)address;	// 0x32908325
- (id)regions;	// 0x32908171
- (id)regionsForName:(id)name;	// 0x329086ed
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x32908489
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x32907e01
- (id)signature;	// 0x32909e0d
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x32908a15
- (id)sourceInfos;	// 0x32909869
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x32909c05
- (id)symbolForAddress:(unsigned long long)address;	// 0x329088b1
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x32908b79
- (id)symbolOwnerForName:(id)name;	// 0x3290931d
- (id)symbolOwnerForPath:(id)path;	// 0x32909521
// converted property getter: - (id)symbolOwners;	// 0x32909a05
- (id)symbolOwnersForName:(id)name;	// 0x32909141
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x32908ba1
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x32909365
- (id)symbols;	// 0x329096cd
- (id)symbolsForMangledName:(id)mangledName;	// 0x32908fa1
- (id)symbolsForName:(id)name;	// 0x32908e01
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x32909a2d
@end
