/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSData;

@interface VMUUUIDLoadCommand : VMULoadCommand {
	NSData *_uuid;	// 16 = 0x10
}
@property(readonly, retain) NSData *uuid;	// G=0x32cad979; converted property
- (id)initWithMemory:(id)memory;	// 0x32cad98d
- (void)dealloc;	// 0x32cada1d
- (BOOL)isUUID;	// 0x32cad989
// converted property getter: - (id)uuid;	// 0x32cad979
@end

