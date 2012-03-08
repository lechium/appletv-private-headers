/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library


@interface VMULoadCommand : NSObject {
	unsigned long long _cmdSize;	// 4 = 0x4
	unsigned _command;	// 12 = 0xc
}
@property(readonly, assign) unsigned long long cmdSize;	// G=0x32c9bbe9; converted property
+ (id)loadCommandWithMemory:(id)memory;	// 0x32c9bcbd
- (id)initWithMemory:(id)memory;	// 0x32c9bc25
// converted property getter: - (unsigned long long)cmdSize;	// 0x32c9bbe9
- (BOOL)isDyLinker;	// 0x32c9bc0d
- (BOOL)isDySymTab;	// 0x32c9bc09
- (BOOL)isIDDyLib;	// 0x32c9bc15
- (BOOL)isLoadDyLib;	// 0x32c9bc11
- (BOOL)isSegment;	// 0x32c9bc19
- (BOOL)isSegment32;	// 0x32c9bc1d
- (BOOL)isSegment64;	// 0x32c9bc21
- (BOOL)isSymTab;	// 0x32c9bc05
- (BOOL)isUUID;	// 0x32c9bc01
@end

