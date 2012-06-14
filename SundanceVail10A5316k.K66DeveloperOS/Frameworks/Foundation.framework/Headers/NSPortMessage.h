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
@private
	NSPort *localPort;	// 4 = 0x4
	NSPort *remotePort;	// 8 = 0x8
	NSMutableArray *components;	// 12 = 0xc
	unsigned msgid;	// 16 = 0x10
	void *reserved2;	// 20 = 0x14
	void *reserved;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *components;	// G=0x31a9b40d; converted property
@property(assign) unsigned msgid;	// G=0x31a9b3ed; S=0x31a9b3fd; converted property
- (id)initWithReceivePort:(id)receivePort sendPort:(id)port components:(id)components;	// 0x31a9b33d
- (id)initWithSendPort:(id)sendPort receivePort:(id)port components:(id)components;	// 0x31a9b2e1
// converted property getter: - (id)components;	// 0x31a9b40d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a9b48d
- (void)dealloc;	// 0x31a9b355
// converted property getter: - (unsigned)msgid;	// 0x31a9b3ed
- (id)receivePort;	// 0x31a9b3dd
- (BOOL)sendBeforeDate:(id)date;	// 0x31a9b41d
- (id)sendPort;	// 0x31a9b3cd
// converted property setter: - (void)setMsgid:(unsigned)msgid;	// 0x31a9b3fd
@end

