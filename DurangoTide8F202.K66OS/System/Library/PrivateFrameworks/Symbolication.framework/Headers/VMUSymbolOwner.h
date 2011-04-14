/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : NSObject <NSCopying> {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	id<VMUMemory> _textMemory;	// 12 = 0xc
	NSArray *_regions;	// 16 = 0x10
	NSArray *_symbols;	// 20 = 0x14
	NSArray *_sourceInfos;	// 24 = 0x18
	unsigned _flags;	// 28 = 0x1c
	unsigned _currentVersion;	// 32 = 0x20
	unsigned _compatibilityVersion;	// 36 = 0x24
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x3017b2ad; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x3017b29d; converted property
@property(readonly, assign) unsigned flags;	// G=0x3017b28d; converted property
@property(readonly, retain) NSString *name;	// G=0x3017b23d; converted property
@property(readonly, retain) NSArray *regions;	// G=0x3017b25d; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x3017b24d; converted property
@property(readonly, retain) NSArray *sourceInfos;	// G=0x3017b27d; converted property
@property(readonly, retain) NSArray *symbols;	// G=0x3017b26d; converted property
+ (id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x3017bb65
- (id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x3017b9e1
- (id)architecture;	// 0x3017b989
- (int)compare:(id)compare;	// 0x3017bc9d
// converted property getter: - (unsigned)compatibilityVersion;	// 0x3017b2ad
- (BOOL)containsAddress:(unsigned long long)address;	// 0x3017bc1d
- (id)copyWithZone:(NSZone *)zone;	// 0x3017b371
// converted property getter: - (unsigned)currentVersion;	// 0x3017b29d
- (void)dealloc;	// 0x3017b569
- (id)description;	// 0x3017b63d
// converted property getter: - (unsigned)flags;	// 0x3017b28d
- (BOOL)isAOut;	// 0x3017b30d
- (BOOL)isBundle;	// 0x3017b349
- (BOOL)isCommpage;	// 0x3017b2f9
- (BOOL)isDsym;	// 0x3017b35d
- (BOOL)isDyld;	// 0x3017b335
- (BOOL)isDylib;	// 0x3017b321
- (BOOL)isEqualToSymbolOwner:(id)symbolOwner;	// 0x3017b6c1
- (BOOL)isLazy;	// 0x3017c525
- (BOOL)isMachO;	// 0x3017b2bd
- (BOOL)isPEF;	// 0x3017b2e5
- (BOOL)isProtected;	// 0x3017b2d1
// converted property getter: - (id)name;	// 0x3017b23d
- (id)path;	// 0x3017b9b5
- (id)programTextForAddress:(unsigned long long)address;	// 0x3017c599
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x3017c52d
- (id)regionForAddress:(unsigned long long)address;	// 0x3017bc01
// converted property getter: - (id)regions;	// 0x3017b25d
- (id)regionsForName:(id)name;	// 0x3017b8c5
// converted property getter: - (id)signature;	// 0x3017b24d
- (unsigned long long)size;	// 0x3017c969
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x3017c765
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x3017bbc9
// converted property getter: - (id)sourceInfos;	// 0x3017b27d
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x3017bc3d
- (id)symbolForAddress:(unsigned long long)address;	// 0x3017bbe5
- (id)symbolForName:(id)name;	// 0x3017b7c5
- (id)symbolOwnerByAddingContentsOfOwner:(id)owner;	// 0x3017c5e9
// converted property getter: - (id)symbols;	// 0x3017b26d
- (id)symbolsForMangledName:(id)mangledName;	// 0x3017b701
- (id)symbolsForName:(id)name;	// 0x3017b801
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x3017bc6d
- (BOOL)validate;	// 0x3017c529
@end

