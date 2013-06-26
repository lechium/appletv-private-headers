/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, NSDictionary;

@interface VMULazySymbolOwner : NSObject {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	NSArray *_regions;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x355a003d; converted property
@property(readonly, retain) NSString *name;	// G=0x3559fe45; converted property
@property(readonly, retain) NSArray *regions;	// G=0x3559fe1d; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x3559fe55; converted property
+ (id)lazySymbolOwnerWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x3559fd21
- (id)initWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x3559fd79
- (id)architecture;	// 0x3559fe91
- (BOOL)containsAddress:(unsigned long long)address;	// 0x3559febd
- (void)dealloc;	// 0x355a0179
- (id)description;	// 0x355a010d
// converted property getter: - (unsigned)flags;	// 0x355a003d
- (BOOL)hasRegionsForName:(id)name;	// 0x3559ffa9
- (BOOL)isLazy;	// 0x3559fe2d
- (BOOL)isProtected;	// 0x3559fe31
// converted property getter: - (id)name;	// 0x3559fe45
- (BOOL)overlapsAddressRange:(VMURange)range;	// 0x3559fee1
- (id)path;	// 0x3559fe65
// converted property getter: - (id)regions;	// 0x3559fe1d
// converted property getter: - (id)signature;	// 0x3559fe55
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x355a004d
- (BOOL)validate;	// 0x355a0109
@end
