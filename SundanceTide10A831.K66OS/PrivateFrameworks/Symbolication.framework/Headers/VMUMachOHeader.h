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
@property(readonly, assign) unsigned long long address;	// G=0x379b1f2d; converted property
@property(retain) NSString *dsymPath;	// G=0x379b1ddd; S=0x379b1e75; converted property
@property(readonly, assign) unsigned fileType;	// G=0x379b1f75; converted property
@property(readonly, assign) unsigned flags;	// G=0x379b1f85; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x379b1f45; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x379b1f1d; converted property
@property(retain) NSString *name;	// G=0x379b1dbd; S=0x379b1dfd; converted property
@property(retain) NSString *path;	// G=0x379b1dcd; S=0x379b1e39; converted property
@property(retain) NSDate *timestamp;	// G=0x379b1ded; S=0x379b1eb1; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x379b1f5d; converted property
// converted property getter: - (unsigned long long)address;	// 0x379b1f2d
- (id)architecture;	// 0x379b1efd
- (id)commpage;	// 0x379b2945
- (unsigned)compatibilityVersion;	// 0x379b27e5
- (unsigned)currentVersion;	// 0x379b274d
- (void)dealloc;	// 0x379b2f11
- (id)description;	// 0x379b2e9d
// converted property getter: - (id)dsymPath;	// 0x379b1ddd
- (id)dyLinkerPath;	// 0x379b26b5
- (id)dySymbolTable;	// 0x379b2639
// converted property getter: - (unsigned)fileType;	// 0x379b1f75
// converted property getter: - (unsigned)flags;	// 0x379b1f85
- (BOOL)isCommpage;	// 0x379b2915
- (BOOL)isFromSharedCache;	// 0x379b1f95
- (BOOL)isMachO;	// 0x379b1fa9
- (BOOL)isProtected;	// 0x379b2afd
// converted property getter: - (unsigned long long)linkEditBase;	// 0x379b1f45
// converted property getter: - (id)loadCommands;	// 0x379b1f1d
- (id)memory;	// 0x379b1eed
// converted property getter: - (id)name;	// 0x379b1dbd
// converted property getter: - (id)path;	// 0x379b1dcd
- (id)regions;	// 0x379b212d
- (id)sections;	// 0x379b2061
- (id)segmentAddresses;	// 0x379b2b95
- (id)segmentNamed:(id)named;	// 0x379b1fad
// converted property setter: - (void)setDsymPath:(id)path;	// 0x379b1e75
// converted property setter: - (void)setName:(id)name;	// 0x379b1dfd
// converted property setter: - (void)setPath:(id)path;	// 0x379b1e39
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x379b1eb1
- (id)signature;	// 0x379b2d25
- (id)symbolTable;	// 0x379b25bd
// converted property getter: - (id)timestamp;	// 0x379b1ded
- (id)uuid;	// 0x379b287d
// converted property getter: - (long long)vmaddrSlide;	// 0x379b1f5d
@end

