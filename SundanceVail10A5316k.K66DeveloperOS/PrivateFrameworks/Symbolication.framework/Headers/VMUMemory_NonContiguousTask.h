/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUMachTaskContainer, VMUArchitecture;

@interface VMUMemory_NonContiguousTask : VMUMemory_Base <VMUMemory> {
	VMUMachTaskContainer *_machTaskContainer;	// 4 = 0x4
	VMURange _addressRange;	// 8 = 0x8
	VMUArchitecture *_architecture;	// 24 = 0x18
}
@property(readonly, assign) VMURange addressRange;	// G=0x313c1cd1; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x313c1cf5; converted property
@property(readonly, retain) VMUMachTaskContainer *machTaskContainer;	// G=0x313c1c29; converted property
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer;	// 0x313c1aa5
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x313c1b15
+ (id)memoryWithPid:(int)pid;	// 0x313c199d
+ (id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;	// 0x313c1a2d
- (id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x313c1b71
// converted property getter: - (VMURange)addressRange;	// 0x313c1cd1
// converted property getter: - (id)architecture;	// 0x313c1cf5
- (void)dealloc;	// 0x313c286d
- (id)description;	// 0x313c27f5
- (BOOL)isContiguous;	// 0x313c1d05
// converted property getter: - (id)machTaskContainer;	// 0x313c1c29
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x313c1d09
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x313c22d5
- (VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;	// 0x313c1c39
- (id)swappedView;	// 0x313c27b1
- (id)view;	// 0x313c276d
@end

