/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLinkerLoadCommand : VMULoadCommand {
	NSString *_name;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x32c9accd; converted property
- (id)initWithMemory:(id)memory;	// 0x32c9acdd
- (void)dealloc;	// 0x32c9ad91
- (id)description;	// 0x32c9ade5
- (BOOL)isDyLinker;	// 0x32c9acc9
// converted property getter: - (id)name;	// 0x32c9accd
@end

