/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSDate, NSString, NSArray;

@interface VMUFatHeader : VMUHeader {
	NSDate *_timestamp;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSArray *_fatArchs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *fatArchs;	// G=0x34d5ca19; converted property
@property(readonly, retain) NSString *path;	// G=0x34d5c9f9; converted property
@property(readonly, retain) NSDate *timestamp;	// G=0x34d5ca09; converted property
+ (id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x34d5c7e1
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x34d5c835
- (void)dealloc;	// 0x34d5cac1
- (id)fatArchMatchingArchitecture:(id)architecture;	// 0x34d5ca29
// converted property getter: - (id)fatArchs;	// 0x34d5ca19
- (BOOL)isFat;	// 0x34d5c9f5
// converted property getter: - (id)path;	// 0x34d5c9f9
// converted property getter: - (id)timestamp;	// 0x34d5ca09
@end

