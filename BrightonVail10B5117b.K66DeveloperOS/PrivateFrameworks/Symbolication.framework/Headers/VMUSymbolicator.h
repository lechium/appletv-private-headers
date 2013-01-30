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
@property(readonly, assign) BOOL isProtected;	// G=0x35774a41; converted property
@property(readonly, retain) NSString *path;	// G=0x357747a1; converted property
@property(readonly, retain) NSMutableArray *symbolOwners;	// G=0x357743a9; converted property
+ (id)convertHeaderToSymbolOwner:(id)symbolOwner allowLazySymbolOwners:(BOOL)owners;	// 0x35774ded
+ (void)ignoreFunctionSymbols:(BOOL)symbols;	// 0x357756ed
+ (BOOL)isIgnoreFunctionSymbols;	// 0x357756fd
+ (id)symbolicatorForMachTaskContainer:(id)machTaskContainer;	// 0x35771f65
+ (id)symbolicatorForPath:(id)path architecture:(id)architecture;	// 0x35771e15
+ (id)symbolicatorForPid:(int)pid;	// 0x35771f29
+ (id)symbolicatorForSignature:(id)signature;	// 0x35771fd9
+ (id)symbolicatorForSignature:(id)signature dsymSearchPaths:(id)paths useMds:(BOOL)mds;	// 0x35775271
+ (id)symbolicatorForTask:(unsigned)task;	// 0x35771eed
+ (id)symbolicatorWithHeaders:(id)headers allowLazySymbolOwners:(BOOL)owners path:(id)path machTaskContainer:(id)container;	// 0x35774e99
+ (id)symbolicatorWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x35774fe1
+ (id)symbolicatorsForPath:(id)path;	// 0x35771b6d
- (id)initWithSymbolOwners:(id)symbolOwners path:(id)path machTaskContainer:(id)container;	// 0x35775029
- (BOOL)addSymbolRichFile:(id)file;	// 0x357723f9
- (id)architecture;	// 0x35774b91
- (BOOL)containsAddress:(unsigned long long)address;	// 0x35772a85
- (void)dealloc;	// 0x35774d45
- (id)description;	// 0x35774c91
- (id)faultLazySymbolOwnerAtIndex:(int)index;	// 0x35772191
- (void)forceFullSymbolExtraction;	// 0x35774a51
// converted property getter: - (BOOL)isProtected;	// 0x35774a41
// converted property getter: - (id)path;	// 0x357747a1
- (int)pid;	// 0x357747b1
- (id)programTextForAddress:(unsigned long long)address;	// 0x357755b1
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x357755fd
- (id)regionForAddress:(unsigned long long)address;	// 0x35772c61
- (id)regions;	// 0x35772aa1
- (id)regionsForName:(id)name;	// 0x35773031
- (id)regionsInAddressRange:(VMURange)addressRange;	// 0x35772dc1
- (void)replaceSymbolOwner:(id)owner withSymbolOwner:(id)symbolOwner;	// 0x3577272d
- (id)signature;	// 0x357747d1
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x35773361
- (id)sourceInfos;	// 0x35774201
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x357745b9
- (id)symbolForAddress:(unsigned long long)address;	// 0x35773201
- (id)symbolOwnerForAddress:(unsigned long long)address;	// 0x357734c1
- (id)symbolOwnerForName:(id)name;	// 0x35773c91
- (id)symbolOwnerForPath:(id)path;	// 0x35773ea5
// converted property getter: - (id)symbolOwners;	// 0x357743a9
- (id)symbolOwnersForName:(id)name;	// 0x35773aa5
- (id)symbolOwnersInAddressRange:(VMURange)addressRange;	// 0x357734e9
- (id)symbolOwnersWithFlags:(unsigned)flags;	// 0x35773cd9
- (id)symbols;	// 0x35774059
- (id)symbolsForMangledName:(id)mangledName;	// 0x357738f9
- (id)symbolsForName:(id)name;	// 0x3577374d
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x357743d1
@end
