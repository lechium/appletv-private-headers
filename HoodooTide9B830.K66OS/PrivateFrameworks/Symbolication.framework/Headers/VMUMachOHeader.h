/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSString, NSArray, NSDate;
@protocol VMUMemory;

@interface VMUMachOHeader : VMUHeader {
	NSString *_name;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSString *_dsymPath;	// 12 = 0xc
	NSDate *_timestamp;	// 16 = 0x10
	id<VMUMemory> _memory;	// 20 = 0x14
	unsigned long long _address;	// 24 = 0x18
	unsigned long long _linkEditBase;	// 32 = 0x20
	NSArray *_loadCommands;	// 40 = 0x28
	long long _vmaddrSlide;	// 44 = 0x2c
	unsigned _fileType;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign) unsigned long long address;	// G=0x31bc1bd5; converted property
@property(retain) NSString *dsymPath;	// G=0x31bc1b95; S=0x31bc1cd5; converted property
@property(readonly, assign) unsigned fileType;	// G=0x31bc1c1d; converted property
@property(readonly, assign) unsigned flags;	// G=0x31bc1c2d; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x31bc1bed; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x31bc1bc5; converted property
@property(retain) NSString *name;	// G=0x31bc1b75; S=0x31bc1c55; converted property
@property(retain) NSString *path;	// G=0x31bc1b85; S=0x31bc1c95; converted property
@property(retain) NSDate *timestamp;	// G=0x31bc1ba5; S=0x31bc1d15; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x31bc1c05; converted property
// converted property getter: - (unsigned long long)address;	// 0x31bc1bd5
- (id)architecture;	// 0x31bc1d55
- (id)commpage;	// 0x31bc2721
- (unsigned)compatibilityVersion;	// 0x31bc25d9
- (unsigned)currentVersion;	// 0x31bc254d
- (void)dealloc;	// 0x31bc2d11
- (id)description;	// 0x31bc2c9d
// converted property getter: - (id)dsymPath;	// 0x31bc1b95
- (id)dyLinkerPath;	// 0x31bc24c1
- (id)dySymbolTable;	// 0x31bc2445
// converted property getter: - (unsigned)fileType;	// 0x31bc1c1d
// converted property getter: - (unsigned)flags;	// 0x31bc1c2d
- (BOOL)isCommpage;	// 0x31bc26f1
- (BOOL)isFromSharedCache;	// 0x31bc1c3d
- (BOOL)isMachO;	// 0x31bc1c51
- (BOOL)isProtected;	// 0x31bc28e5
// converted property getter: - (unsigned long long)linkEditBase;	// 0x31bc1bed
// converted property getter: - (id)loadCommands;	// 0x31bc1bc5
- (id)memory;	// 0x31bc1bb5
// converted property getter: - (id)name;	// 0x31bc1b75
// converted property getter: - (id)path;	// 0x31bc1b85
- (id)regions;	// 0x31bc1ee1
- (id)sections;	// 0x31bc1e1d
- (id)segmentAddresses;	// 0x31bc2979
- (id)segmentNamed:(id)named;	// 0x31bc1d75
// converted property setter: - (void)setDsymPath:(id)path;	// 0x31bc1cd5
// converted property setter: - (void)setName:(id)name;	// 0x31bc1c55
// converted property setter: - (void)setPath:(id)path;	// 0x31bc1c95
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x31bc1d15
- (id)signature;	// 0x31bc2b09
- (id)symbolTable;	// 0x31bc23c9
// converted property getter: - (id)timestamp;	// 0x31bc1ba5
- (id)uuid;	// 0x31bc2665
// converted property getter: - (long long)vmaddrSlide;	// 0x31bc1c05
@end

