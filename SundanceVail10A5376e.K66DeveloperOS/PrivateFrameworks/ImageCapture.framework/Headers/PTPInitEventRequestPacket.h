/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPInitEventRequestPacket : NSObject {
	unsigned long _connectionNumber;	// 4 = 0x4
}
@property(assign) unsigned long connectionNumber;	// G=0x30d93351; S=0x30d93361; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber;	// 0x30d931f1
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30d93231
// converted property getter: - (unsigned long)connectionNumber;	// 0x30d93351
- (id)contentForTCP;	// 0x30d93289
- (id)description;	// 0x30d93309
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x30d93361
@end

