/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class VMUMachTaskContainer, NSMutableArray, NSString, NSArray;

@interface VMUSymbolicator : NSObject {
	NSMutableArray *_symbolOwners;	// 4 = 0x4
	NSArray *_symbolOwnerAddressRanges;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	VMUMachTaskContainer *_machTaskContainer;	// 16 = 0x10
	BOOL _isProtected;	// 20 = 0x14
}
@property(readonly, assign) BOOL isProtected;	// G=0x35599a41; converted property
@property(readonly, retain) NSString *path;	// G=0x355997a1; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x355993a9; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x35599ded
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x3559a6ed
+ (BOOL)isIgnoreFunctionSymbols;	// 0x3559a6fd
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x35596f65
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x35596e15
+ (id)symbolicatorForPid:(int)pid;	// 0x35596f29
+ (id)symbolicatorForSignature:(id)signature;	// 0x35596fd9
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x3559a271
+ (id)symbolicatorForTask:(unsigned)task;	// 0x35596eed
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x35599e99
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x35599fe1
+ (id)symbolicatorsForPath:(id)path;	// 0x35596b6d
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x3559a029
- (BOOL)addSymbolRichFile:(id)file;	// 0x355973f9
- (id)architecture;	// 0x35599b91
- (BOOL)containsAddress:(unsigned long long)address;	// 0x35597a85
- (void)dealloc;	// 0x35599d45
- (id)description;	// 0x35599c91
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x35597191
- (void)forceFullSymbolExtraction;	// 0x35599a51
// converted property getter: - (BOOL)isProtected;	// 0x35599a41
// converted property getter: - (id)path;	// 0x355997a1
- (int)pid;	// 0x355997b1
- (id)programTextForAddress:(unsigned long long)address;	// 0x3559a5b1
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x3559a5fd
- (id)regionForAddress:(unsigned long long)address;	// 0x35597c61
- (id)regions;	// 0x35597aa1
- (id)regionsForName:(id)name;	// 0x35598031
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x35597dc1
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x3559772d
- (id)signature;	// 0x355997d1
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x35598361
- (id)sourceInfos;	// 0x35599201
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x355995b9
- (id)symbolForAddress:(unsigned long long)address;	// 0x35598201
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x355984c1
- (id)symbolOwnerForName:(id)name;	// 0x35598c91
- (id)symbolOwnerForPath:(id)path;	// 0x35598ea5
// converted property getter: - (id)symbolOwners;	// 0x355993a9
- (id)symbolOwnersForName:(id)name;	// 0x35598aa5
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x355984e9
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x35598cd9
- (id)symbols;	// 0x35599059
- (id)symbolsForMangledName:(id)mangledName;	// 0x355988f9
- (id)symbolsForName:(id)name;	// 0x3559874d
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x355993d1
@end

