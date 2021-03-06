/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSPort, NSMutableArray;

@interface NSPortMessage : NSObject {
	NSPort *localPort;	// 4 = 0x4
	NSPort *remotePort;	// 8 = 0x8
	NSMutableArray *components;	// 12 = 0xc
	unsigned msgid;	// 16 = 0x10
	void *reserved2;	// 20 = 0x14
	void *reserved;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *components;	// G=0x373bfb5d; converted property
@property(assign) unsigned msgid;	// G=0x373bfb3d; S=0x373bfb4d; converted property
- (id)initWithReceivePort:(id)receivePort sendPort:(id)port components:(id)components;	// 0x373bfa8d
- (id)initWithSendPort:(id)sendPort receivePort:(id)port components:(id)components;	// 0x373bfa31
// converted property getter: - (id)components;	// 0x373bfb5d
- (id)copyWithZone:(NSZone *)zone;	// 0x373bfbdd
- (void)dealloc;	// 0x373bfaa5
// converted property getter: - (unsigned)msgid;	// 0x373bfb3d
- (id)receivePort;	// 0x373bfb2d
- (BOOL)sendBeforeDate:(id)date;	// 0x373bfb6d
- (id)sendPort;	// 0x373bfb1d
// converted property setter: - (void)setMsgid:(unsigned)msgid;	// 0x373bfb4d
@end

