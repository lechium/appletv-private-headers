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
@property(readonly, assign) VMURange addressRange;	// G=0x32c9f7cd; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x32c9f7f1; converted property
@property(readonly, retain) VMUMachTaskContainer *machTaskContainer;	// G=0x32c9f7bd; converted property
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer;	// 0x32c9f915
+ (id)memoryWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x32c9f8b9
+ (id)memoryWithPid:(int)pid;	// 0x32c9fa09
+ (id)memoryWithPid:(int)pid addressRange:(VMURange)range architecture:(id)architecture;	// 0x32c9f985
- (id)initWithMachTaskContainer:(id)machTaskContainer addressRange:(VMURange)range architecture:(id)architecture;	// 0x32c9f805
// converted property getter: - (VMURange)addressRange;	// 0x32c9f7cd
// converted property getter: - (id)architecture;	// 0x32c9f7f1
- (void)dealloc;	// 0x32c9fa99
- (id)description;	// 0x32c9fb11
- (BOOL)isContiguous;	// 0x32c9f801
// converted property getter: - (id)machTaskContainer;	// 0x32c9f7bd
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x32ca00f1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x32c9fc15
- (VMURange)regionAtAddress:(unsigned long long)address minProtection:(int)protection;	// 0x32ca0769
- (id)swappedView;	// 0x32c9fb8d
- (id)view;	// 0x32c9fbd1
@end

